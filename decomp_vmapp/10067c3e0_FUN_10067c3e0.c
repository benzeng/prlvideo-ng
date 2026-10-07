
void FUN_10067c3e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc9970;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010067c3fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}

