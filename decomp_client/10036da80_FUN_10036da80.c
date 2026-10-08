
ulong FUN_10036da80(void)

{
  int iVar1;
  ulong uVar2;
  int extraout_EDX;
  long extraout_RDX;
  
  iVar1 = QWidget::contentsMargins();
  QWidget::contentsMargins();
  uVar2 = QWidget::contentsMargins();
  QWidget::contentsMargins();
  return (uVar2 & 0xffffffff00000000) + extraout_RDX & 0xffffffff00000000 |
         (ulong)(uint)(extraout_EDX + iVar1);
}

