
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::setupUI(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setTitleVisibility__102268f28,1);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSToolbar_10226a820,PTR_s_alloc_102268b58);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_window_102268c08);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_title_102268f30);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar2,PTR_s_stringWithFormat__102268d88,&cf_WindowToolbar_____ld_,uVar6,uVar7)
  ;
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_initWithIdentifier__102268f38,uVar8);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar8);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setSizeMode__102268f40,2);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setDisplayMode__102268f48,2);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setDelegate__102268f50,param_1);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setToolbar__102268f58,uVar4);
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  cVar3 = FUN_100124f70();
  if (cVar3 != '\0') {
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_addCoherenceButton__102268d18,0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setCoherenceButton__102268c50,uVar6);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar5);
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_coherenceButton_102268d20);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setTarget__102268cd8,param_1);
    (*(code *)PTR__objc_release_1021e1c70)(uVar5);
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_coherenceButton_102268d20);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar5,PTR_s_setAction__102268ce8,PTR_s_coherenceButtonClicked_102268f60);
    (*(code *)PTR__objc_release_1021e1c70)(uVar5);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_coherenceActionStateDidChange_102268f20);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  return;
}

