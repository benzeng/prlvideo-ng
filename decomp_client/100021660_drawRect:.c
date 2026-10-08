
/* Function Stack Size: 0x30 bytes */

void PDDeviceStatusView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_statusVisible_102269568);
  if (cVar3 == '\0') {
    return;
  }
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_inactiveImage_102269570);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (lVar5 == 0) {
    (*(code *)PTR__objc_release_1021e1c70)(0);
LAB_100021719:
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_image_102269560);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = *(undefined8 *)PTR__NSZeroPoint_1021e11b0;
    uVar1 = *(undefined8 *)(PTR__NSZeroPoint_1021e11b0 + 8);
    if (param_1 == 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_78,param_1,PTR_s_bounds_1022693a0);
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar4,uVar1,(int)DAT_100e11050,uVar6,PTR_s_drawAtPoint_fromRect_operation_f_102269580
               ,2);
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_isMainWindow_102269360);
    puVar2 = PTR__objc_release_1021e1c70;
    if (cVar3 == '\0') {
      (*(code *)PTR__objc_release_1021e1c70)(uVar4);
      (*(code *)puVar2)(lVar5);
    }
    else {
      cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_isActive_102269578);
      puVar2 = PTR__objc_release_1021e1c70;
      (*(code *)PTR__objc_release_1021e1c70)(uVar4);
      (*(code *)puVar2)(lVar5);
      if (cVar3 != '\0') goto LAB_100021719;
    }
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_inactiveImage_102269570);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = *(undefined8 *)PTR__NSZeroPoint_1021e11b0;
    uVar1 = *(undefined8 *)(PTR__NSZeroPoint_1021e11b0 + 8);
    if (param_1 == 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_58,param_1,PTR_s_bounds_1022693a0);
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar4,uVar1,(int)DAT_100e11050,uVar6,PTR_s_drawAtPoint_fromRect_operation_f_102269580
               ,2);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  return;
}

