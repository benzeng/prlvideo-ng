
undefined8 FUN_10050d120(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _CFStringCreateWithCString(0,param_3,0x8000100);
  if (lVar2 == 0) {
    uVar3 = 3;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,
                    "CFStringCreateWithCString() err, utf8=\"%s\"",param_3);
    }
  }
  else {
    iVar1 = FUN_10050cdb0(param_1);
    if (iVar1 == 0) {
      _CFDictionarySetValue(*(undefined8 *)(param_1 + 8),param_2,lVar2);
      uVar3 = 0;
    }
    else {
      uVar3 = 3;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,
                      "LinkElementNode can not be modified, err=%i",iVar1);
      }
    }
    _CFRelease(lVar2);
  }
  return uVar3;
}

