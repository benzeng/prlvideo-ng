
undefined8 FUN_0040e490(int *param_1,long param_2,int param_3,int param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  iVar4 = param_3 + 0xc;
  uVar2 = FUN_0040e3f0(param_1,iVar4);
  if ((int)uVar2 == 0) {
    piVar3 = (int *)((ulong)(uint)param_1[2] + *(long *)(param_1 + 4));
    piVar3[1] = param_4;
    *piVar3 = param_3;
    iVar1 = *param_1;
    piVar3[2] = iVar1;
    *param_1 = iVar1 + 1;
    if (param_2 != 0) {
      FUN_0040e5d0(piVar3 + 3,param_2,param_3);
    }
    if (param_5 != (long *)0x0) {
      *param_5 = (long)(piVar3 + 3);
    }
    param_1[2] = param_1[2] + iVar4;
    piVar3 = (int *)FUN_0040e1e0(param_1);
    *piVar3 = *piVar3 + iVar4;
    uVar2 = 0;
  }
  return uVar2;
}

