
void FUN_1001e43f0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 1),1);
  param_1[2] = PTR_shared_null_1021e12f0;
  *(undefined1 *)(param_1 + 3) = 0;
  CAppVersion::CAppVersion((CAppVersion *)((long)param_1 + 0x1c));
  return;
}

