
uint FUN_1008ca990(undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x48);
  if (((uVar1 & 4) != 0) && ((*(byte *)(param_2 + 0x58) & 2) == 0)) {
    return 0;
  }
  uVar3 = uVar1 & 2;
  if (param_3 == 0) {
    if ((uVar3 != 0) && ((*(byte *)(param_2 + 0x50) & 0x80) == 0)) {
      return 0;
    }
    if (((uVar1 & 8) != 0) && ((*(byte *)(param_2 + 0x60) & 0x80) == 0)) {
      return 0;
    }
    return 1;
  }
  if ((uVar3 != 0) && ((*(byte *)(param_2 + 0x50) & 4) == 0)) {
    return 0;
  }
  if ((uVar1 & 1) == 0) {
    uVar2 = ((uVar1 & 0x60) != 0x60) + 3;
    if (((uVar1 & 0x60) != 0x60) && (uVar3 == 0)) {
      if ((uVar1 & 8) == 0) {
        return 0;
      }
      uVar1 = *(ulong *)(param_2 + 0x60);
      if ((uVar1 & 7) == 0) {
        return 0;
      }
      goto LAB_1008caa3a;
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
LAB_1008caa3a:
  if ((uVar1 & 4) == 0) {
    return 0;
  }
  return 5;
}

