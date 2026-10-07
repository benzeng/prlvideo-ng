
void FUN_1000f6960(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = &DAT_10110ce78;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  auVar1._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar1._0_8_ = PTR_shared_null_100ba20d0;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x179c) = auVar1;
  QMutex::QMutex((QMutex *)(param_1 + 0x179e),0);
  *param_1 = &PTR_FUN_100ba90a0;
  param_1[0x17a1] = 0;
  param_1[0x17a0] = 0;
  param_1[0x179f] = 0;
  QMutex::lock();
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",3,"CMachODumpBuilder::CMachODumpBuilder()");
  }
  *(undefined2 *)(param_1 + 1) = 0;
  ___bzero(param_1 + 5,0xbcb8);
  QMutex::unlock();
  return;
}

