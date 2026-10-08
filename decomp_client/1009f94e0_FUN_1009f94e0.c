
void FUN_1009f94e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102280900;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001009f94fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x20))();
    return;
  }
  return;
}

