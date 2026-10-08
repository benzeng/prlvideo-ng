
void FUN_1003c1770(long param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  QString *pQVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  QString local_120;
  QVariant local_118;
  QArrayData *local_108;
  QArrayData *local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QVariant local_d0;
  QString local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QVariant local_a0;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QVariant local_78;
  QVariant local_68;
  QVariant local_58;
  QArrayData *local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  pQVar7 = (QString *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1470);
  QObject::property((char *)&local_58);
  QVariant::toString();
  QVariant::~QVariant(&local_58);
  QObject::property((char *)&local_68);
  if (DAT_102273e70 == 0) {
    DAT_102273e70 = FUN_1003deea0("PRL_DEVICE_TYPE",0xffffffffffffffff,1);
  }
  uVar2 = DAT_102273e70;
  uVar5 = QVariant::userType();
  if (uVar2 == uVar5) {
    piVar8 = (int *)QVariant::constData();
    iVar11 = *piVar8;
  }
  else {
    cVar3 = QVariant::convert((int)&local_68,(void *)(ulong)uVar2);
    iVar11 = 0;
    if (cVar3 != '\0') {
      iVar11 = local_3c;
    }
  }
  local_80.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("EmulatedType",0xc);
  puVar1 = PTR_shared_null_1021e1288;
  local_88 = (QArrayData *)PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_78,param_3,&local_80);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c18a3;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1003c18a3:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c18d3;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1003c18d3:
  iVar6 = QVariant::userType();
  if (iVar6 == 3) {
    piVar8 = (int *)QVariant::constData();
    iVar6 = *piVar8;
  }
  else {
    cVar3 = QVariant::convert((int)&local_78,(void *)0x3);
    iVar6 = 0;
    if (cVar3 != '\0') {
      iVar6 = local_38;
    }
  }
  local_a8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("SystemName",10);
  local_b0 = (QArrayData *)puVar1;
  MappingHelpers::getValueByName((QHash *)&local_a0,param_3,&local_a8);
  QVariant::toString();
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c199c;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1003c199c:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c19d2;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1003c19d2:
  if ((iVar11 == 6) && ((iVar6 == 0 || (iVar6 == 3)))) {
    FUN_1003b83e0(&local_b8,*(undefined8 *)(param_1 + 0x18),&local_48);
    if (*(int *)(local_b8.field0_0x0 + 4) != 0) {
      QString::operator=(&local_90,&local_b8);
    }
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_31 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003c1a59;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
  }
LAB_1003c1a59:
  local_d8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("UserFriendlyName",0x10);
  local_e0 = (QArrayData *)puVar1;
  MappingHelpers::getValueByName((QHash *)&local_d0,param_3,&local_d8);
  QVariant::toString();
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c1aea;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1003c1aea:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c1b20;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1003c1b20:
  if (*(int *)(local_c0.field0_0x0 + 4) == 0) {
    QString::operator=(&local_c0,&local_90);
  }
  uVar9 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_100 = (QArrayData *)QString::fromAscii_helper("Identification.VmHome",0x15);
  FUN_1003e1800(&local_f8,uVar9,&local_100,0);
  QVariant::toString();
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c1bd1;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1003c1bd1:
  local_108 = (QArrayData *)QString::fromAscii_helper(".pvs",4);
  cVar3 = QString::endsWith(&local_e8,&local_108,1);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c1c39;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1003c1c39:
  if (cVar3 != '\0') {
    FUN_100109830(&local_e8);
  }
  CPrlFileDevSelectorWidget::setDefaultPath(pQVar7);
  CPrlFileDevSelectorWidget::setRootPath(pQVar7);
  local_120.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Connected",9)
  ;
  MappingHelpers::getValueByName((QHash *)&local_118,param_3,&local_120);
  uVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_118);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c1cf3;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1003c1cf3:
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_31 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c1d29;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_1003c1d29:
  lVar10 = CPrlFileDevSelectorWidget::getFileDevSelector();
  *(undefined1 *)(lVar10 + 0x98) = uVar4;
  FUN_1003c22d0();
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c1d92;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1003c1d92:
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c1dc8;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1003c1dc8:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c1dfe;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1003c1dfe:
  QVariant::~QVariant(&local_78);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

