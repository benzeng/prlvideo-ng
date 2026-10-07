
undefined4 FUN_1005d1d50(long param_1,QString *param_2)

{
  undefined4 uVar1;
  QFileInfo local_20 [8];
  
  QFileInfo::QFileInfo(local_20,param_2);
  QMutex::lock();
  uVar1 = FUN_1005b7ea0(param_1 + 0x20,local_20);
  QMutex::unlock();
  QFileInfo::~QFileInfo(local_20);
  return uVar1;
}

