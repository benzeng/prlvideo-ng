
/* Function Stack Size: 0x20 bytes */

ID CVmConsoleWindowToolbarController::insertItemWithItemIdentifier_atIndex_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_toolbar_102269000);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar4,PTR_s_insertItemWithItemIdentifier_atI_102269038,uVar2,param_4);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  (*(code *)puVar1)(uVar3);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbarItemsWithItemIdentifier__102269028,uVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_firstObject_102269030);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}

