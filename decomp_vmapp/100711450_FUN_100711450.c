
bool FUN_100711450(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar1 = _IOPSCopyPowerSourcesInfo();
  if (lVar1 == 0) {
    bVar5 = false;
  }
  else {
    lVar2 = _IOPSCopyPowerSourcesList(lVar1);
    if (lVar2 == 0) {
      bVar5 = false;
    }
    else {
      lVar4 = _CFArrayGetCount(lVar2);
      bVar5 = false;
      if (lVar4 == 1) {
        lVar4 = _CFArrayGetValueAtIndex(lVar2,0);
        if (lVar4 != 0) {
          lVar4 = _IOPSGetPowerSourceDescription(lVar1,lVar4);
          if (lVar4 == 0) {
            bVar5 = false;
          }
          else {
            uVar3 = _CFDictionaryGetValue(lVar4,&cf_PowerSourceState);
            lVar4 = _CFStringCompare(uVar3,&cf_ACPower,0);
            bVar5 = lVar4 == 0;
          }
        }
      }
      _CFRelease(lVar2);
    }
    _CFRelease(lVar1);
  }
  return bVar5;
}

