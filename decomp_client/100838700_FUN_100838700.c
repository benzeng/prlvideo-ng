
void FUN_100838700(long *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_100436390();
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010083871b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))();
      return;
    }
  }
  return;
}

