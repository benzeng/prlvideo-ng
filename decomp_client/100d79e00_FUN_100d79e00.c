
void FUN_100d79e00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10225be48;
  if (*(int *)(param_1 + 1) != -1) {
    _AudioServicesDisposeSystemSoundID();
  }
  if (*(int *)((long)param_1 + 0xc) != -1) {
    _AudioServicesDisposeSystemSoundID();
  }
  operator_delete(param_1);
  return;
}

