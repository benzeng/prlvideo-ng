
void FUN_10007bfd0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  QArrayData *local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QVariant local_b0;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  uVar6 = QWidget::winId();
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_window_102268c08);
  uVar6 = (*(code *)puVar1)(uVar6,PTR_s_contentView_102268b80);
  uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSView_10226a810,PTR_s_new_102269070);
  uVar7 = (*(code *)puVar1)(uVar7,PTR_s_autorelease_102269a10);
  (*(code *)puVar1)(uVar6,PTR_s_addSubview__102268d70,uVar7);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar8 = __NSDictionaryOfVariableBindings(&cf_container,uVar7,0);
  uVar8 = (*(code *)puVar1)(puVar2,PTR_s_constraintsWithVisualFormat_opti_102268d90,
                            &cf_H___container__,0,0,uVar8);
  (*(code *)puVar1)(uVar6,PTR_s_addConstraints__102268d98,uVar8);
  uVar8 = (*(code *)puVar1)(*(undefined8 *)PTR__kCustomTitleContentArea_1021e19a0,
                            PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithFormat__102268d88,
                            &cf_V____f__container__);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar9 = __NSDictionaryOfVariableBindings(&cf_container,uVar7,0);
  uVar8 = (*(code *)puVar1)(puVar2,PTR_s_constraintsWithVisualFormat_opti_102268d90,uVar8,0,0,uVar9)
  ;
  (*(code *)puVar1)(uVar6,PTR_s_addConstraints__102268d98,uVar8);
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_68 = (QArrayData *)QString::fromAscii_helper("ControlCenterBannerURL",0x16);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  QSettings::value((QString *)&local_60,&local_48);
  QVariant::toString();
  QVariant::~QVariant(&local_60);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007c193;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10007c193:
  local_90 = (QArrayData *)QString::fromAscii_helper("ControlCenterBannerWidth",0x18);
  QVariant::QVariant(&local_a0,0);
  QSettings::value((QString *)&local_88,&local_48);
  iVar4 = QVariant::toInt((bool *)&local_88);
  QVariant::~QVariant(&local_88);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007c234;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10007c234:
  local_b8 = (QArrayData *)QString::fromAscii_helper("ControlCenterBannerHeight",0x19);
  QVariant::QVariant(&local_c8,0x82);
  QSettings::value((QString *)&local_b0,&local_48);
  iVar5 = QVariant::toInt((bool *)&local_b0);
  QVariant::~QVariant(&local_b0);
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007c2da;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10007c2da:
  uVar6 = FUN_100152280();
  uVar6 = FUN_1001554a0(uVar6);
  uVar6 = FUN_10016f500(uVar6);
  cVar3 = FUN_10061b4d0(uVar6,0x80);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10226a878,PTR_s_dictionary_1022698f0);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithBool__102269a20,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar6,PTR_s_setObject_forKeyedSubscript__1022698f8,uVar8,
             *(undefined8 *)PTR__PDControlCenterOptionAppBarAvailable_1021e11d0);
  puVar1 = PTR__OBJC_CLASS___NSURL_10226a8d0;
  if ((cVar3 != '\0') && (*(int *)(local_50 + 4) != 0)) {
    uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                       &local_50);
    uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar1,PTR_s_URLWithString__1022697c8,uVar8);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar6,PTR_s_setObject_forKeyedSubscript__1022698f8,uVar8,
               *(undefined8 *)PTR__PDControlCenterOptionBannerURL_1021e11e0);
    uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      ((double)iVar4,(double)iVar5,PTR__OBJC_CLASS___NSValue_10226aa38,
                       PTR_s_valueWithSize__102269ed8);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar6,PTR_s_setObject_forKeyedSubscript__1022698f8,uVar8,
               *(undefined8 *)PTR__PDControlCenterOptionBannerSize_1021e11d8);
  }
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___PDControlCenterViewController_10226aa40,PTR_s_alloc_102268b58
                    );
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_initWithOptions__102269ee0,uVar6);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_embedInView__102269ee8,uVar7);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_CControlCenterTitleBarController_10226aa48,PTR_s_alloc_102268b58);
  uVar7 = QWidget::winId();
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_window_102268c08);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_initWithWindow__102268c10,uVar7);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  QMetaObject::tr((char *)&local_d0,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Control_Center_10226fd58);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_stringWithQString__102268d00,&local_d0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setTitleText__102268e00,uVar7);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007c502;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10007c502:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007c532;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10007c532:
  QSettings::~QSettings((QSettings *)&local_48);
  return;
}

