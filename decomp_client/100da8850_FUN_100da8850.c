
undefined8 * FUN_100da8850(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (999 < param_2) {
    if (param_2 < 3000) {
      if (param_2 < 0x3ea) {
        if (param_2 == 1000) {
          pcVar3 = "PUDT_APPLE_IPHONE";
          iVar2 = 0x11;
          goto LAB_100da8905;
        }
        if (param_2 != 0x3e9) goto switchD_100da887a_default;
        pcVar3 = "PUDT_APPLE_IPOD";
      }
      else {
        if (param_2 != 0x3ea) {
          if (param_2 == 2000) {
            pcVar3 = "PUDT_RIM_BLACKBERRY";
            iVar2 = 0x13;
            goto LAB_100da8905;
          }
          goto switchD_100da887a_default;
        }
        pcVar3 = "PUDT_APPLE_IPAD";
      }
    }
    else {
      if (param_2 != 3000) goto switchD_100da887a_default;
      pcVar3 = "PUDT_GARMIN_GPS";
    }
    goto LAB_100da8900;
  }
  switch(param_2) {
  case 0:
    pcVar3 = "PUDT_OTHER";
    iVar2 = 10;
    break;
  case 1:
    pcVar3 = "PUDT_HUB";
    iVar2 = 8;
    break;
  case 2:
    pcVar3 = "PUDT_VIDEO";
    iVar2 = 10;
    break;
  case 3:
    pcVar3 = "PUDT_FOTO";
    iVar2 = 9;
    break;
  case 4:
    pcVar3 = "PUDT_AUDIO";
    iVar2 = 10;
    break;
  case 5:
    pcVar3 = "PUDT_PRINTER";
    iVar2 = 0xc;
    break;
  case 6:
    pcVar3 = "PUDT_SCANNER";
    iVar2 = 0xc;
    break;
  case 7:
    pcVar3 = "PUDT_BLUETOOTH";
    iVar2 = 0xe;
    break;
  case 8:
    pcVar3 = "PUDT_WIRELESS";
    iVar2 = 0xd;
    break;
  case 9:
    pcVar3 = "PUDT_COMMUNICATION";
    iVar2 = 0x12;
    break;
  case 10:
    pcVar3 = "PUDT_KEYBOARD";
    iVar2 = 0xd;
    break;
  case 0xb:
    pcVar3 = "PUDT_MOUSE";
    iVar2 = 10;
    break;
  case 0xc:
    pcVar3 = "PUDT_SMART_CARD";
    goto LAB_100da8900;
  case 0xd:
    pcVar3 = "PUDT_DISK_STORAGE";
    iVar2 = 0x11;
    break;
  case 0xe:
    pcVar3 = "PUDT_ATAPI_STORAGE";
    iVar2 = 0x12;
    break;
  default:
switchD_100da887a_default:
    pcVar3 = "INCORRECT VALUE";
LAB_100da8900:
    iVar2 = 0xf;
  }
LAB_100da8905:
  uVar1 = QString::fromAscii_helper(pcVar3,iVar2);
  *param_1 = uVar1;
  return param_1;
}

