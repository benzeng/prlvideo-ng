
undefined8 FUN_100d733c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _CFStringCreateWithCString(0,param_3,0x8000100);
  if (lVar2 == 0) {
    uVar3 = 3;
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,
                    "CFStringCreateWithCString() err, utf8=\"%s\"",param_3);
    }
  }
  else {
    iVar1 = FUN_100d73050(param_1);
    if (iVar1 == 0) {
      _CFDictionarySetValue(*(undefined8 *)(param_1 + 8),param_2,lVar2);
      uVar3 = 0;
    }
    else {
      uVar3 = 3;
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,
                      "LinkElementNode can not be modified, err=%i",iVar1);
      }
    }
    _CFRelease(lVar2);
  }
  return uVar3;
}

