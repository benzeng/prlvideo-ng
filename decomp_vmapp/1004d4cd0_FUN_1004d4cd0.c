
undefined8 FUN_1004d4cd0(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)((long)param_1 + 0xc) == *(int *)(param_1 + 1)) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_1002a5b80(*param_1,*(int *)((long)param_1 + 0xc),param_2);
    *param_3 = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = *(int *)((long)param_1 + 0xc);
      if (*(uint *)(param_1 + 1) < (uint)(iVar1 + iVar3)) {
        iVar1 = *(uint *)(param_1 + 1) - iVar3;
        *param_3 = iVar1;
        iVar3 = *(int *)((long)param_1 + 0xc);
      }
      *(int *)((long)param_1 + 0xc) = iVar3 + iVar1;
      uVar2 = 1;
    }
  }
  return uVar2;
}

