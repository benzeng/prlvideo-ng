
undefined8 FUN_10072f8b0(long *param_1,long *param_2,long param_3,long param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) && (*param_1 == *param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00010072f8de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  return 0;
}

