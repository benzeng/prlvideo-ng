
void FUN_100569a70(long *param_1)

{
  (**(code **)(*param_1 + 0x3f8))();
                    /* WARNING: Could not recover jumptable at 0x000100569a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3f0))(param_1);
  return;
}

