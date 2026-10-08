
undefined8 FUN_10005bfb0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSUserDefaults_10226a908,PTR_s_standardUserDefaults_102269ab0
                    );
  (*(code *)puVar1)(uVar2,PTR_s_synchronize_1022698e8);
  lVar3 = (*(code *)puVar1)(uVar2,PTR_s_persistentDomainForName__102269ab8,&cf_com_apple_dock);
  uVar2 = 3;
  if (lVar3 != 0) {
    uVar2 = (*(code *)puVar1)(lVar3,PTR_s_mutableCopy_102269158);
    lVar3 = (*(code *)puVar1)(uVar2,PTR_s_autorelease_102269a10);
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_1021e1c68)(lVar3,PTR_s_retain_102269a88);
    }
    if (*(long *)(param_1 + 8) != 0) {
      (*(code *)PTR__objc_msgSend_1021e1c68)(*(long *)(param_1 + 8),PTR_s_release_1022699b8);
    }
    *(long *)(param_1 + 8) = lVar3;
    uVar2 = 0;
  }
  return uVar2;
}

