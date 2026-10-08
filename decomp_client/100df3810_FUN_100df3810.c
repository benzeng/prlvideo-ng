
undefined8 FUN_100df3810(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_description_10226a700);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = _objc_retainAutorelease(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_UTF8String_1022699e8);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  return uVar3;
}

