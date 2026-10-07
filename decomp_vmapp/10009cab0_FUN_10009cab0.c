
void FUN_10009cab0(void)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVirtualPrintersInfo();
  cVar2 = CVmVirtualPrintersInfo::isUseHostPrinters();
  if (cVar2 == '\0') {
    FUN_1008e3970("","vm",0,"Virtual Printers feature disabled.");
    return;
  }
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    lVar1 = *(long *)(lVar1 + 0x50);
    if (lVar1 != 0) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVirtualPrintersInfo();
      uVar3 = CVmVirtualPrintersInfo::isSyncDefaultPrinter();
      FUN_100036700(lVar1,uVar3);
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

