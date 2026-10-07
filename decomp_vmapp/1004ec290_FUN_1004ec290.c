
void FUN_1004ec290(QThread *param_1,undefined8 param_2,undefined8 param_3)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bc3920;
  param_1[0x18] = (QThread)0x0;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_100ba2188;
  QMutex::QMutex((QMutex *)(param_1 + 0x28),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x30),0);
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}

