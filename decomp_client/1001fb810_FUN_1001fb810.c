
undefined8 FUN_1001fb810(long param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  QVariant local_48;
  QVariant local_38;
  long local_28;
  
  pvVar5 = operator_new(0x48);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100293680(pvVar5,uVar6);
  CAbstractTask::execute();
  QObject::connect(&local_28,pvVar5,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  CAbstractTask::setWaitForSubTaskCompletion();
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x138) == '\0') goto LAB_1001fb996;
  lVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (lVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    lVar7 = *(long *)(param_1 + 0x20);
  }
  uVar6 = FUN_10016f500(lVar7);
  FUN_10061abe0(&local_38,uVar6,0);
  iVar4 = QVariant::toInt((bool *)&local_38);
  if (iVar4 == 0) {
    bVar1 = false;
LAB_1001fb926:
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar6 = FUN_10016f500(uVar6);
    cVar2 = FUN_10061c5c0(uVar6);
    cVar3 = '\x01';
    if (cVar2 == '\0') {
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar6 = FUN_10016f500(uVar6);
      cVar3 = FUN_10061b4d0(uVar6,0x20);
    }
    if (bVar1) goto LAB_1001fb980;
  }
  else {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar6 = FUN_10016f500(uVar6);
    FUN_10061abe0(&local_48,uVar6,0);
    iVar4 = QVariant::toInt((bool *)&local_48);
    bVar1 = true;
    cVar3 = '\x01';
    if (iVar4 == -0x7ffeefa8) goto LAB_1001fb926;
LAB_1001fb980:
    QVariant::~QVariant(&local_48);
  }
  QVariant::~QVariant(&local_38);
  if (cVar3 == '\0') {
    return 0;
  }
LAB_1001fb996:
  pvVar5 = operator_new(0x30);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1002953b0(pvVar5,uVar6);
  CAbstractTask::execute();
  return 0;
}

