
undefined8 FUN_100251b50(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool *pbVar4;
  char *pcVar5;
  Connection local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_100251d80(&local_38,param_1 + 0x18);
  cVar1 = FUN_100624b60(&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100251baf;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100251baf:
  if (cVar1 == '\0') {
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    pcVar5 = "Failed to update license. License key is empty or of invalid format.";
    goto LAB_100251ce0;
  }
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 == 0) {
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    pcVar5 = "Failed to install new license key. Failed to get local server instance";
    goto LAB_100251ce0;
  }
  uVar2 = FUN_10016f500(lVar3);
  FUN_100251d80(&local_40,param_1 + 0x18);
  pbVar4 = (bool *)FUN_10061b970(uVar2,&local_40,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100251c27;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100251c27:
  if (pbVar4 != (bool *)0x0) {
    cVar1 = CSdkRequest::isCompleted(pbVar4,(int *)0x0);
    if (cVar1 != '\0') {
      return 0;
    }
    CAbstractTask::setWaitForSubTaskCompletion();
    QObject::connect(local_48,pbVar4,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onLicenseUpdateRequestCompleted(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_48);
    return 0;
  }
  if (DAT_10230ffd0 < 2) {
    return 0;
  }
  pcVar5 = "Failed to update license. Failed to send license update request.";
LAB_100251ce0:
  FUN_100df99c0("","prl_client_app",2,pcVar5);
  return 0;
}

