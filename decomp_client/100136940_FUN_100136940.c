
ulong FUN_100136940(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = QComboBox::sizeHint();
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar2 = 0x2200000000;
  }
  else {
    uVar2 = QComboBox::sizeHint();
    uVar2 = uVar2 & 0xffffffff00000000;
  }
  return uVar1 & 0xffffffff | uVar2;
}

