
void FUN_100a6c630(QReadWriteLock *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  QReadWriteLock::QReadWriteLock(param_1,0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = (QReadWriteLock)0x1;
  auVar2._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar2._0_8_ = PTR_shared_null_1021e15d0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar2;
  uVar1 = param_2;
  if ((param_2 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar1 = param_2 | 1;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0x10] = *(QReadWriteLock *)(param_2 + 0x10);
  FUN_100a6e1d0(param_1 + 0x18,param_2 + 0x18);
  FUN_100a6e2a0(param_1 + 0x20,param_2 + 0x20);
  if ((uVar1 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return;
}

