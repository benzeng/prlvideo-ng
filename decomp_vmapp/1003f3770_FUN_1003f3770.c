
void FUN_1003f3770(long *param_1)

{
  if ((int)param_1[0x12] != 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001003f378b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003f37a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
  return;
}

