
void FUN_1002ef400(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x10) + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x0001002ef419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x60),param_3,
             UNRECOVERED_JUMPTABLE);
  return;
}

