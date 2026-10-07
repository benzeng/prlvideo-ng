
undefined8 FUN_10050ce50(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8));
  uVar2 = 9;
  if (lVar1 != 0) {
    lVar3 = _CFGetTypeID(lVar1);
    uVar2 = 6;
    if (lVar3 == param_3) {
      *param_4 = lVar1;
      uVar2 = 0;
    }
  }
  return uVar2;
}

