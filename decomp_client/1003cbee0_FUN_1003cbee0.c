
void FUN_1003cbee0(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QString local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QVariant local_80;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  local_88.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("HostSharing.Enabled",0x13);
  puVar1 = PTR_shared_null_1021e1288;
  local_90 = (QArrayData *)PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_80,param_3,&local_88);
  QVariant::toString();
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_21 = *(int *)local_70 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e41970);
  QString::append(&local_68);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cbfb4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003cbfb4:
  local_b0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("HostSharing.ShareUserHomeDir",0x1c);
  local_b8 = (QArrayData *)puVar1;
  MappingHelpers::getValueByName((QHash *)&local_a8,param_3,&local_b0);
  QVariant::toString();
  local_60.field0_0x0 = local_68.field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_21 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  local_58.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_21 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e41970);
  QString::append(&local_58);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc097;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003cc097:
  local_d8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("HostSharing.ShareAllMacDisks",0x1c);
  local_e0 = (QArrayData *)puVar1;
  MappingHelpers::getValueByName((QHash *)&local_d0,param_3,&local_d8);
  QVariant::toString();
  local_50.field0_0x0 = local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_21 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_50);
  QVariant::QVariant(&local_48,10,&local_50,0);
  iVar3 = QComboBox::findData(uVar4,&local_48,0x100);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc174;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003cc174:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc1aa;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1003cc1aa:
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_21 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc1ec;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1003cc1ec:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_21 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc222;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1003cc222:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc252;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1003cc252:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc282;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1003cc282:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc2b8;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1003cc2b8:
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc2fa;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1003cc2fa:
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_21 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc330;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1003cc330:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc360;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003cc360:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc390;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003cc390:
  QVariant::~QVariant(&local_80);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc3cf;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003cc3cf:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_21 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003cc3ff;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1003cc3ff:
  cVar2 = FUN_100d80630(1);
  if ((iVar3 == -1) && (cVar2 != '\0')) {
    local_f8 = (QArrayData *)QString::fromAscii_helper("true.true.false",0xf);
    QVariant::QVariant(&local_f0,10,&local_f8,0);
    QComboBox::findData(uVar4,&local_f0,0x100,0x10);
    QVariant::~QVariant(&local_f0);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_21 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003cc4a9;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
  }
LAB_1003cc4a9:
  QComboBox::setCurrentIndex((int)uVar4);
  return;
}

