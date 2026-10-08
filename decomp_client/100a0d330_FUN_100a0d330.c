
void FUN_100a0d330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  void *pvVar3;
  QNetworkRequest *pQVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  long local_a0;
  long local_98;
  QVariant local_90;
  QArrayData *local_80;
  QVariant local_78;
  QNetworkRequest local_68 [8];
  _func_void_Node_ptr *local_60;
  QArrayData *local_58;
  QUrl local_50 [8];
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100a0dac0(&local_48);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
  QString::append(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a0d3bd;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100a0d3bd:
  local_38.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_21 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a0d412;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100a0d412:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a0d442;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a0d442:
  QUrl::QUrl(local_50,&local_38,0);
  QString::toUtf8();
  FUN_100df99c0("","WebPortalCommunication",0,"POST: %s, <%p>",local_58 + *(long *)(local_58 + 0x10)
                ,param_1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a0d4ba;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100a0d4ba:
  FUN_100076800(&local_60,param_4);
  QNetworkRequest::QNetworkRequest(local_68,local_50);
  QVariant::QVariant(&local_78,"application/json");
  QNetworkRequest::setHeader(local_68,0,&local_78);
  QVariant::~QVariant(&local_78);
  FUN_100a103e0(&local_60,local_68,PTR_s_AuthorizationToken_102280ac0,"Token %1");
  FUN_100a103e0(&local_60,local_68,PTR_s_AuthorizationAccessKey_102280ac8,"AccessKey %1");
  FUN_100a103e0(&local_60,local_68,PTR_s_AuthorizationMasterLicKey_102280ad0,"MasterKey %1");
  FUN_100a103e0(&local_60,local_68,PTR_s_AuthorizationTemporaryLicKey_102280ad8,"TemporaryKey %1");
  FUN_100a103e0(&local_60,local_68,PTR_s_AuthorizationKaPdeKey_102280ae0,"KaPdeKey %1");
  FUN_100a103e0(&local_60,local_68,PTR_s_AuthorizationKaPdeInstanceKeyNum_102280ae8,
                "KaPdeInstanceKeyNumber %1");
  QTimer::start((int)*(undefined8 *)(param_1 + 0x88));
  if (DAT_102311290 == (void *)0x0) {
    pvVar3 = operator_new(0x20);
    FUN_100a0cb00(pvVar3);
    DAT_102280a60 = 1;
    DAT_102311290 = pvVar3;
  }
  pQVar4 = (QNetworkRequest *)FUN_100a0cbd0(DAT_102311290);
  QVariant::QVariant(&local_90,(QHash *)&local_60);
  FUN_100a09930(&local_80,&local_90);
  pQVar5 = (QObject *)QNetworkAccessManager::post(pQVar4,(QByteArray *)local_68);
  piVar6 = (int *)0x0;
  if (pQVar5 != (QObject *)0x0) {
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
  }
  piVar7 = *(int **)(param_1 + 0x78);
  if (piVar7 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_21 = *piVar6 != 0;
      UNLOCK();
      piVar7 = *(int **)(param_1 + 0x78);
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_21 = *piVar7 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x78) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x78));
      }
    }
    *(int **)(param_1 + 0x78) = piVar6;
    *(QObject **)(param_1 + 0x80) = pQVar5;
  }
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_21 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar6);
    }
  }
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a0d6cf;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_100a0d6cf:
  QVariant::~QVariant(&local_90);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x78) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x78) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x80);
  }
  QObject::connect(&local_98,uVar8,"2finished()",*(undefined8 *)(param_1 + 0x88),"1stop()",0);
  if (local_98 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x78) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x78) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x80);
  }
  QObject::connect(&local_a0,uVar8,"2finished()",param_1,"1onRequestFinished()",0);
  if ((cVar2 != '\0') && (local_a0 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  QNetworkRequest::~QNetworkRequest(local_68);
  if (*(int *)(local_60 + 0x10) != -1) {
    if (*(int *)(local_60 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_60 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a0d7ed;
    }
    QHashData::free_helper(local_60);
  }
LAB_100a0d7ed:
  QUrl::~QUrl(local_50);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

