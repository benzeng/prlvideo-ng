
uint FUN_1008cae70(undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = *(ulong *)(param_2 + 0x48);
  uVar4 = uVar1 & 2;
  if (param_3 == 0) {
    if (uVar4 != 0) {
      if ((*(ulong *)(param_2 + 0x50) & 0xffffffffffffff3f) != 0) {
        return 0;
      }
      if ((*(ulong *)(param_2 + 0x50) & 0xc0) == 0) {
        return 0;
      }
    }
    uVar5 = 0;
    if (((uVar1 & 4) != 0) && (uVar5 = 0, *(long *)(param_2 + 0x58) == 0x40)) {
      iVar2 = FUN_1008bc6f0(param_2,0x7e,0xffffffff);
      if (-1 < iVar2) {
        uVar3 = FUN_1008bc750(param_2,iVar2);
        iVar2 = FUN_1008bc590(uVar3);
        if (iVar2 == 0) {
          return 0;
        }
      }
      uVar5 = 1;
    }
  }
  else if ((uVar4 == 0) || (uVar5 = 0, (*(byte *)(param_2 + 0x50) & 4) != 0)) {
    if ((uVar1 & 1) == 0) {
      uVar5 = ((uVar1 & 0x60) != 0x60) + 3;
      if ((((uVar1 & 0x60) != 0x60) && (uVar4 == 0)) &&
         (((uVar1 & 8) == 0 || (uVar5 = 5, (*(byte *)(param_2 + 0x60) & 7) == 0)))) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = (uint)(uVar1 >> 4) & 1;
    }
  }
  return uVar5;
}

