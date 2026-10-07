
void FUN_10057e220(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x10);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010057e241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_2,param_1 + 0x1128,UNRECOVERED_JUMPTABLE);
  return;
}

