
/* Function Stack Size: 0x10 bytes */

void TitleBarButton::updateSystemButtons(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  
  puVar3 = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_associatedThemeFrame_1022692f8);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  cVar2 = (*(code *)puVar3)(param_1,PTR_s_hovered_102269308);
  puVar3 = PTR_s_mouseExitedLeftButtonGroup_102269318;
  if (cVar2 != '\0') {
    puVar3 = PTR_s_mouseEnteredLeftButtonGroup_102269310;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_performSelector__102269300,puVar3);
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  return;
}

