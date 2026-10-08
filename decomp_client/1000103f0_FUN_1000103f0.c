
void FUN_1000103f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  puVar4 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_dynamicPropertyForKey__102268b28,&cf_borderColor);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  cVar1 = (*(code *)puVar4)(uVar3,PTR_s_isEqualTo__102268b30,lVar2);
  if (cVar1 == '\0') {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_setDynamicProperty_forKey__102268b38,lVar2,&cf_borderColor);
    puVar4 = PTR_s_removeChildWindow_102268b48;
    if (lVar2 != 0) {
      puVar4 = PTR_s_setupChildWindow_102268b40;
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,puVar4);
  }
  puVar4 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  (*(code *)puVar4)(lVar2);
  return;
}

