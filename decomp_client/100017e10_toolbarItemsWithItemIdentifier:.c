
/* Function Stack Size: 0x18 bytes */

ID CVmConsoleWindowToolbarController::toolbarItemsWithItemIdentifier_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  local_38 = uVar2;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                     &local_38,1);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbarItemsWithItemIdentifiers__102269040,uVar3);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  if (lVar1 == local_30) {
    IVar4 = _objc_autoreleaseReturnValue(uVar3);
    return IVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

