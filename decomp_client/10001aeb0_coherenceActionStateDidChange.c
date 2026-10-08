
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::coherenceActionStateDidChange(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  lVar4 = _vm;
  if (((*(long *)(param_1 + _vm) == 0) || (*(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
     (*(long *)(_vm + 8 + param_1) == 0)) {
    pcVar6 = "VmWrap";
  }
  else {
    uVar3 = FUN_1006915d0();
    lVar1 = *(long *)(param_1 + lVar4);
    uVar5 = 0;
    if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar5 = *(undefined8 *)(lVar4 + 8 + param_1);
    }
    lVar4 = FUN_100691620(uVar3,0x26,uVar5);
    if (lVar4 != 0) {
      uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_coherenceButton_102268d20);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar2 = QAction::isEnabled();
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setEnabled__102268dc8,uVar2);
      (*(code *)PTR__objc_release_1021e1c70)(uVar5);
      return;
    }
    pcVar6 = "QAction";
  }
  FUN_100df99c0("","prl_client_app",0,"%s object does not exist!",pcVar6);
  return;
}

