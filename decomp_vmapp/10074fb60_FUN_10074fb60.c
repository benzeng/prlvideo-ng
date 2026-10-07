
undefined1 FUN_10074fb60(long *param_1)

{
  undefined1 uVar1;
  
  QMutex::lock();
  uVar1 = 1;
  if (DAT_1011ccb78 == '\0') {
    DAT_1011ccb78 = (**(code **)(*param_1 + 0x28))(param_1);
    if (DAT_1011ccb78 == '\0') {
      uVar1 = 0;
      FUN_1008e3970("","Compression",0,"CCompressionEngine::init_engine() failed");
    }
  }
  QMutex::unlock();
  return uVar1;
}

