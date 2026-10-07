
void FUN_10061d750(QByteArray *param_1,long *param_2)

{
  undefined8 *puVar1;
  QUrl local_80 [8];
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QVariant local_60 [16];
  QArrayData *local_50;
  QArrayData *local_48;
  QVariant local_40 [16];
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_10061cce0(param_2);
  QByteArray::QByteArray((QByteArray *)&local_50,"MTruJQUcTEHprBtYzmJJrCySniIaLnl",-1);
  QByteArray::QByteArray((QByteArray *)&local_30,"multipart/form-data; boundary=",-1);
  puVar1 = (undefined8 *)QByteArray::append((QByteArray *)&local_30);
  local_48 = (QArrayData *)*puVar1;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061d7ea;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10061d7ea:
  QVariant::QVariant(local_40,(QByteArray *)&local_48);
  QNetworkRequest::setHeader(param_1,0,local_40);
  QVariant::~QVariant(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061d83e;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10061d83e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061d86e;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10061d86e:
  QVariant::QVariant(local_60,*(int *)(*param_2 + 4));
  QNetworkRequest::setHeader(param_1,1,local_60);
  QVariant::~QVariant(local_60);
  QByteArray::QByteArray((QByteArray *)&local_68,"host",-1);
  QNetworkRequest::url();
  QUrl::host(&local_78,local_80,0x7f00000);
  QString::toUtf8();
  QNetworkRequest::setRawHeader(param_1,(QByteArray *)&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061d919;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10061d919:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061d949;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10061d949:
  QUrl::~QUrl(local_80);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061d982;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10061d982:
  FUN_10061d4b0(param_1);
  return;
}

