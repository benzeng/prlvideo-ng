
/* CXmlUsbHelper::IsUsbDeviceAllowed(CVmUsbDevice const*, CVmExternalDevices const*) */

undefined1 CXmlUsbHelper::IsUsbDeviceAllowed(CVmUsbDevice *param_1,CVmExternalDevices *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = CVmUsbDevice::getUsbType();
  uVar1 = 1;
  if (999 < iVar3) {
    if (iVar3 < 2000) {
      if (iVar3 - 1000U < 3) {
LAB_100023fa1:
        uVar1 = CVmExternalDevices::isSmartPhones();
        return uVar1;
      }
      if (iVar3 != 0x3eb) goto switchD_100023f63_default;
      goto switchD_100023f63_caseD_8;
    }
    if (iVar3 == 2000) goto LAB_100023fa1;
    if (iVar3 != 3000) goto switchD_100023f63_default;
switchD_100023f63_caseD_0:
    cVar2 = CVmExternalDevices::isOther();
    goto LAB_10002400e;
  }
  switch(iVar3) {
  case 0:
    goto switchD_100023f63_caseD_0;
  case 1:
    break;
  case 2:
    cVar2 = CVmExternalDevices::isVideo();
    goto LAB_10002400e;
  case 3:
    uVar1 = CVmExternalDevices::isVideo();
    break;
  case 4:
    uVar1 = CVmExternalDevices::isAudio();
    break;
  case 5:
    cVar2 = CVmExternalDevices::isPrinters();
    goto LAB_10002400e;
  case 6:
    uVar1 = CVmExternalDevices::isPrinters();
    break;
  case 7:
    cVar2 = CVmExternalDevices::isCommunication();
    goto LAB_10002400e;
  case 8:
  case 9:
switchD_100023f63_caseD_8:
    uVar1 = CVmExternalDevices::isCommunication();
    break;
  case 10:
  case 0xb:
    cVar2 = CVmExternalDevices::isHumanInterfaces();
LAB_10002400e:
    if (cVar2 == '\0') {
      uVar1 = IsUsbVirtualDevice(param_1);
    }
    break;
  case 0xc:
    uVar1 = CVmExternalDevices::isSmartCards();
    break;
  case 0xd:
  case 0xe:
    uVar1 = CVmExternalDevices::isDisks();
    break;
  default:
switchD_100023f63_default:
    uVar1 = 0;
  }
  return uVar1;
}

