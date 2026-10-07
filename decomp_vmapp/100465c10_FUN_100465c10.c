
void FUN_100465c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc12a0;
  param_1[1] = PTR_shared_null_100ba2180;
  QMutex::QMutex((QMutex *)(param_1 + 2),0);
  param_1[4] = 0;
  param_1[3] = 0;
  return;
}

