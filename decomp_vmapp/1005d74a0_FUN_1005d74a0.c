
void FUN_1005d74a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10111e270;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001005d74bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 8))();
    return;
  }
  return;
}

