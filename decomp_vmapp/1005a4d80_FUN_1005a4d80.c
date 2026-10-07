
void FUN_1005a4d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x10) + 0x1d8);
                    /* WARNING: Could not recover jumptable at 0x0001005a4d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18),param_3,
             UNRECOVERED_JUMPTABLE);
  return;
}

