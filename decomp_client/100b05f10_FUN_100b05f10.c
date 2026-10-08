
void FUN_100b05f10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022cf1b8;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100b05f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x88))();
    return;
  }
  return;
}

