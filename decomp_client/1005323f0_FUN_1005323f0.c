
ulong FUN_1005323f0(void)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = QWidget::sizeHint();
  uVar2 = 0x16800000244;
  if (0x243 < (int)uVar1) {
    uVar2 = (ulong)uVar1 | 0x16800000000;
  }
  return uVar2;
}

