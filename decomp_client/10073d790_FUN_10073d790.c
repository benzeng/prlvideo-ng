
void FUN_10073d790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102274ce8;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010073d7ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x20))();
    return;
  }
  return;
}

