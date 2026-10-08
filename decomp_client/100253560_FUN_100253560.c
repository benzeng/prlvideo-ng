
undefined8 FUN_100253560(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long local_48 [2];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar9 = *(int *)(param_1 + 0x38);
  if (iVar9 == 0) {
    QTime::start();
    iVar9 = *(int *)(param_1 + 0x38);
  }
  *(int *)(param_1 + 0x38) = iVar9 + 1;
  uVar7 = 0;
  FUN_100df99c0("","prl_client_app",0,"Try to request support code, attempt [%d]");
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("{9D9821FB-7D80-41CF-A28A-F23B510070E7}",0x26);
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar4 = (QObject *)FUN_100175d50(uVar7,&local_30,&local_38,0);
  piVar5 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar6 = *(int **)(param_1 + 0x28);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x28);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_21 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar5;
    *(QObject **)(param_1 + 0x30) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_21 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100253697;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100253697:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002536c7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002536c7:
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(bool **)(param_1 + 0x30) == (bool *)0x0)) {
    FUN_100df99c0("","prl_client_app",0,"Failed to to request support code. Request is null.");
    return 0x80000009;
  }
  cVar3 = CSdkRequest::isCompleted(*(bool **)(param_1 + 0x30),(int *)0x0);
  lVar1 = *(long *)(param_1 + 0x28);
  if (cVar3 != '\0') {
    uVar7 = 0;
    if ((lVar1 != 0) && (uVar7 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
    }
    uVar7 = FUN_100253880(param_1,uVar7,1 < *(int *)(param_1 + 0x38));
    return uVar7;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined1 *)(lVar2 + 0x60) = 1;
  lVar8 = 0;
  if ((lVar1 != 0) && (lVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
    lVar8 = lVar2;
  }
  QObject::connect(local_48,lVar8,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onQuerySupportCodeFinished(PRL_RESULT)",0);
  if (local_48[0] == 0) {
    QMetaObject::Connection::~Connection((Connection *)local_48);
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)local_48);
    if (cVar3 != '\0') goto LAB_1002537eb;
  }
  FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connect",
                "Tasks/CTaskQuerySupportCode.cpp",0x52,"querySupportCode");
LAB_1002537eb:
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

