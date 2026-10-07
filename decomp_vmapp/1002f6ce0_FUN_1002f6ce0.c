
void FUN_1002f6ce0(QThread *param_1,undefined8 param_2)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bb6200;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 0xd8),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0xe0));
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  param_1[0x68] = (QThread)0x0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

