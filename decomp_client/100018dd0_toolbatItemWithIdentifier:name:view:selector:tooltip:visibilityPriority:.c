
/* Function Stack Size: 0x40 bytes */

ID CVmConsoleWindowToolbarController::
   toolbatItemWithIdentifier_name_view_selector_tooltip_visibilityPriority_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,SEL param_6,ID param_7,
             long_long param_8)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  
  puVar1 = PTR__objc_retain_1021e1c78;
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar4 = (*(code *)puVar1)(param_4);
  uVar5 = (*(code *)puVar1)(param_5);
  uVar6 = (*(code *)puVar1)(param_7);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSToolbarItem_10226a858,PTR_s_alloc_102268b58);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar7,PTR_s_initWithItemIdentifier__1022690e8,uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setLabel__1022690f0,uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setPaletteLabel__1022690f8,uVar4);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_class_102269100);
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_isKindOfClass__102269108,uVar8);
  if (cVar2 == '\0') {
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setView__102269110,uVar5);
  }
  else {
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setImage__102268cd0,uVar5);
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setTarget__102268cd8,param_1);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setAction__102268ce8,param_6);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setToolTip__102268d08,uVar6);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setVisibilityPriority__102269118,param_8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setMenuFormRepresentation__102269120,0);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  IVar9 = _objc_autoreleaseReturnValue(uVar7);
  return IVar9;
}

