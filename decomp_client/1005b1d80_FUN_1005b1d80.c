
void FUN_1005b1d80(long param_1)

{
  char cVar1;
  QObject *pQVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  if ((((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) &&
      (*(long *)(param_1 + 0x50) != 0)) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
    FUN_100df99c0("","prl_client_app",0,"Import VM task already running");
    return;
  }
  pQVar2 = operator_new(0x58);
  uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_1005b86c0(uVar3);
  CAbstractWizardModel::wizardCtrl();
  uVar4 = CWizardController::parentWidget();
  FUN_10029a220(pQVar2,uVar3,2,uVar4);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar6 = *(int **)(param_1 + 0x48);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_23 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x48);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_22 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_22) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x48));
      }
    }
    *(int **)(param_1 + 0x48) = piVar5;
    *(QObject **)(param_1 + 0x50) = pQVar2;
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
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
  }
  QObject::connect(&local_30,uVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onImportVmTaskFinished(PRL_RESULT)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  CAbstractTask::execute();
  return;
}

