
undefined8 FUN_100d76530(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_40;
  long local_38;
  
  iVar2 = FUN_100d76f00(param_2,2,&local_38,&local_40);
  if (iVar2 < 0xc) {
    if (iVar2 == 0) {
      lVar3 = _CFDictionaryGetTypeID();
      lVar4 = _CFGetTypeID(local_38);
      lVar1 = local_38;
      uVar5 = 6;
      if (lVar3 == lVar4) {
        if (*(long *)(param_1 + 8) != 0) {
          _CFRelease();
        }
        *(long *)(param_1 + 8) = lVar1;
        if (lVar1 != 0) {
          _CFRetain(lVar1);
        }
        uVar5 = 0;
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = local_40;
        }
      }
      _CFRelease(local_38);
      return uVar5;
    }
    if (iVar2 != 3) {
LAB_100d765e4:
      if (DAT_10230ffd0 < 1) {
        return 1;
      }
      FUN_100df99c0("MCPREFS","ManagedAccountPreferences",1,
                    "PropertyList::ReadFromFilePath() err %i, path=\"%s\"",iVar2,param_2);
      return 1;
    }
  }
  else {
    if (iVar2 == 0xc) {
      return 10;
    }
    if (iVar2 != 0xd) goto LAB_100d765e4;
  }
  return 3;
}

