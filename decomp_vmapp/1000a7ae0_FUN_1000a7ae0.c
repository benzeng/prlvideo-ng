
void FUN_1000a7ae0(long param_1,char param_2,char param_3)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if (param_2 == '\0') {
      if ((*(char *)(param_1 + 0x109e4) != '\0') || (param_3 != '\0')) {
        FUN_1004c05a0(lVar1,2);
      }
      *(undefined1 *)(param_1 + 0x109e4) = 0;
    }
    else {
      FUN_1004c05a0(lVar1,1);
      *(undefined1 *)(param_1 + 0x109e4) = 1;
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

