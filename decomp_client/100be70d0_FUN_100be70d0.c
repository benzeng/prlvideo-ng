
void FUN_100be70d0(long param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x000100be70eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,6,param_2,UNRECOVERED_JUMPTABLE);
  return;
}

