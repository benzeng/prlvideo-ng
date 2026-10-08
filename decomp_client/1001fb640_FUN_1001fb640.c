
undefined8 FUN_1001fb640(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  long local_38;
  QVariant local_30;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10016f500(uVar2);
  FUN_10061abe0(&local_30,uVar2,0xf);
  cVar1 = QVariant::toBool();
  if (cVar1 == '\0') {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_10016f500(uVar2);
    cVar1 = FUN_10061b4d0(uVar2,0x20000);
    QVariant::~QVariant(&local_30);
    uVar2 = 0x3bfa;
    if (cVar1 == '\0') {
      pvVar3 = operator_new(0x50);
      uVar2 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_1002d14a0(pvVar3,uVar2);
      uVar2 = 0;
      QObject::connect(&local_38,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                       "1onCheckAccountConfirmation(PRL_RESULT)",0);
      if (local_38 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      CAbstractTask::setWaitForSubTaskCompletion();
      CAbstractTask::execute();
    }
  }
  else {
    QVariant::~QVariant(&local_30);
    uVar2 = 0x3bfa;
  }
  return uVar2;
}

