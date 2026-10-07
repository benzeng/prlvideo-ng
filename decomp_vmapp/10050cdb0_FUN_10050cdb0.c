
undefined8 FUN_10050cdb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 8) == 0) {
    lVar1 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_100ba23f8,
                       PTR__kCFTypeDictionaryValueCallBacks_100ba2400);
    if (lVar1 == 0) {
      uVar2 = 3;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,"CFDictionaryCreateMutable() err");
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

