
void FUN_100c48040(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long in_R9;
  
  if (((*(byte *)(in_R9 + 0x74) & 0x40) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(in_R9 + 0x10) + 0x60),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100c48067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_100c47bb0();
  return;
}

