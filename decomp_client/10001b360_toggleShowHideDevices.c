
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::toggleShowHideDevices(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_R9;
  bool bVar7;
  undefined1 local_159;
  QVariant local_158;
  Data_conflict local_148;
  QString local_140 [2];
  QArrayData *local_130;
  QPixmap local_128 [32];
  QArrayData *local_108;
  QPixmap local_100 [32];
  QArrayData *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  char *local_40;
  undefined1 local_31;
  
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbarItemWithItemIdentifier__102269010,&cf_Show_HideDevices);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) goto LAB_10001b89e;
  lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar4,PTR_s_tag_102269160);
  (*(code *)PTR__objc_msgSend_1021e1c68)(lVar4,PTR_s_setTag__102268fe8,lVar5 == 0);
  lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar4,PTR_s_tag_102269160);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (lVar5 == 0) {
    QMetaObject::tr((char *)&local_e0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Show_devices_10226ffb0);
  }
  else {
    QMetaObject::tr((char *)&local_e0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Hide_devices_10226ffb8);
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar2,PTR_s_stringWithQString__102268d00,&local_e0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(lVar4,PTR_s_setToolTip__102268d08,uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001b4a7;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10001b4a7:
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar4,PTR_s_view_102269138);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  bVar7 = lVar5 == 0;
  if (bVar7) {
    local_108 = (QArrayData *)
                QString::fromAscii_helper
                          (":/pixmaps/MacButtons/Templates/title_arrow_closed_template.png",0x3e);
    QPixmap::QPixmap(local_100,&local_108,0,0);
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar2,PTR_s_imageTemplateWithQPixmap__102268cc8,local_100);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  }
  else {
    local_130 = (QArrayData *)
                QString::fromAscii_helper
                          (":/pixmaps/MacButtons/Templates/title_arrow_template.png",0x37);
    QPixmap::QPixmap(local_128,&local_130,0,0);
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar2,PTR_s_imageTemplateWithQPixmap__102268cc8,local_128);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setImage__102268cd0,uVar6);
  if (!bVar7) {
    (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    QPixmap::~QPixmap(local_128);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10001b5f7;
      }
      QArrayData::deallocate(local_130,2,8);
    }
  }
LAB_10001b5f7:
  if (bVar7) {
    (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    QPixmap::~QPixmap(local_100);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10001b646;
      }
      QArrayData::deallocate(local_108,2,8);
    }
  }
LAB_10001b646:
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updateDevices_102268e28);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updateSize_102269150);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setDeviceBarAutoHidden__102268dd0,0);
  QSettings::QSettings((QSettings *)local_140,(QObject *)0x0);
  local_148.field7 = QString::fromAscii_helper("Main Window/Status Bar Devices Visibility",0x29);
  ::QVariant::QVariant(&local_158,lVar5 != 0);
  QSettings::setValue(local_140,(QVariant *)&local_148);
  ::QVariant::~QVariant(&local_158);
  if (*(int *)local_148.field15 != -1) {
    if (*(int *)local_148.field15 != 0) {
      LOCK();
      *(int *)local_148.field15 = *(int *)local_148.field15 + -1;
      local_31 = *(int *)local_148.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001b714;
    }
    QArrayData::deallocate((QArrayData *)local_148.field15,2,8);
  }
LAB_10001b714:
  if (((*(long *)(param_1 + _vmConsoleWindow) != 0) &&
      (*(int *)(*(long *)(param_1 + _vmConsoleWindow) + 4) != 0)) &&
     (lVar1 = *(long *)(_vmConsoleWindow + 8 + param_1), lVar1 != 0)) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_48 = &local_159;
    local_40 = "bool";
    local_159 = lVar5 != 0;
    QMetaObject::invokeMethod
              (lVar1,"deviceBarVisiblilityChanged",1,0,0,in_R9,local_48,"bool",0,0,0,0,0,0,0,0,0,0,0
               ,0,0,0,0,0,0,0);
  }
  QSettings::~QSettings((QSettings *)local_140);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
LAB_10001b89e:
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  return;
}

