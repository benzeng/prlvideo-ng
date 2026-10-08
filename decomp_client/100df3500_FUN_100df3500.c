
void FUN_100df3500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar3 = PTR_DeallocHook_10226ab20;
  puVar2 = PTR_s_alloc_102268b58;
  uVar4 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar3,puVar2);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_init_102268ca8);
  (*(code *)puVar1)(uVar5,PTR_s_setBlock__10226a6d0,uVar4);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_dynamicPropertyForKey__102268b28,&cf_deallocHooksKey);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (lVar6 == 0) {
    lVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSMutableSet_10226ab28,PTR_s_new_102269070);
    (*(code *)puVar1)(param_1,PTR_s_setDynamicProperty_forKey__102268b38,lVar6,&cf_deallocHooksKey);
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(lVar6,PTR_s_addObject__1022692e8,uVar5);
  (*(code *)PTR__objc_release_1021e1c70)(lVar6);
  _objc_autoreleaseReturnValue(uVar5);
  return;
}

