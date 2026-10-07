
undefined8 FUN_10050dc30(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _CFStringGetTypeID();
  lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_CommandActionKind);
  uVar4 = 9;
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    uVar4 = 6;
    if (lVar3 == lVar1) {
      uVar4 = 0;
      lVar1 = _CFStringCompare(lVar2,&cf_CommandLine,0);
      *param_2 = (uint)(lVar1 == 0);
    }
  }
  return uVar4;
}

