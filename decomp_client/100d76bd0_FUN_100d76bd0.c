
undefined8 FUN_100d76bd0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  lVar2 = _CFReadStreamCreateWithFile(0,param_1);
  if (lVar2 == 0) {
    uVar6 = 3;
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("PLISTFILE","PropertyListFile",1,"CFReadStreamCreateWithFile() err");
    }
  }
  else {
    cVar1 = _CFReadStreamOpen(lVar2);
    if (cVar1 == '\0') {
      uVar6 = 3;
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("PLISTFILE","PropertyListFile",1,"CFReadStreamOpen() err");
      }
    }
    else {
      local_40 = 0;
      uVar6 = 0;
      lVar3 = _CFPropertyListCreateFromStream(0,lVar2,0,param_2,&local_38,&local_40);
      lVar5 = local_40;
      if (lVar3 == 0) {
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        if (local_40 != 0) {
          lVar3 = _CFStringGetCStringPtr(local_40,0x8000100);
          if (lVar3 == 0) {
            uVar6 = _CFStringGetLength(lVar5);
            lVar3 = _CFStringGetMaximumSizeForEncoding(uVar6,0x8000100);
            pvVar4 = _malloc(lVar3 + 1U);
            if (pvVar4 != (void *)0x0) {
              cVar1 = _CFStringGetCString(lVar5,pvVar4,lVar3 + 1U,0x8000100);
              if (cVar1 != '\0') {
                std::string::assign((char *)&local_58);
              }
              _free(pvVar4);
            }
          }
          else {
            std::string::assign((char *)&local_58);
          }
          _CFRelease(local_40);
        }
        if (0 < DAT_10230ffd0) {
          lVar5 = local_48;
          if ((local_58 & 1) == 0) {
            lVar5 = (long)&local_58 + 1;
          }
          FUN_100df99c0("PLISTFILE","PropertyListFile",1,
                        "CFPropertyListCreateFromStream() err \"%s\"",lVar5);
        }
        std::string::~string((string *)&local_58);
        uVar6 = 3;
      }
      else {
        *param_3 = lVar3;
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = local_38;
        }
      }
      _CFReadStreamClose(lVar2);
    }
    _CFRelease(lVar2);
  }
  return uVar6;
}

