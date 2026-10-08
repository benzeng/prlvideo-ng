
void FUN_10029edf0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  char local_31;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar1 = QNetworkReply::error();
  if (iVar1 == 0) {
    QIODevice::readAll();
    QByteArray::simplified();
    iVar1 = QByteArray::toInt((bool *)&local_40,(int)&local_31);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10029ef3f;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_10029ef3f:
    if (local_31 == '\0') {
      iVar1 = -1;
      FUN_100df99c0("","prl_client_app",0,"Can\'t parse server answer to get ticket ID");
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"Feedback report sent, ticket ID: %d",iVar1);
    }
    if (*(int *)local_30 == -1) goto LAB_10029efbc;
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029efbc;
    }
    uVar2 = 1;
    local_50 = local_30;
  }
  else {
    QIODevice::errorString();
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Can\'t send feedback report, error: %s",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10029eea9;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_10029eea9:
    iVar1 = -1;
    if (*(int *)local_50 == -1) goto LAB_10029efbc;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029efbc;
    }
    uVar2 = 2;
  }
  QArrayData::deallocate(local_50,uVar2,8);
LAB_10029efbc:
  QObject::deleteLater();
  FUN_100df99c0("","prl_client_app",0,"Ticket ID: %d",iVar1);
  uVar3 = 0x80000009;
  if (iVar1 != -1) {
    uVar3 = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,uVar3);
  return;
}

