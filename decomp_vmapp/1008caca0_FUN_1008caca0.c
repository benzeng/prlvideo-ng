
uint FUN_1008caca0(undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x48);
  if (((uVar2 & 4) != 0) && ((*(byte *)(param_2 + 0x58) & 4) == 0)) {
    return 0;
  }
  if (param_3 == 0) {
    uVar3 = 1;
    if ((((uVar2 & 8) != 0) && ((*(ulong *)(param_2 + 0x60) & 0x20) == 0)) &&
       (uVar1 = *(ulong *)(param_2 + 0x60) >> 6, uVar3 = (uint)uVar1 & 2, (uVar1 & 2) == 0)) {
      return 0;
    }
    if ((uVar2 & 2) == 0) {
      return uVar3;
    }
    if ((*(byte *)(param_2 + 0x50) & 0x20) != 0) {
      return uVar3;
    }
    return 0;
  }
  if (((uVar2 & 2) != 0) && ((*(byte *)(param_2 + 0x50) & 4) == 0)) {
    return 0;
  }
  if ((uVar2 & 1) == 0) {
    uVar3 = ((uVar2 & 0x60) != 0x60) + 3;
    if (((uVar2 & 0x60) != 0x60) && ((uVar2 & 2) == 0)) {
      if ((uVar2 & 8) == 0) {
        return 0;
      }
      uVar2 = *(ulong *)(param_2 + 0x60);
      if ((uVar2 & 7) == 0) {
        return 0;
      }
      goto LAB_1008cad53;
    }
  }
  else {
    uVar3 = (uint)(uVar2 >> 4) & 1;
  }
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 != 5) {
    return uVar3;
  }
  uVar2 = *(ulong *)(param_2 + 0x60);
LAB_1008cad53:
  if ((uVar2 & 2) != 0) {
    return 5;
  }
  return 0;
}

