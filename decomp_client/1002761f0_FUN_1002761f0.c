
undefined8 FUN_1002761f0(long param_1)

{
  QString *pQVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = (QString *)CSearchParentHelper::instance();
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_30,uVar2);
  uVar2 = CSearchParentHelper::getParentForMessage(pQVar1,SUB81(&local_30,0),(QWidget *)0x0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10027626d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10027626d:
  pvVar3 = operator_new(0x68);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1001ef530(pvVar3,uVar4,uVar2);
  QObject::connect(local_38,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_38);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

