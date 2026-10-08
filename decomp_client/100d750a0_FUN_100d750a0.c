
undefined8 FUN_100d750a0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar1 = _CFStringGetTypeID();
  lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),param_2);
  if (lVar2 == 0) {
    return 9;
  }
  lVar3 = _CFGetTypeID(lVar2);
  if (lVar3 != lVar1) {
    return 6;
  }
  lVar3 = 0;
  lVar1 = _CFStringCompare(lVar2,&cf_Normal,0);
  if (lVar1 != 0) {
    uVar4 = 0;
    lVar1 = _CFStringCompare(lVar2,&cf_Minimize,0);
    lVar3 = 1;
    if (lVar1 != 0) {
      lVar1 = _CFStringCompare(lVar2,&cf_Maximize,0);
      lVar3 = 2;
      if (lVar1 != 0) goto LAB_100d7514e;
    }
  }
  uVar4 = (&DAT_10225ba98)[lVar3 * 4];
LAB_100d7514e:
  *param_3 = uVar4;
  return 0;
}

