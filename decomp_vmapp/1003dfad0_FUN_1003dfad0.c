
void FUN_1003dfad0(long *param_1)

{
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001003dfaf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[4] + 0x28))();
    return;
  }
  return;
}

