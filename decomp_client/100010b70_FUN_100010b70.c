
void FUN_100010b70(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_dynamicPropertyForKey__102268b28,&cf_childWindow);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(DAT_100e11008,uVar2,PTR_s_setAlphaValue__102268b78);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  return;
}

