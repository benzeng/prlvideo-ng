
void FUN_1000f5aa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10110ce08;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000f5abb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 8))();
    return;
  }
  return;
}

