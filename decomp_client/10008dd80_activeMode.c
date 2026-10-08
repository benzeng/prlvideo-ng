
/* Function Stack Size: 0x10 bytes */

int CControlCenterTitleBarController::activeMode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_segmentedControl_10226a110);
  lVar3 = (*(code *)puVar1)(uVar2,PTR_s_selectedSegment_10226a148);
  return (int)(lVar3 != 0);
}

