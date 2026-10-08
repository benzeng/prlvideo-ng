
undefined8 FUN_100d74510(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = _CFDictionaryGetTypeID();
  lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_TargetObject);
  uVar3 = 9;
  if (lVar2 != 0) {
    lVar4 = _CFGetTypeID(lVar2);
    uVar3 = 6;
    if (lVar4 == lVar1) {
      if (*(long *)(param_2 + 8) != 0) {
        _CFRelease();
      }
      *(long *)(param_2 + 8) = lVar2;
      _CFRetain(lVar2);
      uVar3 = 0;
    }
  }
  return uVar3;
}

