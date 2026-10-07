
void FUN_10053a020(QThread *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bc5208;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  QSemaphore::QSemaphore((QSemaphore *)(param_1 + 0x38),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x40),0);
  puVar1 = PTR_shared_null_100ba20d0;
  auVar2._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar2._0_8_ = PTR_shared_null_100ba20d0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar2;
  *(undefined **)(param_1 + 0x58) = puVar1;
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_100bc5280;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  param_1[0x76] = (QThread)0x0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

