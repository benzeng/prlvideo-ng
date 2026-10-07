
void FUN_10000dbf0(QThread *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100ba7a80;
  *(undefined4 *)(param_1 + 0x10) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_1008e3970("","vm",0,"[CMacApp::CMacApp]");
  FUN_10000dcc0(param_1);
  QThread::start(param_1,7);
  return;
}

