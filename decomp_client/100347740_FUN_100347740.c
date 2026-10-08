
undefined8 FUN_100347740(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) && (0 < param_2)) {
    uVar2 = 0;
    lVar1 = _CFDataCreate(0,param_1,(long)param_2);
    if (lVar1 != 0) {
      uVar2 = _CGEventCreateFromData(0,lVar1);
      _CFRelease(lVar1);
    }
  }
  return uVar2;
}

