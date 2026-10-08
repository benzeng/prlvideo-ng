
void FUN_100db26d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10225c170;
  param_1[6] = 0;
  param_1[9] = &PTR_FUN_10230fdb0;
  param_1[10] = param_1;
  QMutex::QMutex((QMutex *)(param_1 + 0xb),0);
  param_1[0xc] = PTR_shared_null_1021e1288;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[0xe] = 0;
  return;
}

