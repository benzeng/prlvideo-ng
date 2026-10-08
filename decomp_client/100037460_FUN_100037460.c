
void FUN_100037460(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  Data_conflict *pDVar10;
  long lVar11;
  long *plVar12;
  QVariant *pQVar13;
  Data_conflict local_a8;
  undefined4 local_a0;
  QString local_98;
  QMapNodeBase *local_90;
  QVariant local_88;
  QString local_78;
  Data_conflict local_70;
  undefined4 local_68;
  QString local_60;
  QMapNodeBase *local_58;
  QVariant local_50;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("cpu",3);
  plVar6 = *(long **)(param_1 + 0x28);
  pQVar13 = (QVariant *)0x0;
  if (*(int *)((long)plVar6 + 0x14) != 0) {
    uVar1 = *(uint *)(plVar6 + 4);
    pQVar13 = (QVariant *)0x0;
    if (uVar1 != 0) {
      uVar5 = qHash(&local_40,*(uint *)((long)plVar6 + 0x24));
      uVar2 = (ulong)uVar5 % (ulong)uVar1;
      plVar9 = *(long **)(plVar6[1] + uVar2 * 8);
      pQVar13 = (QVariant *)0x0;
      if (plVar9 != plVar6) {
        plVar8 = (long *)(plVar6[1] + uVar2 * 8);
        do {
          plVar12 = plVar6;
          if (*(uint *)(plVar9 + 1) == uVar5) {
            cVar4 = operator==(&local_40,(QString *)(plVar9 + 2));
            plVar6 = (long *)*plVar8;
            plVar9 = plVar6;
            plVar12 = *(long **)(param_1 + 0x28);
            if (cVar4 != '\0') break;
          }
          plVar6 = plVar12;
          plVar8 = plVar9;
          plVar9 = (long *)*plVar8;
          plVar12 = plVar6;
        } while (plVar9 != plVar6);
        pQVar13 = (QVariant *)0x0;
        if (plVar6 != plVar12) {
          pQVar13 = (QVariant *)plVar6[3];
        }
      }
    }
  }
  FUN_100733400(&local_58,*(undefined8 *)(param_1 + 0x20));
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("cpu",3);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  if (*(long *)(local_58 + 0x10) == 0) {
LAB_1000375a7:
    lVar7 = 0;
  }
  else {
    lVar3 = *(long *)(local_58 + 0x10);
    lVar11 = 0;
    do {
      while (lVar7 = lVar3, cVar4 = operator<((QString *)(lVar7 + 0x18),&local_60), cVar4 == '\0') {
        lVar3 = *(long *)(lVar7 + 8);
        lVar11 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100037596;
      }
      lVar3 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar11;
    if (lVar11 == 0) goto LAB_1000375a7;
LAB_100037596:
    cVar4 = operator<(&local_60,(QString *)(lVar7 + 0x18));
    if (cVar4 != '\0') goto LAB_1000375a7;
  }
  pDVar10 = &local_70;
  if (lVar7 != 0) {
    pDVar10 = (Data_conflict *)(lVar7 + 0x20);
  }
  QVariant::QVariant(&local_50,(QVariant *)pDVar10);
  CRingListModel::addValue(pQVar13);
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003760f;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10003760f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100037657;
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_58,(int)*(undefined8 *)(local_58 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_58);
  }
LAB_100037657:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100037687;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100037687:
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ram",3);
  plVar6 = *(long **)(param_1 + 0x28);
  pQVar13 = (QVariant *)0x0;
  if (*(int *)((long)plVar6 + 0x14) != 0) {
    uVar1 = *(uint *)(plVar6 + 4);
    pQVar13 = (QVariant *)0x0;
    if (uVar1 != 0) {
      uVar5 = qHash(&local_78,*(uint *)((long)plVar6 + 0x24));
      uVar2 = (ulong)uVar5 % (ulong)uVar1;
      plVar9 = *(long **)(plVar6[1] + uVar2 * 8);
      pQVar13 = (QVariant *)0x0;
      if (plVar9 != plVar6) {
        plVar8 = (long *)(plVar6[1] + uVar2 * 8);
        do {
          plVar12 = plVar6;
          if (*(uint *)(plVar9 + 1) == uVar5) {
            cVar4 = operator==(&local_78,(QString *)(plVar9 + 2));
            plVar6 = (long *)*plVar8;
            plVar9 = plVar6;
            plVar12 = *(long **)(param_1 + 0x28);
            if (cVar4 != '\0') break;
          }
          plVar6 = plVar12;
          plVar8 = plVar9;
          plVar9 = (long *)*plVar8;
          plVar12 = plVar6;
        } while (plVar9 != plVar6);
        pQVar13 = (QVariant *)0x0;
        if (plVar6 != plVar12) {
          pQVar13 = (QVariant *)plVar6[3];
        }
      }
    }
  }
  FUN_100733400(&local_90,*(undefined8 *)(param_1 + 0x20));
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ram",3);
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  if (*(long *)(local_90 + 0x10) == 0) {
LAB_1000377da:
    lVar7 = 0;
  }
  else {
    lVar3 = *(long *)(local_90 + 0x10);
    lVar11 = 0;
    do {
      while (lVar7 = lVar3, cVar4 = operator<((QString *)(lVar7 + 0x18),&local_98), cVar4 == '\0') {
        lVar3 = *(long *)(lVar7 + 8);
        lVar11 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_1000377c6;
      }
      lVar3 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar11;
    if (lVar11 == 0) goto LAB_1000377da;
LAB_1000377c6:
    cVar4 = operator<(&local_98,(QString *)(lVar7 + 0x18));
    if (cVar4 != '\0') goto LAB_1000377da;
  }
  pDVar10 = &local_a8;
  if (lVar7 != 0) {
    pDVar10 = (Data_conflict *)(lVar7 + 0x20);
  }
  QVariant::QVariant(&local_88,(QVariant *)pDVar10);
  CRingListModel::addValue(pQVar13);
  QVariant::~QVariant(&local_88);
  QVariant::~QVariant((QVariant *)&local_a8);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003784e;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_10003784e:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003789c;
    }
    if (*(long *)(local_90 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_90,(int)*(undefined8 *)(local_90 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_90);
  }
LAB_10003789c:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_78.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
  return;
}

