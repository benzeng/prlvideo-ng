
void FUN_1003d45a0(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  long lVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  int iVar5;
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
  
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  if (lVar2 == 0) {
    return;
  }
  local_88.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("Settings.Tools.TimeSync.KeepTimeDiff",0x24);
  puVar1 = PTR_s_VmConfig_1021f1e00;
  iVar5 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar5 = (int)sVar3;
  }
  local_90 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  MappingHelpers::getValueByPath((QHash *)&local_80,param_3,&local_88);
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
      if ((bool)local_21) goto LAB_1003d469d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003d469d:
  local_b0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("Settings.Tools.TimeSync.SyncHostToGuest",0x27);
  iVar5 = -1;
  if (puVar1 != (undefined *)0x0) {
    sVar3 = _strlen(puVar1);
    iVar5 = (int)sVar3;
  }
  local_b8 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  MappingHelpers::getValueByPath((QHash *)&local_a8,param_3,&local_b0);
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
      if ((bool)local_21) goto LAB_1003d479d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003d479d:
  local_d8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("Settings.Tools.TimeSync.Enabled",0x1f);
  iVar5 = -1;
  if (puVar1 != (undefined *)0x0) {
    sVar3 = _strlen(puVar1);
    iVar5 = (int)sVar3;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  MappingHelpers::getValueByPath((QHash *)&local_d0,param_3,&local_d8);
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
  QComboBox::findData(lVar2,&local_48,0x100,0x10);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d4898;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003d4898:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d48ce;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1003d48ce:
  QVariant::~QVariant(&local_d0);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d4910;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1003d4910:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_21 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d4946;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1003d4946:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d4976;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1003d4976:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d49a6;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1003d49a6:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d49dc;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1003d49dc:
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d4a1e;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1003d4a1e:
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_21 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d4a54;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1003d4a54:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d4a84;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003d4a84:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d4ab4;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003d4ab4:
  QVariant::~QVariant(&local_80);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d4af3;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003d4af3:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_21 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d4b23;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1003d4b23:
  QComboBox::setCurrentIndex((int)lVar2);
  return;
}

