
/* Function Stack Size: 0x14 bytes */

void CControlCenterTitleBarController::setActiveMode_(ID param_1,SEL param_2,int param_3)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_segmentedControl_10226a110);
                    /* WARNING: Could not recover jumptable at 0x00010008ddf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_setSelectedSegment__10226a150,param_3 != 0);
  return;
}

