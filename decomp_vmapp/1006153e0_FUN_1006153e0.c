
void FUN_1006153e0(undefined8 *param_1)

{
  *param_1 = PTR_shared_null_100ba2188;
  param_1[3] = PTR_shared_null_100ba20d0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[8] = param_1 + 8;
  param_1[9] = param_1 + 8;
  param_1[10] = param_1 + 10;
  param_1[0xb] = param_1 + 10;
  QMutex::QMutex((QMutex *)(param_1 + 0xc),1);
  param_1[0xd] = PTR_shared_null_100ba2180;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = param_1 + 0xf;
  FUN_1006198a0(param_1);
  FUN_100615560();
  return;
}

