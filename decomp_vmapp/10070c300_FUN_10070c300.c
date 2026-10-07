
void FUN_10070c300(QThread *param_1,undefined8 param_2)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bce060;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  QThread::start(param_1,7);
  return;
}

