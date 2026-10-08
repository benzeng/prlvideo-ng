
void FUN_1005abbe0(long param_1,int param_2)

{
  char cVar1;
  QMapNodeBase *pQVar2;
  ulong *puVar3;
  QString *pQVar4;
  long lVar5;
  long lVar6;
  Data_conflict *pDVar7;
  long lVar8;
  QArrayData *local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  QString local_b8;
  QVariant local_b0;
  Data_conflict local_a0;
  undefined4 local_98;
  QString local_90;
  QVariant local_88;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 != 3) {
    if (param_2 != 1) {
      return;
    }
    pQVar4 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (pQVar4 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      pQVar4 = *(QString **)(param_1 + 0x60);
    }
    QMetaObject::tr((char *)&local_48,(char *)&PTR_staticMetaObject_10221df20,0x1dda77d);
    CAntivirusInfo::productName();
    QString::arg(&local_40,&local_48,&local_50,0,0x20);
    CAbstractProgressOperation::setName(pQVar4);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005abd84;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1005abd84:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005abdb4;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1005abdb4:
    if (*(int *)local_48 == -1) {
      return;
    }
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
    return;
  }
  pQVar4 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (pQVar4 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
    pQVar4 = *(QString **)(param_1 + 0x60);
  }
  QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_The_network_connection_has_been_l_102270920);
  CAbstractProgressOperation::setName(pQVar4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005abc77;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005abc77:
  lVar5 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (lVar5 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    lVar5 = *(long *)(param_1 + 0x60);
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
  if (*(int *)(pQVar2 + 4) == 0) goto LAB_1005ac0a1;
  local_78[0] = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("total",5);
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  if (*(long *)(pQVar2 + 0x10) == 0) {
LAB_1005abeb5:
    lVar6 = 0;
  }
  else {
    lVar5 = *(long *)(pQVar2 + 0x10);
    lVar8 = 0;
    do {
      while (lVar6 = lVar5, cVar1 = operator<((QString *)(lVar6 + 0x18),&local_90), cVar1 == '\0') {
        lVar5 = *(long *)(lVar6 + 8);
        lVar8 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_1005abea1;
      }
      lVar5 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar8;
    if (lVar8 == 0) goto LAB_1005abeb5;
LAB_1005abea1:
    cVar1 = operator<(&local_90,(QString *)(lVar6 + 0x18));
    if (cVar1 != '\0') goto LAB_1005abeb5;
  }
  pDVar7 = &local_a0;
  if (lVar6 != 0) {
    pDVar7 = (Data_conflict *)(lVar6 + 0x20);
  }
  QVariant::QVariant(&local_88,(QVariant *)pDVar7);
  local_68 = QVariant::toLongLong((bool *)&local_88);
  QVariant::~QVariant(&local_88);
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005abf2c;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1005abf2c:
  local_b8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("downloaded",10);
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  if (*(long *)(pQVar2 + 0x10) == 0) {
LAB_1005abfb5:
    lVar6 = 0;
  }
  else {
    lVar5 = *(long *)(pQVar2 + 0x10);
    lVar8 = 0;
    do {
      while (lVar6 = lVar5, cVar1 = operator<((QString *)(lVar6 + 0x18),&local_b8), cVar1 == '\0') {
        lVar5 = *(long *)(lVar6 + 8);
        lVar8 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_1005abfa1;
      }
      lVar5 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar8;
    if (lVar8 == 0) goto LAB_1005abfb5;
LAB_1005abfa1:
    cVar1 = operator<(&local_b8,(QString *)(lVar6 + 0x18));
    if (cVar1 != '\0') goto LAB_1005abfb5;
  }
  pDVar7 = &local_c8;
  if (lVar6 != 0) {
    pDVar7 = (Data_conflict *)(lVar6 + 0x20);
  }
  QVariant::QVariant(&local_b0,(QVariant *)pDVar7);
  local_70 = QVariant::toLongLong((bool *)&local_b0);
  QVariant::~QVariant(&local_b0);
  QVariant::~QVariant((QVariant *)&local_c8);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ac035;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_1005ac035:
  pQVar4 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (pQVar4 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
    pQVar4 = *(QString **)(param_1 + 0x60);
  }
  FUN_1005ab3a0(&local_d0,local_78);
  CAbstractProgressOperation::setDescription(pQVar4);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ac0a1;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1005ac0a1:
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

