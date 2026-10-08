
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::vmToolsStateDidChange(ID param_1,SEL param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  byte bVar1;
  char cVar2;
  
  if (((*(long *)(param_1 + _vm) != 0) && (*(int *)(*(long *)(param_1 + _vm) + 4) != 0)) &&
     (*(long *)(_vm + 8 + param_1) != 0)) {
    bVar1 = FUN_100014e90();
    cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_toolsWarningVisible_1022691e8);
    UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
    if ((int)cVar2 == (uint)bVar1) {
      return;
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setToolsWarningVisible__1022691f0);
    (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_updateDevices_102268e28);
                    /* WARNING: Could not recover jumptable at 0x00010001b05d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_updateSize_102269150);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"%s object does not exist!","VmWrap");
  return;
}

