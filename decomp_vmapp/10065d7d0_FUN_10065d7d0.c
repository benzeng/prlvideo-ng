
void FUN_10065d7d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10116d1a8;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010065d7eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x88))();
    return;
  }
  return;
}

