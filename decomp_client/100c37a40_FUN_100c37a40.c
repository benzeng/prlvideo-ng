
undefined8 FUN_100c37a40(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0xe8) == 0) {
    uVar1 = FUN_100c3c270();
    return uVar1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c37a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

