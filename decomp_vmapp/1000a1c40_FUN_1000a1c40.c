
void FUN_1000a1c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if ((*(long *)(lVar1 + 0x68) != 0) && (lVar1 = *(long *)(lVar1 + 0x68) + -0x10, lVar1 != 0)) {
      FUN_1004a6c50(lVar1,param_3);
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

