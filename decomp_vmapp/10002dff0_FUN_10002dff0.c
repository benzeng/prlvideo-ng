
void FUN_10002dff0(long *param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *param_1 = param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_2 + 0x1a48) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010002e018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(param_2 + 0x1a48),0x10,FUN_10002dfc0,param_1,UNRECOVERED_JUMPTABLE);
  return;
}

