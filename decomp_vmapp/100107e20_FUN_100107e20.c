
void FUN_100107e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100ba9170;
  QMutex::QMutex((QMutex *)(param_1 + 1),0);
  QMutex::QMutex((QMutex *)(param_1 + 2),0);
  param_1[3] = PTR_shared_null_100ba2188;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

