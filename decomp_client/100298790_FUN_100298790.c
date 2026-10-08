
void FUN_100298790(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  uVar1 = FUN_100298430();
                    /* WARNING: Could not recover jumptable at 0x0001002987b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

