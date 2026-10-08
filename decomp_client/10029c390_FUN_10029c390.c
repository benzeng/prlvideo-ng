
undefined8 FUN_10029c390(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  CTaskCreateProblemReport *pCVar4;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  QMetaObject::tr((char *)&local_30,(char *)&PTR_staticMetaObject_102207460,0x1de2e6a);
  FUN_10029c110(param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029c410;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10029c410:
  uVar2 = FUN_100060bb0();
  iVar1 = FUN_10005ffb0(uVar2);
  if (iVar1 == 3) {
    uVar2 = FUN_100060bb0();
LAB_10029c45c:
    iVar1 = FUN_10005ffb0(uVar2);
    if (iVar1 != 3) {
      uVar2 = FUN_100152280();
      uVar2 = FUN_1001554a0(uVar2);
      uVar2 = FUN_10015d330(uVar2,0);
      goto LAB_10029c48f;
    }
LAB_10029c469:
    uVar2 = FUN_100060bb0();
  }
  else {
    uVar2 = FUN_100152280();
    lVar3 = FUN_1001554a0(uVar2);
    if (lVar3 == 0) goto LAB_10029c469;
    uVar2 = FUN_100152280();
    uVar2 = FUN_1001554a0(uVar2);
    iVar1 = FUN_10015d3a0(uVar2);
    uVar2 = FUN_100060bb0();
    if (iVar1 == 1) goto LAB_10029c45c;
  }
  uVar2 = FUN_1000609c0(uVar2);
LAB_10029c48f:
  pCVar4 = operator_new(0x98);
  CTaskCreateProblemReport::CTaskCreateProblemReport(pCVar4,uVar2,2);
  QObject::connect(&local_38,pCVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1onSendProblemReportFinished()",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  CAbstractTask::execute();
  return 0;
}

