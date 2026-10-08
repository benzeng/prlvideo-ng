
void FUN_1000e74e0(int param_1,void *param_2,long param_3,long *param_4,undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  if (param_1 == 2) {
    *(bool *)param_5 =
         (param_4[1] == *(long *)((long)param_2 + 0x18) || *param_4 == 0) &&
         *param_4 == *(long *)((long)param_2 + 0x10);
  }
  else {
    if (param_1 == 1) {
      UNRECOVERED_JUMPTABLE = *(code **)((long)param_2 + 0x10);
      plVar1 = (long *)(param_3 + *(long *)((long)param_2 + 0x18));
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1 + -1);
      }
                    /* WARNING: Could not recover jumptable at 0x0001000e750a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,param_4[1]);
      return;
    }
    if ((param_1 == 0) && (param_2 != (void *)0x0)) {
      operator_delete(param_2);
      return;
    }
  }
  return;
}

