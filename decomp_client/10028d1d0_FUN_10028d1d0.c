
undefined8 FUN_10028d1d0(long param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long local_40;
  QVariant local_38;
  
  FUN_10061abe0(&local_38,*(undefined8 *)(param_1 + 0x18),0);
  iVar2 = QVariant::toInt((bool *)&local_38);
  if (iVar2 == -0x7ffef000) {
    QVariant::~QVariant(&local_38);
  }
  else {
    cVar1 = FUN_10061c680(*(undefined8 *)(param_1 + 0x18));
    QVariant::~QVariant(&local_38);
    if (cVar1 == '\0') {
      return 0x3bfa;
    }
  }
  pvVar3 = operator_new(0x48);
  uVar4 = FUN_10061b510(*(undefined8 *)(param_1 + 0x18));
  FUN_1002cb330(pvVar3,uVar4);
  QObject::connect(&local_40,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onCheckWebPortalAvailableFinished(PRL_RESULT)",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

