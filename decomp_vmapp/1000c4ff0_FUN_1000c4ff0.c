
void FUN_1000c4ff0(QThread *param_1,undefined8 param_2)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100ba8dc0;
  *(undefined8 *)(param_1 + 0x148) = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 0x150),0);
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  return;
}

