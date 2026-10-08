
void FUN_10068a870(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  void *pvVar2;
  long local_28;
  
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Query support code.");
  pvVar2 = operator_new(0x40);
  FUN_1002533d0(pvVar2,param_2);
  QObject::connect(&local_28,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onQuerySupportCodeFinished(PRL_RESULT)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    if (cVar1 != '\0') goto LAB_10068a947;
  }
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                "License/WizardEngine/CLicenseWizardWorker.cpp",0x165,"querySupportCode");
LAB_10068a947:
  CAbstractTask::execute();
  return;
}

