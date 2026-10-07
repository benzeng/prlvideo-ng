
void FUN_10009c9b0(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVirtualPrintersInfo();
  cVar2 = CVmVirtualPrintersInfo::isUseHostPrinters();
  if (cVar2 == '\0') {
    uVar4 = 8;
  }
  else {
    FUN_1000996b0(param_1);
    uVar4 = 7;
  }
  FUN_10009b520(param_1,uVar4);
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    lVar1 = *(long *)(lVar1 + 0x50);
    if (lVar1 != 0) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVirtualPrintersInfo();
      uVar3 = CVmVirtualPrintersInfo::isUseHostPrinters();
      FUN_1000362f0(lVar1,uVar3);
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

