
/* Function Stack Size: 0x10 bytes */

void PDAccountTitleButton::buttonDidClick(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID self;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMenu_10226a8b8,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_initWithTitle__102268d30,&cf_Test);
  cVar2 = FUN_100d80630(1);
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (cVar2 == '\0') {
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Account_Settings____102270a90);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar1,PTR_s_stringWithQString__102268d00,&local_40);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar3,PTR_s_addItemWithTitle_action_keyEquiv_102269758,uVar4,
                       PTR_s_actionsSettingsDidClick_102269750,&cf___);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100027533;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100027533:
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setTarget__102268cd8,param_1);
    puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Manage_Licenses____102270a98);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar1,PTR_s_stringWithQString__102268d00,&local_48);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar3,PTR_s_addItemWithTitle_action_keyEquiv_102269758,uVar4,
                       PTR_s_actionManageDidClick_102269760,&cf___);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000275f3;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1000275f3:
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setTarget__102268cd8,param_1);
    puVar1 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    (*(code *)puVar1)(uVar5);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,(int)PTR_s_Sign_Out____102270aa0)
  ;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_stringWithQString__102268d00,&local_50);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar3,PTR_s_addItemWithTitle_action_keyEquiv_102269758,uVar4,
                     PTR_s_actionSignOutDidClick_102269768,&cf___);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000276c4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000276c4:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setTarget__102268cd8,param_1);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_nameButton_102269720);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_nameButton_102269720);
  self = _objc_retainAutoreleasedReturnValue(uVar6);
  if (self == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,self,PTR_s_frame_102268b50);
  }
  uVar6 = uStack_60;
  uVar13 = (*(code *)PTR__objc_msgSend_1021e1c68)(0,uVar4,PTR_s_convertPoint_toView__102269500,0);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(self);
  (*(code *)puVar1)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_currentEvent_102269640);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSEvent_10226a8b0;
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_type_102269648);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_modifierFlags_102269650);
  uVar14 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_timestamp_102269658);
  uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_windowNumber_102269660);
  uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_context_102269668);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_eventNumber_102269670);
  uVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_clickCount_102269678);
  uVar15 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_pressure_102269680);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar13,uVar6,uVar14,uVar15,puVar1,
                     PTR_s_mouseEventWithType_location_modi_102269688,uVar7,uVar8,uVar9,uVar10,
                     uVar11,uVar12);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_1021e1c70)(uVar10);
  puVar1 = PTR__OBJC_CLASS___NSMenu_10226a8b8;
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_nameButton_102269720);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (puVar1,PTR_s_popUpContextMenu_withEvent_forVi_102269698,uVar3,uVar6,uVar7);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar3);
  return;
}

