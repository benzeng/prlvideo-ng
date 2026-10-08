
undefined8 FUN_100d74c00(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _CFDictionaryGetTypeID();
  lVar2 = _CFGetTypeID(param_2);
  uVar3 = 6;
  if (lVar1 == lVar2) {
    if (*(long *)(param_1 + 8) != 0) {
      _CFRelease();
    }
    *(long *)(param_1 + 8) = param_2;
    uVar3 = 0;
    if (param_2 != 0) {
      _CFRetain(param_2);
    }
  }
  return uVar3;
}

