
void FUN_100519c60(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 1),0);
  param_1[2] = PTR_shared_null_100ba20d8;
  return;
}

