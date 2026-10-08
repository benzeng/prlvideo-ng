
undefined1 FUN_1003ec390(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long *plVar11;
  size_t sVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  long local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QVariant local_c0;
  QString local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  QString local_90;
  QVariant local_88;
  QString local_78;
  QVariant local_70;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  MappingHelpers::getParentObjectPath(&local_60);
  uVar10 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_78.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1df17d1);
  QString::append(&local_78);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ec42b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003ec42b:
  FUN_1003e1800(&local_70,uVar10,&local_78,1);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ec470;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1003ec470:
  uVar10 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_90.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1df17c5);
  QString::append(&local_90);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ec4ed;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003ec4ed:
  FUN_1003e1800(&local_88,uVar10,&local_90,1);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ec53b;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1003ec53b:
  plVar11 = (long *)FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR_s_VmConfig_1021f1e00;
  pcVar1 = *(code **)(*plVar11 + 0x60);
  iVar4 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar12 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar4 = (int)sVar12;
  }
  local_a8 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  local_b0.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1df17d1);
  QString::append(&local_b0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ec5ed;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003ec5ed:
  (*pcVar1)(&local_a0,plVar11,&local_a8,&local_b0);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ec63e;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1003ec63e:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ec674;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003ec674:
  plVar11 = (long *)FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x18));
  pcVar1 = *(code **)(*plVar11 + 0x60);
  iVar4 = -1;
  if (puVar2 != (undefined *)0x0) {
    sVar12 = _strlen(puVar2);
    iVar4 = (int)sVar12;
  }
  local_c8 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  local_d0.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1df17c5);
  QString::append(&local_d0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ec71c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003ec71c:
  (*pcVar1)(&local_c0,plVar11,&local_c8,&local_d0);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ec76d;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1003ec76d:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ec7a3;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1003ec7a3:
  iVar4 = QVariant::toUInt((bool *)&local_c0);
  iVar5 = QVariant::toUInt((bool *)&local_88);
  if (iVar4 == iVar5) {
    lVar13 = QVariant::toLongLong((bool *)&local_a0);
    lVar14 = QVariant::toLongLong((bool *)&local_70);
    if (lVar13 != lVar14) goto LAB_1003ec7e3;
  }
  else {
LAB_1003ec7e3:
    FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
    uVar10 = CVmConfiguration::getVmHardwareList();
    uVar6 = QVariant::toUInt((bool *)&local_88);
    uVar7 = QVariant::toLongLong((bool *)&local_70);
    cVar3 = FUN_100117ec0(uVar10,uVar6,uVar7);
    if (cVar3 == '\0') {
      pvVar15 = operator_new(0x48);
      FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
      uVar10 = CVmConfiguration::getVmHardwareList();
      uVar6 = QVariant::toUInt((bool *)&local_c0);
      uVar7 = QVariant::toUInt((bool *)&local_88);
      uVar8 = QVariant::toLongLong((bool *)&local_a0);
      uVar9 = QVariant::toLongLong((bool *)&local_70);
      uVar16 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
      FUN_1002628e0(pvVar15,uVar10,uVar6,uVar7,uVar8,uVar9,uVar16);
      QObject::connect(&local_d8,pvVar15,"2taskFinished(PRL_RESULT)",param_1,
                       "1onHandleDeviceSlotChangeFinished(PRL_RESULT)",0);
      if (local_d8 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_d8);
      uVar17 = 1;
      CAbstractTask::execute();
      goto LAB_1003ec919;
    }
    uVar6 = QVariant::toLongLong((bool *)&local_70);
    FUN_1003f8b90(param_1,uVar6);
  }
  uVar17 = 0;
LAB_1003ec919:
  QVariant::~QVariant(&local_c0);
  QVariant::~QVariant(&local_a0);
  QVariant::~QVariant(&local_88);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_60.field0_0x0 != 0) {
        return uVar17;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
  return uVar17;
}

