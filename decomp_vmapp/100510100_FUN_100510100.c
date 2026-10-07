
void FUN_100510100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_s_dynamicProperties_100bed8f8;
  uVar3 = (*(code *)PTR__objc_retain_100ba25f8)(param_3);
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,puVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_objectForKey__100bed900,param_3);
  puVar1 = PTR__objc_release_100ba25f0;
  (*(code *)PTR__objc_release_100ba25f0)(uVar3);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

