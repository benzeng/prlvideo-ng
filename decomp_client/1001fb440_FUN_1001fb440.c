
undefined8 FUN_1001fb440(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  void *pvVar4;
  long local_58;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = FUN_10016f500(uVar3);
  FUN_10061abe0(&local_38,uVar3,0xf);
  cVar2 = QVariant::toBool();
  if (cVar2 != '\0') {
    QVariant::~QVariant(&local_38);
    return 0x3bfa;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = FUN_10016f500(uVar3);
  FUN_10061abe0(&local_50,uVar3,0x12);
  QVariant::toString();
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001fb50c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001fb50c:
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant(&local_38);
  uVar3 = 0x3bfa;
  if (iVar1 == 0) {
    pvVar4 = operator_new(0x48);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_1002cb720(pvVar4,uVar3);
    uVar3 = 0;
    QObject::connect(&local_58,pvVar4,"2taskFinished(PRL_RESULT)",param_1,
                     "1onGetPortalAccountEmailFinished(PRL_RESULT)",0);
    if (local_58 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    CAbstractTask::setWaitForSubTaskCompletion();
    CAbstractTask::execute();
  }
  return uVar3;
}

