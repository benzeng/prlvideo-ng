
void FUN_100264750(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000100264773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2);
    return;
  }
  return;
}

