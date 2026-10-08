
/* Function Stack Size: 0x10 bytes */

ID TitleBarButton::associatedThemeFrame(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  
  puVar3 = PTR__objc_msgSend_1021e1c68;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_superview_102268b88);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar1 = (*(code *)puVar3)(uVar5,PTR_s_superview_102268b88);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  uVar5 = _NSClassFromString(&cf_NSTitlebarContainerView);
  cVar4 = (*(code *)puVar3)(uVar1,PTR_s_isKindOfClass__102269108,uVar5);
  uVar5 = 0;
  if (cVar4 != '\0') {
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar1,PTR_s_performSelector__102269300,PTR_s_associatedThemeFrame_1022692f8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  IVar2 = _objc_autoreleaseReturnValue(uVar5);
  return IVar2;
}

