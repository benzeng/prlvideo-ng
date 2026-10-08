
void FUN_100946f69(undefined8 param_1,undefined8 param_2)

{
  byte in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x000100946fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_100946ff3 + (ulong)in_AL * -4))
            (param_1,param_2,&LAB_100946ff3 + (ulong)in_AL * -4);
  return;
}

