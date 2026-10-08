
void FUN_100df35f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  
  uVar1 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  puVar4 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR_DeallocHook_10226ab20,PTR_s_class_102269100);
  cVar5 = (*(code *)puVar4)(uVar1,PTR_s_isKindOfClass__102269108,uVar2);
  if (cVar5 != '\0') {
    (*(code *)puVar4)(uVar1,PTR_s_setBlock__10226a6d0,0);
    uVar2 = (*(code *)puVar4)(param_1,PTR_s_dynamicPropertyForKey__102268b28,&cf_deallocHooksKey);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    (*(code *)puVar4)(uVar2,PTR_s_removeObject__102269168,uVar1);
    lVar3 = (*(code *)puVar4)(uVar2,PTR_s_count_102268e68);
    if (lVar3 == 0) {
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (param_1,PTR_s_setDynamicProperty_forKey__102268b38,0,&cf_deallocHooksKey);
    }
    (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  return;
}

