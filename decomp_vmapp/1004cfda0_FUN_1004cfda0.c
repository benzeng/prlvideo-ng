
void FUN_1004cfda0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *param_1 = param_2;
  param_1[1] = PTR_shared_null_100ba2188;
  QMutex::QMutex((QMutex *)(param_1 + 2),0);
  QMutex::QMutex((QMutex *)(param_1 + 3),0);
  puVar1 = PTR_shared_null_100ba2180;
  param_1[4] = PTR_shared_null_100ba2180;
  QMutex::QMutex((QMutex *)(param_1 + 5),0);
  param_1[6] = puVar1;
  return;
}

