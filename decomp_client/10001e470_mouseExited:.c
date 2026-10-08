
/* Function Stack Size: 0x18 bytes */

void TitleBarButton::mouseExited_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_trackingArea_1022692a0);
  lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = (*(code *)puVar1)(param_1,PTR_s_trackingArea_1022692a0);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar2);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  (*(code *)puVar1)(lVar3);
  if (lVar3 != lVar4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setHovered__102269338,0);
  return;
}

