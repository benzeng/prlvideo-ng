
undefined8 FUN_100299b70(long param_1)

{
  int iVar1;
  Data *pDVar2;
  void *pvVar3;
  undefined8 uVar4;
  Data *pDVar5;
  undefined8 uVar6;
  long lVar7;
  long local_48;
  Data *local_40;
  undefined1 local_31;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pvVar3 = operator_new(0x60);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1002880e0(pvVar3,uVar6,3,uVar4,&local_40);
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100299c4f;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar7 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_100299c4f:
  QObject::connect(&local_48,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  CAbstractTask::execute();
  return 0;
}

