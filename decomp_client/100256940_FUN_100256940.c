
undefined4 FUN_100256940(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  char *pcVar7;
  Connection local_60 [8];
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if ((lVar5 == 0) || (iVar2 = FUN_10015a6e0(lVar5), iVar2 != 0)) {
    pcVar7 = "Cannot check for updates. Server is not connected.";
LAB_100256988:
    FUN_100df99c0("","prl_client_app",0,pcVar7);
    uVar3 = 0x80000009;
  }
  else {
    uVar4 = FUN_10016f500(lVar5);
    FUN_10061abe0(&local_40,uVar4,0);
    iVar2 = QVariant::toInt((bool *)&local_40);
    if (iVar2 == 0) {
      QVariant::~QVariant(&local_40);
    }
    else {
      uVar4 = FUN_10016f500(lVar5);
      FUN_10061abe0(&local_50,uVar4,0);
      iVar2 = QVariant::toInt((bool *)&local_50);
      QVariant::~QVariant(&local_50);
      QVariant::~QVariant(&local_40);
      if (iVar2 != -0x7ffeefa8) {
        FUN_100df99c0("","prl_client_app",0,"Not active copy of product. Try to activate it.");
        if (DAT_102310958 == (void *)0x0) {
          pvVar6 = operator_new(0x18);
          FUN_100612710(pvVar6);
          DAT_102271170 = 1;
          DAT_102310958 = pvVar6;
        }
        pvVar6 = DAT_102310958;
        FUN_10015a2b0(&local_58,lVar5);
        lVar5 = FUN_100612b70(pvVar6,&local_58,0,0);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_29 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100256ab2;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_100256ab2:
        if (lVar5 != 0) {
          cVar1 = CAbstractTask::isFinished();
          if (cVar1 != '\0') {
            uVar3 = CAbstractTask::getResult();
            uVar3 = FUN_100256c10(param_1,uVar3);
            return uVar3;
          }
          CAbstractTask::setWaitForSubTaskCompletion();
          QObject::connect(local_60,lVar5,"2taskFinished(PRL_RESULT)",param_1,
                           "1onTaskValidateLicenseFinished(PRL_RESULT)",0);
          QMetaObject::Connection::~Connection(local_60);
          return 0;
        }
        pcVar7 = "Cannot check for updates. Failed to start license validation.";
        goto LAB_100256988;
      }
    }
    uVar4 = FUN_10016f500(lVar5);
    cVar1 = FUN_10061b4d0(uVar4,0x80);
    uVar3 = 0;
    if ((cVar1 != '\0') && (iVar2 = CustomUpdateServerInfo::policy(), uVar3 = 0, iVar2 == 0)) {
      CAbstractTask::clearSubTaskList();
      uVar3 = 0;
      FUN_100df99c0("","prl_client_app",0,"Volume license & update policy \'None\'.");
    }
  }
  return uVar3;
}

