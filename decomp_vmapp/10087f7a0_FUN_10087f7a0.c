
ulong FUN_10087f7a0(long param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  
  if (**(int **)(param_1 + 0x30) != 6) {
    uVar1 = FUN_10087fdb0(param_1);
    uVar4 = (ulong)uVar1;
    if ((int)uVar1 < 1) goto LAB_10087f811;
  }
  piVar3 = ___error();
  *piVar3 = 0;
  uVar4 = _write(*(int *)(param_1 + 0x28),param_2,(long)param_3);
  FUN_10087d610(param_1,0xf);
  if ((int)uVar4 < 1) {
    iVar2 = FUN_10087f2c0(uVar4 & 0xffffffff);
    if (iVar2 != 0) {
      FUN_10087d630(param_1,10);
    }
  }
LAB_10087f811:
  return uVar4 & 0xffffffff;
}

