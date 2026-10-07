
void FUN_1004d47b0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x28);
  plVar1 = (long *)(*(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x30));
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004d47dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (plVar1,param_1 + 0x40,*(undefined8 *)(param_1 + 0x48),UNRECOVERED_JUMPTABLE);
  return;
}

