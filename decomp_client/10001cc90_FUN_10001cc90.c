
void FUN_10001cc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_dynamicPropertyForKey__102268b28,&cf_coherenceButtonHandler);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,uVar2);
  }
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  (*(code *)puVar1)(uVar2);
  return;
}

