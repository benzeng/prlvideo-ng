
void FUN_1004f46d0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_100bc3aa8;
  QMutex::QMutex((QMutex *)(param_1 + 2),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 3));
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

