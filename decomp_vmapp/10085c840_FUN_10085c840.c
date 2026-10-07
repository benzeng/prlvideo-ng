
undefined8 FUN_10085c840(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0xe8) == 0) {
    uVar1 = FUN_100861070();
    return uVar1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010085c85e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

