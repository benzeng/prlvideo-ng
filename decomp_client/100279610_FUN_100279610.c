
undefined8 FUN_100279610(long param_1)

{
  undefined *puVar1;
  void *pvVar2;
  CTaskSendHttpRequest *pCVar3;
  undefined8 *puVar4;
  Connection local_e0 [8];
  QArrayData *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  undefined *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QVariant local_98;
  QUrl local_88 [8];
  QNetworkRequest local_80 [8];
  QArrayData *local_78;
  QString local_70;
  string local_68;
  char local_67 [7];
  uint local_60;
  char *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  if (*(int *)(*(long *)(param_1 + 0x50) + 4) == 0) {
    local_c8 = PTR_shared_null_1021e15e8;
    pCVar3 = operator_new(0x48);
    pvVar2 = operator_new(0x50);
    puVar1 = PTR_shared_null_1021e1288;
    local_d0 = PTR_shared_null_1021e1288;
    FUN_100276f00(pvVar2,&local_d0);
    local_d8 = (QArrayData *)puVar1;
    CTaskSendHttpRequest::CTaskSendHttpRequest(pCVar3,param_1 + 0x48,&local_c8,pvVar2,2,&local_d8);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10027974a;
      }
      QArrayData::deallocate(local_d8,1,8);
    }
LAB_10027974a:
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_31 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10027977d;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
LAB_10027977d:
    FUN_1001e3400(&local_c8);
    goto LAB_100279b6b;
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"cleverbridge download");
  }
  local_48.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper
                 ("<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:web=\"http://protexis.com/webservices\">\n   <soapenv:Header/>\n   <soapenv:Body>\n      <web:DownloadAuthorizationRequest>\n         <web:DownloadToken>%1</web:DownloadToken>\n         <web:MachineId>%2</web:MachineId>\n         <web:DownloadId/>\n         <web:DecryptionKeyRequired>false</web:DecryptionKeyRequired>\n      </web:DownloadAuthorizationRequest>\n   </soapenv:Body>\n</soapenv:Envelope>\n"
                  ,0x1d9);
  FUN_100b5cff0(&local_68,3);
  if (((byte)local_68 & 1) == 0) {
    local_60 = (uint)((byte)local_68 >> 1);
    local_58 = local_67;
  }
  if ((local_58 != (char *)0x0) && (local_60 == 0xffffffff)) {
    _strlen(local_58);
  }
  QString::fromUtf8_helper((char *)&local_50,(int)local_58);
  std::string::~string(&local_68);
  if (*(int *)(local_50.field0_0x0 + 4) == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1de14e1);
    QString::operator=(&local_50,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10027981c;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_10027981c:
  QString::arg(&local_78,&local_48,param_1 + 0x50,0,0x20);
  QString::arg(&local_70,&local_78,&local_50,0,0x20);
  QString::operator=(&local_48,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027988b;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10027988b:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002798bb;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002798bb:
  QUrl::QUrl(local_88,param_1 + 0x48,0);
  QNetworkRequest::QNetworkRequest(local_80,local_88);
  QUrl::~QUrl(local_88);
  QVariant::QVariant(&local_98,"text/xml; charset=utf-8");
  QNetworkRequest::setHeader(local_80,0,&local_98);
  QVariant::~QVariant(&local_98);
  QByteArray::QByteArray((QByteArray *)&local_a0,"SOAPAction",-1);
  QByteArray::QByteArray
            ((QByteArray *)&local_a8,"http://protexis.com/webservices /DownloadAuthorizationRequest"
             ,-1);
  QNetworkRequest::setRawHeader((QByteArray *)local_80,(QByteArray *)&local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027998e;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_10027998e:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002799c4;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_1002799c4:
  pCVar3 = operator_new(0x48);
  puVar4 = operator_new(0x50);
  local_b0 = PTR_shared_null_1021e1288;
  FUN_100276f00(puVar4,&local_b0);
  *puVar4 = &DAT_1021ef418;
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_b8,(char *)(local_c0 + *(long *)(local_c0 + 0x10)),-1)
  ;
  CTaskSendHttpRequest::CTaskSendHttpRequest(pCVar3,local_80,4,puVar4,&local_b8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100279a91;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_100279a91:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100279acc;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_100279acc:
  puVar1 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100279b02;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100279b02:
  QNetworkRequest::~QNetworkRequest(local_80);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100279b3b;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100279b3b:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100279b6b;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100279b6b:
  QObject::connect(local_e0,pCVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onQueryDownloadDescriptorFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_e0);
  CAbstractTask::execute();
  return 0;
}

