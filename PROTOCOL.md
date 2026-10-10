# Parallels Tools 12.2.1 视频协议逆向笔记

目标：在现代 Xorg 上重写 prlvideo 驱动（prlvideo-ng），恢复显示加速。
来源：Ghidra 全量反编译 prlvideo_drv.so + prlmouse_drv.so（465 函数，
位于 decomp_all/）+ 内核源码 + 实测验证。
实测状态标记：✅已验证 / 📖反编译确认未实测 / ❓未解

## 三条通信通道

### 1. Toolgate 同步请求（✅）
`write(fd, &ptr, 8)` 到 `/proc/driver/prl_tg`（主）或 `/proc/driver/prl_vtg`（视频专用），
fd 用 O_RDWR 打开。视频类请求必须走 prl_vtg。

用户态内存布局（16 字节头 + inline 数据(8字节对齐) + TG_BUFFER 数组）：
```c
TG_REQUEST { u32 Request; u32 Status; u16 InlineByteCount; u16 BufferCount; u32 Reserved; }
TG_BUFFER  { void *buf; u32 ByteCount; u32 Writable:1, Userspace:1, Reserved:30; }  // 16B
```
write 同步完成，结果写回 req->Status / inline / buffer。
内核侧将 BufferCount>0 的用户缓冲 pin 页 DMA（prltg.c build_request）。

### 2. RDPMC 超调用（✅ 已实测打通！）
`otgMonSideCall(struct u64[6])`：6 寄存器 ABI，需信号保护：
```
rax=s[0](magic) rbx=s[1] rcx=s[2] rdx=s[3] rsi=s[4] rdi=s[5]
rdpmc 指令; 结果写回全部 6 字
```
- magic 0x5f9e652 = 探测：宿主应答 rax=0xb36af47, rbx=版本(=2)【✅实测】
- magic 0x5f9e653 = 打开私有 IO 通道（返回 link id 于 s[1]）【📖】
- magic 0x5f9e654 = 私有 IO 调用【📖】
- 见 otgOpen / otgIOBegin / otgRequest / otgPrivateIOCtl（otg 私有传输层，带分块）

### 3. VGA 扩展寄存器（📖）
`out(0x3c4, 0xa9)` 选页后经 0x3c5 依次写：bpp、宽(u16)、高(u16)、
stride(u32, 32字节对齐)、0x3c(刷新率60)、1、0 —— 单头模式设定路径（PrlVesaSetScrnMode）。
内核 probe 用 0x3c4/0xa0 读显存大小（256MB）。

## 已解码的 MM 请求（经通道 1，/proc/driver/prl_vtg）

| 码 | 名称 | 载荷（inline 字节） | 状态 |
|---|---|---|---|
| 0x8110 | QUERY_HEADS | 8B 零入 → (maxHeads, activeHeads) | ✅ 返回 (5,1) |
| 0x8111 | ENABLE_HEAD | {head u32, 0} | ✅ |
| 0x8112 | DISABLE_HEAD | {head u32, 0} | ✅（黑屏后需重设模式）|
| 0x8114 | SET_MODE | {head u16, bpp u16, w u16, h u16, stride u32, refresh u32, flags u16=1, pad u16, **fboffset u32(字节)**, x u32, y u32} | ✅字段序已实测锁定 |
| 0x8117 | SHARE_STATE | 2 缓冲: [0]=16头×{x1,y1,x2,y2}u16 (128B, 哨兵 3fff/3fff/c000/c000), [1]=鼠标坐标 {x,y} u32 (8B)，均可写 | ❗实测 write 挂起——需先完成完整初始化链 |

TG_STATUS: 0=成功 0xf0000002=INVALID_REQUEST 0xf0000003=INVALID_PARAMETER
0xf0000012=INVALID_HANDLE

## 关键时序：驱动 EnterVT（📖 FUN_0010ae90）

```
EnterVT:
  PrlResetVideoMode:
    PrlSetVideoMode:
      VBEGetVBEMode（保存当前 VBE 模式）
      PrlVesaSaveFonts（保存 VGA 字体）
      PrlVesaSetScrnMode:
        单头(<2显示器): VGA 扩展寄存器序列（通道3）
        多头: 每16头循环 SET_MODE（通道1, fboffset/x/y 来自 per-head 布局）
    若 DynRes 已启用: PrlOtgReqDynResEnable(1)   ← 通道2 超调用!
  PrlCtlStartShareStates（创建线程循环发 SHARE_STATE 0x8117 + 鼠标坐标）
  PrlCtlUpdateGLXClipingAll
```
DynResEnable 载荷（otgRequest, 16B）: {u32 0xb /*子命令*/, 0, 0, u32 disable?1:0}

## 宿主行为模型（实测推断）

- 宿主不持续扫描 VRAM：SET_MODE 时取一次内容，之后靠 SHARE_STATE 脏区驱动重取
- fboffset 为字节单位（+4KB 写入被宿主按字节读到，蓝线实验证实）
- 帧缓冲可放 VRAM 任意偏移（256MB），避开 offset 0 的控制台区
- DISPLAY 关闭后 VBE 扫描不自动恢复，需重设模式或重启

## 恢复手段（✅ 随时可用）

`tgrestore2 1600 1200`：ENABLE_HEAD(0) + SET_MODE(1600,1200,6400,off 0)。
当前控制台实况以 /sys/class/graphics/fb0 为准（GRUB 回退到 1600x1200）。

## 测试工具（本目录）

| 工具 | 用途 |
|---|---|
| tgprobe | 任意 inline 请求探测 |
| tgtest/tgtest2/tgtest3 | 管线实验（test3 含 SHARE_STATE——会挂起，勿直接跑）|
| tgrestore2 | 显示恢复 |
| hypcall | RDPMC 超调用探针（✅ 可用）|
| decomp_all/ | 全量反编译 C 代码 |
| olddrv/ | 原始二进制（含 prlmouse）|

## 下一步（按序）

1. ✅ otg 私有传输层已实现（otg.c/otg.h，probe/open/request 全部 rc=0）
2. ✅ 初始化链已串联实测：probe→MaxHeads({0xb,5,1})→DynResEnable→VGA模式→渐变
   —— **0x8117 仍挂起**（内容无关、上下文无关、请求已提交到设备、等待可中断）
3. **0x8117 门控破解（下次首要任务）**，按优先级假设：
   - H1: 先发 HWCInit：otgRequest({1,3,...} 0x1C字节)（PrlHWCInit，光标会话=显示会话建立者）
   - H2: 旧驱动以 O_WRONLY 打开 vtg（flags=1），我们用 O_RDWR——改试
   - H3: PrlCtlUserSessionsGet 的用户会话关联（host 按 session 键控）
   - H4: 编译带 printk 的调试版 prl_tg，观察 0x8117 提交后设备级有无任何响应
4. 打通后：脏区刷新实测 → 写 DDX → 硬件光标 → 动态分辨率 → 验收

## otg 私有通道子命令（已发现）

| 载荷前 4 字节 | 含义 | 出处 |
|---|---|---|
| {0xb, 5, maxHeads} | 上报 guest 最大头数 | PrlSendToHostMaxHeadsCount ✅已实测发送成功 |
| {0xb, 0, 0, disable?} | DynRes 开关 | PrlOtgReqDynResEnable ✅已实测 |
| {1, 3, ...} 0x1C 字节 | **硬件光标初始化**（响应某字节=支持标志；64x64, flags 0x408）| PrlHWCInit ⭐下次先试 |

## VGA 扩展寄存器精确序列（汇编实测宽度）

```
outb(0xa9, 0x3c4)        ; 选扩展页
outb(bpp,   0x3c5)       ; 字节
outw(width, 0x3c5)       ; 字!
outw(height,0x3c5)       ; 字
outw(stride,0x3c5)       ; 字
outw(60,    0x3c5)       ; 字(刷新率)
outb(1,     0x3c5)       ; 字节(标志)
outl(fb_off,0x3c5)       ; 双字! 疑似帧缓冲偏移(旧驱动恒0)
```

## 0x8117 门控调查结论（内核插桩实测）

调试模块（dbgroot/，5 处 PRLDBG 插桩）追踪结果：
```
write req=0x8117 inl=0 buf=2      ← 进入内核
submit req=0x8117 st=0xffffffff   ← 已 MMIO 提交到设备
[8 秒无任何完成]                    ← 宿主不清算
wait done ret=-512(信号)           ← alarm 打断
irq st=0x1                        ← CANCEL 后宿主立即有响应!
```
已排除：请求内容(3种变体)、几何一致性(当前1600x1200直发也挂)、
HWCInit前置、MaxHeads前置、DynResEnable前置、O_WRONLY打开方式、
内核pin页路径(其他带缓冲请求秒回)。
结论：宿主认识该请求（响应CANCEL）但其处理器在等一个未建立的会话状态。

## 王牌方案（下次首选）：原驱动观测

1. 在 chroot/第二X（VT8）装 Debian stretch 时代 Xorg 1.19（ABI 匹配！）
2. 加载原版 prlvideo_drv.so——它能真正跑起来
3. 用调试版 prl_tg 内核模块完整记录它与宿主的全部对话
4. 对比复现 → 缺失的握手自然现形

备选：逆向 prltoolsd/iagent64 的动态请求码（显示服务会话注册嫌疑最大）。

## 调试模块热换装流程（已验证）

stop lightdm/prltoolsd → pkill prl* goa* evolution* → 循环 umount -l psf →
rmmod prl_fs → rmmod prl_tg → depmod -a → modprobe → 恢复服务。
最简路径：.ko 放 /lib/modules/.../updates/dkms 后直接重启（开机自动加载，
PRLDBG 在 boot 流量下即有输出）。
注意：从 /usr/lib 拷源码要带 Toolgate 目录层级（include 根依赖），
且必须先删干净旧 .o/.ko 再编（陈旧产物陷阱已踩过两次）。

## 🎉 0x8117 门控已攻破（实测确认）

激活宿主 share-state 消费者的完整条件：
1. prlcc（X 会话客户端）必须在 X 会话中运行：
   `env DISPLAY=:0 ... /usr/bin/prlcc &`
2. prltoolsd 重启/重发能力报告（0x8210, 3984字节）：
   `systemctl restart prltoolsd`
3. 之后 0x8117 立即完成（首个返回 0xf0000000=协议状态而非挂起）

根因：当年安装器"跳过X模块"的应答同时跳过了会话客户端安装，
prltoolsd 上报无X集成 → 宿主永不激活显示消费者。

驱动部署时必须包含：prlcc 自启动（autostart .desktop）+
prltoolsd 在 X 会话就绪后的重报时机。

下一步（顺序）：GL_VERSION(0x8130,4B inline) → QUERY_HEADS → ENABLE_HEAD
→ SET_MODE(帧缓冲@VRAM偏移) → SHARE_STATE(脏区) → 屏幕输出 → DDX

## 0x8117 复现调查状态（第二轮）

已排除假设：全屏/窗口模式、prlcc 全家桶+时序(45s)、toolsd重启、
大报告(0x8210/3984B)完成态、GL_VERSION前置、85秒长等待、纯share与
模式变更后share、鼠标活动(弱样本)。

唯一成功样本(13:55)的取证特征：重启(13:49)后5分钟、老Xorg完整驱动
初始化(13:44-47)之后、prlcc+toolsd重启+大报告完成后。
**待验证主假设**：Mac侧PD应用跨guest重启存活，老驱动的完整初始化
（VBE+VGA模式+GL_VERSION+share流）打开的宿主显示会话在guest重启后
仍存活一段时间，sstest骑上了它，之后衰减。

下次实验设计（无需盯屏）：老Xorg跑60s退出后，在 0/3/5/10 分钟
间隔各发一次sstest，绘制会话存活曲线；若确认，再逐步削减老Xorg的
初始化步骤找出最小开门序列。

事故记录：显示管线被楔死后全屏切换会导致宿主窗口僵尸化（控制中心
重启VM恢复）；tgrestore2 1600 1200 是可靠的guest侧恢复手段。

## 大报告(0x8210/3984B)载荷已破解（第三轮）

- 开头: {u32 0x00010005 版本} + 用户会话结构
- 主体: SSH用户匹配脚本（/bin/bash, host_user=dong, 解析 login.defs 的
  UID_MIN/MAX + 遍历 /etc/passwd 找常规用户 → /var/lib/parallels-tools/ssh_user）
- 即"共享配置档"功能的用户侦测数据，非显示状态
- 工具链已就位: 载荷 dump 插桩(PRL8210) + payload8210.bin/hex 样本
- 下一步: 对比不同状态下 0x8000 系列请求与全载荷差异；
  或逆向 prltoolsd 的 tg_services_run 大缓冲填充函数（0x409a09 附近）
  找"显示服务状态"字段的确切比特位

## prltoolsd 宿主事件分发架构（第三轮成果，地址均在 /usr/bin/prltoolsd）

tg_services_run 循环(0x4099a0): malloc(4000) → 填 {0x8210, Inl=3984,
ver=0x10005} → write(tg_fd) → 宿主在同一缓冲回写:
- inline+4 (buf+0x14) = 消息类型
- inline+0x10 (buf+0x20) = 事件码
- inline+0x14起 (buf+0x24) = 事件数据

消息类型分发(跳转表@0x40f030):
- 类型 3/4/5/13 → 事件分发器 0x4082d0
- 类型 6 → 0x4092d2
- 类型 15 → 0x40a280 (服务重初始化)
- 其余 → 忽略续循环

事件分发器 0x4082d0 内层(按 buf+0x20 事件码):
- 0→0x4086e4→0x405e70(会话, buf+0x38参数)
- 2→0x408943   3→0x408865   5→0x40884c
- 6→0x408725→0x405e00(查表, buf+0x24参数, 后续用buf+0xa/+0x40)
- 7→0x4089fe   8→0x4087cd

下一步: 逆 0x405e00/0x405e70 + 事件2/3/5/7/8 处理器，
定位"显示会话激活"事件（很可能由宿主在VM窗口状态变化时下发），
与 0x8117 门控对上即完成最后拼图。

## 第四轮发现

1. **prltoolsd 拥有动态分辨率功能**: -r 选项 "Dynamic resolution update
   time (ms) [100,1000], default 250" —— 显示管线不只是被动上报,
   prltoolsd 以 250ms 周期主动参与! 这可能是 0x8117 消费者的心跳方。
2. **verbose 模式**: prltoolsd -f -v (前台详细日志)。当前被 CUPS 打印
   同步噪音淹没(lpstat/lpadmin), 需先禁用打印服务或过滤后观测。
3. 服务注册表用 UUID 标识(16字节名), 注册函数 0x405d50,
   仅两处调用(0x407ec0 关停路径, 0x408ad5)。
4. prltoolsd.conf 无服务定义(服务清单运行时构建)。

下次优先级:
a) 禁用 prltoolsd 打印功能(配置或strace定位) → -v 模式纯净观测
b) 盯 -r 250ms 周期的动态分辨率流量(载荷插桩可见)
c) 对照 0x8117 门控开/关两种状态下 prltoolsd 行为差异

## 第五轮补充

- prltoolsd 无符号表(stripped), 函数导航需手动
- 其超调用层入口: otgMonSideCall=0x40bf50, 私有IO/otgRequest=0x40bf50-0x40c250
  (与 X 驱动同构)
- 当前流量基线: 仅 prlshprof 0x8410 每秒1次; prltoolsd 动态分辨率
  子系统完全静默(无250ms流量) → 它的激活条件未满足
- 下次: 从 0x40c0c4(私有IO)向上找调用者→dynres发送函数→其激活开关;
  结合 -v verbose(先研究如何禁打印同步噪音)对照观测

## 第六轮补充

- prltoolsd otg 层: MonSideCall=0x40bf50, otgOpen=0x40b880, otgIOBegin=0x40b850,
  otgRequest=0x40c160, 主链接打开点=0x403619(main初始化)
- 另有一辅助 otg 打开(0x40b21b)在某个 dynres 相关函数
- 时间预算管理: 下次直接从 Ghidra 加载 /usr/bin/prltoolsd 全量反编译
  (无符号但 Ghidra 会重建函数表, 比在 objdump 里手挖快 10 倍)
- 原则确认: dynres 的 250ms 心跳在流量基线中不存在 → 激活开关未打开,
  它才是 0x8117 的消费者本体(大概率通过同 otg 链接向宿主定时要边界)

## 第七轮：prltoolsd 全量反编译（133 函数, decomp_toolsd/）

决定性排除:
- prltoolsd 完全不引用 /proc/driver/prl_vtg, 不引用 X11 ——
  dynres 250ms 心跳是**配置监视**(检查宿主窗口 resize)而非 share-state 发送
- 0x8117 消费者只能是**宿主侧**; 其激活由宿主的显示会话状态机控制
- prltoolsd otg 层与 X 驱动同构(0x40bf50 MonSideCall 等)

复测取证: prlcc(45s)+toolsd重启(35s) 后 sstest 仍挂 —— 
13:55 成功窗口的确切激活条件仍是唯一未解之谜。
自上次成功以来仅做过: /var/log 日志清理等维护。 
→ 下次: 检查 Mac 侧 Parallels 设置变化 (显示选项/分辨率模式) 或
以另一台 X server 干净启动为触发 (X server 启动=宿主会话建立的经典扳机)。

## 🎊 终极破解：0x8117 门控 + SET_MODE 兼容性（第八轮）

门控钥匙: **老驱动完整生命周期打开的宿主显示会话**（Xorg1.19+prlvideo 跑过即可，
任意后启动的 X 会话亦可续命）——此前的 prlcc/toolsd 序列并非必需，
关键是原版驱动执行过 GL_VERSION+VBE+VGA+VT Enter+ShareStates 线程的全流程。

**share_state 与模式设定的兼容性矩阵（实测）**:
- 纯 share（不碰模式）→ 完成
- MM SET_MODE(0x8114) → 挂（MM 注册模式挤掉 share 消费者）
- VBE 模式(0x4fxx, 老驱动路径) → **完成**（宿主驱动兼容模式）

→ 驱动设计定型: 模式设定走 VBE int10 (0x4f02) 或 VGA 扩展寄存器,
   帧缓冲可放 VRAM 任意偏移, share 用 0x8117 上报脏区, 光标用
   MOUSE_SET_POINTER(0x8100)。MM 多头协议仅用于多显示器场景。

## 🏆 终极验证成功（第九轮）：用户亲证渐变上屏

老 Xorg 保活(keeper) + vbetest 完整链:
GL_VERSION(0x0) → VGA扩展寄存器(1280x800, fb_off=16MB) →
渐变写入VRAM → SHARE_STATE 五连发(全部 0xf0000000) →
用户确认: 彩色渐变画面显示 12 秒 → 恢复 Xfce。

**0x8117 会话模型（最终结论）**:
宿主显示消费者仅在“老驱动完整生命周期初始化过”的会话窗口内激活
(该窗口跨进程持久, keeper Xorg 保活期间我们的独立请求全部成功);
模式设定兼容 VBE/VGA路径, MM SET_MODE 会挤掉消费者。
GL_VERSION→VGA模式→VRAM直写→SHARE_STATE 四件套全部实测通过。

下一步: prlvideo-ng DDX (Xorg 22 ABI):
- ScreenInit: GL_VERSION + VGA扩展序列(VBE兼容) + VRAM mmap
- 模式设定: VGA 扩展序列 (支持动态分辨率)
- 帧缓冲: VRAM 任意偏移 (避开 offset 0 控制台)
- 每帧: Damage 回调 → SHARE_STATE(边界)
- 光标: MOUSE_SET_POINTER + 位置随 SHARE_STATE 的 buffer1 上报

## DDX 开发进展（第十轮）：prlvideo-ng 骨架

已实现并验证（/home/dong/prlvideo-ng/prlvideo.c + Makefile）:
- Xorg 22 platform/PCI 驱动模型 (supported_devices + PciProbe + driverFunc HW_IO|MMIO)
- PCI 设备绑定 (1ab8:4005, xf86ConfigPciEntity)
- GL_VERSION 握手在真实 Xorg 执行成功
- 完整 PreInit: 模式链表/几何/DPI/depth/visual/标准调用序列
- fbScreenInit OK (用 shadow_mem 而非 VRAM+offset——16MB 偏移的 VRAM 直接
  传给 fbScreenInit 会挂; 需换低偏移或先 touch)
- ScreenInit 完成 (visual/fbPictureInit)

卡点 (下次): ScreenInit 后 segfault @0xd0 — Xorg 后续阶段访问 NULL 指针,
疑似 colormap/AdjustFrame/ValidMode 或 pixmap private 未设。
参考: fbdev.c 的完整 colormap + ValidMode 流程。

发现的坑:
- Xorg VGA arbiter 禁止直接 iopl 端口写 → 模式切换要走 Xorg 的 VGA 服务
  或 vesafb 已在目标模式时跳过
- DamageRegister 在 ScreenInit 阶段 drawable 未 ready → 移到 EnterVT
- fbScreenInit 需要 DPI 非零, 几何在 PreInit 用 xf86SetCrtcForModes 标准序列

## DDX 进展（第十一轮）：启动收尾诊断

进展:
- colormap 默认路径 (fbScreenInit 内建) 采用, xf86HandleColormaps 移除
- ScreenInit 完整执行到 "ScreenInit complete" + colormap OK
- 现在崩在 InitOutput (gdb 确认, 无符号) — 非 colormap/ScreenInit,
  是 Xorg 输出初始化深坑 (segfault @0xd0)

诊断路径 (下次):
- 需 xserver-xorg-core-dbg 调试符号包 才能定位 InitOutput 具体行
- 或直接比对新版 xf86-video-fbdev 源码 (git clone xorg/driver/xf86-video-fbdev)
  其完整 PreInit/ScreenInit/colormap 序列作为权威模板重构
- 备选: 移除 supported_devices/PciProbe 改用 fbdevHWProbe 式 /dev/fb0 路径
  (我们驱动本质也是 framebuffer 直写, fbdev 模型更契合)

当前代码: prlvideo.c (已含全部调试输出 + 可开关的 VGA/Damage/VRAM 实验路径)

## 🏆 DDX 完整点亮（第十二轮）：prlvideo-ng 正式运行

崩溃根因链(逆向 Xorg 1.21 源码定位):
- InitOutput+0x2f4 segfault@0xd0 = AddScreen 后解引用 pScrn->monitor->DDC
  (我们的直接 claim 路径没建 monitor 记录)
- 修复: PreInit 分配 MonRec (id="Parallels Virtual Monitor", DDC=NULL)

点亮确认:
- Xorg :9 (VT9) 完整启动: 全部扩展(GLX DRISWRAST/DRI2/DRI3)初始化
- xdpyinfo: 1600x1200, depths 1/4/8/15/16/24/32 完整
- 主显示 lightdm/Xorg :0 亦用 prlvideo-ng (log 确认 PciProbe→GL_VERSION→
  fbScreenInit→colormap 全链, 用户亲证桌面可显示)
- fbdev 对齐收尾序列: SetBlackWhitePixels/BackingStore/miDCInitialize/
  miCreateDefColormap/HandleColormaps(CMAP_PALETTED_TRUECOLOR)

剩余 (下次):
- Damage→SHARE_STATE 脏区上报 (EnterVT 注册 + BlockHandler 周期 flush)
- 动态分辨率: 宿主 resize 检测 → VGA 扩展序列重设模式
- VRAM 直写帧缓冲 (当前 shadow_mem 拷贝路径, 换 VRAM+fb_offset 直接映射)
- 硬件光标 (MOUSE_SET_POINTER 0x8100)

## DDX 运行期崩溃诊断（第十三轮）

现象: 登录进桌面后打开 terminal → X 服务器崩溃重启回登录框 (浏览器正常)。
取证: /var/log/Xorg.0.log.old 结尾 segfault, 崩在输入设备初始化后的
渲染调用, 地址 ~0x356 小偏移 = 空函数指针调用。
诊断: prlvideo ScreenInit 缺 fb 渲染 wrap hooks
(pScreen->Composite / CopyArea / EnableDisableFBAccess / miInitializeWrapped
ScreenFunctions 等), xfwm4 为 terminal 创建装饰+持续重绘时踩到 NULL。
修复方向(下次):
- 对照 /tmp/xserver-xorg-video-fbdev-0.5.0/src/fbdev.c 的
  FbDevSetupScreen + shadowSetup + Composite/CopyArea wrap 序列补齐
- 或先用 fbSetupWrapProcs 全套标准 wrap (fb.h)
- Xorg 崩溃后 coredumpctl 无记录 (greeter 提前接管), 现场在 Xorg.0.log.old
临时规避: /etc/X11/xorg.conf.d/10-parallels.conf 可把 Driver 改回 fbdev
(vesafb 直写显存同样可见, 只是无协议加速)

## 🎆 第十轮（2026-10-07 深夜）：三大特性落地 prlvideo-ng

**通道真相（修正此前所有门控模型）**：
- 0x8100/0x8101（光标）：不受任何门控，独立通道，随手可用
- 0x8117（share-state）：门控 = keeper（老驱动生命周期）**进程存活**，
  keeper 一退立即关闭（survival.log 曲线证实）；systemd 常驻即解决
- 之前"探针完成"的假象 = 驱动忽略了 write 的快速失败（EFAULT 等），
  已改为记录 wrc/errno

**keeper 生产化（/etc/systemd/system/prl-keeper.service）**：
- Xorg 1.19 + prlvideo 于 vt8 常驻，Restart=always，Before=display-manager
- 坑1：Xorg 1.19 不理会 -configdir，仍解析 /usr/share/X11/xorg.conf.d，
  其中 10-quirks.conf 和 10-amdgpu.conf 会让其解析器崩溃（已永久移到
  /root/disabled-xorg-conf/，本机无 AMD/触摸板，无副作用）
- 坑2：keeper 的 Modes 必须与主显示对齐（1920x1200），否则模式切换
  会把扫描输出弄歪
- 验证：unlock 工具三连发 GL=0x0 / HIDE=0x0 / SHARE=0xf0000000

**prlvideo-ng 新架构**：
- 发送线程（pthread）：一切 0x8117/0x8100/0x8101 写入都在线程上，
  主线程只投递（通道关闭时 write 永久挂起，只损失一个线程）
- 探针先 HIDE 再 SHARE；探测结果经 wakeup handler 回主线程打印
  （xf86Msg 非线程安全——线程内调用 = 8 秒后随机 SIGSEGV，血泪教训）
- Damage 注册必须挂 CreateScreenResources（ScreenInit 阶段
  GetScreenPixmap 为 NULL——第十轮"注册即崩"之谜的真相）
- xf86InitCursor 前必须先 miDCInitialize（它 wrap mi 的 sprite funcs）
- CloseScreen 链：我们的 wrap 必须在 DamageSetup 之后挂，否则
  DamageDestroy 在 damage 层 CloseScreen 内部被二次调用 → SIGSEGV@0x80
- RegisterBlockAndWakeupHandlers 两个 handler 都不能传 NULL
- VT 钩子（Enter/LeaveVT）必填，chvt 切走即 NULL 调用

## ⚠️ keeper 生产化失败战报（2026-10-07 凌晨，四连教训）

keeper（老驱动 Xorg 常驻 vt8）作为 systemd 服务在生产环境触发四连故障：
1. **文本模式重置**：lightdm 抢占控制台 → 老驱动 LeaveVT 执行
   "Reset VGA text mode" → 主显示花屏（对策已入驱动：ScreenInit/EnterVT
   主动 prl_vga_mode 自愈，实测 X 内端口写入一直有效，旧注释是错的）
2. **帧缓冲踩踏**：两 X 共享 VRAM offset 0，keeper 激活时其黑色根窗口
   物理覆盖主屏幕内容 → 黑屏（X 无从得知，需 greeter 重绘救回）
3. **输入 grab 争夺**：keeper 也打开键鼠设备持 evdev grab → 主 greeter
   无法操作（对策 AutoAddDevices=false 有效）
4. **VT 状态机污染**：多次启停 + 宿主 macOS 全屏切换叠加，控制台
   tty1→tty2→tty3 递进漂移，主 Xorg VT 追踪失步后永久丢弃输入

结论：keeper 作为"第二个完整 X 栈跑在共享显示硬件上"的方案不可行，
已停用。share-state 门控的真正钥匙（宿主侧显示会话机制）留待后续
按非 X 架构重新设计（候选：uvesafb+工具进程 / 逆向 prlcc 事件源）。
当前基线：脏区/光标通道探针 + 动态分辨率（不依赖 keeper）全部保留，
share 消费者关闭时驱动优雅降级（软件光标、发送线程安全挂起）。

附：keeper 停止后 share 通道仍存活一段时间（宿主会话存留期，与当年
"衰减"现象一致）——期间脏区上报为免费增益。

## 🧊 冻结模型最终判别（2026-10-07 01:20，用户实证）

现象：画面只在 macOS↔VM 视图切换时更新；按键/鼠标实时进入 guest
（切换后可见此前盲打的字符），帧缓冲内容一直在正确更新——
**宿主不重读 VRAM，只在视图切换时取一次**。

已证伪的 guest 侧恢复手段（全部无效）：
- 450 发全屏 SHARE_STATE 全部瞬间完成 → 屏幕纹丝不动
  （**share 完成不驱动重绘**；消费者懒队列模型下"完成"≠"生效"）
- MM SET_MODE(tgrestore2)、VGA 扩展写入、guest 重启 ×2、VM 级重启

结论：宿主显示会话状态（"guest 显示由 tools 协议管理"标志）存在
**PD 应用层**，跨越 VM 重启持久。已知触发进入：老驱动生命周期 /
VGA 扩展模式设定。退出路径未知（候选：prltoolsd 服务注销请求
0x405d50/0x407ec0、能力报告变更）。

**恢复手段（按优先级）：完全退出 PD 应用(⌘Q)重开 → 改 VM 显示配置
→ 重启 Mac。**

驱动最终基线（479f368+）：不碰模式设定（保持续扫描模型）、
分辨率/光标依赖 share 活性而自动门控降级——宿主状态无论哪种，
guest 侧都不会恶化显示。

### share 消费者行为补充观测
- 新连接的 share 秒回（450/450）；老连接（Xorg 发送线程）首写
  易挂，外部新请求可"踢活"队列（902 完成含被踢活的驱动流量）
- 探针 share 约 2 秒完成（预热）；hide(0x8101) 恒秒回不受门控

## 🌅 终局（2026-10-07 01:18，用户亲证登录）

**冻结根因终审定案：驱动自身的探针流量就是切换开关。**

昨天的驱动除 GL_VERSION 外不发送任何请求 → 宿主持续扫描 VRAM →
画面永远实时。今晚的驱动每次启动发 HIDE(0x8101)+SHARE(0x8117)
探针 → 宿主判定"guest 显示由 tools 协议接管" → 切入合成器模型
（只在视图切换时取帧）。该判定跨越 guest 重启 / VM 重启 / PD 应用
重启持久——因为它在每次启动时被我们自己的探针重新触发。
"宿主持久状态"是错觉，自触发才是真相。

**最终架构（v0.3，用户验证登录）**：
- ShareState 选项默认 OFF：不创建发送线程、零探针流量 →
  持续扫描模式，画面实时（本基线）
- Option "ShareState" "on" 可开启全套协议栈（脏区上报/硬件光标/
  分辨率切换）——仅供将来宿主重绘路径破译后的实验
- 动态分辨率在 share 不活跃时礼貌拒绝（绝不单方面模式切换）
- Damage/光标/RandR 全部机制保留在代码中，随时可激活

夜间回归：连续 4 次 xfce4-terminal 启动全过，X 稳定，1920x1200。


# 第二部分：prlmouse-ng（鼠标无缝切换）

目标：Xorg 21 上的 Parallels 鼠标无缝切换（窗口模式光标无感进出 VM）。

## 已完整破译（来自 prlmouse_drv.so 465 函数反编译的鼠标子集）

prlmouse = xf86-input-mouse 分叉 + Parallels "OTG" 层（RDPMC 超调用私有通道）：
- 设备：/dev/input/mice|psaux|gpmdata 探测；udev 规则把 i8042 AUX 的
  event 节点打 prlmouse 标签（xorg-prlmouse.rules），InputClass 绑定
- 读入：24B struct input_event（64 位）；相对分支解码 REL_X/Y/WHEEL/
  HWHEEL + BTN_LEFT/RIGHT/MIDDLE（掩码 xor/or 维护）
- 绝对模式（"Sliding Mouse"）全走 OTG 通道，**不写任何 PS/2 魔法**：
  - DEVICE_ON: otg {1,0,1} 使能 + {1,0,7} 版本查询（resp u32@0x0c≠0
    ⇒ 支持批量模式）
  - 轮询模式（版本 0）: {1,0,2} → resp u16@0x0e absX, @0x10 absY,
    @0x12/@0x14 dims（双 >1 ⇒ 绝对模式开）, @0x16 Z
  - 批量模式: 发 0x44 字节 {1,_,8,0,1,0xfd0} → 收 ≤0xfe8，
    u32@0x14=dataLen，buf+0x18 起每 44B 事件记录：
    [0]flags(bit0=绝对) [3]buttons [4]X [5]Y [6]Z [7]W [9][10]dims
  - 抓放 = 宿主逐事件用 flags bit0 驱动；guest 端零决策逻辑
  - 绝对坐标为桌面全局系，投递时减 miPointerGetScreen()->x/y
- TIS 工具注册（模块初始化必发，否则宿主不认账）:
  消息 = 16B 命令头 {0xE,0,1,0} + 12B 流头 {TLV总长, 0x1000, 0} +
  TLV 序列（每项 {u32 len, u32 tag, u32 seq, data}）：
  0x2001 {1,3} 版本 → 0x20ca 描述串 → 0x20cb 40B 工具身份
  ({0xc,2,0xa28f,flags,1,0,0x3041a28f,9,...}) → 0x20cc "initialized"
  → 0x2191 "parallels.SlidingMouse.guest.lin"（名字最后）

## OTG 传输层寄存器布局（本次修正的关键 bug）

超调用六字 w[0..5] = rax,rbx,rcx,rdx,rsi,rdi：
- 建: {0x5f9e653, 总发送长, 有收, max(收,发), 本次发, buf指针}
- 续: {0x5f9e654, 通道id,     有收, max(收,发), 本次发, buf指针}
- 回传: 通道=w1(建时), off=w4, status=w5, 实收字节=w3
- 取消: {0x5f9e655, 通道id, ...} → status=w5
旧实现的发送长/指针/max 三槽位串位（历史遗留），响应一直是自己的
请求回显。修正后 actual=28 真实响应。

## 门控排查记录（宿主滑动状态恒为零的原因）

已排除：
- 窗口/全屏模式（用户全程窗口模式）
- 显示 share 消费者（keeper 开启验证，鼠标状态仍零——两会话独立）
- prlcc 会话代理单跑（连 X+toolgate 双 socket 后静默等待）
- TIS 注册（rc=0 被接受，状态仍零）
- 注入 GL_VERSION/ENABLE_HEAD/SET_MODE（全部完成，状态仍零）

**头号嫌疑：ParallelsControl X 扩展**（原版视频驱动注册，prlcc 与
DDX 的控制面桥梁——prlcc 的静默等待形态与其吻合）。下一步：反编译
/usr/bin/prlcc（X 客户端侧），提取扩展请求线格式，在 prlvideo-ng 里
实现该扩展，观察宿主是否点亮滑动鼠标（可能连显示特性一起点亮）。

## 事故记录

注入实验（SET_MODE）+ keeper 叠加 → 黑屏（用户窗口模式全程）。
恢复：systemctl stop prl-keeper && vgaset 1920 1200 7680 &&
tgrestore2 1920 1200。工具已永久化：/usr/local/bin/vgaset。
/tmp 会被清理——救火工具不要放 /tmp。

## 🔭 ParallelsControl 扩展落地（2026-10-07 下午）

**控制面已双向贯通**（提交 7fb07bc）：
- prlcc（原版二进制）对我们 DDX 的 ParallelsControl 扩展完成完整握手
- prlcc 日志（/var/log/parallels.log）亲证：Control Center started /
  Dynamic Resolution initialized（读到我们注册的 RandR 范围）/
  Coherence + Utility Tool 全部上线，prl_tg 0x8230/0x8000 流量流动
- 实现的处理器：0x1d 会话、0x17/0x18 dynres、0x1c ping、0x01/0x11
  resize（接 RandR）、0x1b 光标重建、0x0e visual id、一致性系列查询

**生产配置**：/etc/xdg/autostart/prlcc.desktop（原版文件）+
主显示无 ShareState（持续扫描保稳定）+ 扩展常驻。用户登录即自动
注册会话。

**宿主总闸（未破）**：即使 keeper（显示会话）+ prlcc（三组件注册）
+ DynRes 同框，宿主侧 OTG 分辨率轮询与滑动鼠标状态仍为零。
判定：闸门在宿主内部状态机（可能按"tools 健康"或显示会话指纹
键控），guest 侧可见的钥匙已全部试过。下一步如继续：macOS 侧
PD 应用分析或宿主动态跟踪（超出 guest 逆向范围）。

**工程教训**：xf86CollectOptions 在无 Screen 段绑定的屏幕上崩溃
（monitor/confScreen 裸解引用）——改从实体直接读 Device 选项。

## 🖱️ prlmouse-ng 收官（2026-10-07 傍晚）

**生产可用**：移动/点击/拖动/右键（双指）/滚轮全部工作，手感可调
（ConstantDeceleration 1.5 + VelocityScaling 12 已入 InputClass）。

最后一战的三连坑（全部实证）：
1. 扩展一致性查询如实回答"未启用"——全答 1 会把 prlcc 的
   coherence 状态机骗进 seamless 路径，吞掉点击
2. **dix 把 xf86PostButtonEvent 的 button 参数当作 map 索引**：
   恒等+1 的 map 把所有按键上移一位（左键变中键！），map 必须
   发布为恒等（map[0]=8, map[i]=i）
3. 测试工具纪律：uinput 注入器用完必须杀（两次泄漏造成"幽灵
   漂移"误诊）；xev -root 对被桌面覆盖的根窗口无效，用
   xinput test 抓设备级事件

用户环境关键事实：MacBook 触控板经宿主注入，所有点按归一为
BTN_LEFT（0x110）到达 guest；右键=双指点按由宿主转换。

丝滑度上限：宿主以 PS/2 协议注入（~80Hz），X 侧调参改善步进感
但不改变频率；穿越特性激活后绝对坐标流会显著升级。

## 🔬 宿主侧 prl_vm_app 静态判据（2026-10-07 晚，绕过 Ghidra 的轻量逆向）

Mach-O 手工解析（段映射 + RIP 相对引用扫描 + 局部 objdump），
避开 Ghidra 全量分析的超时：

**SendVesaTrackPagesRequest @ 0x1000b3df0**（宿主→guest 脏页跟踪请求）：
- "monitor not ready" 判定：`this->[0x1938]==NULL`（显示器对象）或
  `this->[0xa4] <= 13`（状态机）
- 请求载荷存入 `[0x1938]->[0x3d818]`，经 SendToVcpu(0x200000) 发送：
  共享内存 0xd000 位图锁（lock cmpxchg）+ KickVcpu（"KickVcpu
  failed"/"SendVcpuSignal" 错误串佐证）
- 完成标志 [0x10998] 由 guest 应答路径回写；250ms 超时未应答 =
  "a request is lost"
- **结论：宿主一直在发请求，guest 内核侧无人应答**——应答者是
  prl_tg 模块中需要 userspace 初始化激活的路径（keeper 的原版
  驱动生命周期恰好激活了它——这就是"开门"的真相）

**keeper 最终判决**：消费者绑定完成生命周期的连接（keeper 的黑屏
成为 VM 的"画面"）；CPU 限流可解功耗但显示绑定不可解 → 路线关闭。

**自持配方（终版状态）**：模式设定 + OTG 显示会话在 Xorg 主线程
会停摆（OTG 请求挂起 = ScreenInit 卡死）——需挪到发送线程。这是
下一次继续时的第一件事。

## 🌙 三日战役终章（2026-10-07 深夜）

**黑屏事故链**（已修复+防线部署）：:9 全生命周期测试的无条件
模式设定把宿主切进合成器模式，主 X 无 ShareState（无活邮箱），
测试进程清场后无消费者 → 黑屏。修复：模式设定门控于 ShareState
（622949e），主显示配置验证零 share 流量。

**恢复工具箱**（验证有效，按序使用）：
1. vgaset 1920 1200 7680（/usr/local/bin）
2. tgrestore2 1920 1200（guest 内）
3. systemctl restart lightdm
4. 退出 PD 应用重开（宿主侧复位）

**下次开场清单**：
1. 收割 Ghidra 全量分析（vmapp.rep，找应答路径的激活调用）
2. :9 验证线程安全 OTG 显示会话（代码已就绪推送）
3. 自持配方成功 → 主显示开 ShareState → 穿越/动态分辨率/脏区
   三门同开

**铁律**：触碰显示模型的测试必须先想清楚"测试进程死了，
用户的屏幕怎么回来"。

## 🏆🏆 显示管线全线贯通（2026-10-07 深夜终局）

**用户亲眼见证红色画面**——:9 测试中 xsetroot 画红，屏幕显示红。
三天战役的主目标达成：

```
完整自持配方（全部由 prlvideo-ng 自己完成）：
1. GL_VERSION 握手（PreInit）
2. VGA 扩展序列寄存器模式设定（ScreenInit，门控于 ShareState）
3. 0x8114 模式注册（发送线程）——宿主接受，显示器状态就位
4. 0x8117 ShareState 注册（探针完成 = 消费者加冕）
5. 双线程互踢（主发送线程 + 60Hz kicker 线程，各自独立 fd）
   ← 关键发现：toolgate 队列"新到即清算"（work-conserving），
     同 fd 写串行阻塞，必须两个 fd 两个线程互踢
6. 脏区经共享内存直达宿主合成器 → 画面实时
```

**主显示部署验证**：0x8114 发送 + 探针 wrc=0 完成 + 双线程流动。

**暴露的最后配套需求**：合成器会话激活后，**输入也被切到会话模式**
（宿主停止注入相对事件，等待滑动鼠标会话处理绝对输入）——原版
栈是显示 share + 滑动鼠标**双会话并行**的（EnterVT 链里 HWC init
在 ShareStates 之前的原因）。我们只开了显示会话 → 键鼠死。

**下次开场（终局一战）**：
1. prlmouse-ng 的 OTG 滑动会话加同款双 fd 互踢（代码模式照搬
   视频驱动的 prl_kick_thread）
2. 双会话同开：ShareState on + prlmouse 会话激活
3. 成功判据：显示实时 + 键鼠活 + dims 正确 + 穿越生效
4. 动态分辨率随后自测（管线已全在我们手里）

**三天全部技术资产**：25,472 函数宿主反编译、prlcc 协议全表、
鼠标驱动生产可用、X 扩展双向验证、OTG 传输修正、本次双线程
互踢机制——全部开源在 benzeng/prlvideo-ng。

## ⚔️ 双会话实验战报（2026-10-07 深夜续）

**实验**：ShareState on + prlmouse 滑动会话 + 真实光标位置共享
（prlvideo 导出 prl_share_mouse_position，prlmouse weak-import 调用，
原版同构）+ prlcc 手动在场。四件套齐发。

**结果**：键鼠仍死（Xorg 主线程健康——epoll 正常空闲，是宿主停止
注入输入事件）。prlcc 补位后也不复活。

**决定性新证据**：宿主日志在会话激活时刻精确出现
`sendPackage failed to vm [], retCode = 4`——宿主注册完成后要向
guest 投递"会话包"（投递目标=prlcc 的 0x8230 sub 0x18 阻塞接收
循环），投递失败。输入切换被挂在这次失败的投递上。

**下一步课题（下次继续）**：
1. 为什么 sendPackage 失败（retCode=4）——prl_tg 模块的 host→guest
   投递路径要求什么状态？反编译 decomp_vmapp 里搜 sendPackage 的
   guest 侧投递函数（retCode 4 = ?）
2. 原版栈在 greeter（无 prlcc）时输入正常——说明原版驱动的注册
   序列里有什么让宿主**不切输入**或**成功投递**。差异候选：
   PrlHWCInit 的 OTG 光标会话 {1,3,...}（我们从未成功发过——
   OTG 显示类请求全部停摆，但鼠标类 OTG 请求成功！差异在哪？）
3. 已恢复稳定基线：无 ShareState，libinput... 不，prlmouse 仍在
   （相对模式正常工作）

## ⚔️⚔️ 终夜五连实验（2026-10-07 深夜至 20:30）

| # | 实验 | 结果 |
|---|---|---|
| 1 | 双会话（ShareState+滑动+共享光标+prlcc） | 键鼠死 |
| 2 | prlcc 补位 | 仍死 |
| 3 | HWC 光标会话 OTG {1,3}（修正传输层后首试） | **rc=0 完成，supported=0**；"崩溃"真相=Makefile 漏链 otg.c 的符号错误 |
| 4 | 完整链 + gdb | 全链在场键鼠仍死 |
| 5 | 鼠标 20ms 定时器轮询（不依赖 evdev） | dims 恒 0，宿主从未供给滑动状态 |

**确凿结论**：我们的 0x8117 注册使宿主停止 PS/2 输入注入，但绝对
分发（sliding dims/events）从未激活——不是 guest 侧缺任何东西
（五件套全齐），是宿主输入状态机不认我们的注册为"可切换输入"。

**下次精确打击目标**（反编译里按图索骥）：
1. 宿主输入注入状态机：grep i8042/kbd/mouse injection 的开关函数，
   找谁在显示会话注册时关掉 PS/2、条件是什么
2. 滑动 dims 的供给方：0x8117 handler 里 FUN_1000d76e0 控制台注册
   后，输入侧等什么才开 dims
3. supported=0 的 HWC init：原版响应里 supported=1 需要什么前置
（OTG {1,3} 的响应由宿主光标子系统给——它说"不支持"可能就是
输入状态机的最终判据）

**基建成果**：Makefile 已修（otg.c 入链），鼠标定时器轮询框架就位。

## 🌙 控制台会话之夜（2026-10-07 21:00-21:30 终章）

**宿主机制全图**（代理 235 次工具调用的地毯式分析）：
- 输入管线：Mac 客户端包（0x30daa 键/0x30dab 鼠标）→ CPs2Mouse/
  CUsbMouse（ready 判据）→ 相对=i8042 环 / 绝对=tablet SPSC 队列
  （vmDev+0x2f350，由 prlmouse 经 toolgate 读取）
- DAT_1011c374c = 全局绝对开关（控制台 cmd 7 设置）
- 控制台对象（vm+0x107f8）：cmd 1=attach、4/10=布局+光标（填
  状态缓冲，w/h<129=光标尺寸）、7=绝对开关、9=映射鼠标单元
  （需物理地址）、0/5=释放；激活门 FUN_1000d7810 需 [4]/[5] 非零
  + mode1 需 attach 位
- 0x8100 处理器（FUN_1002a6e70）本身就是激活触发器
- 模式(1/2)由 Mac 客户端经 0x30dc6 下发（SWITCH_SLIDING_MOUSE）
- 0x8117 的 buffer1 = 鼠标单元映射（无需 cmd 9）

**guest 侧已实现**：控制台会话 cmd 1+4（rc=0 全过）+ dims>1 判据
修正 + kicker 双 fd。但：
1. poll 仍全零（激活未达成或状态读取路径不对——0x8117 处理器对
   前客户回 0xf0000000 提示"替换式完成"语义）
2. **同进程双线程双 fd 的写不互相完成**（rate=0，kicker 确认在
   线）——工具门在飞语义需专门实验（怀疑设备级在飞上限=1，
   双线程互等死锁；跨进程 kick 有效是唯一实证）
3. 用户实测：输入活但延迟数秒显示=合成频率跟随 share 完成率
   （~1Hz，靠 prlshprof 外部流量踢）

**下次实验设计**（不重启 X）：
A. 独立进程双线程双 fd 写 0x8117 测互完成语义（复刻驱动行为）
B. 若设备级在飞=1：原版紧循环为何不死？→ 用 eBPF/ftrace 看
   prl_tg 的等待条件，或对比原版驱动运行时的 dmesg 完成率
C. 激活门直接观察：宿主日志 grep "Wait event permission"

**资产**：所有代码已推送；kicker/控制台会话/dims 判据修正都在
prlmouse-ng 和 prlvideo-ng 里，ShareState 默认关保稳定。

## 🔍 系统性梳理之夜（2026-10-07 22:00-22:30）

**用户要求的停试错梳理，产出两个实锤修正**：

1. **sm_ver 偏移 bug**：批处理协议版本写在 attach（cmd 1）回复的
   +0x14，旧代码读 +0x0c → 恒 0 → 批获取从未启用。修正后
   **sm_ver=1，批获取（opcode 8，44 字节绝对事件记录）管线全通**
   （rc=0，响应格式正确）
2. **cmd 7 = 绝对投送开关**（原版驱动"版本查询"的真身）：发它后
   宿主把鼠标事件路由到 tablet SPSC 队列，批获取就是唯一读者

**输入死活的完整因果链**（所有实验现象闭环）：
- 无控制台会话 → PET_IO 不通知 → Mac 客户端继续发原始输入 → 活
- 控制台 attach+激活 → PET_IO_SLIDING_MOUSE_FLAG → 客户端停发
  原始键鼠 → 事件转入宿主内部路由 → **tablet 队列必须有读者**
- 批获取已就位但宿主零事件入队 → 控制台激活状态（宿主 console
  +0x20 ACTIVE）未达成——这是最后唯一悬而未决的门
- 显示慢（~1Hz）：share 写停摆（内核互斥锁）+ 宿主空闲节流；
  帧泵 60Hz 不改变合成率（宿主帧时钟不读我们的排队率）

**下次开场（一击定案）**：
宿主侧断点/console 状态 dump：ssh 到 Mac，用 lldb 附到
prl_vm_app，读 console 对象（vm+0x107f8 解引用）的 +0x20
（ACTIVE）、+0x38（bitmask）、+0x3c（mode）、+0x28[4]/[5]（w/h）
——四个字段一次看清激活门卡在哪。所有 guest 侧代码已就绪。

**经验教训**：代理的偏移量结论也要交叉核对（第一次代理读 +0x0c
是对的原始反编译位置——但那是不带 QByteArray 头的裸数据；宿主
写入带 +0x18 头——两个体系差 0x0c。真假偏移必须用响应实测锚定）。

## 🩹 残留状态之夜收官（2026-10-07 22:30）

**"缓慢左漂"根因**：宿主全局绝对路由标志（DAT_1011c374c）一旦
被 cmd 7 设置，**跨 lightdm 重启持续生效**——即使驱动全部回到
无会话基线，宿主仍把鼠标事件路由到 tablet 队列，PS/2 只收到
残留同步包（带左偏）。

**修复工具**：/usr/local/bin/prl-console-release（OTG cmd 0
释放，rc=0）。鼠标会话已与 ShareState 选项联动（prlvideo 导出
prl_share_state_enabled，prlmouse weak-import），默认关=纯净。

**今晚净战果**：
- sm_ver 偏移 bug（+0x14 not +0x0c）→ 批获取管线全通
- 批获取实现（44B 绝对事件记录 + 按钮位图）
- 输入死活因果链全闭环（唯一残门：宿主 console ACTIVE）
- 联动开关 + 残留清除工具 = 实验条件从此可控

## ⚠️ 宿主侧调试危险操作规程（2026-10-08 晚，lldb 事故）

**事故**：lldb 附 prl_vm_app → mach 挂起目标 → VM 全部虚拟硬件冻结。
命令链被中断后 lldb 停在交互态（100% CPU 空转），VM 持续挂起。

**恢复路径（实测）**：杀 lldb **不够**——prl_vm_app 留在损坏的
异常状态（mach 端口/信号残留），必须**完全退出 PD 应用 → 重启
PD → 启动 VM** 才恢复。杀 lldb ≠ 干净 detach。

**规程**（下次宿主侧调试必须遵守）：
1. 单条 SSH 内完成 attach→读→quit，不留交互态
2. 外层 timeout 护栏；超时杀 lldb 后**仍需准备 PD 重启**
3. 先 image lookup 拿确认地址反推 slide，再读数据（上次直读
   失败=slide 算错，__DATA 段与 __TEXT 滑移不同需分别验证）
4. 最安全的替代：完全避开 attach——用 vmmap 定位 + /proc 式
   只读（macOS 无 /proc，可用 task_for_pid + mach_vm_read 的
   自写工具，或干脆在 VM 内从 guest 侧推）

## 🎯 控制台激活突破（2026-10-08 21:30）

**零附加探针成功**（actprobe 工具，纯 guest 侧）：
```
attach(cmd1) rc=0 sm_ver=1        ← attach 回复 +0x14 确认
abs 开关(cmd7) rc=0
0x8100 激活探针 st=0              ← CONSOLE ACTIVE！
批获取({1,8}) 0 事件              ← 事件未流入
PS/2 evdev 0 事件                 ← 绝对路由已接管输入
状态查询(cmd3) attached+sm_ver=1 稳定
```

**第三个对齐 bug（历史性）**：内核 INLINE_SIZE 把 28 字节内联
向上对齐到 32（(28+7)&~7），缓冲描述符必须在 header+32 而非
+28。我们驱动里所有带缓冲的 0x8100 因此静默 ENOMEM——
actprobe 修正后立即激活成功。

**激活配方（guest 侧完整，已验证）**：
1. OTG attach {1,0,1} → sm_ver@reply+0x14
2. OTG cmd 7（绝对路由开关）
3. 0x8100 光标声明（inline 28B + 描述符@+32 + ARGB 光标面）
   → st=0 即 ACTIVE

**剩余唯一谜题**：激活后 Mac 客户端不向 tablet 队列发事件
（批获取 0 条 + PS/2 停 = 事件消失在宿主内部）。两个候选：
a) Mac 客户端收到 PET_IO_SLIDING_MOUSE_FLAG 后停止发送，
   等 mode 2（需客户端主动切换，guest 无法强制）
b) 事件走 20ms cell 轮询（FUN_1004307f0，mode==2 才启动）

**工具链**：actprobe（激活+批获取观测）、cellwatch（状态查询）、
release（会话清除，恢复 PS/2）——三件套纯 guest 侧零附加。

## 🔬 事件流追踪之夜（2026-10-08 21:00-21:45）

**prlcc 在场重测**：激活成功（st=0）但批获取仍 0 事件——prlcc 不是缺失变量。

**事件路由完整链条（反编译定案）**：
```
Mac UI 发 0x30dac(mouse move) → FUN_100091600:
  USB 虚拟鼠标存在且 ready → CUsbMouse::real_move
  否则 → CPs2Mouse::real_move（vm+0x10810）
real_move: ready 检查 → DAT_1011c374c(abs开关) →
  开: 归一化坐标(0..0x7fff)入 tablet SPSC 队列(vmDev+0x2f350)
      ← 批获取({1,8})应在此取到
  关: PS/2 4字节包入 i8042 环(vmDev+0x2f228)
```

**guest USB 树实况**：无 VIRTUAL@MOUSE（203a:fffc）设备——只有
摄像头(fff9)和打印机(fffa)。SARE 日志 (0->0) 是快照恢复记录，
非创建路径。CUsbMouse 的 ready 检查永远 fail → 一切走 PS/2 鼠标。

**剩余唯一假设**：Mac UI 收到 PET_IO_SLIDING_MOUSE_FLAG 后完全
停止发送（"guest 接管指针"），只在 Mac 光标位于 VM 窗口内时发
绝对位置——而它判定"滑动鼠标可用"可能依赖 TIS 记录里的工具
版本字段（我们的 toolInfo 版本=1，实际 PD 12.2.1 内部版本更高）。

**下次靶点（按优先级）**：
1. TIS toolInfo 版本字段实验（toolInfo[4] 从 1 提到实际版本号
   如 12.2.1.41615 或小版本序列）→ 观察 Mac UI 是否开始发送
2. 快照确认：宿主日志 grep "Drop real_move"（若出现=客户端在
   发但设备 not ready；若无=客户端根本没发）
3. VIRTUAL@MOUSE USB 设备的创建条件（PD 偏好/工具版本门槛）

## ⚠️ 残留状态复现（2026-10-08 21:50）

actprobe 实验后即使正常退出，宿主的绝对路由残留（缓慢左漂症状
再现）。prl-console-release 立即修复。**结论：actprobe 用完必须
立即 release**——已把 release 调用写进工具尾部（待下版）。这是
cmd 7 全局标志的宿主侧生命周期，guest 侧 OTG 链关闭不触发清理。

## 🖱️ Mac UI 客户端之夜（2026-10-08 22:00-22:40）

**Mac 侧发送架构定位**：
```
prl_event_tap（CGEventTap 守护，unix socket 服务端）
  ↕ /var/tmp/prl_event_tap.socket_501
prl_naptd + prl_graphics_switcher（对端）
prl_client_app（37MB，VM 窗口 UI，真正的 0x30dac 发送方）
prl_vm_app（接收方）
```

**prl_client_app 滑动鼠标状态机（字符串定案）**：
- vmSlidingMouseStatusChanged / onSlidingMouseStatusChanged
  （订阅 PET_IO_SLIDING_MOUSE_FLAG）
- CAbsoluteMouseGrabber / CRelativeMouseGrabber（两种抓取器）
- 判定链："Can't grab sliding mouse since it is not over any
  input grabber"——滑动抓取需要光标位于输入抓取器（VM 窗口
  鼠标区）之上且 appIsActive（"isHovered: mouseArea.enabled &&
  containsMouse && !pressed && appIsActive"）
- "Sliding mouse active: %d" 状态日志
- ChrCannotStartReason_SlidingMouseOFF/Disabled 失败原因

**TIS 版本实验**：ver=0xC0201(12.2.1) rc=0 接受但事件仍 0——
版本不是钥匙（或不止版本）。

**下次靶点**：
1. prl_client_app 的完整反编译（37MB，同 Ghidra 流水线）——
   重点：onSlidingMouseStatusChanged 的处理 + 从 FLAG 到
   CAbsoluteMouseGrabber 启用的条件链
2. 系统日志观察：探针激活瞬间 prl_client_app 是否打印
   "Process sliding mouse state change"（用 log stream 实时抓）
3. isHovered 条件：Mac 光标必须真的悬停在 VM 窗口上——实验时
   确认窗口焦点状态

## 🖥️ 客户端条件链全破译（2026-10-08 23:30，37,315 函数反编译）

**prl_client_app 滑动鼠标完整链路**：
```
宿主 console attach → 0x1895e (PET_IO_SLIDING_MOUSE_FLAG)
  → FUN_100329bd0 case 0x1895e → Qt signal vmSlidingMouseStatusChanged
  → onSlidingMouseStatusChanged (FUN_10035c410)
    → setGuestSupport: vm+0xa8 = flag value
    → updateMouseType (FUN_100361a60)
```

**updateMouseType 判定矩阵**：
```
绝对模式 = VTD==0 AND guest_support==1 AND MouseSync==1
           AND NOT (USB_mouse AND SmartMouse)
自动滑入 = cursor_empty AND !coherence AND SmartMouse AND
           guest_support AND vm_state(7/8/9) AND maybe_drag
```
配置状态：MouseSync=1 ✓ SmartMouse=1 ✓ → 只要
guest_support 到 1 且 VTD==0，相对自动切换即启用。

**guest_support 的来源**：0x1895e FLAG 事件的数据（console+0x38
bitmask）。宿主在 console attach/release 时经 FUN_100430270 发出。

**关键日志**（level≥3）："Process sliding mouse state change: %s"
（DISABLED / ENABLED (Absolute) / ENABLED (Sliding)）和 level≥4 的
"Absolute mouse switch flags" / "Relative mouse auto switch flags"
——下次实验前先开 prl_client_app 的 verbose（DAT_102230ffd0
对应环境变量或 defaults 命令待查），一次观测全部布尔量。

**剩余唯一悬案**：guest 侧 console attach 后 FLAG 是否真的到达
客户端（日志零记录=未到达或 level 不够）。下次：
1. 开 verbose 日志 → 探针激活 → 看 "Process sliding mouse state
   change" 是否出现 + 全部 flag 值
2. 若未到达 → 宿主侧 FUN_100430270 的发送条件（console+0x38
   之外可能还需 +0x40 "sliding available" = cmd4/10 激活后设置）

## 🚩 FLAG 发射条件定案（2026-10-08 23:50）

**verbose 实验**：defaults Log.Level=4 + 客户端重启 → 仍零
HID_CTL 日志。客户端日志系统（FUN_100df99c0）不走 macOS
unified log——自有输出通道（文件位置待查，可能 stderr 或
~/Library/Logs 下的独立文件）。

**FLAG (0x1895e) 发射条件全图**（4 个调用者，全部一致）：
```
FUN_100430270(iodesktop, value) —— 发送 PET_IO_SLIDING_MOUSE_FLAG
调用前提：console+0x40 (sliding_available) == 0 时才发！
  console attach/release (cmd 0/1/5/6)
  USB 鼠标在场状态变化 (FUN_1000d7a90 ← 5 个 USB 事件)
  sliding_available 翻转 (FUN_1000d79e0)
  cell 映射变化 (FUN_1000d8510)
```

**sliding_available (+0x40) 的设置者**：FUN_1000d79e0(console,
banks!=0) ← VGA 模式探测（FUN_1002a9af0）——**guest 有 banked
framebuffer 时 sliding_available=1，此时 FLAG 不发**（因为它
已经是"available"状态，FLAG 只在状态翻转时才有意义）。

**逻辑链推演**：
guest console attach → bit0 置位 → 如果 sliding_available==0 → 
发 FLAG(带 bit0) → 客户端 vm+0xa8=1 → updateMouseType 检查
全部条件 → 绝对模式切换。
如果 sliding_available==1（guest 已有 fb） → 不发 FLAG → 
客户端不知道 guest 支持 → 永远不发鼠标事件。

**这可能就是设计**：sliding_available=1 意味着 guest 有
share-state 会话（0x8117 注册过），此时鼠标走 tablet 队列
（guest 自己批获取），不需要 FLAG 通知客户端切模式。

**下次实验方向修正**：不发 cmd 7（abs 开关），让
sliding_available 保持 0 → FLAG 会发出 → 客户端进入
"Absolute" 模式 → 客户端自己发 SWITCH_SLIDING_MOUSE(0x30dc6)
→ console mode 变 1（简单模式，不需要 cell）→ 鼠标事件经
CPs2Mouse::real_move 以绝对坐标注入 PS/2 → **不需要批获取**！
（原版驱动的 {1,0,2} 轮询就是在 PS/2 流上取绝对位置）

## 🔬 文本模式验证 + FLAG 值汇编制确认（2026-10-09 晚）

**实验**：GRUB 全切文本模式（GRUB_TERMINAL=console +
GFXPAYLOAD=text）→ VM 重启 → 确认无 fb0（真文本模式）→
三件套探针。**仍 0 事件**。

**汇编制反汇编定案**（attach 路径 @0x1000d7b9a-0x1000d7bb3）：
```asm
mov esi,[rax+0x38]  ; bitmask
or  esi,0x1          ; bit0=1 (attach)
mov [rax+0x38],esi   ; store
cmp BYTE[rax+0x40],0 ; sliding_available==0?
jne skip             ; skip if available
call FUN_100430270   ; esi = bitmask(bit0=1) ← 值正确！
```
**FLAG 值和条件链都正确**——问题在更深层：FUN_100434990（IO
事件投递）或客户端的事件订阅机制。

**排除矩阵总结**（四天全部实验）：
| 假设 | 实验 | 结果 |
|---|---|---|
| guest 缺某命令 | cmd1+4+7+9 全发 | 全 rc=0，仍 0 事件 |
| prlcc 缺位 | prlcc 手动运行 | 仍 0 事件 |
| sm_ver 偏移读错 | 修正到 +0x14 | sm_ver=1 正确 |
| TIS 版本太低 | ver=12.2.1 | 仍 0 事件 |
| VtdSync 阻挡 | .pys Enabled=0 + 重启 | 仍 0 事件 |
| sliding_available=1 | GRUB 文本模式重启 | 仍 0 事件 |
| FLAG 值错误 | 汇编反汇编 | 值正确 |
| Mac 光标行为 | 用户观察 | 保持捕获=客户端不响应 |

**结论**：FLAG 在宿主的 IO 事件投递层消失（FUN_100434990 的
路由/订阅机制），或在客户端接收层被丢弃。这需要 Mac 侧的动态
跟踪（dtrace 或 Authorized IDA 调试 prl_client_app）才能定位。

**GRUB 已恢复图形模式。系统稳定。**

## ⚠️ 宿主侧危险操作清单 v2（2026-10-09 补充）

| 操作 | 后果 | 恢复 |
|---|---|---|
| lldb attach prl_vm_app | VM 挂起，中断后 lldb 空转 100% CPU | 杀 lldb + **PD 完全退出重开** |
| killall prl_client_app | PD 整体崩溃 | PD 重启 + VM 自动恢复 |
| killall prl_vm_app | 可能更严重（VM 核心进程） | 未知，勿试 |

**规则**：宿主侧只做 SSH 远程读取（strings/vmmap/log show）。
任何 kill/attach/debugger 操作必须先获得用户确认。

**updateMouseType 完整逻辑（客户端反编译定案）**：
- SmartMouse = PS/2 相对 + 自动捕获/释放（不是绝对模式）
- guest_support(vm+0xa8) ← FLAG(0x1895e) ← console attach
- FLAG 投递 = sendPackage 空名广播（已确认发出）
- 客户端日志系统（FUN_100df99c0）不走 unified log，输出位置
  未知——三个 defaults 域均无标准 verbose 开关
- 下次方案：在 Mac 上用已授权的 IDA 静态分析客户端的事件
  接收链（FUN_100329bd0→FUN_10082c2d0→Qt signal），定位
  FLAG 被丢弃的确切位置

## 📋 四天战役全景总结（2026-10-09 21:40 整理）

**成果**：内核4模块+显示+输入+X扩展+文件共享+网络 = 完整自研栈。
显示管线（脏区推送）已验证（红屏）。穿越差最后一公里。

**因果链完整**：console attach → FLAG 广播（确认发出）→ [客户端
接收链上的某处丢失] → guest_support 不置位 → SmartMouse 不激活。

**下次行动（Mac IDA 静态分析 prl_client_app）**：
1. FUN_100329bd0 case 0x1895e → 确认事件处理
2. FUN_10082c2d0 QObject 参数 → 信号目标
3. FUN_10035ac20 setupSignals → 信号连接时机
4. FUN_100361a60 param_1+0x10 → mouse_type 初始值
Ghidra 反编译（decomp_client/）已有全部代码做参照。

# 🏆 无缝鼠标穿越——完整协议（2026-10-10 收官，全流程验收通过）

## 总架构（五层，缺一不可）

```
Mac 光标 ──绝对位置──> prl_client_app(AbsoluteMouse模式)
   │ FLAG(0x1895e) 链: guest TIS 版本=0xc0201 → attach+cmd7 → 宿主广播
   ▼
prl_vm_app 控制台(OTG service 1) ──cmd2 轮询(~10Hz 位置快照)──> prlmouse worker
   │                                              + PS/2 相对增量(全速率)
   ▼ 混合定位: PS/2 增量 + cmd2 锚定(变更时重锚) + 冻结150ms=出窗停走
Xorg 绝对事件 → 硬光标钩子 → 位置经 0x8117 buffer1 → 宿主合成层(60Hz,零往返)
```

## 1. FLAG 链路（客户端切换 AbsoluteMouse 的扳机）
- prlmouse TIS 注册 `parallels.SlidingMouse.guest.lin`，**版本字段必须 0xc0201**（写 1 宿主不认，FLAG 永不发）
- attach(cmd1) → cmd7 → cmd4 布局 → 0x8100 激活 → 宿主广播 PET 0x1895e
- 客户端 onSlidingMouseStatusChanged → updateMouseType → 切 AbsoluteMouse
- **调试金钥匙**：`prlsrvctl set --verbose-log on`（实时生效），grep
  "sliding mouse state change"/"Switching mouse type"（/Library/Logs/parallels.log）

## 2. 控制台激活时序（键鼠全死的坑）
- 宿主激活检查**只在 0x8100 时运行**；检查时若布局(cmd4)未到 → dims=0 →
  "已附着未激活" → 输入路由进黑洞 → 键鼠全死
- prlvideo 的 0x8100 在 ScreenInit 跑（早于 prlmouse 的 cmd4 260ms）
  → **prlmouse 必须在 cmd4 后补发自己的 0x8100**（st=0 = 激活成功）

## 3. 混合定位（跳变的根治）
- cmd2 轮询：位置快照，但**客户端只 ~10Hz 喂**（单独用=跳）
- PS/2 相对流：宿主恒定注入，全速率（单独用=不能穿越）
- 合成：poll 变更→重锚+清累计增量；PS/2 增量叠加在全速锚点上；
  poll 冻结>150ms（光标出窗）→ 增量停用（穿越保护）
- 回复字段（evbuf 相对偏移）：+0x12=X +0x14=Y +0x16=W +0x18=H +0x1a=Z

## 4. 光标显示（双箭头/乱码/消失的根治）
- **X 硬光标路径**（UseHWCursor=TRUE）：位置→0x8117 buffer1，图像→0x8100
  宿主以显示刷新率合成，帧缓冲里无光标（零脏区零往返=丝滑）
- **客户端在 FLAG 时刻快照会话 0x8100 的图像**并绘制：必须携带真实
  Adwaita left_ptr 32x32 ARGB（从 Xcursor 文件提取，含热点 4,1）；
  手绘位图=乱码，透明占位=光标消失
- **所有光标必须 32x32 ARGB 画布**（ARGB 与 mono 两路统一）：紧凑 24x24
  或 type=1+64x64 会被解读错位=并排双箭头+杂尾
- 打字光标消失 = macOS 行为（客户端绘制层跟随），出窗再入恢复

## 5. 宿主侧生存法则（楔死/黑屏/洪水的三大死因）
- **kicker 必须保留**：toolgate 写只在"新请求到达"时完成，无 60Hz
  kicker 则首写永久阻塞=黑屏（fd 轮换救不了：单线程首写无解）
- **冷启动禁 cmd0**：新鲜控制台上先 release 会让状态机走歪，之后
  attach 永远活不过 5 秒（弹跳恢复路径里才用 cmd0）
- **share 循环限速 16ms**：合成器=全屏脏区×60fps，1ms 节奏=宿主
  146% 过载→控制台饿死→全系统冻（菜单/弹窗一开就死的根因）
- 帧泵(pump)服务**永久禁用**：第四路 vtg 写入者与一切互踩

## 6. 工程结构（防挂起）
- prlmouse：**全部 otg 在 worker 线程**（会话/轮询/watchdog/注销release），
  X 主线程零 toolgate 调用（消费者遇冷=写永久阻塞=主线程冻结）
- 自愈双探测器+熔断：poll 冻结500ms+PS/2 在流=客户端掉relative→弹跳；
  无 dims=控制台死→弹跳；共 10 次上限（防风暴）；prl-bounce 手动兜底
- prlvideo：share 线程+kicker 线程（各持独立 fd）+1Hz 全帧心跳保活

## 遗留小项（不影响使用）
- 光标形态不随 guest 内容实时变（客户端只快照 FLAG 时刻图像）
- cmd8 批取队列恒空（需 cmd9 映射，现代 Tools 路径）——cmd2 轮询已替代
