
undefined8 FUN_100c29df0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  iVar1 = FUN_100c2af80();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0;
    iVar1 = FUN_100c23170(0,param_1,param_1,param_3,param_4);
    if ((iVar1 != 0) && (uVar2 = 1, *(int *)(param_1 + 0x10) != 0)) {
      if (*(int *)(param_3 + 0x10) == 0) {
        UNRECOVERED_JUMPTABLE = FUN_100c22b40;
      }
      else {
        UNRECOVERED_JUMPTABLE = FUN_100c23090;
      }
                    /* WARNING: Could not recover jumptable at 0x000100c29e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
      return uVar2;
    }
  }
  return uVar2;
}

