
void FUN_1003fbeb0(QThread *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bbfc20;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_100ba20d0;
  QMutex::QMutex((QMutex *)(param_1 + 0x30),0);
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  param_1[0x28] = (QThread)0x0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  *(undefined4 *)(param_1 + 0x70) = param_5;
  *(undefined4 *)(param_1 + 0x74) = param_6;
  return;
}

