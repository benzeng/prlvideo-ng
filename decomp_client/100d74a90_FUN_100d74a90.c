
undefined8 FUN_100d74a90(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_100d73050();
  if (iVar1 == 0) {
    lVar2 = _CFArrayGetTypeID();
    lVar3 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Items);
    if (lVar3 == 0) {
      lVar2 = _CFArrayCreateMutable(0,0,PTR__kCFTypeArrayCallBacks_1021e1958);
      if (lVar2 == 0) {
        uVar5 = 3;
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,"CFArrayCreateMutable() err");
        }
      }
      else {
        iVar1 = FUN_100d73050(param_1);
        if (iVar1 == 0) {
          _CFDictionarySetValue(*(undefined8 *)(param_1 + 8),&cf_Items,lVar2);
          *param_2 = lVar2;
          uVar5 = 0;
        }
        else {
          uVar5 = 3;
          if (0 < DAT_10230ffd0) {
            FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,
                          "LinkElementNode can not be modified, err=%i",iVar1);
          }
        }
        _CFRelease(lVar2);
      }
    }
    else {
      lVar4 = _CFGetTypeID(lVar3);
      uVar5 = 6;
      if (lVar4 == lVar2) {
        *param_2 = lVar3;
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 3;
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,
                    "LinkElementNode can not be modified, err=%i",iVar1);
    }
  }
  return uVar5;
}

