
ulong FUN_100c5a9a0(long param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  
  if (**(int **)(param_1 + 0x30) != 6) {
    uVar1 = FUN_100c5afb0(param_1);
    uVar4 = (ulong)uVar1;
    if ((int)uVar1 < 1) goto LAB_100c5aa11;
  }
  piVar3 = ___error();
  *piVar3 = 0;
  uVar4 = _write(*(int *)(param_1 + 0x28),param_2,(long)param_3);
  FUN_100c58810(param_1,0xf);
  if ((int)uVar4 < 1) {
    iVar2 = FUN_100c5a4c0(uVar4 & 0xffffffff);
    if (iVar2 != 0) {
      FUN_100c58830(param_1,10);
    }
  }
LAB_100c5aa11:
  return uVar4 & 0xffffffff;
}

