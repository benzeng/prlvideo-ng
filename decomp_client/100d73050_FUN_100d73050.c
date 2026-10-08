
undefined8 FUN_100d73050(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 8) == 0) {
    lVar1 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_1021e1960,
                       PTR__kCFTypeDictionaryValueCallBacks_1021e1968);
    if (lVar1 == 0) {
      uVar2 = 3;
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,"CFDictionaryCreateMutable() err");
      }
    }
    else {
      if (*(long *)(param_1 + 8) != 0) {
        _CFRelease();
      }
      *(long *)(param_1 + 8) = lVar1;
      _CFRetain(lVar1);
      _CFRelease(lVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

