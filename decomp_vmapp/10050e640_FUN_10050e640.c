
undefined8 FUN_10050e640(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = _CFArrayGetTypeID();
  lVar3 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Items);
  uVar4 = 9;
  if (lVar3 != 0) {
    lVar5 = _CFGetTypeID(lVar3);
    uVar4 = 6;
    if (lVar5 == lVar2) {
      uVar1 = _CFArrayGetCount(lVar3);
      *param_2 = uVar1;
      uVar4 = 0;
    }
  }
  return uVar4;
}

