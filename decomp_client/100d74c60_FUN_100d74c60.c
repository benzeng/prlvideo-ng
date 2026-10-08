
int FUN_100d74c60(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 local_40;
  long local_38;
  
  iVar2 = FUN_100d76f00(param_2,2,&local_38,&local_40);
  lVar1 = local_38;
  iVar5 = iVar2;
  if (1 < iVar2 - 0xcU) {
    if (iVar2 == 0) {
      lVar3 = _CFDictionaryGetTypeID();
      lVar4 = _CFGetTypeID(lVar1);
      iVar5 = 6;
      if (lVar3 == lVar4) {
        if (*(long *)(param_1 + 8) != 0) {
          _CFRelease();
        }
        *(long *)(param_1 + 8) = lVar1;
        if (lVar1 != 0) {
          _CFRetain(lVar1);
        }
        iVar5 = 0;
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = local_40;
        }
      }
      _CFRelease(local_38);
    }
    else if ((iVar2 != 3) && (iVar5 = 1, 0 < DAT_10230ffd0)) {
      FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,
                    "PropertyList::ReadFromFilePath() err %i, path=\"%s\"",iVar2,param_2);
      iVar5 = 1;
    }
  }
  return iVar5;
}

