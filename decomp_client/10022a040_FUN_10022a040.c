
undefined8 FUN_10022a040(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Connection local_40 [8];
  QString local_38;
  undefined1 local_29;
  
  uVar4 = 0;
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_10015cb20(uVar3,param_1 + 0x38);
  if (lVar2 == 0) {
    return 0;
  }
  cVar1 = FUN_10018ecf0(lVar2);
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_10018d830(&local_38,lVar2);
  cVar1 = operator==(&local_38,(QString *)(param_1 + 0x28));
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10022a0e2;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10022a0e2:
  if (cVar1 != '\0') {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    lVar2 = FUN_10015eed0(uVar3,lVar2);
    uVar4 = 0x80000009;
    if (lVar2 != 0) {
      uVar4 = 0;
      QObject::connect(local_40,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                       "1subTaskCompleted(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection(local_40);
      CAbstractTask::setWaitForSubTaskCompletion();
    }
  }
  return uVar4;
}

