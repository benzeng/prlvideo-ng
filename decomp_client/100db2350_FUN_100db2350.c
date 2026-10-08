
void FUN_100db2350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10230fd38;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100db236b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 8))();
    return;
  }
  return;
}

