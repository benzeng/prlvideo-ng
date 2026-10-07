
undefined8 FUN_1008793e0(long *param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_100887ce0(0x25,0x84,0x43,"dso_lib.c",0x175);
  }
  else if (((*(byte *)((long)param_1 + 0x14) & 1) == 0) &&
          ((UNRECOVERED_JUMPTABLE = (code *)param_1[6], UNRECOVERED_JUMPTABLE != (code *)0x0 ||
           (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38),
           UNRECOVERED_JUMPTABLE != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x00010087940a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

