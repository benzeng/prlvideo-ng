
long FUN_100b5b820(uint param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined1 local_24 [4];
  
  lVar1 = _CFDictionaryCreateMutable
                    (0,2,PTR__kCFTypeDictionaryKeyCallBacks_1021e1960,
                     PTR__kCFTypeDictionaryValueCallBacks_1021e1968);
  if (lVar1 != 0) {
    dVar4 = (double)_CFAbsoluteTimeGetCurrent();
    lVar2 = _CFDateCreate(dVar4 + (double)param_1,0);
    if (lVar2 != 0) {
      _CFDictionarySetValue(lVar1,&cf_WakeDate,lVar2);
      _CFRelease(lVar2);
    }
    lVar3 = _CFNumberCreate(0,3,local_24);
    if (lVar3 != 0) {
      _CFDictionarySetValue(lVar1,&cf_Requirements,lVar3);
      _CFRelease(lVar3);
      if (lVar2 != 0) {
        return lVar1;
      }
    }
    _CFRelease(lVar1);
  }
  return 0;
}

