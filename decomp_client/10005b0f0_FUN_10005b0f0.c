
undefined8 FUN_10005b0f0(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1022699d0,&cf_file_data);
  uVar3 = 6;
  if (lVar2 != 0) {
    lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (lVar2,PTR_s_objectForKey__1022699d0,&cf__CFURLStringType);
    if (lVar2 != 0) {
      uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_intValue_1022697a0);
      *param_2 = uVar1;
      uVar3 = 0;
    }
  }
  return uVar3;
}

