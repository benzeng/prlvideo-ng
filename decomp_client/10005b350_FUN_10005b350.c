
undefined8 FUN_10005b350(long param_1,undefined8 *param_2)

{
  short sVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  local_28 = in_RAX;
  lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1022699d0,&cf_file_data);
  uVar4 = 6;
  if (lVar2 != 0) {
    lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (lVar2,PTR_s_objectForKey__1022699d0,&cf__CFURLAliasData);
    if (lVar2 != 0) {
      uVar4 = _CFDataGetBytePtr(lVar2);
      uVar3 = _CFDataGetLength(lVar2);
      sVar1 = _PtrToHand(uVar4,&local_28,uVar3);
      uVar4 = 3;
      if (sVar1 == 0) {
        *param_2 = local_28;
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

