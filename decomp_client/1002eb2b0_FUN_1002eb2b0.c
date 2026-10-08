
void FUN_1002eb2b0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  QString QVar6;
  undefined8 uVar7;
  long lVar8;
  QVariant *pQVar9;
  long *plVar10;
  QArrayData *pQVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  QString local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QVar6.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("serverUuid",10);
  plVar10 = *(long **)(param_1 + 0x30);
  puVar1 = (undefined8 *)(param_1 + 0x30);
  uVar2 = *(uint *)(plVar10 + 4);
  plVar15 = plVar10;
  local_40.field0_0x0 = QVar6.field0_0x0;
  if (uVar2 != 0) {
    uVar5 = qHash(&local_40,*(uint *)((long)plVar10 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar2;
    plVar12 = *(long **)(plVar10[1] + uVar3 * 8);
    if (plVar12 != plVar10) {
      plVar14 = (long *)(plVar10[1] + uVar3 * 8);
      do {
        plVar13 = plVar12;
        plVar15 = plVar10;
        if (*(uint *)(plVar12 + 1) == uVar5) {
          cVar4 = operator==(&local_40,(QString *)(plVar12 + 2));
          plVar10 = (long *)*plVar14;
          plVar13 = plVar10;
          plVar15 = (long *)*puVar1;
          QVar6.field0_0x0 = local_40.field0_0x0;
          if (cVar4 != '\0') break;
        }
        plVar10 = plVar15;
        plVar12 = (long *)*plVar13;
        plVar14 = plVar13;
        plVar15 = plVar10;
        QVar6.field0_0x0 = local_40.field0_0x0;
      } while (plVar12 != plVar10);
    }
  }
  if (*(int *)QVar6.field0_0x0 != -1) {
    if (*(int *)QVar6.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar6.field0_0x0 = *(int *)QVar6.field0_0x0 + -1;
      local_31 = *(int *)QVar6.field0_0x0 != 0;
      UNLOCK();
      QVar6.field0_0x0 = local_40.field0_0x0;
      if ((bool)local_31) goto LAB_1002eb394;
    }
    QArrayData::deallocate((QArrayData *)QVar6.field0_0x0,2,8);
  }
LAB_1002eb394:
  if (plVar10 == plVar15) {
    return;
  }
  uVar7 = FUN_100152280();
  lVar8 = FUN_1001554a0(uVar7);
  if (lVar8 == 0) {
    return;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("serverUuid",10);
  pQVar9 = (QVariant *)FUN_1002edf40(puVar1,&local_48);
  FUN_10015aab0(&local_60,lVar8);
  QVariant::QVariant(&local_58,&local_60);
  cVar4 = QVariant::cmp(pQVar9);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002eb43f;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1002eb43f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002eb46f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002eb46f:
  if (cVar4 != '\0') {
    return;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("serverUuid",10);
  FUN_1002edf40(puVar1,&local_78);
  QVariant::toString();
  QString::toUtf8();
  pQVar11 = local_68 + *(long *)(local_68 + 0x10);
  FUN_10015aab0(&local_88,lVar8);
  QString::toUtf8();
  FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"UPDATED serverUuid from %s to %s",pQVar11,
                local_80 + *(long *)(local_80 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002eb533;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1002eb533:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002eb563;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002eb563:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002eb593;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1002eb593:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002eb5c3;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002eb5c3:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002eb5f3;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002eb5f3:
  local_90 = (QArrayData *)QString::fromAscii_helper("serverUuid",10);
  pQVar9 = (QVariant *)FUN_1002edf40(puVar1,&local_90);
  FUN_10015aab0(&local_a8,lVar8);
  QVariant::QVariant(&local_a0,&local_a8);
  QVariant::operator=(pQVar9,&local_a0);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002eb694;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1002eb694:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
  return;
}

