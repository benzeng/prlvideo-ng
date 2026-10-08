
/* Function Stack Size: 0x10 bytes */

void CControlCenterTitleBarController::onAddButtonClicked(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addButtonHandler_10226a0f0);
  if (lVar1 != 0) {
    lVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addButtonHandler_10226a0f0);
                    /* WARNING: Could not recover jumptable at 0x00010008d724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1);
    return;
  }
  return;
}

