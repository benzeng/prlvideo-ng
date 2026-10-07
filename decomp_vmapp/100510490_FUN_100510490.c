
void FUN_100510490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  
  uVar1 = (*(code *)PTR__objc_retain_100ba25f8)(param_3);
  puVar4 = PTR__objc_msgSend_100ba25e8;
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(PTR_DeallocHook_100bedc18,PTR_s_class_100bed938);
  cVar5 = (*(code *)puVar4)(uVar1,PTR_s_isKindOfClass__100bed940,uVar2);
  if (cVar5 != '\0') {
    (*(code *)puVar4)(uVar1,PTR_s_setBlock__100bed918,0);
    uVar2 = (*(code *)puVar4)(param_1,PTR_s_dynamicPropertyForKey__100bed920,&cf_deallocHooksKey);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    (*(code *)puVar4)(uVar2,PTR_s_removeObject__100bed948,uVar1);
    lVar3 = (*(code *)puVar4)(uVar2,PTR_s_count_100bed950);
    if (lVar3 == 0) {
      (*(code *)PTR__objc_msgSend_100ba25e8)
                (param_1,PTR_s_setDynamicProperty_forKey__100bed928,0,&cf_deallocHooksKey);
    }
    (*(code *)PTR__objc_release_100ba25f0)(uVar2);
  }
  (*(code *)PTR__objc_release_100ba25f0)(uVar1);
  return;
}

