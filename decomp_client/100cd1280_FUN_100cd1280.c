
undefined8 FUN_100cd1280(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x20) != 1) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 0x6d) {
    if (iVar1 < 0x25) {
      if (iVar1 != 0) {
        return 0;
      }
      return 1;
    }
    uVar2 = iVar1 - 0x25;
    if (0x1b < uVar2) {
      return 0;
    }
    uVar3 = 0xa002001;
  }
  else {
    uVar2 = iVar1 - 0x6d;
    if (7 < uVar2) {
      return 0;
    }
    uVar3 = 0xd1;
  }
  if ((uVar3 >> (uVar2 & 0x1f) & 1) == 0) {
    return 0;
  }
  return 1;
}

