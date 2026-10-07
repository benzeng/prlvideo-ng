
undefined8 FUN_100414a00(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = _CFBooleanGetTypeID();
  lVar3 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),param_2);
  uVar4 = 9;
  if (lVar3 != 0) {
    lVar5 = _CFGetTypeID(lVar3);
    uVar4 = 6;
    if (lVar5 == lVar2) {
      cVar1 = _CFBooleanGetValue(lVar3);
      *(bool *)param_3 = cVar1 != '\0';
      uVar4 = 0;
    }
  }
  return uVar4;
}

