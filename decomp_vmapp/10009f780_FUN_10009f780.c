
void FUN_10009f780(void)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if (*(long *)(lVar1 + 0x40) == 0) {
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("","vm",3,"failed to obtain Desktop Utilities object from toolDsp");
      }
    }
    else {
      FUN_100025c60();
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",3,"failed to show crystal mode because toolDsp is no avaiable");
  }
  return;
}

