
void FUN_1001072e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10226d5e0;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001072fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x20))();
    return;
  }
  return;
}

