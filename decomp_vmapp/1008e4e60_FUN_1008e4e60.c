
void FUN_1008e4e60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1011b6068;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001008e4e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 8))();
    return;
  }
  return;
}

