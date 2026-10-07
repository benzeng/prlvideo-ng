
void FUN_10010b4d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10110d128;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010010b4eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 8))();
    return;
  }
  return;
}

