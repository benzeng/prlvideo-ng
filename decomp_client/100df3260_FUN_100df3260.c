
void FUN_100df3260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_s_dynamicProperties_10226a6b8;
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,puVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_objectForKey__1022699d0,param_3);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

