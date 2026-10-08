
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003466e0(double param_1,double param_2,long param_3,int param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  if (1 < param_4 - 2U) {
    if (param_4 != 1) {
      return;
    }
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0x3ff0000000000000;
  }
  dVar4 = param_1 - *(double *)(param_3 + 0x20);
  if (_DAT_100e18ae0 < (double)(DAT_100e18af0 & (ulong)dVar4)) {
    uVar2 = 0;
    if ((*(long *)(param_3 + 0x10) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_3 + 0x10) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_3 + 0x18);
    }
    uVar2 = FUN_100319c40(uVar2);
    if (dVar4 <= 0.0) {
      uVar3 = 8;
    }
    else {
      uVar3 = 7;
    }
    FUN_10032eb10(uVar2,uVar3,0);
    *(double *)(param_3 + 0x20) = param_1;
  }
  dVar4 = DAT_100e11050;
  if ((param_2 != 0.0) || (NAN(param_2))) {
    dVar1 = *(double *)(param_3 + 0x28);
    if ((dVar1 != 0.0) || (NAN(dVar1))) {
      if (param_2 <= dVar1) {
        dVar4 = (double)((ulong)dVar1 ^ DAT_100e14fe0) / param_2;
      }
      else {
        dVar4 = param_2 / dVar1;
      }
    }
  }
  if (DAT_100e18ae8 < (double)(DAT_100e18af0 & (ulong)dVar4)) {
    uVar2 = 0;
    if ((*(long *)(param_3 + 0x10) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_3 + 0x10) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_3 + 0x18);
    }
    uVar2 = FUN_100319c40(uVar2);
    if (dVar4 <= 0.0) {
      uVar3 = 10;
    }
    else {
      uVar3 = 9;
    }
    FUN_10032eb10(uVar2,uVar3,0);
    *(double *)(param_3 + 0x28) = param_2;
  }
  return;
}

