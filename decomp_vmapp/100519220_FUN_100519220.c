
void FUN_100519220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc49f8;
  QMutex::QMutex((QMutex *)(param_1 + 1),0);
  param_1[2] = PTR_shared_null_100ba2188;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 6),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 7));
  return;
}

