
undefined8 FUN_10029e180(QObject *param_1)

{
  Node *pNVar1;
  undefined *puVar2;
  char cVar3;
  QObject *pQVar4;
  Node *pNVar5;
  QNetworkAccessManager *pQVar6;
  int *piVar7;
  undefined4 *puVar8;
  QObject *pQVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  QNetworkRequest *pQVar14;
  Connection local_c0 [8];
  Connection local_b8 [8];
  QUrl local_b0 [8];
  QNetworkRequest local_a8 [8];
  QArrayData *local_a0;
  QArrayData *local_98;
  code *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  code *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  pQVar4 = operator_new(0x10);
  QHttpMultiPart::QHttpMultiPart((QHttpMultiPart *)pQVar4,2,0);
  local_98 = (QArrayData *)QString::fromAscii_helper("SecretHash",10);
  local_a0 = (QArrayData *)
             QString::fromAscii_helper("91e5454b8b607d7301ee805f7674bbb9c18e8cbc",0x28);
  FUN_10029e920(pQVar4,&local_98,&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029e22d;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10029e22d:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029e263;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10029e263:
  pNVar1 = *(Node **)(param_1 + 0x18);
  iVar11 = *(int *)(pNVar1 + 0x20);
  if (iVar11 != 0) {
    plVar12 = *(long **)(pNVar1 + 8);
    do {
      pNVar5 = (Node *)*plVar12;
      if (pNVar5 != pNVar1) goto LAB_10029e2a0;
      iVar11 = iVar11 + -1;
      plVar12 = plVar12 + 1;
    } while (iVar11 != 0);
  }
  goto LAB_10029e2c1;
LAB_10029e2a0:
  do {
    FUN_10029e920(pQVar4,pNVar5 + 0x10,pNVar5 + 0x18);
    pNVar5 = (Node *)QHashData::nextNode(pNVar5);
  } while (pNVar5 != *(Node **)(param_1 + 0x18));
LAB_10029e2c1:
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar3 = FUN_100d80630(1);
  if (cVar3 == '\0') {
    local_70 = (QArrayData *)
               QString::fromAscii_helper
                         ("https://support.parallels.com/NoAuth/Feedback/pdbeta%1.html",0x3b);
    QString::arg(&local_68,&local_70,0xc,0,10,0x20);
    QString::operator=(&local_60,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_29 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10029e3ab;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10029e3ab:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10029e3db;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_58,0x1de306f);
    QString::operator=(&local_60,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10029e3db;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_10029e3db:
  QUrl::QUrl(local_b0,&local_60,0);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029e41d;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10029e41d:
  QNetworkRequest::QNetworkRequest(local_a8,local_b0);
  QUrl::~QUrl(local_b0);
  pQVar6 = operator_new(0x10);
  QNetworkAccessManager::QNetworkAccessManager(pQVar6,param_1);
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar6);
  piVar10 = *(int **)(param_1 + 0x28);
  if (piVar10 != piVar7) {
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      piVar10 = *(int **)(param_1 + 0x28);
    }
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_29 = *piVar10 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar7;
    *(QNetworkAccessManager **)(param_1 + 0x30) = pQVar6;
  }
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_29 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar7);
    }
  }
  puVar2 = PTR_m_instance_1021e1418;
  pQVar6 = *(QNetworkAccessManager **)PTR_m_instance_1021e1418;
  if (pQVar6 == (QNetworkAccessManager *)0x0) {
    pQVar6 = operator_new(0x18);
    CProxyAuthenticator::CProxyAuthenticator((CProxyAuthenticator *)pQVar6);
    *(QNetworkAccessManager **)puVar2 = pQVar6;
    DAT_1022728e8 = 1;
  }
  CProxyAuthenticator::addRequestor(pQVar6);
  uVar13 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)
     ) {
    uVar13 = *(undefined8 *)(param_1 + 0x30);
  }
  local_40 = PTR_sslErrors_1021e1448;
  local_38 = 0;
  local_50 = FUN_10029eb40;
  local_48 = 0;
  puVar8 = operator_new(0x20);
  *puVar8 = 1;
  *(code **)(puVar8 + 2) = FUN_10029f310;
  *(code **)(puVar8 + 4) = FUN_10029eb40;
  *(undefined8 *)(puVar8 + 6) = 0;
  QObject::connectImpl
            (local_b8,uVar13,&local_40,param_1,&local_50,puVar8,0,0,PTR_staticMetaObject_1021e1440);
  QMetaObject::Connection::~Connection(local_b8);
  pQVar14 = (QNetworkRequest *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar14 = (QNetworkRequest *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar14 = *(QNetworkRequest **)(param_1 + 0x30);
  }
  pQVar9 = (QObject *)QNetworkAccessManager::post(pQVar14,(QHttpMultiPart *)local_a8);
  piVar10 = (int *)0x0;
  if (pQVar9 != (QObject *)0x0) {
    piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar9);
  }
  piVar7 = *(int **)(param_1 + 0x38);
  if (piVar7 != piVar10) {
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      local_29 = *piVar10 != 0;
      UNLOCK();
      piVar7 = *(int **)(param_1 + 0x38);
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x38));
      }
    }
    *(int **)(param_1 + 0x38) = piVar10;
    *(QObject **)(param_1 + 0x40) = pQVar9;
  }
  if (piVar10 != (int *)0x0) {
    LOCK();
    *piVar10 = *piVar10 + -1;
    local_29 = *piVar10 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar10);
    }
  }
  QObject::setParent(pQVar4);
  uVar13 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)
     ) {
    uVar13 = *(undefined8 *)(param_1 + 0x40);
  }
  local_80 = PTR_finished_1021e1318;
  local_78 = 0;
  local_90 = FUN_10029edf0;
  local_88 = 0;
  puVar8 = operator_new(0x20);
  *puVar8 = 1;
  *(code **)(puVar8 + 2) = FUN_10029f380;
  *(code **)(puVar8 + 4) = FUN_10029edf0;
  *(undefined8 *)(puVar8 + 6) = 0;
  QObject::connectImpl
            (local_c0,uVar13,&local_80,param_1,&local_90,puVar8,0,0,PTR_staticMetaObject_1021e1310);
  QMetaObject::Connection::~Connection(local_c0);
  CAbstractTask::setWaitForSubTaskCompletion();
  QNetworkRequest::~QNetworkRequest(local_a8);
  return 0;
}

