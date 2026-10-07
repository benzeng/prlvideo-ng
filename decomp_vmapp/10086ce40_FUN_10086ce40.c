
void FUN_10086ce40(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long in_R9;
  
  if (((*(byte *)(in_R9 + 0x74) & 0x40) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(in_R9 + 0x10) + 0x60),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010086ce67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_10086c9b0();
  return;
}

