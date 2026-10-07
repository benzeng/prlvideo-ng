
void FUN_100539c80(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 1),0);
  param_1[2] = PTR_shared_null_100ba2188;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  return;
}

