
undefined8 FUN_1002711a0(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long in_RAX;
  CAppUpdateLogic *pCVar4;
  void *pvVar5;
  undefined8 uVar6;
  long local_28;
  
  puVar1 = PTR_m_instance_1021e1340;
  pCVar4 = *(CAppUpdateLogic **)PTR_m_instance_1021e1340;
  local_28 = in_RAX;
  if (pCVar4 == (CAppUpdateLogic *)0x0) {
    pCVar4 = operator_new(0x18);
    CAppUpdateLogic::CAppUpdateLogic(pCVar4);
    *(CAppUpdateLogic **)puVar1 = pCVar4;
    DAT_102274b28 = 1;
  }
  CAppUpdateLogic::setOnAppStart(SUB81(pCVar4,0));
  pCVar4 = *(CAppUpdateLogic **)puVar1;
  if (pCVar4 == (CAppUpdateLogic *)0x0) {
    pCVar4 = operator_new(0x18);
    CAppUpdateLogic::CAppUpdateLogic(pCVar4);
    *(CAppUpdateLogic **)puVar1 = pCVar4;
    DAT_102274b28 = 1;
  }
  iVar3 = CAppUpdateLogic::installPendingUpdate(SUB81(pCVar4,0),false);
  if (iVar3 == -0x7fffffed) {
    pCVar4 = *(CAppUpdateLogic **)puVar1;
    if (pCVar4 == (CAppUpdateLogic *)0x0) {
      pCVar4 = operator_new(0x18);
      CAppUpdateLogic::CAppUpdateLogic(pCVar4);
      *(CAppUpdateLogic **)puVar1 = pCVar4;
      DAT_102274b28 = 1;
    }
    uVar6 = 0;
    QObject::connect(&local_28,pCVar4,"2updateInstallFinished(PRL_RESULT)",param_1,
                     "1onUpdateInstallFinished(PRL_RESULT)",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  else {
    cVar2 = FUN_100d80680();
    if (cVar2 != '\0') {
      if (DAT_102310930 == (void *)0x0) {
        pvVar5 = operator_new(0x18);
        FUN_1001e5440(pvVar5);
        DAT_102273630 = 1;
        DAT_102310930 = pvVar5;
      }
      FUN_1001e5610(DAT_102310930,5,0);
    }
    pCVar4 = *(CAppUpdateLogic **)puVar1;
    if (pCVar4 == (CAppUpdateLogic *)0x0) {
      pCVar4 = operator_new(0x18);
      CAppUpdateLogic::CAppUpdateLogic(pCVar4);
      *(CAppUpdateLogic **)puVar1 = pCVar4;
      DAT_102274b28 = 1;
    }
    CAppUpdateLogic::setOnAppStart(SUB81(pCVar4,0));
    uVar6 = 0x3bfa;
  }
  return uVar6;
}

