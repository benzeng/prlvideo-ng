
void FUN_10008e910(QThread *param_1)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100ba8780;
  QMutex::QMutex((QMutex *)(param_1 + 0xb0),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0xb8));
  *(QThread **)(param_1 + 0xd0) = param_1 + 0xd0;
  *(QThread **)(param_1 + 0xd8) = param_1 + 0xd0;
  *(QThread **)(param_1 + 0xe0) = param_1 + 0xe0;
  *(QThread **)(param_1 + 0xe8) = param_1 + 0xe0;
  *(QThread **)(param_1 + 0xc0) = param_1 + 0xc0;
  *(QThread **)(param_1 + 200) = param_1 + 0xc0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  param_1[0x81] = (QThread)0x0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x5c] = (QThread)0x0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

