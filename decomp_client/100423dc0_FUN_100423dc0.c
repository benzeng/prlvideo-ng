
ulong FUN_100423dc0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = QComboBox::currentIndex();
  if (iVar1 == 1) {
    uVar2 = 0xdc;
    if (((*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xa8) + 0x28) + 9) & 0x80) == 0) &&
       (uVar2 = 0xb4, (*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xb0) + 0x28) + 9) & 0x80) != 0)
       ) {
      uVar2 = 0x104;
    }
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    uVar2 = uVar2 >> 0x20;
  }
  return uVar2;
}

