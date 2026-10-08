
undefined8 FUN_100230d00(long param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long local_30;
  
  iVar2 = *(int *)(param_1 + 0x28);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_100319ae0(uVar6);
  if (iVar2 != iVar1) {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar2 = FUN_100319ae0(uVar6);
    if (iVar2 == 2) {
      pvVar3 = operator_new(0x40);
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar4 = FUN_100319390(uVar6);
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      lVar5 = FUN_100319960(uVar6);
      uVar6 = 0;
      if (lVar5 != 0) {
        uVar6 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar6 = FUN_100319960(uVar6);
        uVar6 = FUN_100323e30(uVar6,0);
      }
      FUN_100299220(pvVar3,0x25,uVar4,uVar6);
      QObject::connect(&local_30,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                       "1subTaskCompleted(PRL_RESULT)",0);
      if (local_30 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      CAbstractTask::setWaitForSubTaskCompletion();
      CAbstractTask::execute();
    }
  }
  return 0;
}

