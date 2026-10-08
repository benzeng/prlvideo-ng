
void FUN_10083d180(long *param_1,int param_2,int param_3)

{
  if (param_2 != 0 || param_3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010083d18e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1d0))();
  return;
}

