
/* Function Stack Size: 0x10 bytes */

void PDBarButtonItem::onButtonClicked(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID self;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  Data *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  double dStack_40;
  char local_32;
  undefined1 local_31;
  
  local_32 = '\x01';
  lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_popupMenu__102269638,&local_32);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (lVar3 == 0) {
    return;
  }
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_button_1022695f0);
  self = _objc_retainAutoreleasedReturnValue(uVar5);
  if (self == 0) {
    local_48 = 0;
    dStack_40 = 0.0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_frame_102268b50);
  }
  dVar14 = dStack_40 * DAT_100e11130 * DAT_100e11138;
  uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(0,uVar4,PTR_s_convertPoint_toView__102269500,0);
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(self);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_currentEvent_102269640);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSEvent_10226a8b0;
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_type_102269648);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_modifierFlags_102269650);
  uVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_timestamp_102269658);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_windowNumber_102269660);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_context_102269668);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_eventNumber_102269670);
  uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_clickCount_102269678);
  uVar13 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_pressure_102269680);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar11,dVar14,uVar12,uVar13,puVar2,
                     PTR_s_mouseEventWithType_location_modi_102269688,uVar5,uVar6,uVar7,uVar8,uVar9,
                     uVar10);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_1021e1c70)(uVar8);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMenu_10226a8b8,PTR_s_alloc_102268b58);
  QWidget::actions();
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_initWithQActions__102269690,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000234ab;
    }
    QListData::dispose(local_60);
  }
LAB_1000234ab:
  puVar1 = PTR__OBJC_CLASS___NSMenu_10226a8b8;
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (puVar1,PTR_s_popUpContextMenu_withEvent_forVi_102269698,uVar6,uVar5,uVar7);
  (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  if (local_32 != '\0') {
    local_88 = PTR___NSConcreteStackBlock_1021e1280;
    local_80 = 0xc0000000;
    local_7c = 0;
    local_78 = FUN_100023620;
    local_70 = &DAT_1021ed150;
    local_68 = lVar3;
    uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_addDeallocHook__102268bd8,&local_88);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  }
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  return;
}

