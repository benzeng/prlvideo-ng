
void FUN_1004b44a0(QThread *param_1,undefined8 param_2)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bc2780;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 0x18),0);
  return;
}

