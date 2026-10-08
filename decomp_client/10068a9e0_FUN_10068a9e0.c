
void FUN_10068a9e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  void *pvVar2;
  long local_30;
  
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Activate trial.");
  pvVar2 = operator_new(0x50);
  FUN_10029fe40(pvVar2,param_2,param_3);
  QObject::connect(&local_30,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onTrialActivationFinished(PRL_RESULT)",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    if (cVar1 != '\0') goto LAB_10068aabf;
  }
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                "License/WizardEngine/CLicenseWizardWorker.cpp",0x178,"activateTrial");
LAB_10068aabf:
  CAbstractTask::execute();
  return;
}

