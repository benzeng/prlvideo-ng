
void FUN_1003e1200(long *param_1)

{
  if ((*(int *)((long)param_1 + 0x7c) == 0) && ((int)param_1[0x11] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001003e1217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e1231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x268))(param_1,0x23a00,param_1[0xc]);
  return;
}

