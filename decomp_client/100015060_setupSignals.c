
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::setupSignals(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  CSignalSelectorBinding *pCVar3;
  QObject *pQVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  lVar1 = _vm;
  if (((*(long *)(param_1 + _vm) == 0) || (*(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
     (*(long *)(_vm + 8 + param_1) == 0)) {
    pcVar7 = "VmWrap";
  }
  else {
    lVar2 = FUN_10018d490();
    if (lVar2 == 0) {
      pcVar7 = "ServerWrap";
    }
    else {
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)0x0;
      if ((*(long *)(param_1 + _messageProvider) != 0) &&
         (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + _messageProvider) + 4) != 0)) {
        pQVar4 = *(QObject **)(_messageProvider + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2statusMessageUpdated(CStatusMessageProvider::StatusMessage)",
                 (objc_object *)param_1,(objc_selector *)PTR_s_update_102268c78);
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)FUN_10098ae20();
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2battStateChanged( BattWatcher::BatteryState )",
                 (objc_object *)param_1,(objc_selector *)PTR_s_batteryStateDidChange_102268f08);
      pCVar3 = operator_new(0x18);
      uVar5 = 0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        uVar5 = *(undefined8 *)(lVar1 + 8 + param_1);
      }
      uVar5 = FUN_10018c280(uVar5);
      pQVar4 = (QObject *)FUN_100319960(uVar5);
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2viewModeChanged(GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)",
                 (objc_object *)param_1,(objc_selector *)PTR_s_update_102268c78);
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        pQVar4 = *(QObject **)(lVar1 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2deviceActionSetsCreated()",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        pQVar4 = *(QObject **)(lVar1 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2deviceActionSetsCleared()",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        pQVar4 = *(QObject **)(lVar1 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                 (objc_object *)param_1,(objc_selector *)PTR_s_update_102268c78);
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        pQVar4 = *(QObject **)(lVar1 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2vmTypeChanged(GUI::VmType)",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        pQVar4 = *(QObject **)(lVar1 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2vmHWUpgradeStarted()",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        pQVar4 = *(QObject **)(lVar1 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2vmHWUpgradeProgressChanged(uint, int)",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        pQVar4 = *(QObject **)(lVar1 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2vmHWUpgradeFinished()",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        pQVar4 = *(QObject **)(lVar1 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2osInstallingChanged(bool)",(objc_object *)param_1,
                 (objc_selector *)PTR_s_update_102268c78);
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)0x0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        pQVar4 = *(QObject **)(lVar1 + 8 + param_1);
      }
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,"2vmToolsStateChanged(PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",
                 (objc_object *)param_1,(objc_selector *)PTR_s_vmToolsStateDidChange_102268f10);
      pCVar3 = operator_new(0x18);
      pQVar4 = (QObject *)FUN_10016f500(lVar2);
      CSignalSelectorBinding::CSignalSelectorBinding
                (pCVar3,pQVar4,
                 "2licenseChanged(const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                 ,(objc_object *)param_1,(objc_selector *)PTR_s_update_102268c78);
      uVar6 = FUN_1006915d0();
      uVar5 = 0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        uVar5 = *(undefined8 *)(lVar1 + 8 + param_1);
      }
      pQVar4 = (QObject *)FUN_100691620(uVar6,0x3e,uVar5);
      if (pQVar4 != (QObject *)0x0) {
        pCVar3 = operator_new(0x18);
        CSignalSelectorBinding::CSignalSelectorBinding
                  (pCVar3,pQVar4,"2changed()",(objc_object *)param_1,
                   (objc_selector *)PTR_s_editVmActionStateDidChange_102268f18);
        uVar6 = FUN_1006915d0();
        uVar5 = 0;
        if ((*(long *)(param_1 + lVar1) != 0) &&
           (uVar5 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
          uVar5 = *(undefined8 *)(lVar1 + 8 + param_1);
        }
        pQVar4 = (QObject *)FUN_100691620(uVar6,0x26,uVar5);
        if (pQVar4 != (QObject *)0x0) {
          pCVar3 = operator_new(0x18);
          CSignalSelectorBinding::CSignalSelectorBinding
                    (pCVar3,pQVar4,"2changed()",(objc_object *)param_1,
                     (objc_selector *)PTR_s_coherenceActionStateDidChange_102268f20);
          uVar6 = FUN_1006915d0();
          uVar5 = 0;
          if ((*(long *)(param_1 + lVar1) != 0) &&
             (uVar5 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
            uVar5 = *(undefined8 *)(lVar1 + 8 + param_1);
          }
          pQVar4 = (QObject *)FUN_100691620(uVar6,0xc,uVar5);
          if (pQVar4 != (QObject *)0x0) {
            pCVar3 = operator_new(0x18);
            CSignalSelectorBinding::CSignalSelectorBinding
                      (pCVar3,pQVar4,"2changed()",(objc_object *)param_1,
                       (objc_selector *)PTR_s_update_102268c78);
            return;
          }
        }
      }
      pcVar7 = "QAction";
    }
  }
  FUN_100df99c0("","prl_client_app",0,"%s object does not exist!",pcVar7);
  return;
}

