
undefined8 FUN_10021bc20(long param_1)

{
  char cVar1;
  int iVar2;
  CTaskGenericId *pCVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_58;
  long local_50;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    QWidget::hide();
  }
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_48,uVar6);
  FUN_100191030(local_40,&local_48);
  plVar4 = (long *)CTaskManager::getTaskById(pCVar3);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10021bccc;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10021bccc:
  if (plVar4 != (long *)0x0) {
    cVar1 = FUN_10021a600(plVar4);
    (**(code **)(*plVar4 + 0x78))(plVar4,0x80000275);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_10018a9d0(uVar6);
  CAbstractTask::setWaitForSubTaskCompletion();
  if (iVar2 == 0x30000009) {
    pvVar5 = operator_new(0x38);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_10029b6f0(pvVar5,uVar6,uVar7);
    QObject::connect(&local_50,pvVar5,"2taskFinished(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_50 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    CAbstractTask::execute();
  }
  else {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar6 = FUN_1001930a0(uVar6,0xc9);
    QObject::connect(&local_58,uVar6,"2taskFinished(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_58 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
  }
  return 0;
}

