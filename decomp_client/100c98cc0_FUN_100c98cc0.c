
undefined8 FUN_100c98cc0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((*(long *)(param_1 + 8) != 0) &&
      (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x30),
      UNRECOVERED_JUMPTABLE != (code *)0x0)) && (*(int *)(param_1 + 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100c98ce1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

