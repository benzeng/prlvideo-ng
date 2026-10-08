
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::setupSignals(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  QObject *pQVar5;
  CSignalSelectorBinding *pCVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  
  lVar3 = _vm;
  if (((*(long *)(param_1 + _vm) == 0) || (*(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
     (*(long *)(_vm + 8 + param_1) == 0)) {
    pcVar9 = "VmWrap";
  }
  else {
    lVar4 = FUN_10018d490();
    if (lVar4 == 0) {
      pcVar9 = "ServerWrap";
    }
    else {
      pQVar5 = operator_new(0x28);
      lVar2 = _vmConsoleWindow;
      lVar1 = *(long *)(param_1 + _vmConsoleWindow);
      uVar7 = 0;
      uVar8 = 0;
      if (lVar1 != 0) {
        uVar7 = 0;
        if (*(int *)(lVar1 + 4) != 0) {
          uVar7 = *(undefined8 *)(_vmConsoleWindow + 8 + param_1);
        }
        uVar8 = 0;
        if (*(int *)(lVar1 + 4) != 0) {
          uVar8 = *(undefined8 *)(_vmConsoleWindow + 8 + param_1);
        }
      }
      CEventWatcher::CEventWatcher((CEventWatcher *)pQVar5,uVar7,uVar8,0x11);
      pCVar6 = operator_new(0x18);
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2triggered(QEvent*)",(objc_object *)param_1,
                 (objc_selector *)PTR_s_vmConsoleShowEvent_102268c68);
      pQVar5 = operator_new(0x28);
      lVar1 = *(long *)(param_1 + lVar2);
      uVar7 = 0;
      uVar8 = 0;
      if (lVar1 != 0) {
        uVar7 = 0;
        if (*(int *)(lVar1 + 4) != 0) {
          uVar7 = *(undefined8 *)(lVar2 + 8 + param_1);
        }
        uVar8 = 0;
        if (*(int *)(lVar1 + 4) != 0) {
          uVar8 = *(undefined8 *)(lVar2 + 8 + param_1);
        }
      }
      CEventWatcher::CEventWatcher((CEventWatcher *)pQVar5,uVar7,uVar8,0xe);
      pCVar6 = operator_new(0x18);
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2triggered(QEvent*)",(objc_object *)param_1,
                 (objc_selector *)PTR_s_updateBuyButton_102268c70);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)0x0;
      if ((*(long *)(param_1 + _messageProvider) != 0) &&
         (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + _messageProvider) + 4) != 0)) {
        pQVar5 = *(QObject **)(_messageProvider + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2statusMessageUpdated(CStatusMessageProvider::StatusMessage)",
                 (objc_object *)param_1,(objc_selector *)PTR_s_update_102268c78);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)FUN_10098ae20();
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2battStateChanged( BattWatcher::BatteryState )",
                 (objc_object *)param_1,(objc_selector *)PTR_s_batteryStateChanged_102268c80);
      pCVar6 = operator_new(0x18);
      uVar7 = 0;
      if ((*(long *)(param_1 + lVar3) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
        uVar7 = *(undefined8 *)(lVar3 + 8 + param_1);
      }
      uVar7 = FUN_10018c280(uVar7);
      pQVar5 = (QObject *)FUN_100319960(uVar7);
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2viewModeChanged(GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)",
                 (objc_object *)param_1,(objc_selector *)PTR_s_update_102268c78);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar3) != 0) &&
         (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
        pQVar5 = *(QObject **)(lVar3 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2deviceActionSetsCreated()",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar3) != 0) &&
         (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
        pQVar5 = *(QObject **)(lVar3 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2deviceActionSetsCleared()",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar3) != 0) &&
         (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
        pQVar5 = *(QObject **)(lVar3 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                 (objc_object *)param_1,(objc_selector *)PTR_s_update_102268c78);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar3) != 0) &&
         (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
        pQVar5 = *(QObject **)(lVar3 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2vmTypeChanged(GUI::VmType)",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar3) != 0) &&
         (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
        pQVar5 = *(QObject **)(lVar3 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2vmHWUpgradeStarted()",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar3) != 0) &&
         (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
        pQVar5 = *(QObject **)(lVar3 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2vmHWUpgradeProgressChanged(uint, int)",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar3) != 0) &&
         (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
        pQVar5 = *(QObject **)(lVar3 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2vmHWUpgradeFinished()",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar3) != 0) &&
         (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
        pQVar5 = *(QObject **)(lVar3 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2osInstallingChanged(bool)",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar3) != 0) &&
         (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
        pQVar5 = *(QObject **)(lVar3 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,"2vmToolsStateChanged(PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",
                 (objc_object *)param_1,(objc_selector *)PTR_s_vmToolsStateChanged_102268c88);
      pCVar6 = operator_new(0x18);
      pQVar5 = (QObject *)FUN_10016f500(lVar4);
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar6,pQVar5,
                 "2licenseChanged(const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                 ,(objc_object *)param_1,(objc_selector *)PTR_s_updateBuyButton_102268c70);
      uVar8 = FUN_1006915d0();
      uVar7 = 0;
      if ((*(long *)(param_1 + lVar3) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
        uVar7 = *(undefined8 *)(lVar3 + 8 + param_1);
      }
      pQVar5 = (QObject *)FUN_100691620(uVar8,0x3e,uVar7);
      if (pQVar5 != (QObject *)0x0) {
        pCVar6 = operator_new(0x18);
        CSignalSelectorBinding::CSignalSelectorBinding
                  (pCVar6,pQVar5,"2changed()",(objc_object *)param_1,
                   (objc_selector *)PTR_s_updateEditVmButtonState_102268c90);
        uVar8 = FUN_1006915d0();
        uVar7 = 0;
        if ((*(long *)(param_1 + lVar3) != 0) &&
           (uVar7 = 0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
          uVar7 = *(undefined8 *)(lVar3 + 8 + param_1);
        }
        pQVar5 = (QObject *)FUN_100691620(uVar8,0x26,uVar7);
        if (pQVar5 != (QObject *)0x0) {
          pCVar6 = operator_new(0x18);
          CSignalSelectorBinding::CSignalSelectorBinding
                    (pCVar6,pQVar5,"2changed()",(objc_object *)param_1,
                     (objc_selector *)PTR_s_updateCoherenceButtonState_102268c98);
          uVar8 = FUN_1006915d0();
          uVar7 = 0;
          if ((*(long *)(param_1 + lVar3) != 0) &&
             (uVar7 = 0, *(int *)(*(long *)(param_1 + lVar3) + 4) != 0)) {
            uVar7 = *(undefined8 *)(lVar3 + 8 + param_1);
          }
          pQVar5 = (QObject *)FUN_100691620(uVar8,0xc,uVar7);
          if (pQVar5 != (QObject *)0x0) {
            pCVar6 = operator_new(0x18);
            CSignalSelectorBinding::CSignalSelectorBinding
                      (pCVar6,pQVar5,"2changed()",(objc_object *)param_1,
                       (objc_selector *)PTR_s_update_102268c78);
            return;
          }
        }
      }
      pcVar9 = "QAction";
    }
  }
  FUN_100df99c0("","prl_client_app",0,"%s object does not exist!",pcVar9);
  return;
}

