
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::updateTitleMessage(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  IVar2 = textTitleMessage(param_1,PTR_s_textTitleMessage_102268d38);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  (*(code *)puVar1)(uVar3,PTR_s_updateAttributtedValue_102268de0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  return;
}

