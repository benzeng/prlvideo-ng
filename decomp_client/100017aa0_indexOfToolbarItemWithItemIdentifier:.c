
/* Function Stack Size: 0x18 bytes */

long_long CVmConsoleWindowToolbarController::indexOfToolbarItemWithItemIdentifier_
                    (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long_long lVar7;
  
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_toolbar_102269000);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_items_102269008);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbarItemWithItemIdentifier__102269010,uVar2);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_indexOfObject__102269018,uVar6);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return lVar7;
}

