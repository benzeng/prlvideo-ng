
void FUN_1004b26d0(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  undefined4 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1f8);
  uVar1 = FUN_10044e480();
  uVar2 = FUN_10044b4d0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001004b270c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,uVar2);
  return;
}

