
string * FUN_100713870(string *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  size_t sVar8;
  undefined8 local_48;
  ulong uStack_40;
  long local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uVar3 = _IOServiceMatching("IOPlatformExpertDevice");
  iVar2 = _IOServiceGetMatchingService(*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,uVar3);
  if (iVar2 == 0) {
    FUN_1008e3970("","GenHwId",0,"unable to get IOPlatformExpertDevice");
  }
  else {
    lVar4 = _IORegistryEntryCreateCFProperty
                      (iVar2,&cf_IOPlatformSerialNumber,
                       *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,0);
    if (lVar4 != 0) {
      lVar5 = _CFStringGetCStringPtr(lVar4,0x600);
      if (lVar5 == 0) {
        lVar5 = _CFStringGetLength(lVar4);
        sVar8 = (lVar5 << 0x20) + 0x100000000 >> 0x20;
        pvVar6 = _malloc(sVar8);
        if (pvVar6 == (void *)0x0) {
          FUN_1008e3970("","GenHwId",0,"no memory");
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined8 *)(param_1 + 8) = 0;
          *(undefined8 *)param_1 = 0;
          goto LAB_100713a51;
        }
        cVar1 = _CFStringGetCString(lVar4,pvVar6,sVar8,0x600);
        if (cVar1 != '\0') {
          std::string::assign((char *)&local_48);
        }
        _free(pvVar6);
      }
      else {
        std::string::assign((char *)&local_48);
      }
      uVar7 = uStack_40;
      if ((local_48 & 1) == 0) {
        uVar7 = local_48 >> 1 & 0x7f;
      }
      if (uVar7 == 0) {
        FUN_1008e3970("","GenHwId",0,"Unable to get serial");
      }
      else {
        FUN_100713640(&local_48);
        if (3 < DAT_1011b55f8) {
          lVar5 = local_38;
          if ((local_48 & 1) == 0) {
            lVar5 = (long)&local_48 + 1;
          }
          FUN_1008e3970("","GenHwId",4,"system serial number: %s",lVar5);
        }
      }
      _CFRelease(lVar4);
    }
    _IOObjectRelease(iVar2);
  }
  std::string::string(param_1,(string *)&local_48);
LAB_100713a51:
  std::string::~string((string *)&local_48);
  return param_1;
}

