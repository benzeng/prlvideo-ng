
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1006539d0(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  uint local_1c;
  
  cVar1 = FUN_1006d81f0(1);
  if (cVar1 == '\0') {
    lVar3 = FUN_1007dc310();
    uVar4 = FUN_1007dc350(lVar3 - _DAT_1011bcb58);
    if (uVar4 < 5) {
      bVar5 = DAT_1011bcb60 != '\0';
    }
    else {
      DAT_1011bcb60 = '\0';
      _DAT_1011bcb58 = lVar3;
      lVar3 = _IOServiceMatching("com_parallels_usb_control");
      if (lVar3 == 0) {
        bVar5 = false;
      }
      else {
        iVar2 = _IOServiceGetMatchingService
                          (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,lVar3);
        if (iVar2 == 0) {
          bVar5 = false;
        }
        else {
          local_1c = 0;
          lVar3 = _IORegistryEntryCreateCFProperty
                            (iVar2,&cf_PrlUsbConnectVersion,
                             *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,0);
          if (lVar3 != 0) {
            _CFNumberGetValue(lVar3,3,&local_1c);
            _CFRelease(lVar3);
          }
          _IOObjectRelease(iVar2);
          bVar5 = 0x1010 < local_1c;
          DAT_1011bcb60 = 0x1010 < local_1c;
        }
      }
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

