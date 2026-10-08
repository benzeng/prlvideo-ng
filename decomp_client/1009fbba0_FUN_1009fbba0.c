
undefined8
FUN_1009fbba0(undefined8 param_1,QNetworkRequest *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  QUrl local_40 [8];
  QUrl local_38 [8];
  QNetworkRequest local_30 [8];
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1009fbce0(param_1,&local_28);
  QUrl::QUrl(local_38);
  QNetworkRequest::QNetworkRequest(local_30,local_38);
  QUrl::~QUrl(local_38);
  FUN_1009e1510(local_40,1,param_4);
  QNetworkRequest::setUrl((QUrl *)local_30);
  QUrl::~QUrl(local_40);
  FUN_1009e26f0(local_30);
  uVar1 = QNetworkAccessManager::post(param_2,(QByteArray *)local_30);
  QNetworkRequest::~QNetworkRequest(local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return uVar1;
}

