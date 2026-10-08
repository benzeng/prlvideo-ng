
void FUN_10001cc00(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_coherenceButton_102268d20);
  lVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_removeFromSuperview_102269230);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_setDynamicProperty_forKey__102268b38,0,&cf_coherenceButton);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_setDynamicProperty_forKey__102268b38,0,&cf_coherenceButtonHandler);
  }
  (*(code *)PTR__objc_release_1021e1c70)(lVar2);
  return;
}

