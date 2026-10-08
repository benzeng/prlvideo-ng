
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::configureVmButtonClicked(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar3 = _vm;
  if (((*(long *)(param_1 + _vm) == 0) || (*(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
     (*(long *)(_vm + 8 + param_1) == 0)) {
    pcVar5 = "VmWrap";
  }
  else {
    uVar2 = FUN_1006915d0();
    lVar1 = *(long *)(param_1 + lVar3);
    uVar4 = 0;
    if ((lVar1 != 0) && (uVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar4 = *(undefined8 *)(lVar3 + 8 + param_1);
    }
    lVar3 = FUN_100691620(uVar2,0x3e,uVar4);
    if (lVar3 != 0) {
      QAction::activate(lVar3,0);
      return;
    }
    pcVar5 = "QAction";
  }
  FUN_100df99c0("","prl_client_app",0,"%s object does not exist!",pcVar5);
  return;
}

