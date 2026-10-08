
void FUN_100a6c2e0(QReadWriteLock *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined4 local_30 [2];
  
  local_30[0] = param_2;
  QReadWriteLock::QReadWriteLock(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  param_1[0x10] = (QReadWriteLock)0x1;
  auVar2._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar2._0_8_ = PTR_shared_null_1021e15d0;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar2;
  puVar1 = (undefined4 *)FUN_100a6e050(param_1 + 0x20,local_30);
  *puVar1 = param_2;
  return;
}

