
undefined8 FUN_10050d540(long param_1,undefined8 *param_2)

{
  short sVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_30;
  
  lVar2 = _CFDataGetTypeID();
  lVar3 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_AliasData);
  uVar6 = 9;
  if (lVar3 != 0) {
    lVar4 = _CFGetTypeID(lVar3);
    uVar6 = 6;
    if (lVar4 == lVar2) {
      uVar6 = _CFDataGetBytePtr(lVar3);
      uVar5 = _CFDataGetLength(lVar3);
      sVar1 = _PtrToHand(uVar6,&local_30,uVar5);
      if (sVar1 == 0) {
        *param_2 = local_30;
        uVar6 = 0;
      }
      else {
        uVar6 = 3;
        if (2 < DAT_1011b55f8) {
          uVar6 = 3;
          FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",3,
                        "Failed to get alias handle, PtrToHand() err %i",(int)sVar1);
        }
      }
    }
  }
  return uVar6;
}

