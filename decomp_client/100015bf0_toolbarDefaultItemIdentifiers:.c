
/* Function Stack Size: 0x18 bytes */

ID CVmConsoleWindowToolbarController::toolbarDefaultItemIdentifiers_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_48 = &cf_LeftCustomSpace;
  local_40 = &cf_CustomSpace;
  local_38 = *(undefined8 *)PTR__NSToolbarFlexibleSpaceItemIdentifier_1021e1140;
  local_30 = &cf_Title;
  local_20 = &cf_ConfigureVM;
  local_28 = local_38;
  local_18 = lVar1;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                     &local_48,6);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  if (lVar1 == local_18) {
    IVar3 = _objc_autoreleaseReturnValue(uVar2);
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

