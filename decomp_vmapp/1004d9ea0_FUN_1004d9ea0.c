
void FUN_1004d9ea0(undefined8 *param_1)

{
  FUN_1004e5bf0();
  *param_1 = &PTR_FUN_100bc3168;
  QMutex::QMutex((QMutex *)(param_1 + 8),0);
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = param_1 + 10;
  return;
}

