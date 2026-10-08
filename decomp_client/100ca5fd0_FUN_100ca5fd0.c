
uint FUN_100ca5fd0(undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_2 + 0x48);
  if (((uVar1 & 4) != 0) && ((*(byte *)(param_2 + 0x58) & 0x11) == 0)) {
    return 0;
  }
  if (param_3 == 0) {
    if (((uVar1 & 8) != 0) && ((*(byte *)(param_2 + 0x60) & 0x40) == 0)) {
      return 0;
    }
    if (((uVar1 & 2) != 0) && ((*(byte *)(param_2 + 0x50) & 0xa0) == 0)) {
      return 0;
    }
    return 1;
  }
  if (((uVar1 & 2) != 0) && ((*(byte *)(param_2 + 0x50) & 4) == 0)) {
    return 0;
  }
  if ((uVar1 & 1) == 0) {
    uVar2 = ((uVar1 & 0x60) != 0x60) + 3;
    if (((uVar1 & 0x60) != 0x60) && ((uVar1 & 2) == 0)) {
      if ((uVar1 & 8) == 0) {
        return 0;
      }
      uVar1 = *(ulong *)(param_2 + 0x60);
      if ((uVar1 & 7) == 0) {
        return 0;
      }
      goto LAB_100ca6071;
    }
  }
  else {
    uVar2 = (uint)(uVar1 >> 4) & 1;
  }
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 != 5) {
    return uVar2;
  }
  uVar1 = *(ulong *)(param_2 + 0x60);
LAB_100ca6071:
  if ((uVar1 & 4) == 0) {
    return 0;
  }
  return 5;
}

