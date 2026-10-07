
void FUN_10022a65a(undefined8 param_1,undefined8 param_2)

{
  byte in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x00010022a6c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_10022a6e3 + (ulong)in_AL * -4))
            (param_1,param_2,&LAB_10022a6e3 + (ulong)in_AL * -4);
  return;
}

