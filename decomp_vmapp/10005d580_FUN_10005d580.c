
void FUN_10005d580(QThread *param_1,undefined8 param_2)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100ba8588;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_100ba2188;
  QMutex::QMutex((QMutex *)(param_1 + 0x20),0);
  return;
}

