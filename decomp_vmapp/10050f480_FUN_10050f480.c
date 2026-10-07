
undefined8 FUN_10050f480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  long local_30;
  
  lVar2 = _CFWriteStreamCreateWithFile(0,param_1);
  if (lVar2 == 0) {
    uVar5 = 3;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PLISTFILE","PropertyListFile",1,"CFWriteStreamCreateWithFile() err");
    }
  }
  else {
    cVar1 = _CFWriteStreamOpen(lVar2);
    if (cVar1 == '\0') {
      uVar5 = 3;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("PLISTFILE","PropertyListFile",1,"CFWriteStreamOpen() err");
      }
    }
    else {
      local_30 = 0;
      lVar3 = _CFPropertyListWriteToStream(param_2,lVar2,param_3,&local_30);
      lVar6 = local_30;
      uVar5 = 0;
      if (lVar3 < 1) {
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        if (local_30 != 0) {
          lVar3 = _CFStringGetCStringPtr(local_30,0x8000100);
          if (lVar3 == 0) {
            uVar5 = _CFStringGetLength(lVar6);
            lVar3 = _CFStringGetMaximumSizeForEncoding(uVar5,0x8000100);
            pvVar4 = _malloc(lVar3 + 1U);
            if (pvVar4 != (void *)0x0) {
              cVar1 = _CFStringGetCString(lVar6,pvVar4,lVar3 + 1U,0x8000100);
              if (cVar1 != '\0') {
                std::string::assign((char *)&local_48);
              }
              _free(pvVar4);
            }
          }
          else {
            std::string::assign((char *)&local_48);
          }
          _CFRelease(local_30);
        }
        if (0 < DAT_1011b55f8) {
          lVar6 = local_38;
          if ((local_48 & 1) == 0) {
            lVar6 = (long)&local_48 + 1;
          }
          FUN_1008e3970("PLISTFILE","PropertyListFile",1,"CFPropertyListWriteToStream() err \"%s\"",
                        lVar6);
        }
        std::string::~string((string *)&local_48);
        uVar5 = 3;
      }
      _CFWriteStreamClose(lVar2);
    }
    _CFRelease(lVar2);
  }
  return uVar5;
}

