
void FUN_10009c930(void)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if (*(long *)(lVar1 + 0x50) != 0) {
      FUN_100035d40();
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

