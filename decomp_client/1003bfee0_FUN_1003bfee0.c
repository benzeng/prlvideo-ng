
undefined1 FUN_1003bfee0(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  bool bVar12;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  uint local_80;
  QArrayData *local_78;
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  QString local_50;
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar6 = FUN_1003b0af0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  FUN_1003be560(&local_58);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_21 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1df1f84);
  QString::append(&local_50);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003bff7f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003bff7f:
  FUN_1003e1800(&local_48,uVar6,&local_50,0);
  iVar4 = QVariant::toUInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003bffd7;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003bffd7:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003c0007;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003c0007:
  if (iVar4 != 2) {
    return 0;
  }
  lVar7 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  if (lVar7 == 0) {
    return 0;
  }
  uVar6 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  cVar3 = FUN_10015ab00(uVar6);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar6 = FUN_1003b0af0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  FUN_1003be560(&local_78);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_21 = *(int *)local_78 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1df22a2);
  QString::append(&local_70);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003c00cf;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003c00cf:
  FUN_1003e1800(&local_68,uVar6,&local_70,0);
  iVar4 = QVariant::toInt((bool *)&local_68);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003c0128;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1003c0128:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003c0158;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003c0158:
  uVar6 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  lVar7 = FUN_10015a340(uVar6);
  plVar1 = *(long **)(lVar7 + 0x168);
  local_98 = (Data *)*plVar1;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 == 0) {
      QListData::detach((int)&local_98);
      lVar9 = (long)*(int *)(local_98 + 8);
      lVar7 = *plVar1;
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_98 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_98 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_98 + 0xc))) {
        _memcpy(local_98 + lVar9 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  local_80 = 1;
  if (*(int *)(local_98 + 8) == *(int *)(local_98 + 0xc)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      if (((local_80 == 0) || (iVar5 = CHwNetAdapter::getSysIndex(), iVar5 != iVar4)) ||
         (iVar5 = CHwNetAdapter::getNetAdapterType(), iVar5 != 2)) {
        local_90 = local_90 + 8;
        local_80 = 1;
        uVar2 = uVar11;
      }
      else {
        local_90 = local_90 + 8;
        uVar8 = local_80 ^ 1;
        uVar11 = 1;
        bVar12 = local_80 == 1;
        uVar2 = 1;
        local_80 = uVar8;
        if (bVar12) break;
      }
      uVar11 = uVar2;
    } while (local_90 != local_88);
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return uVar11;
      }
      local_21 = 0;
    }
    QListData::dispose(local_98);
  }
  return uVar11;
}

