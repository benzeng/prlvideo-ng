
undefined8 FUN_100d73280(long param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  
  lVar2 = _CFStringGetTypeID();
  lVar3 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),param_2);
  uVar6 = 9;
  if (lVar3 != 0) {
    lVar4 = _CFGetTypeID(lVar3);
    uVar6 = 6;
    if (lVar4 == lVar2) {
      lVar2 = _CFStringGetCStringPtr(lVar3,0x8000100);
      if (lVar2 == 0) {
        uVar6 = _CFStringGetLength(lVar3);
        lVar2 = _CFStringGetMaximumSizeForEncoding(uVar6,0x8000100);
        pvVar5 = _malloc(lVar2 + 1U);
        uVar6 = 4;
        if (pvVar5 != (void *)0x0) {
          cVar1 = _CFStringGetCString(lVar3,pvVar5,lVar2 + 1U,0x8000100);
          uVar6 = 7;
          if (cVar1 == '\0') {
            _free(pvVar5);
          }
          else {
            std::string::assign(param_3);
            _free(pvVar5);
            uVar6 = 0;
          }
        }
      }
      else {
        uVar6 = 0;
        std::string::assign(param_3);
      }
    }
  }
  return uVar6;
}

