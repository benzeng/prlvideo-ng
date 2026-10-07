
void FUN_100406cb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bbfe88;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = param_1 + 2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = param_1 + 5;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = param_1 + 8;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = param_1 + 0xb;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = param_1 + 0xe;
  QMutex::QMutex((QMutex *)(param_1 + 0x10),0);
  return;
}

