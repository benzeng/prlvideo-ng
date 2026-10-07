
void FUN_10002e050(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(*param_1 + 0x1a48) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010002e078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(*param_1 + 0x1a48),0x10,FUN_10002dfc0,param_1,UNRECOVERED_JUMPTABLE);
  return;
}

