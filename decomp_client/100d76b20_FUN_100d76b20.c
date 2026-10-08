
undefined8 FUN_100d76b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_20;
  
  cVar1 = _CFDictionaryGetValueIfPresent(param_1,param_2,&local_20);
  uVar2 = 9;
  if (cVar1 != '\0') {
    lVar3 = _CFGetTypeID(local_20);
    lVar4 = _CFBooleanGetTypeID();
    uVar2 = 7;
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(local_20);
      *(bool *)param_3 = cVar1 != '\0';
      uVar2 = 0;
    }
  }
  return uVar2;
}

