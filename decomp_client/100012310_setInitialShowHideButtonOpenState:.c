
/* Function Stack Size: 0x14 bytes */

void CVmConsoleWindowTitleBarController::setInitialShowHideButtonOpenState_
               (ID param_1,SEL param_2,char param_3)

{
  undefined *UNRECOVERED_JUMPTABLE;
  char cVar1;
  
  cVar1 = deviceStackInitialized(param_1,PTR_s_deviceStackInitialized_102268da8);
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  if (cVar1 != '\0') {
    return;
  }
  setDeviceStackInitialized_(param_1,PTR_s_setDeviceStackInitialized__102268db0,'\x01');
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_setStackContainerOpen__102268db8,(int)param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001237d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_updateShowHideDevicesButtonToolt_102268dc0);
  return;
}

