
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::onFeedbackButtonClicked(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  
  if (((*(long *)(param_1 + _vm) == 0) || (*(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
     (*(long *)(_vm + 8 + param_1) == 0)) {
    pcVar3 = "VmWrap";
  }
  else {
    uVar1 = FUN_1006915d0();
    lVar2 = FUN_100691620(uVar1,0x54,*(undefined8 *)PTR_self_1021e1388);
    if (lVar2 != 0) {
      QAction::activate(lVar2,0);
      return;
    }
    pcVar3 = "QAction";
  }
  FUN_100df99c0("","prl_client_app",0,"%s object does not exist!",pcVar3);
  return;
}

