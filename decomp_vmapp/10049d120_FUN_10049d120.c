
undefined1 FUN_10049d120(undefined8 param_1,string *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined1 uVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar2 = _CFBundleCreate(*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,param_1);
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = _CFBundleGetIdentifier(lVar2);
    if (lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      lVar4 = _CFStringGetCStringPtr(lVar3,0x8000100);
      if (lVar4 == 0) {
        uVar5 = _CFStringGetLength(lVar3);
        lVar4 = _CFStringGetMaximumSizeForEncoding(uVar5,0x8000100);
        pvVar6 = _malloc(lVar4 + 1U);
        if (pvVar6 != (void *)0x0) {
          cVar1 = _CFStringGetCString(lVar3,pvVar6,lVar4 + 1U,0x8000100);
          if (cVar1 != '\0') {
            std::string::assign((char *)&local_48);
          }
          _free(pvVar6);
        }
      }
      else {
        std::string::assign((char *)&local_48);
      }
      std::string::operator=(param_2,(string *)&local_48);
      uVar7 = 1;
      std::string::~string((string *)&local_48);
    }
    _CFRelease(lVar2);
  }
  return uVar7;
}

