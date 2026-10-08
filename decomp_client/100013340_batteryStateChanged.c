
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::batteryStateChanged(ID param_1,SEL param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar2 = FUN_10098ae20();
  if (*(int *)(lVar2 + 0x14) == 1) {
    cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_isStackContainerOpen_102268dd8);
    UNRECOVERED_JUMPTABLE = (code *)PTR__objc_msgSend_1021e1c68;
    if (cVar1 == '\0') {
      return;
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setStackContainerOpen__102268db8,0);
    uVar3 = 1;
  }
  else {
    cVar1 = deviceBarAutoHidden(param_1,PTR_s_deviceBarAutoHidden_102268e30);
    UNRECOVERED_JUMPTABLE = (code *)PTR__objc_msgSend_1021e1c68;
    if (cVar1 == '\0') {
      return;
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setStackContainerOpen__102268db8,1);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000133cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,PTR_s_setDeviceBarAutoHidden__102268dd0,uVar3);
  return;
}

