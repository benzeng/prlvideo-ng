
void FUN_100a0f410(long *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  QTextStream *pQVar6;
  QMapNodeBase *pQVar7;
  ulong *puVar8;
  long lVar9;
  long *local_c0;
  QMapNodeBase *local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QArrayData *local_98;
  long local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QTextStream *local_78;
  QDebug local_70 [8];
  QTextStream *local_68;
  QDebug local_60 [8];
  QTextStream *local_58;
  QTextStream *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 != 0) {
    FUN_100df99c0("","WebPortalCommunication",0,"Request finished with Network Error: %d <%p>",
                  param_2,param_1);
  }
  if ((param_3 != 200) && (1 < DAT_10230ffd0)) {
    FUN_100df99c0("","WebPortalCommunication",2,"Request finished with HTTP status: %d <%p>",param_3
                  ,param_1);
  }
  if (param_2 == 6) {
    *(undefined4 *)(param_1 + 0xb) = 0x80000414;
    iVar5 = -0x7ffffbec;
LAB_100a0f4e2:
    puVar2 = PTR_shared_null_1021e1288;
    local_40 = (QArrayData *)PTR_shared_null_1021e1288;
    local_48 = (QArrayData *)PTR_shared_null_1021e1288;
    pQVar6 = operator_new(0x50);
    QTextStream::QTextStream(pQVar6,&local_40,2);
    *(undefined **)(pQVar6 + 0x10) = puVar2;
    *(undefined4 *)(pQVar6 + 0x18) = 1;
    *(undefined4 *)(pQVar6 + 0x1c) = 0;
    pQVar6[0x20] = (QTextStream)0x1;
    pQVar6[0x21] = (QTextStream)0x0;
    *(undefined4 *)(pQVar6 + 0x28) = 2;
    *(undefined8 *)(pQVar6 + 0x44) = 0;
    *(undefined8 *)(pQVar6 + 0x3c) = 0;
    *(undefined8 *)(pQVar6 + 0x34) = 0;
    *(undefined8 *)(pQVar6 + 0x2c) = 0;
    local_50 = pQVar6;
    pQVar6 = operator_new(0x50);
    QTextStream::QTextStream(pQVar6,&local_48,2);
    *(undefined **)(pQVar6 + 0x10) = puVar2;
    *(undefined4 *)(pQVar6 + 0x18) = 1;
    *(undefined4 *)(pQVar6 + 0x1c) = 0;
    pQVar6[0x20] = (QTextStream)0x1;
    pQVar6[0x21] = (QTextStream)0x0;
    *(undefined4 *)(pQVar6 + 0x28) = 2;
    *(undefined8 *)(pQVar6 + 0x44) = 0;
    *(undefined8 *)(pQVar6 + 0x3c) = 0;
    *(undefined8 *)(pQVar6 + 0x34) = 0;
    *(undefined8 *)(pQVar6 + 0x2c) = 0;
    local_68 = local_50;
    *(int *)(local_50 + 0x18) = *(int *)(local_50 + 0x18) + 1;
    local_58 = pQVar6;
    FUN_100673a80(local_60,&local_68,param_5);
    QDebug::~QDebug(local_60);
    QDebug::~QDebug((QDebug *)&local_68);
    local_78 = local_58;
    *(int *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1;
    operator<<(local_70,&local_78,param_4);
    QDebug::~QDebug(local_70);
    QDebug::~QDebug((QDebug *)&local_78);
    QString::toUtf8();
    pQVar3 = local_80;
    lVar9 = *(long *)(local_80 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","WebPortalCommunication",0,
                  "Request failed. RC = %.8X\n Header: %s\n Data: %s\n <%p>",iVar5,pQVar3 + lVar9,
                  local_88 + *(long *)(local_88 + 0x10),param_1);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a0f6a8;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_100a0f6a8:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a0f6d8;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_100a0f6d8:
    QDebug::~QDebug((QDebug *)&local_58);
    QDebug::~QDebug((QDebug *)&local_50);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a0f71a;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100a0f71a:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a0f74a;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
  else {
    (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
    iVar5 = (int)param_1[0xb];
    if (iVar5 < 0) goto LAB_100a0f4e2;
  }
LAB_100a0f74a:
  local_c0 = param_1 + 0xb;
  plVar1 = param_1 + 4;
  cVar4 = FUN_10019cd90(plVar1);
  if (cVar4 == '\0') goto LAB_100a0f977;
  lVar9 = 0;
  if ((*plVar1 != 0) && (lVar9 = 0, *(int *)(*plVar1 + 4) != 0)) {
    lVar9 = param_1[5];
  }
  FUN_100a1c770(&local_a0,plVar1);
  QString::toLatin1();
  if ((1 < *(uint *)local_98) || (*(long *)(local_98 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_98,*(uint *)(local_98 + 4) + 1,*(uint *)(local_98 + 8) >> 0x1f);
  }
  QObject::connect(&local_90,param_1,
                   "2invokeCompletionHandler(PRL_RESULT, const QVariant&, const QVariantMap&)",lVar9
                   ,local_98 + *(long *)(local_98 + 0x10),0);
  if (local_90 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0f843;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_100a0f843:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0f879;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100a0f879:
  lVar9 = *local_c0;
  QVariant::QVariant(&local_b0,(QVariant *)(param_1 + 0xc));
  local_b8 = (QMapNodeBase *)param_1[0xe];
  if (*(int *)local_b8 == 0) {
    pQVar7 = (QMapNodeBase *)QMapDataBase::createData();
    local_b8 = pQVar7;
    if (*(long *)(param_1[0xe] + 0x10) != 0) {
      puVar8 = (ulong *)FUN_10008d330(*(long *)(param_1[0xe] + 0x10),pQVar7);
      *(ulong **)(pQVar7 + 0x10) = puVar8;
      *puVar8 = *puVar8 & 3 | (ulong)(pQVar7 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)local_b8 != -1) {
    LOCK();
    *(int *)local_b8 = *(int *)local_b8 + 1;
    local_31 = *(int *)local_b8 != 0;
    UNLOCK();
    local_b8 = (QMapNodeBase *)param_1[0xe];
  }
  FUN_100a1b4d0(param_1,(int)lVar9,&local_b0,&local_b8);
  pQVar7 = local_b8;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0f96b;
    }
    if (*(long *)(local_b8 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar7,(int)*(undefined8 *)(pQVar7 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar7);
  }
LAB_100a0f96b:
  QVariant::~QVariant(&local_b0);
LAB_100a0f977:
  QObject::deleteLater();
  return;
}

