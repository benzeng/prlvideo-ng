
/* Function Stack Size: 0x10 bytes */

void TitleBarButton::viewDidMoveToWindow(ID param_1,SEL param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
  lVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)PTR__objc_release_1021e1c70)(lVar2);
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updatePosition_1022692d0);
                    /* WARNING: Could not recover jumptable at 0x00010001dd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_updateTrackingArea_1022692d8);
    return;
  }
  return;
}

