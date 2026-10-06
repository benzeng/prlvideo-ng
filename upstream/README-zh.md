# 向 Xorg 上游报告 xf86cmap 堆溢出加固建议

三个文件：

| 文件 | 用途 |
|---|---|
| `xf86cmap-PreAllocIndices.patch` | 补丁本体（适用当前 master） |
| `email-draft.txt` | 邮件版报告（发 xorg-devel 邮件列表用） |
| `gitlab-issue-draft.md` | GitLab issue 版报告 |

**发送前必做**：把草稿里的 `Your Name <you@example.com>`（From 和
Signed-off-by 两处）换成你的真名和邮箱——上游要求补丁有本人签名。

---

## 路径 A：GitLab issue（最简单，5 分钟，推荐先做这个）

1. 注册账号：https://gitlab.freedesktop.org/users/sign_up
   （填邮箱 → 去邮箱点验证链接）
2. 打开新建 issue：
   https://gitlab.freedesktop.org/xorg/xserver/-/issues/new
3. 标题粘贴：
   `xf86HandleColormaps(): PreAllocIndices heap overflow when maxColors < visual's ColormapEntries`
4. 正文粘贴 `gitlab-issue-draft.md` 全部内容
5. 把 `xf86cmap-PreAllocIndices.patch` 拖进附件框 → Submit issue

## 路径 B：邮件列表（上游传统通道，维护者更容易看到）

1. 订阅列表（否则你的邮件要等管理员人工放行）：
   https://lists.freedesktop.org/postorius/lists/xorg-devel.lists.freedesktop.org/
   页面底部 Subscribe 填你的邮箱 → 去邮箱点确认链接
2. 用你常用的邮箱客户端，新建邮件：
   - 收件人：`xorg-devel@lists.freedesktop.org`
   - 主题：`[PATCH] xf86cmap: size PreAllocIndices from the screen's visuals`
   - 正文：`email-draft.txt` 内容（删掉开头那段中文提示，改好署名）
   - 附件：`xf86cmap-PreAllocIndices.patch`（正文已内嵌 diff 时可不加）
3. 发送后注意收件箱：列表会再发一封确认邮件（回复或点击即可）

## 路径 C：GitLab Merge Request（最正式，等账号建好后再说）

1. 在 GitLab 上 fork `xorg/xserver`
2. 本地：
   ```
   git clone https://gitlab.freedesktop.org/<你的用户名>/xserver.git
   cd xserver
   git checkout -b xf86cmap-prealloc-hardening
   git apply /home/dong/prlvideo-ng/upstream/xf86cmap-PreAllocIndices.patch
   git add -A && git commit -s   # -s 自动加 Signed-off-by，需配好 git 用户名邮箱
   git push origin xf86cmap-prealloc-hardening
   ```
3. GitLab 页面会提示 Create merge request → 目标选 `xorg/xserver`

路径 A + B 都做效果最好：issue 留档，邮件推动合入。
