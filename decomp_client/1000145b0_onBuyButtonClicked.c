
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::onBuyButtonClicked(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (((*(long *)(param_1 + _vm) == 0) || (*(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
     (*(long *)(_vm + 8 + param_1) == 0)) {
    pcVar3 = "VmWrap";
  }
  else {
    lVar1 = FUN_10018d490();
    if (lVar1 == 0) {
      pcVar3 = "ServerWrap";
    }
    else {
      uVar2 = FUN_1006915d0();
      lVar1 = FUN_100691620(uVar2,0x8e,lVar1);
      if (lVar1 != 0) {
        QAction::activate(lVar1,0);
        return;
      }
      pcVar3 = "QAction";
    }
  }
  FUN_100df99c0("","prl_client_app",0,"%s object does not exist!",pcVar3);
  return;
}

