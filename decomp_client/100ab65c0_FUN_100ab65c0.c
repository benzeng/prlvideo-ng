
void FUN_100ab65c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022824e8;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100ab65db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 8))();
    return;
  }
  return;
}

