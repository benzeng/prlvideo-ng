
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::updateEditVmButtonState(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  lVar4 = _vm;
  if (((*(long *)(param_1 + _vm) == 0) || (*(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
     (*(long *)(_vm + 8 + param_1) == 0)) {
    pcVar7 = "VmWrap";
  }
  else {
    uVar3 = FUN_1006915d0();
    lVar1 = *(long *)(param_1 + lVar4);
    uVar6 = 0;
    if ((lVar1 != 0) && (uVar6 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar6 = *(undefined8 *)(lVar4 + 8 + param_1);
    }
    lVar4 = FUN_100691620(uVar3,0x3e,uVar6);
    if (lVar4 != 0) {
      IVar5 = editVmButton(param_1,PTR_s_editVmButton_102268cb0);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
      uVar2 = QAction::isEnabled();
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setEnabled__102268dc8,uVar2);
      (*(code *)PTR__objc_release_1021e1c70)(uVar6);
      return;
    }
    pcVar7 = "QAction";
  }
  FUN_100df99c0("","prl_client_app",0,"%s object does not exist!",pcVar7);
  return;
}

