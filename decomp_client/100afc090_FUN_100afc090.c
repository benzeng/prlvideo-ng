
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100afc090(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  uint local_1c;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    lVar3 = FUN_100ddd8f0();
    uVar4 = FUN_100ddd930(lVar3 - _DAT_102313ba8);
    if (uVar4 < 5) {
      bVar5 = DAT_102313bb0 != '\0';
    }
    else {
      DAT_102313bb0 = '\0';
      _DAT_102313ba8 = lVar3;
      lVar3 = _IOServiceMatching("com_parallels_usb_control");
      if (lVar3 == 0) {
        bVar5 = false;
      }
      else {
        iVar2 = _IOServiceGetMatchingService
                          (*(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0,lVar3);
        if (iVar2 == 0) {
          bVar5 = false;
        }
        else {
          local_1c = 0;
          lVar3 = _IORegistryEntryCreateCFProperty
                            (iVar2,&cf_PrlUsbConnectVersion,
                             *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,0);
          if (lVar3 != 0) {
            _CFNumberGetValue(lVar3,3,&local_1c);
            _CFRelease(lVar3);
          }
          _IOObjectRelease(iVar2);
          bVar5 = 0x1010 < local_1c;
          DAT_102313bb0 = 0x1010 < local_1c;
        }
      }
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

