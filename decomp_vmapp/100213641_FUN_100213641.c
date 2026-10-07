
void FUN_100213641(undefined8 param_1,undefined8 param_2)

{
  byte in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x0001002136a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_1002136cb + (ulong)in_AL * -4))
            (param_1,param_2,&LAB_1002136cb + (ulong)in_AL * -4);
  return;
}

