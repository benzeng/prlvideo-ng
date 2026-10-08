
/* Function Stack Size: 0x10 bytes */

void CControlCenterTitleBarController::onSegmentControlClicked(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 extraout_RDX;
  
  lVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_viewModeHandler_10226a0f8);
  puVar2 = PTR__objc_msgSend_1021e1c68;
  if (lVar1 != 0) {
    lVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_viewModeHandler_10226a0f8);
    uVar3 = (*(code *)puVar2)(param_1,PTR_s_activeMode_10226a100);
                    /* WARNING: Could not recover jumptable at 0x00010008d786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,uVar3,extraout_RDX,*(code **)(lVar1 + 0x10));
    return;
  }
  return;
}

