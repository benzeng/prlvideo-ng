
void FUN_1005f7b70(undefined8 *param_1)

{
  FUN_1005f6050();
  *param_1 = &PTR_FUN_100bc7710;
  FUN_1007d6870((long)param_1 + 0x62);
  FUN_1007d6870((long)param_1 + 0x72);
  *(undefined1 *)((long)param_1 + 0x82) = 0;
  param_1[0x11] = param_1 + 0x11;
  param_1[0x12] = param_1 + 0x11;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_1007d6870(param_1 + 0x15);
  param_1[0x17] = PTR_shared_null_100ba2188;
  QDateTime::QDateTime((QDateTime *)(param_1 + 0x1a));
  param_1[0x1b] = param_1 + 0x1b;
  param_1[0x1c] = param_1 + 0x1b;
  param_1[0x1d] = 0;
  return;
}

