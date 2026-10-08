
void FUN_100d69620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10225b890;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100d6963b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}

