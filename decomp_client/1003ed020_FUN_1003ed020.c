
undefined1 FUN_1003ed020(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  QString *pQVar6;
  undefined8 uVar7;
  QStringList *pQVar8;
  undefined1 uVar9;
  undefined1 local_108 [40];
  int *local_e0 [4];
  QVariant local_c0 [2];
  QArrayData *local_a8;
  QString local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QString local_80;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  MappingHelpers::getParentObjectPath(&local_48);
  MappingHelpers::getValueName(&local_50);
  iVar3 = MappingHelpers::getItemIdFromPath(&local_50);
  local_60 = (QArrayData *)QString::fromAscii_helper("[%1]",4);
  QString::arg(&local_58,&local_60,(long)iVar3,0,10,0x20);
  pQVar6 = (QString *)QString::remove(&local_50,&local_58,1);
  QString::operator=(&local_50,pQVar6);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ed0df;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003ed0df:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ed10f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003ed10f:
  uVar4 = FUN_1003b1870(&local_50);
  uVar7 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_80.field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_29 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1df16d5);
  QString::append(&local_80);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ed193;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003ed193:
  FUN_1003e1800(&local_78,uVar7,&local_80,0);
  QVariant::toString();
  QVariant::~QVariant(&local_78);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ed1eb;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1003ed1eb:
  uVar7 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_a0.field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_29 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1df310c);
  QString::append(&local_a0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ed269;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003ed269:
  FUN_1003e1800(&local_98,uVar7,&local_a0,0);
  QVariant::toString();
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_29 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ed2d3;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1003ed2d3:
  local_a8 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = QVariant::toUInt((bool *)(param_1 + 0x38));
  cVar2 = FUN_1003b84e0(uVar7,uVar4,uVar5,&local_68,iVar3,&local_a8);
  if (cVar2 == '\0') {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    local_108._32_8_ = QString::fromAscii_helper("1onRejectedMessageClosed()",0x1a);
    local_108._24_4_ = 0x80000000;
    local_108._16_8_ = (QMetaObject *)0x0;
    FUN_100a1c600(local_e0,uVar7,local_108 + 0x20,local_108 + 0x10);
    QVariant::~QVariant((QVariant *)(local_108 + 0x10));
    if (*(int *)local_108._32_8_ != -1) {
      if (*(int *)local_108._32_8_ != 0) {
        LOCK();
        *(int *)local_108._32_8_ = *(int *)local_108._32_8_ + -1;
        local_29 = *(int *)local_108._32_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003ed3a9;
      }
      QArrayData::deallocate((QArrayData *)local_108._32_8_,2,8);
    }
LAB_1003ed3a9:
    iVar3 = CMessageManager::instance();
    pQVar8 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
    puVar1 = PTR_shared_null_1021e15e8;
    local_108._8_8_ = PTR_shared_null_1021e15e8;
    FUN_1000341d0(local_108 + 8,&local_88);
    FUN_1000341d0(local_108 + 8,&local_a8);
    local_108._0_8_ = puVar1;
    FUN_1000341d0(local_108,&local_a8);
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x80015291,pQVar8,(QStringList *)(local_108 + 8),
               (CSlotInfo *)local_108,SUB81(local_e0,0));
    FUN_100039a80(local_108);
    FUN_100039a80(local_108 + 8);
    QVariant::~QVariant(local_c0);
    if (local_e0[0] != (int *)0x0) {
      LOCK();
      *local_e0[0] = *local_e0[0] + -1;
      local_29 = *local_e0[0] != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_e0[0] != (int *)0x0)) {
        operator_delete(local_e0[0]);
      }
    }
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ed4bc;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003ed4bc:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ed4ec;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1003ed4ec:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ed51c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003ed51c:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ed54c;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003ed54c:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar9;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar9;
}

