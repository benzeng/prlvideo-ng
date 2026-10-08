
undefined8 FUN_100d76a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = _CFStringCreateWithCString(0,param_3,0x8000100);
  if (lVar1 == 0) {
    uVar2 = 3;
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("PLISTFILE","PropertyListFile",1,"CFStringCreateWithCString() err");
    }
  }
  else {
    _CFDictionarySetValue(param_1,param_2,lVar1);
    _CFRelease(lVar1);
  }
  return uVar2;
}

