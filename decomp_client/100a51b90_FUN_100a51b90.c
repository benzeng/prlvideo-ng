
undefined1 FUN_100a51b90(QString *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  QString *pQVar7;
  undefined1 uVar8;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QLocale local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar3 = PTR__OBJC_CLASS___NSLocale_10226aa88;
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSLocale_10226aa88,PTR_s_currentLocale_10226a2a0);
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_localeIdentifier_10226a2a8);
  lVar5 = (*(code *)puVar2)(puVar3,PTR_s_componentsFromLocaleIdentifier__10226a2b0,uVar4);
  if (lVar5 == 0) {
    return 0;
  }
  uVar4 = *(undefined8 *)PTR__NSLocaleLanguageCode_1021e1120;
  lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (lVar5,PTR_s_objectForKeyedSubscript__102269240,uVar4);
  if (lVar6 == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)PTR__NSLocaleCountryCode_1021e1118;
  lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (lVar5,PTR_s_objectForKeyedSubscript__102269240,uVar1);
  if (lVar6 == 0) {
    return 0;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("%1_%2",5);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (lVar5,PTR_s_objectForKeyedSubscript__102269240,uVar4);
  if (puVar2 == (undefined *)0x0) {
    local_58 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,(ID)puVar2,PTR_s_QStringWithString__1022696d0,uVar4);
  }
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (lVar5,PTR_s_objectForKeyedSubscript__102269240,uVar1);
  if (puVar2 == (undefined *)0x0) {
    local_60 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_60,(ID)puVar2,PTR_s_QStringWithString__1022696d0,uVar4);
  }
  QString::arg(&local_40,&local_48,&local_60,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a51d36;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a51d36:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a51d66;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a51d66:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a51d96;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a51d96:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a51dc6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a51dc6:
  QLocale::QLocale(local_68,&local_40);
  QLocale::name();
  QString::operator=(&local_40,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a51e1d;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100a51e1d:
  if (*(int *)(local_40.field0_0x0 + 4) != 5) {
    uVar8 = 0;
    goto LAB_100a51f08;
  }
  if (*(int *)(local_40.field0_0x0 + 4) < 3) {
    uVar8 = 0;
    goto LAB_100a51f08;
  }
  if (*(short *)(local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10) + 4) != 0x5f) {
    uVar8 = 0;
    goto LAB_100a51f08;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("_",1);
  local_80 = (QArrayData *)QString::fromAscii_helper("-",1);
  pQVar7 = (QString *)QString::replace(&local_40,&local_78,&local_80,1);
  QString::operator=(param_1,pQVar7);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a51ec2;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100a51ec2:
  uVar8 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a51f08;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100a51f08:
  QLocale::~QLocale(local_68);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar8;
}

