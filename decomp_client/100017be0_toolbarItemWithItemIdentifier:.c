
/* Function Stack Size: 0x18 bytes */

ID CVmConsoleWindowToolbarController::toolbarItemWithItemIdentifier_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbarItemWithItemIdentifier_cr_102269020,param_3,0,
                     0xffffffffffffffff);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

