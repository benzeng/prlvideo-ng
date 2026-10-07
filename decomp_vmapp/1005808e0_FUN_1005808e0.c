
void FUN_1005808e0(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x3c0);
                    /* WARNING: Could not recover jumptable at 0x000100580901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (plVar1,param_1 + 0x50,(*(undefined8 **)(param_1 + 0x10))[3],UNRECOVERED_JUMPTABLE);
  return;
}

