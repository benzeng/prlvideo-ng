
void FUN_100d2ed10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10230f778;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100d2ed2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 8))();
    return;
  }
  return;
}

