
void FUN_1000a0030(undefined8 param_1,int param_2)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if (*(long *)(lVar1 + 0x40) != 0) {
      FUN_100024940(*(long *)(lVar1 + 0x40),param_2 != 0);
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

