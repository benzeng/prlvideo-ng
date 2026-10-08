
undefined8 FUN_1001aec10(undefined8 param_1,CHwUsbDevice *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  CVmExternalDevices *pCVar5;
  
  if (param_2 == (CHwUsbDevice *)0x0) {
    uVar4 = 0;
  }
  else {
    FUN_10018c2b0(param_1);
    lVar3 = CVmConfiguration::getVmHardwareList();
    if (*(int *)(*(long *)(lVar3 + 0x1e0) + 0xc) == *(int *)(*(long *)(lVar3 + 0x1e0) + 8)) {
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_10018a9d0(param_1);
      if (iVar2 == 0x30000004) {
        uVar4 = FUN_10018d490(param_1);
        uVar4 = FUN_10016f500(uVar4);
        cVar1 = FUN_10061b4d0(uVar4,0x80);
        uVar4 = 1;
        if (cVar1 != '\0') {
          FUN_10018c2b0(param_1);
          CVmConfiguration::getVmSettings();
          CVmSettings::getUsbController();
          pCVar5 = (CVmExternalDevices *)CVmUsbController::getExternalDevices();
          uVar4 = CXmlUsbHelper::IsUsbDeviceAllowed(param_2,pCVar5);
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

