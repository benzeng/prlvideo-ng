
void FUN_100567e60(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_100bc5f10;
  QMutex::QMutex((QMutex *)(param_1 + 1),0);
  param_1[2] = param_2;
  param_1[3] = 0;
  return;
}

