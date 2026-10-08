
/* Function Stack Size: 0x24 bytes */

ID CVmConsoleWindowToolbarController::toolbarItemWithItemIdentifier_createIfAbsent_atIndex_
             (ID param_1,SEL param_2,ID param_3,char param_4,long_long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  
  uVar1 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbarItemsWithItemIdentifier__102269028,uVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_firstObject_102269030);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  if ((param_4 != '\0') && (lVar4 == 0)) {
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (param_1,PTR_s_insertItemWithItemIdentifier_atI_102269038,uVar1,param_5);
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar2);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  IVar5 = _objc_autoreleaseReturnValue(lVar4);
  return IVar5;
}

