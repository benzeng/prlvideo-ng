
void FUN_100b05e90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022cf158;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100b05eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x88))();
    return;
  }
  return;
}

