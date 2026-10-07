
void FUN_1007b79e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1011a5cf8;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001007b79fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 8))();
    return;
  }
  return;
}

