
undefined8 FUN_10050eac0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_40;
  long local_38;
  
  iVar2 = FUN_10050f280(param_2,2,&local_38,&local_40);
  lVar1 = local_38;
  if (iVar2 == 0) {
    lVar3 = _CFDictionaryGetTypeID();
    lVar4 = _CFGetTypeID(lVar1);
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
  }
  else {
    uVar5 = 3;
    if ((iVar2 != 3) && (uVar5 = 1, 0 < DAT_1011b55f8)) {
      uVar5 = 1;
      FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,"PropertyList::ReadFromFSRef() err %i",
                    iVar2);
    }
  }
  return uVar5;
}

