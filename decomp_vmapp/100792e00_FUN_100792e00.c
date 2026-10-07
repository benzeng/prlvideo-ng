
void FUN_100792e00(QReadWriteLock *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  QReadWriteLock::QReadWriteLock(param_1,0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = (QReadWriteLock)0x1;
  auVar2._8_4_ = (int)PTR_shared_null_100ba2180;
  auVar2._0_8_ = PTR_shared_null_100ba2180;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_100ba2180 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar2;
  uVar1 = param_2;
  if ((param_2 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar1 = param_2 | 1;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0x10] = *(QReadWriteLock *)(param_2 + 0x10);
  FUN_1007949a0(param_1 + 0x18,param_2 + 0x18);
  FUN_100794a70(param_1 + 0x20,param_2 + 0x20);
  if ((uVar1 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return;
}

