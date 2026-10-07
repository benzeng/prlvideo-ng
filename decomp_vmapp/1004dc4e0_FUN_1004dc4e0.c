
void FUN_1004dc4e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc35f0;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004dc4fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}

