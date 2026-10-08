
void FUN_100770090(long param_1,int param_2)

{
  char cVar1;
  QMapNodeBase *pQVar2;
  ulong *puVar3;
  QString *pQVar4;
  long lVar5;
  long lVar6;
  Data_conflict *pDVar7;
  long lVar8;
  QArrayData *local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  QString local_a8;
  QVariant local_a0;
  Data_conflict local_90;
  undefined4 local_88;
  QString local_80;
  QVariant local_78;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 != 3) {
    if (param_2 != 1) {
      return;
    }
    pQVar4 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar4 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar4 = *(QString **)(param_1 + 0x40);
    }
    QMetaObject::tr((char *)&local_40,(char *)&PTR_staticMetaObject_10222a030,0x1dd1ed6);
    CAbstractProgressOperation::setName(pQVar4);
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
    return;
  }
  pQVar4 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar4 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar4 = *(QString **)(param_1 + 0x40);
  }
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_The_network_connection_has_been_l_102270920);
  CAbstractProgressOperation::setName(pQVar4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100770127;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100770127:
  lVar5 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (lVar5 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    lVar5 = *(long *)(param_1 + 0x40);
  }
  pQVar2 = *(QMapNodeBase **)(lVar5 + 0x18);
  if (*(int *)pQVar2 == 0) {
    pQVar2 = (QMapNodeBase *)QMapDataBase::createData();
    lVar5 = *(long *)(*(long *)(lVar5 + 0x18) + 0x10);
    if (lVar5 != 0) {
      puVar3 = (ulong *)FUN_10008d330(lVar5,pQVar2);
      *(ulong **)(pQVar2 + 0x10) = puVar3;
      *puVar3 = *puVar3 & 3 | (ulong)(pQVar2 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar2 != -1) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
    pQVar2 = *(QMapNodeBase **)(lVar5 + 0x18);
  }
  if (*(int *)(pQVar2 + 4) == 0) goto LAB_1007704d1;
  local_68[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("total",5);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  if (*(long *)(pQVar2 + 0x10) == 0) {
LAB_1007702e2:
    lVar6 = 0;
  }
  else {
    lVar5 = *(long *)(pQVar2 + 0x10);
    lVar8 = 0;
    do {
      while (lVar6 = lVar5, cVar1 = operator<((QString *)(lVar6 + 0x18),&local_80), cVar1 == '\0') {
        lVar5 = *(long *)(lVar6 + 8);
        lVar8 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_1007702d1;
      }
      lVar5 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar8;
    if (lVar8 == 0) goto LAB_1007702e2;
LAB_1007702d1:
    cVar1 = operator<(&local_80,(QString *)(lVar6 + 0x18));
    if (cVar1 != '\0') goto LAB_1007702e2;
  }
  pDVar7 = &local_90;
  if (lVar6 != 0) {
    pDVar7 = (Data_conflict *)(lVar6 + 0x20);
  }
  QVariant::QVariant(&local_78,(QVariant *)pDVar7);
  local_58 = QVariant::toLongLong((bool *)&local_78);
  QVariant::~QVariant(&local_78);
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100770353;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100770353:
  local_a8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("downloaded",10);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  if (*(long *)(pQVar2 + 0x10) == 0) {
LAB_1007703e5:
    lVar6 = 0;
  }
  else {
    lVar5 = *(long *)(pQVar2 + 0x10);
    lVar8 = 0;
    do {
      while (lVar6 = lVar5, cVar1 = operator<((QString *)(lVar6 + 0x18),&local_a8), cVar1 == '\0') {
        lVar5 = *(long *)(lVar6 + 8);
        lVar8 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_1007703d1;
      }
      lVar5 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar8;
    if (lVar8 == 0) goto LAB_1007703e5;
LAB_1007703d1:
    cVar1 = operator<(&local_a8,(QString *)(lVar6 + 0x18));
    if (cVar1 != '\0') goto LAB_1007703e5;
  }
  pDVar7 = &local_b8;
  if (lVar6 != 0) {
    pDVar7 = (Data_conflict *)(lVar6 + 0x20);
  }
  QVariant::QVariant(&local_a0,(QVariant *)pDVar7);
  local_60 = QVariant::toLongLong((bool *)&local_a0);
  QVariant::~QVariant(&local_a0);
  QVariant::~QVariant((QVariant *)&local_b8);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100770465;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_100770465:
  pQVar4 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar4 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar4 = *(QString **)(param_1 + 0x40);
  }
  FUN_10076f850(&local_c0,local_68);
  CAbstractProgressOperation::setDescription(pQVar4);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007704d1;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1007704d1:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
  return;
}

