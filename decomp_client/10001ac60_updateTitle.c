
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::updateTitle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbarItemWithItemIdentifier__102269010,&cf_Title);
  lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  if (lVar3 != 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar3,PTR_s_view_102269138);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_title_102268f30);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_setStringValue__102269098,uVar5);
    puVar1 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar5);
    (*(code *)puVar1)(uVar4);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_updateTextToolbarItemSizes__102269140,lVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  }
  (*(code *)PTR__objc_release_1021e1c70)(lVar3);
  return;
}

