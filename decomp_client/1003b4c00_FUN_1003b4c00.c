
char * FUN_1003b4c00(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined **ppuVar2;
  
  switch(param_2) {
  case 1:
    ppuVar2 = &PTR_s_General_10226e458;
    break;
  case 2:
    ppuVar2 = &PTR_s_Boot_Order_10226e460;
    break;
  case 3:
    ppuVar2 = &PTR_s_More_Options_10226e478;
    break;
  case 4:
    ppuVar2 = &PTR_s_Sharing_10226e488;
    break;
  case 5:
    ppuVar2 = &PTR_s_Backup_10226e498;
    break;
  case 6:
    ppuVar2 = &PTR_s_Modality_10226e4b8;
    break;
  case 7:
    ppuVar2 = &PTR_s_Security_10226e510;
    break;
  case 8:
    ppuVar2 = &PTR_s_Optimization_10226e538;
    break;
  case 9:
    ppuVar2 = &PTR_s_Applications_10226e4d8;
    break;
  case 10:
    ppuVar2 = &PTR_s_Graphics_10226e588;
    break;
  case 0xb:
    ppuVar2 = &PTR_s_Floppy_Disk_10226e598;
    break;
  case 0xc:
    ppuVar2 = &PTR_s_CD_DVD_10226e5a0;
    break;
  case 0xd:
    ppuVar2 = &PTR_s_Hard_Disk_10226e5a8;
    break;
  case 0xe:
    ppuVar2 = &PTR_s_Serial_Port_10226e5b8;
    break;
  case 0xf:
    ppuVar2 = &PTR_s_Printer_10226e5c0;
    break;
  case 0x10:
    ppuVar2 = &PTR_s_Network_10226e5c8;
    break;
  case 0x11:
    ppuVar2 = &PTR_s_Sound_10226e5d0;
    break;
  case 0x12:
    cVar1 = FUN_100d80630(1);
    if (cVar1 == '\0') {
      ppuVar2 = &PTR_s_USB___Bluetooth_10226e5e0;
    }
    else {
      ppuVar2 = &PTR_s_USB_10226e5e8;
    }
    break;
  case 0x13:
    ppuVar2 = &PTR_s_Startup_and_Shutdown_10226e548;
    break;
  case 0x14:
    ppuVar2 = &PTR_s_Full_Screen_10226e4c0;
    break;
  case 0x15:
    ppuVar2 = &PTR_s_Shared_Printers_10226e608;
    break;
  case 0x16:
    ppuVar2 = &PTR_s_Mouse___Keyboard_10226e610;
    break;
  case 0x17:
    ppuVar2 = &PTR_s_CPU___Memory_10226e618;
    break;
  default:
    *(undefined **)param_1 = PTR_shared_null_1021e1288;
    return param_1;
  case 0x19:
    cVar1 = FUN_100d80630(1);
    if (cVar1 == '\0') {
      ppuVar2 = &PTR_s_Web___Email_10226e4e0;
    }
    else {
      ppuVar2 = &PTR_s_Web_10226e4e8;
    }
    break;
  case 0x1a:
    ppuVar2 = &PTR_s_Travel_Mode_10226e4f8;
    break;
  case 0x1b:
    ppuVar2 = &PTR_s_Dev_Settings_10226e518;
    break;
  case 0x1c:
    ppuVar2 = &PTR_s_Maintenance_10226e4f0;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,(int)*ppuVar2);
  return param_1;
}

