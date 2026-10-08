
void FUN_10061cad0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022748a8;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010061caeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 8))();
    return;
  }
  return;
}

