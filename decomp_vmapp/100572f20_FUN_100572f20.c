
void FUN_100572f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x10);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x000100572f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x1168,param_3,UNRECOVERED_JUMPTABLE);
  return;
}

