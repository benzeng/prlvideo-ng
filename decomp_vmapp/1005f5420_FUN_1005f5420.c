
void FUN_1005f5420(undefined8 *param_1)

{
  FUN_1005f4e00();
  *param_1 = &PTR_FUN_100bc7300;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = param_1 + 3;
  QMutex::QMutex((QMutex *)(param_1 + 5),0);
  return;
}

