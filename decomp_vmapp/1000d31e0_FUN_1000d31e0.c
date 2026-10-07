
void FUN_1000d31e0(QThread *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100baa220;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_100761480(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x38] = (QThread)0x0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x58] = (QThread)0x1;
  param_1[0x60] = (QThread)0x0;
  FUN_1007d6870(param_1 + 0x61);
  auVar1._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar1._0_8_ = PTR_shared_null_100ba20d0;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x78) = auVar1;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  QReadWriteLock::QReadWriteLock((QReadWriteLock *)(param_1 + 0xa0),0);
  return;
}

