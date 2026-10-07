
void FUN_1004b3ca0(undefined8 *param_1,QString *param_2)

{
  *param_1 = PTR_shared_null_100ba2188;
  QMutex::QMutex((QMutex *)(param_1 + 1),0);
  param_1[3] = PTR_shared_null_100ba20d0;
  FUN_1004b3fa0(param_1);
  param_1[2] = 0;
  QString::operator=((QString *)(param_1 + 3),param_2);
  return;
}

