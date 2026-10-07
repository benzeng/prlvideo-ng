
void FUN_10009aa20(char param_1)

{
  long lVar1;
  char cVar2;
  
  lVar1 = DAT_1011c3698 + 0x1a70;
  if (param_1 != '\0') {
    FUN_10009aa90(lVar1,6,0);
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVirtualPrintersInfo();
  cVar2 = CVmVirtualPrintersInfo::isUseHostPrinters();
  if (cVar2 != '\0') {
    FUN_10009b520(lVar1,7);
  }
  FUN_10009aa90(lVar1,5,0);
  return;
}

