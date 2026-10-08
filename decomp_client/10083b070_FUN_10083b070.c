
void FUN_10083b070(long *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010083b081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d8))();
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010083b08f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    }
  }
  return;
}

