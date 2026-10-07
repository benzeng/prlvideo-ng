
void FUN_1005103a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar3 = PTR_DeallocHook_100bedc18;
  puVar2 = PTR_s_alloc_100bed228;
  uVar4 = (*(code *)PTR__objc_retain_100ba25f8)(param_3);
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)(puVar3,puVar2);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_init_100bed248);
  (*(code *)puVar1)(uVar5,PTR_s_setBlock__100bed918,uVar4);
  (*(code *)PTR__objc_release_100ba25f0)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_dynamicPropertyForKey__100bed920,&cf_deallocHooksKey);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (lVar6 == 0) {
    lVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSMutableSet_100bedc20,PTR_s_new_100bed280);
    (*(code *)puVar1)(param_1,PTR_s_setDynamicProperty_forKey__100bed928,lVar6,&cf_deallocHooksKey);
  }
  (*(code *)PTR__objc_msgSend_100ba25e8)(lVar6,PTR_s_addObject__100bed930,uVar5);
  (*(code *)PTR__objc_release_100ba25f0)(lVar6);
  _objc_autoreleaseReturnValue(uVar5);
  return;
}

