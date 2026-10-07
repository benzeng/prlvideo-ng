
undefined8 FUN_10050d1f0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = _CFArrayGetTypeID();
  lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),param_2);
  uVar3 = 9;
  if (lVar2 != 0) {
    lVar4 = _CFGetTypeID(lVar2);
    uVar3 = 6;
    if (lVar4 == lVar1) {
      *param_3 = lVar2;
      uVar3 = 0;
    }
  }
  return uVar3;
}

