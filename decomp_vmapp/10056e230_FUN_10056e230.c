
void FUN_10056e230(long *param_1)

{
  FUN_1005abf40(*param_1 + 0x10,FUN_10056e270,param_1,(int)param_1[2],param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010056e26b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x110))((long *)*param_1,0);
  return;
}

