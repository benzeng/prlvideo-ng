
undefined8 FUN_10050d880(long param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = _GetHandleSize(param_2);
  sVar1 = _MemError();
  if (sVar1 == 0) {
    _HLock(param_2);
    lVar4 = _CFDataCreate(0,*param_2,uVar3);
    _HUnlock(param_2);
    if (lVar4 == 0) {
      uVar5 = 3;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,"CFDataCreate() err, aliasDataSz=%i",
                      uVar3 & 0xffffffff);
      }
    }
    else {
      iVar2 = FUN_10050cdb0(param_1);
      if (iVar2 == 0) {
        _CFDictionarySetValue(*(undefined8 *)(param_1 + 8),&cf_AliasData,lVar4);
        uVar5 = 0;
      }
      else {
        uVar5 = 3;
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,
                        "LinkElementNode can not be modified, err=%i",iVar2);
        }
      }
      _CFRelease(lVar4);
    }
  }
  else {
    uVar5 = 3;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,"GetHandleSize() err %i",(int)sVar1);
    }
  }
  return uVar5;
}

