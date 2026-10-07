
void FUN_10067d360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc9a08;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x60))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010067d394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 0x30))();
    return;
  }
  return;
}

