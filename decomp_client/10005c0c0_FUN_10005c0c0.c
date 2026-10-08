
undefined8 FUN_10005c0c0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1022699d0,
                     &cf_persistent_others);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = 6;
  if (lVar2 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_mutableCopy_102269158);
    lVar2 = (*(code *)puVar1)(uVar3,PTR_s_autorelease_102269a10);
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_retain_102269a88);
    }
    if (*(long *)(param_2 + 8) != 0) {
      (*(code *)PTR__objc_msgSend_1021e1c68)(*(long *)(param_2 + 8),PTR_s_release_1022699b8);
    }
    *(long *)(param_2 + 8) = lVar2;
    uVar3 = 0;
  }
  return uVar3;
}

