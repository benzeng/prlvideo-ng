
undefined8 FUN_100279f70(long param_1)

{
  CTaskSendHttpRequest *pCVar1;
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QNetworkRequest local_30 [8];
  QUrl local_28 [15];
  undefined1 local_19;
  
  QUrl::QUrl(local_28,param_1 + 0x20,0);
  QNetworkRequest::QNetworkRequest(local_30,local_28);
  QByteArray::QByteArray((QByteArray *)&local_38,"range",-1);
  QByteArray::QByteArray((QByteArray *)&local_40,"bytes=0-",-1);
  QNetworkRequest::setRawHeader((QByteArray *)local_30,(QByteArray *)&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027a007;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10027a007:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027a037;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10027a037:
  QByteArray::QByteArray((QByteArray *)&local_48,"If-Range",-1);
  QByteArray::QByteArray((QByteArray *)&local_50,"",-1);
  QNetworkRequest::setRawHeader((QByteArray *)local_30,(QByteArray *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027a0a2;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10027a0a2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027a0d2;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10027a0d2:
  pCVar1 = operator_new(0x48);
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  CTaskSendHttpRequest::CTaskSendHttpRequest(pCVar1,local_30,1,0,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027a131;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10027a131:
  QObject::connect(&local_60,pCVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onQueryDownloadContentLengthFinished(PRL_RESULT)",0);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  QNetworkRequest::~QNetworkRequest(local_30);
  QUrl::~QUrl(local_28);
  return 0;
}

