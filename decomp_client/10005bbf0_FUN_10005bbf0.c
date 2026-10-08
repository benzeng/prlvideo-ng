
void FUN_10005bbf0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 8),PTR_s_objectAtIndex__102269480,param_2);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_mutableCopy_102269158);
  lVar3 = (*(code *)puVar1)(uVar2,PTR_s_autorelease_102269a10);
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(lVar3,PTR_s_retain_102269a88);
  }
  if (*(long *)(param_3 + 8) != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(*(long *)(param_3 + 8),PTR_s_release_1022699b8);
  }
  *(long *)(param_3 + 8) = lVar3;
  return;
}

