
undefined8 FUN_100251fb0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  CTaskSendHttpRequest *pCVar3;
  CRegistrationResponseParser *this;
  char *pcVar4;
  Connection local_a0 [8];
  QArrayData *local_98;
  QArrayData *local_90;
  int *local_88;
  QArrayData *local_80;
  undefined1 local_78 [24];
  int *local_60;
  undefined1 local_58 [24];
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
      if ((bool)local_29) goto LAB_100252012;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100252012:
  if (cVar1 == '\0') {
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    pcVar4 = "No valid new license key has been specified. Skip product registration.";
LAB_1002522a1:
    FUN_100df99c0("","prl_client_app",2,pcVar4);
    return 0;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    pcVar4 = "Automatic new license registration has been skipped. Schedule manual registration.";
    goto LAB_1002522a1;
  }
  FUN_1006264f0(&local_40);
  cVar1 = FUN_100624b60(&local_40);
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,
                  "Valid old license is not available. Automatic registration has been skipped. Schedule manual registration."
                 );
    goto LAB_1002522cd;
  }
  FUN_100b5f7a0(local_58,&local_40);
  uVar2 = FUN_100b5ffd0(local_58);
  FUN_100b899e0(&local_60,uVar2,1);
  FUN_100251d80(&local_80,param_1 + 0x18);
  FUN_100b5f7a0(local_78,&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002520b1;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002520b1:
  uVar2 = FUN_100b5ffd0(local_78);
  FUN_100b899e0(&local_88,uVar2,0);
  FUN_10024f800(&local_60,&local_88);
  if (*local_88 != -1) {
    if (*local_88 != 0) {
      LOCK();
      *local_88 = *local_88 + -1;
      local_29 = *local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002520ff;
    }
    FUN_1001c45d0(&local_88,local_88);
  }
LAB_1002520ff:
  pCVar3 = operator_new(0x48);
  local_90 = (QArrayData *)
             QString::fromAscii_helper("http://www.parallels.com/cgi-bin/RegLicenseFromApp2",0x33);
  this = operator_new(0x30);
  CRegistrationResponseParser::CRegistrationResponseParser(this);
  local_98 = (QArrayData *)PTR_shared_null_1021e1288;
  CTaskSendHttpRequest::CTaskSendHttpRequest(pCVar3,&local_90,&local_60,this,2,&local_98);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002521a6;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_1002521a6:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002521dc;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1002521dc:
  QObject::connect(local_a0,pCVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onRegisterNewLicenseFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_a0);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  FUN_100b5ff80(local_78);
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_29 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025224e;
    }
    FUN_1001c45d0(&local_60,local_60);
  }
LAB_10025224e:
  FUN_100b5ff80(local_58);
LAB_1002522cd:
  if (*(int *)local_40 == -1) {
    return 0;
  }
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return 0;
    }
    local_29 = 0;
  }
  QArrayData::deallocate(local_40,2,8);
  return 0;
}

