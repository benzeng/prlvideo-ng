
undefined8 FUN_100d76960(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  undefined8 in_RAX;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  local_38 = in_RAX;
  cVar1 = _CFDictionaryGetValueIfPresent(param_1,param_2,&local_38);
  uVar5 = 9;
  if (cVar1 != '\0') {
    lVar2 = _CFGetTypeID(local_38);
    lVar3 = _CFStringGetTypeID();
    uVar5 = 7;
    if (lVar2 == lVar3) {
      lVar2 = _CFStringGetCStringPtr(local_38,0x8000100);
      if (lVar2 == 0) {
        uVar5 = _CFStringGetLength(local_38);
        lVar2 = _CFStringGetMaximumSizeForEncoding(uVar5,0x8000100);
        pvVar4 = _malloc(lVar2 + 1U);
        uVar5 = 4;
        if (pvVar4 != (void *)0x0) {
          cVar1 = _CFStringGetCString(local_38,pvVar4,lVar2 + 1U,0x8000100);
          uVar5 = 7;
          if (cVar1 == '\0') {
            _free(pvVar4);
          }
          else {
            std::string::assign(param_3);
            _free(pvVar4);
            uVar5 = 0;
          }
        }
      }
      else {
        uVar5 = 0;
        std::string::assign(param_3);
      }
    }
  }
  return uVar5;
}

