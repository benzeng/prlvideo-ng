
undefined8 FUN_1002454d0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long local_20;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_10061c0c0(uVar3);
  if (lVar2 == 0) {
    return 0x80000009;
  }
  QObject::connect(&local_20,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onUpdateLicenseInfoFinished(PRL_RESULT)",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    if (cVar1 != '\0') goto LAB_100245596;
  }
  FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                "Tasks/CTaskValidateLicense.cpp",0x50,"fetchLicense");
LAB_100245596:
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

