# fbGetImage 崩溃问题：修改方案全景与诊断

## 现象
登录进 Xfce 后打开 terminal → X 服务器崩溃（segfault @0x35700000356）
→ 回登录框。浏览器等正常。terminal(VTE) 的字体抗锯齿需要从显存
回读像素合成（fbGetImage 路径）。

## 已验证的事实
- 崩溃现场（gdb 断点捕获）: X 命中 fbGetImage 后 segfault
- 崩点: fbGetImage 内 `mov 0x68(%rdi),%rax` (drawable+0x68 = devPrivates)
  后续 `dixLookupPrivate` 解引用 fb 的 FbScreenPrivRec
- 0x35700000356 = key 索引(0x357) 组合偏移(0x356), 即私有结构未注册
- Kali Xorg 21.1.24 开启 FB_ACCESS_WRAPPER: fbGetImage 先 fbPrepareAccess
  → setupWrap/finishWrap 钩子, 再 fbGetGCPrivate → FbScreenPrivRec

## 实验过的方案（全部）
| 方案 | 结果 | 失败原因 |
|---|---|---|
| wfbScreenInit (FB_ACCESS_WRAPPER 版) | 新崩溃 | 引入 FB_ACCESS_WRAPPER 私有结构, 但其初始化链不完整, fbScreenInit 处即挂 |
| GetImage override (pScreen->GetImage=prl_get_image) | segfault @0x0 | override 在 ScreenInit 末尾装上, 但 prl_get_image 内 pDrawable->devPrivate 或 vram 解引用 NULL —— 治标不治本, fb 其他路径(CopyWindow/Composite)仍崩 |
| 引用 wfbReadMemory/wfbWriteMemory | 链接失败 | Xorg 内部符号, 不导出给驱动模块 |
| fbAllocatePrivates (ScreenInit 开头) | 仍崩溃 | 分配了 key 记录但 FbScreenPrivRec 内容未初始化 / drawable->devPrivates 索引仍错 |

## 诊断结论
fbGetImage 崩溃**不是单个函数问题**, 是 fb 渲染回读路径的**完整初始化链**问题:
1. FB_ACCESS_WRAPPER 需要 fbSetupScreen/fbAllocatePrivates 注册 FbScreenPrivRec
2. 该结构的 gcPrivateKeyRec/winPrivateKeyRec 需正确初始化
3. drawable->devPrivates 数组大小(maxDevPrivates)需覆盖 fb 的 key 索引
4. fbdev 能稳定是因为它的 PreInit 走了 fbdevHWInit → fbSetupScreen 完整链,
   且 FBDevGetRec + xf86SetEntityFuncs 建立了正确的 entity 私有体系

## 正确方向（下次）
深入 Xorg 21.1.24 源码（/tmp/xorg-server-21.1.24/）:
- hw/xfree86/fb/fbscreen.c: fbSetupScreen/fbScreenInit/fbAllocatePrivates 精确语义
- hw/xfree86/fb/fbgetimage.c: fbGetImage 的私有 key 使用点
- 对照 fbdev.c 的 FBDevSetupScreen/PreInit 完整序列, 找出我们缺的那一步
目标: 弄清 fbGetImage 崩溃的**确切必要条件**（不是猜, 是源码证明）

## 源码级精确分析（Xorg 21.1.24, /home/dong/xorg-src/）

### 崩溃点精确映射
- fbGetImage (fb/fbimage.c:206) → fbGetDrawable 宏 (fb/fb.h:479)
- 对 window drawable: fbGetWindowPixmap → dixLookupPrivate(winPrivateKey) → backing pixmap
- 崩点 `mov 0x68(%rdi),%rax`: DrawableRec(40B)+对齐后, **0x68 = PixmapRec.devPrivate.ptr**
- 即: window 的 backing pixmap 的像素数据指针为 NULL → fbBltStip 解引用崩

### 初始化链（源码证明）
- fbScreenInit (fb/fbscreen.c:201) 内部调 fbSetupScreen (同文件:90)
- fbSetupScreen 设置 20+ pScreen 回调: GetImage/GetSpans/CreateWindow/
  CopyWindow/CreateGC/GetWindowPixmap/SetWindowPixmap/CreateColormap...
- 我们调 fbScreenInit → fbSetupScreen 应已执行 → 回调应已设置
- **但 fbCreateWindow 对 terminal 窗口创建 backing pixmap 时 devPrivate.ptr 未设**
  (Composite/Cairo XRender 路径, xfwm4 合成器已关但 VTE 仍用)

### 为何 fbdev 不崩
fbdev 的 FBDEVHW_PACKED_PIXELS 类型让 fbCreateWindow 用单一连续 FB 的
偏移作 backing pixmap devPrivate.ptr, 正常。我们的 FB 路径相同(VRAM直写),
理论上一致 → 需验证 fbSetupScreen 是否真在 fbScreenInit 里执行了
(可能与我们 PreInit 的 fbAllocatePrivates 重复注册冲突)

### 下一步（精确）
1. gdb 断 fbSetupScreen/fbCreateWindow, 确认 terminal window 的 backing
   pixmap devPrivate.ptr 赋值时刻
2. 若 fbSetupScreen 未跑 → 查 fbScreenInit 内部条件分支
3. 若跑了但 devPrivate.ptr 仍 NULL → 是 Composite backing-store 路径,
   需在 ScreenInit 后 pScreen->CreateWindow = fbCreateWindow 确认生效

## 终极根因锁定（源码+gdb 双重证据）

### 完整崩溃链（100% 确定）
1. fbGetImage(window) → fbGetWindowPixmap → backing pixmap
2. fbCreateWindow (fb/fbwindow.c:32): backing pixmap = fbGetScreenPixmap(pScreen)
3. fbGetScreenPixmap(s) = **s->devPrivate** (fb/fb.h:434) — ScreenPtr->devPrivate
4. 崩点 0x68 = PixmapRec.devPrivate.ptr (DrawableRec 40B 对齐后)
5. **即 pScreen->devPrivate (screen pixmap) 或其 devPrivate.ptr 为 NULL**

### 为何如此
- miScreenInit (fbScreenInit 内部) 创建 screen pixmap 并设 pScreen->devPrivate
- 我们 fbScreenInit 返回 OK, 但某处 pScreen->devPrivate 或 pixmap 的
  devPrivate.ptr 仍 NULL → fbBltStip 解引用崩
- fbdev 不崩: 其 FBDevMapMMIO + FbDevSetupScreen 完整序列保证 screen
  pixmap 的 devPrivate.ptr 指向有效 FB

### 下次精确行动
1. 给 Xorg 装调试符号: debuginfod.debian.net 直连或本地 eu-readelf 提取
2. gdb attach Xorg, 打印 xf86Screens[0]->pScreen->devPrivate 和
   ->GetScreenPixmap(pScreen)->devPrivate.ptr, 确认哪个为 NULL
3. 若 pScreen->devPrivate 为 NULL → ScreenInit 后需显式
   pScreen->devPrivate = pScreen->GetScreenPixmap(pScreen)
   (fbdev 的 miScreenInit 会做, 我们可能被 shadow_mem/VRAM 分支跳过)
4. 若 pixmap.devPrivate.ptr 为 NULL → 是 fbmem 分支问题
   (VRAM direct vs shadow_mem 的 pbits 传递)

### 当前状态
fbdev 驱动稳定 (terminal/浏览器全可用)。prlvideo-ng 主成果
(协议+VRAM直写点亮) 在 GitHub。SOLUTIONS.md 含全部源码级分析。
Xorg 源码: /home/dong/xorg-src/xorg-server-21.1.24/

## 修复进展（devPrivate.ptr 已修, 仍崩同一地址）

修复 1: screenPix.devPrivate.ptr NULL → 已指向 VRAM (DIAG 确认 fixed)
结果: 仍崩 0x35700000356 (同一地址)

崩溃地址解读 (精确):
- 0x357 = fb winPrivateKey 的 key id (dixRegisterScreenSpecificPrivateKey 分配)
- 0x356 = key->offset/size 相关偏移
- 即 dixLookupPrivate(&win->devPrivates, fbWinPrivateKey) 时,
  window devPrivates 数组不含 fb winPrivateKey 项 → 返回基址+错偏移 → 崩
- fbGetWinPrivateKey 取的是 screenPrivateKey 的 winPrivateKeyRec (全局 key),
  window 的 devPrivates 需在创建时已注册该 key

修复 2 (下次): fb 的 winPrivateKey 注册时机
- fbAllocatePrivates 在 ScreenInit 注册 winPrivateKeyRec
- 但 terminal window 的 devPrivates 数组在创建时按 pScreen->screenSpecificPrivates
  当前大小分配 — 若 ScreenInit 注册晚于某些 window 创建则数组太小
- 需验证: fbSetupScreen 是否在 fbScreenInit 里真的跑了 winPrivateKey 注册,
  以及 terminal window 的 devPrivates 数组大小 vs key id
- gdb: 打印 terminal window->devPrivates 数量 和 fb winPrivateKeyRec.id

工具: Xorg 源码 /home/dong/xorg-src/xorg-server-21.1.24/
  fb/fballpriv.c (key 注册), dix/privates.c (dixLookupPrivate/dixAllocate*)

## 最终根因分析（Xorg 私有 key 体系最深层）

崩溃链精确到 key 注册时机:
1. fb 的 winPrivateKey 是 screen-specific PRIVATE_WINDOW key
   (fbAllocatePrivates → dixRegisterScreenSpecificPrivateKey)
2. screen 的 screenSpecificPrivates[PRIVATE_WINDOW] 数组在 AddScreen 时
   按当时 global_keys[PRIVATE_WINDOW] 数量分配
3. fb 的 winKey 在 ScreenInit(fbAllocatePrivates) 才注册 → AddScreen 之后
   → screen 的 window 私有数组不含 fb winKey 项
4. terminal window 的 devPrivates 继承该小数组 → fbGetWinPrivateKey 越界
   → 崩 0x35700000356 (0x357=winKey id, 0x356=数组外偏移)

fbdev 不崩的原因: 它同样在 ScreenInit 注册, 但其 dixRegisterScreenSpecificPrivateKey
的 grow_screen_specific_set 逻辑 (dix/privates.c) 能扩展数组;
我们的某处调用打断了该 grow 或 window 创建顺序不同。

下次精确行动:
1. gdb 打印 terminal window 的 devPrivates 数量 和 fb winPrivateKeyRec.id
2. 读 dix/privates.c grow_screen_specific_set 的触发条件,
   确认 fbAllocatePrivates 是否触发了数组扩展
3. 若 grow 未触发 → 在 PreInit 用全局 dixRegisterPrivateKey 预注册
   fb winKey (绕过 fbAllocatePrivates 的 screen-specific 路径)

## 全部尝试终局（gdb 寄存器级实证）

崩溃现场（gdb fbGetImage 入口）:
- rdi(drawable)=有效, drawable+0x68=0x21
- 0x21 是该构建 PixmapRec 的 primary_pixmap/usage 区域, 被当指针解引用
- 即: window backing pixmap 的 primary_pixmap(或相邻 ptr) = 0x21 垃圾

已尝试(全部无效): wfbScreenInit / GetImage override / stock访问器 /
  fbAllocatePrivates(ScreenInit+PreInit) / 全局 PRIVATE_WINDOW key 注册 /
  fb screen key 注册 / fb submodule 加载 / SUPPORTS_SERVER_FDS=FALSE
修复 1(有效但不够): screenPix.devPrivate.ptr NULL→VRAM

本质差异(fbdev vs 我们): fbdev 用 fbdevHWMapVidmem 建立 FB 映射并走
FbDevSetupScreen 完整序列; 我们 VRAM 直写 + 自定义 PreInit/ScreenInit
缺了 FB 类型的某个初始化, 导致 window backing pixmap 结构异常。

下次(根本路径): 按 fbdev 的 FbDevSetupScreen + fbdevHWMapVidmem 模板,
把 VRAM 映射改成与 fbdev 完全一致的类型(memType/flags),
或干脆用 shadow framebuffer(fbdev 默认 shadowFB=TRUE 的路径)
让 fb 的像素回读走 shadow 内存而非 VRAM 直读。

## Shadow FB 路径尝试（第 13 次）

改动: fbScreenInit 用 calloc shadow 内存(非 VRAM 直写) + shadowSetup +
shadowAdd(prl_shadow_blit 拷回 VRAM) + CreateScreenResources wrap
结果: shadow FB 分配 OK, fbScreenInit OK, fbPictureInit OK, colormap OK,
但 prl_shadow_init 的 shadowSetup 静默挂 (lightdm 失败, Xorg 退出)
诊断: shadowSetup 在此 Xorg 构建需要 FB 的 shadow 私有 key / FB_ACCESS_WRAPPER
配套, 与 fbGetImage 崩溃是同一棵私有 key 树的另一分支
结论: shadow 是 fbdev 稳定的原因, 但 shadowSetup 的初始化链同样深;
shadow 路径值得专门攻一次(它是 fbdev 的默认成功路径, 前景最好)

## Global blit 路径（第 14 次）— 最接近成功

改动: fbScreenInit 用 calloc shadow 内存 + RegisterBlockAndWakeupHandlers
(DIX 全局, 不碰 shadow/Damage 库) 周期 memcpy shadow→VRAM
结果: shadow FB OK, fbScreenInit OK, ScreenInit complete, global blit
handler registered —— 全部成功!
崩点: BlockHandler 首次触发 memcpy 越界 @0x55c96048bed0 (shadow_mem 区)
诊断: blit stride 用 displayWidth*4 但 fb 内部 stride 可能更大(对齐),
或 shadow_mem 分配(displayWidth*virtualY*4) 与 fb 实际使用 stride 不匹配
下次: blit 用 fb 的 pScrn->displayWidth*4 作 stride 且 clamp 到
min(shadow_alloc, vram_len), 或读 pixmap->devKind 作真实 stride
shadow FB 方向已验证可行(ScreenInit 全过), 只差 stride 对齐

## Global blit stride 修正后（第 15 次）— 定位到生命周期 bug

修正: blit stride 用 fb devKind(实测 0, fallback displayWidth*4) + clamp
结果: ScreenInit complete + blit registered 全过, 但 BlockHandler 首触发
崩在 shadow 区 (0x55d83ceeced0)
诊断: devKind=0 说明 GetScreenPixmap 时机过早(miScreenInit 未设);
更可能: RegisterBlockAndWakeupHandlers 的 handler 在 CloseScreen 时
仍被调用, 此时 vram/shadow_mem 已释放 → 崩
修复(下次, 最后一层):
1. PrlCloseScreen 里 RemoveBlockAndWakeupHandlers(prl_global_block,...)
2. prl_global_block 里加 pPrl->closing 标志, CloseScreen 置位后跳过
3. devKind=0 的解决: 在 CreateScreenResources hook 后读(那时已设)

## 第16次攻坚（K3后重梳理）— 源码级根因链完整闭环

### 可控复现配方（已验证）
Xorg :9 (prlvideo, gdb 下) + xfwm4 --replace + 3s后 xfce4-terminal → 必崩 0x35700000356
- terminal 单独(无WM) = 不崩; xwd/xdpyinfo/shm测试 = 不崩
- fbdev 同场景 valgrind = 0错误; prlvideo 最小客户端 valgrind = 0错误

### 根因链（gdb watchpoint + valgrind 双重锁定）
1. Dispatch → extensions[6]->MinorOpcode — SYNC entry 被覆盖为顺序整数(0x348,0x349...)
2. hardware watchpoint 抓到覆盖瞬间: Old=6(entry->number) → New=0x34A00000349
3. 写入者栈(与valgrind完全一致): Dispatch(0x67b88)→0x64BD3→0xFC56E→0xB50A3
4. 写入函数特征: 0xb5077 call xf86ScreenToScrn; 循环写 int 数组(desc);
   stride-0x20查表 + movzwl; 调用 xf86ScrnToScreen
5. valgrind: 写入 freed 的 38字节 strdup 块(atom名字大小) → atom表相关
6. extensions 数组槽本身从未被改写(watchpoint证明) — 是 entry 堆块被越界覆盖
7. SYNC entry 从未被 free() (条件断点证明) → 纯堆越界/元数据损坏

### 已排除
DGA禁用(无效) / 退化modeline修复(无效) / 内存错误仅3个上下文集中于该链

### 下一步(明确)
1. 识别 0xB50A3 所在函数: 用 Kali 自身 dbgsym 或 对 0xb5060-0xb50b0 完整反汇编
   (特征: ScreenToScrn+int数组回写 — 疑似 DGA copy / glyph 相关 xf86 代码)
2. 该函数遍历的 per-screen 结构在 prlvideo 下含垃圾 → 找到我们缺的初始化
3. 或终极方案: ScreenInit 100%复刻 fbdev 序列(含 fbdevHWSave/ModeInit stub化)

### 复现工具(全部在 /tmp/b*.gdb)
b13=opcode提取 / b9+b12=entry watchpoint / b8=free条件断点 / b5=阶段二分

## 🏆 最终根因与修复（第 18 次攻坚，完全解决）

### 根因（完整因果链，全部源码级证明）
1. fbScreenInit 为 32bpp 屏创建 depth-32 TrueColor/DirectColor visual
   时，ColormapEntries = 2048（fbdev 路径为 256——具体差异在 fbdevhw
   传入的 depth/bpp 组合）
2. CMapReinstallMap (xf86cmap.c:525): numColors = ColormapEntries = 2048
   → while(i--) indices[i]=i 反向填充（即 0xB50A0 的汇编循环）
3. PreAllocIndices 按 xf86HandleColormaps 的 maxColors=256 分配(0x410块)
4. 2048×4=8KB 写进 1KB 缓冲 → 7KB 堆溢出 → SYNC ExtensionEntry 被毁
5. 下一个 SYNC 请求 → Dispatch 调 ext->MinorOpcode → 跳到垃圾指针
   0x35700000356（= 被覆盖的两个 int 值 0x357,0x356 拼成）

### 修复（一行）
xf86HandleColormaps(pScreen, 256→2048, 8, prl_load_palette, NULL, ...)
PreAllocIndices 变为 2048 ints，填充不再越界。

### 验证
- :9 + xfwm4 + xfce4-terminal = XORG 存活（修复前必崩）
- :0 主桌面 prlvideo 驱动 + 登录 + terminal = 用户亲证正常

### 破案工具链（可复用）
- 可控复现: :9 + xfwm4 --replace + 3s后 terminal
- gdb watchpoint on SYNC entry（b12.gdb）→ 抓到写入瞬间
- malloc 块头检查（b16.gdb）→ 0x411 chunk vs 2048 填充 = 溢出实锤
- xdpyinfo visual 对比 → 找到 2048-entry 的毒 visual
- frame1 info symbol = xf86HandleColormaps+716 → 定位到 CMapReinstallMap
