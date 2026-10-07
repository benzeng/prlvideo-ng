
void FUN_1006821f0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
    lVar2 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_100ba23f8,
                       PTR__kCFTypeDictionaryValueCallBacks_100ba2400);
    *param_1 = lVar2;
    if (lVar2 != 0) {
      lVar2 = _CFDictionaryCreateMutable
                        (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_100ba23f8,
                         PTR__kCFTypeDictionaryValueCallBacks_100ba2400);
      if (lVar2 != 0) {
        _CFDictionarySetValue(lVar2,*param_2,*param_3);
        _CFDictionarySetValue(*param_1,&cf_IOPropertyMatch,lVar2);
        _CFRelease(lVar2);
        return;
      }
    }
  }
  return;
}

