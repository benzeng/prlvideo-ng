
void FUN_1000a1f90(void)

{
  long lVar1;
  char cVar2;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if ((*(long *)(lVar1 + 0x100) != 0) && (*(long *)(lVar1 + 0x100) != 0x10)) {
      cVar2 = FUN_1004acee0();
      if (cVar2 != '\0') {
        FUN_1000a0030();
      }
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

