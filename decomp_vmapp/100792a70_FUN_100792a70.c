
void FUN_100792a70(QReadWriteLock *param_1)

{
  undefined1 auVar1 [16];
  
  QReadWriteLock::QReadWriteLock(param_1,0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = (QReadWriteLock)0x1;
  auVar1._8_4_ = (int)PTR_shared_null_100ba2180;
  auVar1._0_8_ = PTR_shared_null_100ba2180;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba2180 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar1;
  return;
}

