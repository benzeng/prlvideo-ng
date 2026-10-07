
undefined8 FUN_10050e710(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _CFArrayGetTypeID();
  lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Items);
  uVar4 = 9;
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    uVar4 = 6;
    if (lVar3 == lVar1) {
      lVar1 = _CFArrayGetValueAtIndex(lVar2,param_2);
      lVar2 = _CFDictionaryGetTypeID();
      lVar3 = _CFGetTypeID(lVar1);
      if (lVar2 == lVar3) {
        if (*(long *)(param_3 + 8) != 0) {
          _CFRelease();
        }
        *(long *)(param_3 + 8) = lVar1;
        uVar4 = 0;
        if (lVar1 != 0) {
          _CFRetain(lVar1);
        }
      }
    }
  }
  return uVar4;
}

