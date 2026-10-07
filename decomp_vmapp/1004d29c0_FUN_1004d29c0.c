
bool FUN_1004d29c0(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  undefined1 local_24 [4];
  
  QMutex::lock();
  bVar1 = *(char *)(*(long *)(*param_3 + 0x10) + 0x48) == '\0';
  if (bVar1) {
    FUN_1004d4e80(param_1 + 0x20,local_24,param_3);
    *(long *)(DAT_1011cc978 + 0xf0) = *(long *)(DAT_1011cc978 + 0xf0) + 1;
    QMutex::unlock();
  }
  else {
    QMutex::unlock();
  }
  return bVar1;
}

