
void FUN_10003a660(void)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if (*(long *)(lVar1 + 0x20) == 0) {
      FUN_1008e3970("SSO_TOOL","vm",0,"Can\'t find Utility Tool");
    }
    else {
      FUN_1004c2f50(*(long *)(lVar1 + 0x20),0x15,0,0,1,0);
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

