
void FUN_100a0e170(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  QString *pQVar5;
  _func_void_Node_ptr *p_Var6;
  char cVar7;
  uint uVar8;
  long lVar9;
  _func_void_Node_ptr *p_Var10;
  void *pvVar11;
  QNetworkRequest *pQVar12;
  QObject *pQVar13;
  int *piVar14;
  int *piVar15;
  _func_void_Node_ptr *p_Var16;
  _func_void_Node_ptr *p_Var17;
  undefined8 uVar18;
  _func_void_Node_ptr *p_Var19;
  long local_f8;
  long local_f0;
  long local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  Data_conflict local_d0;
  undefined4 local_c8;
  QArrayData *local_c0;
  int *local_b8;
  int *local_b0;
  QString *local_a8;
  QString *local_a0;
  int local_98;
  QString local_90;
  QUrl local_88 [8];
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  _func_void_Node_ptr *local_68;
  QVariant local_60;
  QUrl local_50 [8];
  QNetworkRequest local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  QUrl::QUrl(local_50);
  QNetworkRequest::QNetworkRequest(local_48,local_50);
  QUrl::~QUrl(local_50);
  QVariant::QVariant(&local_60,"application/json");
  QNetworkRequest::setHeader(local_48,0,&local_60);
  QVariant::~QVariant(&local_60);
  FUN_100076800(&local_68,param_4);
  FUN_100a103e0(&local_68,local_48,PTR_s_AuthorizationToken_102280ac0,"Token %1");
  FUN_100a103e0(&local_68,local_48,PTR_s_AuthorizationAccessKey_102280ac8,"AccessKey %1");
  FUN_100a103e0(&local_68,local_48,PTR_s_AuthorizationMasterLicKey_102280ad0,"MasterKey %1");
  FUN_100a103e0(&local_68,local_48,PTR_s_AuthorizationTemporaryLicKey_102280ad8,"TemporaryKey %1");
  FUN_100a103e0(&local_68,local_48,PTR_s_AuthorizationKaPdeKey_102280ae0,"KaPdeKey %1");
  FUN_100a103e0(&local_68,local_48,PTR_s_AuthorizationKaPdeInstanceKeyNum_102280ae8,
                "KaPdeInstanceKeyNumber %1");
  FUN_100a0dac0(&local_80,param_2);
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_80;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_31 = *(int *)local_80 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_78);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0e310;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a0e310:
  local_70.field0_0x0 = local_78.field0_0x0;
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_31 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0e365;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100a0e365:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0e395;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100a0e395:
  QUrl::QUrl(local_88,&local_70,0);
  QUrlQuery::QUrlQuery((QUrlQuery *)&local_90,local_88);
  FUN_1000626e0(&local_b8,&local_68);
  local_b0 = local_b8;
  if (*local_b8 != -1) {
    if (*local_b8 == 0) {
      QListData::detach((int)&local_b0);
      iVar2 = local_b0[2];
      if (iVar2 != local_b0[3]) {
        local_b8 = local_b8 + (long)local_b8[2] * 2 + 4;
        piVar14 = local_b0 + (long)iVar2 * 2 + 4;
        lVar9 = (long)local_b0[3] * 8 + (long)iVar2 * -8;
        do {
          piVar15 = *(int **)local_b8;
          *(int **)piVar14 = piVar15;
          if (1 < *piVar15 + 1U) {
            LOCK();
            *piVar15 = *piVar15 + 1;
            local_31 = *piVar15 != 0;
            UNLOCK();
          }
          piVar14 = piVar14 + 2;
          local_b8 = local_b8 + 2;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *local_b8 = *local_b8 + 1;
      local_31 = *local_b8 != 0;
      UNLOCK();
    }
  }
  local_a8 = (QString *)(local_b0 + (long)local_b0[2] * 2 + 4);
  local_a0 = (QString *)(local_b0 + (long)local_b0[3] * 2 + 4);
  local_98 = 1;
  FUN_100036370(&local_b8);
  if ((local_98 != 0) && (local_a8 != local_a0)) {
    do {
      p_Var6 = local_68;
      pQVar5 = local_a8;
      if ((*(int *)(local_68 + 0x14) == 0) || (uVar3 = *(uint *)(local_68 + 0x20), uVar3 == 0)) {
LAB_100a0e560:
        local_c8 = 0x80000000;
        local_d0.field7 = 0;
      }
      else {
        uVar8 = qHash(local_a8,*(uint *)(local_68 + 0x24));
        uVar4 = (ulong)uVar8 % (ulong)uVar3;
        p_Var16 = *(_func_void_Node_ptr **)(*(long *)(p_Var6 + 8) + uVar4 * 8);
        if (p_Var16 == p_Var6) goto LAB_100a0e560;
        p_Var19 = (_func_void_Node_ptr *)(*(long *)(p_Var6 + 8) + uVar4 * 8);
        do {
          p_Var17 = p_Var16;
          if (*(uint *)(p_Var16 + 8) == uVar8) {
            cVar7 = operator==(pQVar5,(QString *)(p_Var16 + 0x10));
            p_Var17 = *(_func_void_Node_ptr **)p_Var19;
            p_Var10 = p_Var17;
            if (cVar7 != '\0') break;
          }
          p_Var16 = *(_func_void_Node_ptr **)p_Var17;
          p_Var10 = p_Var6;
          p_Var19 = p_Var17;
        } while (p_Var16 != p_Var6);
        if (p_Var10 == p_Var6) goto LAB_100a0e560;
        QVariant::QVariant((QVariant *)&local_d0,(QVariant *)(p_Var10 + 0x18));
      }
      QVariant::toString();
      QUrlQuery::addQueryItem(&local_90,pQVar5);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a0e5cf;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100a0e5cf:
      QVariant::~QVariant((QVariant *)&local_d0);
      local_a8 = local_a8 + 1;
      local_98 = 1;
    } while (local_a8 != local_a0);
  }
  FUN_100036370(&local_b0);
  QUrl::setQuery((QUrlQuery *)local_88);
  QUrl::toString(&local_e0,local_88,0);
  QString::toUtf8();
  FUN_100df99c0("","WebPortalCommunication",0,"GET: %s <%p>",local_d8 + *(long *)(local_d8 + 0x10),
                param_1);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0e6b4;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
LAB_100a0e6b4:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0e6ea;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100a0e6ea:
  QNetworkRequest::setUrl((QUrl *)local_48);
  QTimer::start((int)*(undefined8 *)(param_1 + 0x88));
  if (DAT_102311290 == (void *)0x0) {
    pvVar11 = operator_new(0x20);
    FUN_100a0cb00(pvVar11);
    DAT_102280a60 = 1;
    DAT_102311290 = pvVar11;
  }
  pQVar12 = (QNetworkRequest *)FUN_100a0cbd0(DAT_102311290);
  pQVar13 = (QObject *)QNetworkAccessManager::get(pQVar12);
  piVar14 = (int *)0x0;
  if (pQVar13 != (QObject *)0x0) {
    piVar14 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar13);
  }
  piVar15 = *(int **)(param_1 + 0x78);
  if (piVar15 != piVar14) {
    if (piVar14 != (int *)0x0) {
      LOCK();
      *piVar14 = *piVar14 + 1;
      local_31 = *piVar14 != 0;
      UNLOCK();
      piVar15 = *(int **)(param_1 + 0x78);
    }
    if (piVar15 != (int *)0x0) {
      LOCK();
      *piVar15 = *piVar15 + -1;
      local_31 = *piVar15 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x78) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x78));
      }
    }
    *(int **)(param_1 + 0x78) = piVar14;
    *(QObject **)(param_1 + 0x80) = pQVar13;
  }
  if (piVar14 != (int *)0x0) {
    LOCK();
    *piVar14 = *piVar14 + -1;
    local_31 = *piVar14 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar14);
    }
  }
  uVar18 = 0;
  if ((*(long *)(param_1 + 0x78) != 0) && (uVar18 = 0, *(int *)(*(long *)(param_1 + 0x78) + 4) != 0)
     ) {
    uVar18 = *(undefined8 *)(param_1 + 0x80);
  }
  QObject::connect(&local_e8,uVar18,"2finished()",*(undefined8 *)(param_1 + 0x88),"1stop()",0);
  if (local_e8 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_e8);
  lVar9 = *(long *)(param_1 + 0x78);
  uVar18 = 0;
  if (param_2 == 2) {
    if ((lVar9 != 0) && (uVar18 = 0, *(int *)(lVar9 + 4) != 0)) {
      uVar18 = *(undefined8 *)(param_1 + 0x80);
    }
    QObject::connect(&local_f0,uVar18,"2finished()",param_1,"1onGetImageRequestFinished()",0);
    if ((cVar7 != '\0') && (local_f0 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_f0);
  }
  else {
    if ((lVar9 != 0) && (uVar18 = 0, *(int *)(lVar9 + 4) != 0)) {
      uVar18 = *(undefined8 *)(param_1 + 0x80);
    }
    QObject::connect(&local_f8,uVar18,"2finished()",param_1,"1onRequestFinished()",0);
    if ((cVar7 != '\0') && (local_f8 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_f8);
  }
  QUrlQuery::~QUrlQuery((QUrlQuery *)&local_90);
  QUrl::~QUrl(local_88);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0e941;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100a0e941:
  if (*(int *)(local_68 + 0x10) != -1) {
    if (*(int *)(local_68 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_68 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0e96c;
    }
    QHashData::free_helper(local_68);
  }
LAB_100a0e96c:
  QNetworkRequest::~QNetworkRequest(local_48);
  return;
}

