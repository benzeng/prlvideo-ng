
void FUN_1000a0160(undefined8 param_1)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if ((*(long *)(lVar1 + 0xd0) != 0) && (*(long *)(lVar1 + 0xd0) != 0x10)) {
      FUN_10051ea90(param_1);
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

