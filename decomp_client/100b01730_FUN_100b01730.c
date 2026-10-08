
int FUN_100b01730(void)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  
  local_3c = 0;
  local_40 = 0;
  iVar4 = _CGGetOnlineDisplayList(0,0,&local_40);
  if ((iVar4 != 0) && (local_40 = 0, 0 < DAT_10230ffd0)) {
    FUN_100df99c0("","pvsHostInfo",1,"Cannot retrieve count of online displays");
  }
  lVar6 = _IOServiceMatching("IOFramebufferI2CInterface");
  if ((lVar6 != 0) &&
     (iVar4 = _IOServiceGetMatchingServices
                        (*(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0,lVar6,&local_3c),
     iVar4 == 0)) {
    iVar4 = _IOIteratorNext(local_3c);
    iVar10 = 0;
    if (iVar4 != 0) {
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
      iVar10 = 0;
      do {
        local_34 = 0;
        iVar5 = _IORegistryEntryGetParentEntry(iVar4,"IOService",&local_34);
        bVar2 = false;
        uVar11 = 0;
        if ((iVar5 == 0) && (local_34 != 0)) {
          do {
            lVar6 = _IORegistryEntryCreateCFProperty(local_34,&cf_class_code,uVar1,0);
            if (lVar6 != 0) {
              lVar7 = _CFGetTypeID(lVar6);
              lVar8 = _CFDataGetTypeID();
              bVar3 = bVar2;
              if (lVar7 == lVar8) {
                puVar9 = (uint *)_CFDataGetBytePtr(lVar6);
                bVar3 = true;
                if ((*puVar9 & 0xff0000) != 0x30000) {
                  bVar3 = bVar2;
                }
              }
              bVar2 = bVar3;
              _CFRelease(lVar6);
            }
            local_38 = 0;
            if ((!bVar2) &&
               (iVar5 = _IORegistryEntryGetParentEntry(local_34,"IOService",&local_38), iVar5 != 0))
            {
              local_38 = 0;
            }
            _IOObjectRelease(local_34);
            local_34 = local_38;
          } while (local_38 != 0);
          uVar11 = (uint)bVar2;
        }
        iVar10 = iVar10 + uVar11;
        _IOObjectRelease(iVar4);
        iVar4 = _IOIteratorNext(local_3c);
      } while (iVar4 != 0);
    }
    _IOObjectRelease(local_3c);
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","pvsHostInfo",2,"DISPLAY DEVICES (IOKit): %d; ONLINE DISPLAYS COUNT: %d\n",
                    iVar10,local_40);
    }
    if ((iVar10 != 0) && (local_40 <= iVar10)) {
      local_40 = iVar10;
    }
  }
  return local_40;
}

