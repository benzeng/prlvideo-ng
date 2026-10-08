
void FUN_1001fbaf0(CAbstractTask *param_1,QObject *param_2,QList *param_3,undefined8 *param_4)

{
  CAbstractTask *pCVar1;
  char cVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  long local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar3 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  FUN_100200da0(pCVar3,&local_40);
  CAbstractTask::CAbstractTask(param_1,param_3,pCVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fbb77;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001fbb77:
  *(undefined ***)param_1 = &PTR_FUN_1022004b0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(QObject **)(param_1 + 0x30) = param_2;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e1288;
  param_1[0x40] = (CAbstractTask)0x0;
  piVar6 = (int *)*param_4;
  *(int **)(param_1 + 0x48) = piVar6;
  if (1 < *piVar6 + 1U) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    local_31 = *piVar6 != 0;
    UNLOCK();
  }
  pCVar1 = param_1 + 0x50;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined **)(param_1 + 0x78) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  cVar2 = FUN_10018ff40(param_2);
  if (cVar2 == '\0') {
    FUN_10018ff30(param_2,1);
    goto LAB_1001fbcc0;
  }
  uVar4 = FUN_100370280();
  FUN_100188480(&local_48,param_2);
  FUN_100370600(uVar4,&local_48,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fbca9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001fbca9:
  CAbstractTask::clearSubTaskList();
LAB_1001fbcc0:
  uVar4 = FUN_100152280();
  pQVar5 = (QObject *)FUN_1001554a0(uVar4);
  piVar6 = (int *)0x0;
  if (pQVar5 != (QObject *)0x0) {
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
  }
  piVar7 = *(int **)pCVar1;
  if (piVar7 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      piVar7 = *(int **)pCVar1;
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)pCVar1 != (void *)0x0)) {
        operator_delete(*(void **)pCVar1);
      }
    }
    *(int **)(param_1 + 0x50) = piVar6;
    *(QObject **)(param_1 + 0x58) = pQVar5;
  }
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_31 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar6);
    }
  }
  if (((*(long *)pCVar1 != 0) && (*(int *)(*(long *)pCVar1 + 4) != 0)) &&
     (*(long *)(param_1 + 0x58) != 0)) {
    QObject::connect(&local_50,*(long *)(param_1 + 0x58),"2afterVmAdded(const CVmWrap&)",param_1,
                     "1onAfterVmAdded(const CVmWrap&)",0);
    if (local_50 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    if (cVar2 == '\0') {
      FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                    "Tasks/CTaskConvertOldFormatVmPD.cpp",0x53,"CTaskConvertOldFormatVmPD");
    }
  }
  return;
}

