
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::vmToolsStateChanged(ID param_1,SEL param_2)

{
  byte bVar1;
  
  if (((*(long *)(param_1 + _vm) != 0) && (*(int *)(*(long *)(param_1 + _vm) + 4) != 0)) &&
     (*(long *)(_vm + 8 + param_1) != 0)) {
    bVar1 = FUN_100010f20();
    if ((int)*(char *)(param_1 + _toolsWarningVisible) == (uint)bVar1) {
      return;
    }
    *(byte *)(param_1 + _toolsWarningVisible) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x000100013335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updateDevices_102268e28);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"%s object does not exist!","VmWrap");
  return;
}

