
undefined8 FUN_1002eed40(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  CAppUpdateLogic *pCVar3;
  long local_38;
  long local_30;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  puVar1 = PTR_m_instance_1021e1340;
  pCVar3 = *(CAppUpdateLogic **)PTR_m_instance_1021e1340;
  if (pCVar3 == (CAppUpdateLogic *)0x0) {
    pCVar3 = operator_new(0x18);
    CAppUpdateLogic::CAppUpdateLogic(pCVar3);
    *(CAppUpdateLogic **)puVar1 = pCVar3;
    DAT_102274b28 = 1;
  }
  CAppUpdateLogic::setOnAppStart(SUB81(pCVar3,0));
  pCVar3 = *(CAppUpdateLogic **)puVar1;
  if (pCVar3 == (CAppUpdateLogic *)0x0) {
    pCVar3 = operator_new(0x18);
    CAppUpdateLogic::CAppUpdateLogic(pCVar3);
    *(CAppUpdateLogic **)puVar1 = pCVar3;
    DAT_102274b28 = 1;
  }
  cVar2 = '\0';
  QObject::connect(&local_30,pCVar3,"2updateCheckFinished(PRL_RESULT, bool)",param_1,
                   "1onUpdateCheckFinished(PRL_RESULT, bool)",0);
  if (local_30 != 0) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  pCVar3 = *(CAppUpdateLogic **)puVar1;
  if (pCVar3 == (CAppUpdateLogic *)0x0) {
    pCVar3 = operator_new(0x18);
    CAppUpdateLogic::CAppUpdateLogic(pCVar3);
    *(CAppUpdateLogic **)puVar1 = pCVar3;
    DAT_102274b28 = 1;
  }
  QObject::connect(&local_38,pCVar3,"2updateInstallFinished(PRL_RESULT)",param_1,
                   "1onUpdateInstallFinished(PRL_RESULT)",0);
  if ((cVar2 != '\0') && (local_38 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  pCVar3 = *(CAppUpdateLogic **)puVar1;
  if (pCVar3 == (CAppUpdateLogic *)0x0) {
    pCVar3 = operator_new(0x18);
    CAppUpdateLogic::CAppUpdateLogic(pCVar3);
    *(CAppUpdateLogic **)puVar1 = pCVar3;
    DAT_102274b28 = 1;
  }
  CAppUpdateLogic::checkForUpdates(SUB81(pCVar3,0),false,true);
  return 0;
}

