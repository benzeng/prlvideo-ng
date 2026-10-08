
undefined8 FUN_100d76b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _CFGetTypeID(param_3);
  lVar2 = _CFBooleanGetTypeID();
  uVar3 = 7;
  if (lVar1 == lVar2) {
    _CFDictionarySetValue(param_1,param_2,param_3);
    uVar3 = 0;
  }
  return uVar3;
}

