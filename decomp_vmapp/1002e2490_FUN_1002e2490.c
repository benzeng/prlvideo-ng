
void FUN_1002e2490(QThread *param_1,undefined8 param_2)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_101116f40;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x18) = 0x100;
  param_1[0x1a] = (QThread)0x0;
  QMutex::QMutex((QMutex *)(param_1 + 0x20),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x28));
  return;
}

