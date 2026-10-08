
void FUN_1009cbfd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10227e2a0;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001009cbfeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x20))();
    return;
  }
  return;
}

