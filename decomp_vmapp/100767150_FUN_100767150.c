
void FUN_100767150(QThread *param_1)

{
  ulong uVar1;
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bced50;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = FUN_1007784a0();
  *(ulong *)(param_1 + 0x20) = uVar1 / 1000000;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  param_1[0x38] = (QThread)0x0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined ***)param_1 = &PTR_metaObject_1011a5720;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x50] = (QThread)0x0;
  return;
}

