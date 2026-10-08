
void FUN_1002579a0(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  uVar1 = FUN_100256c10();
                    /* WARNING: Could not recover jumptable at 0x0001002579c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

