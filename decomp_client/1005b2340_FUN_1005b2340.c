
void FUN_1005b2340(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  QObject *pQVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  Connection local_48 [8];
  Connection local_40 [15];
  undefined1 local_31;
  
  plVar1 = (long *)(param_1 + 0x38);
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (plVar2 = *(long **)(param_1 + 0x40), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x78))(plVar2,0x80000275);
    piVar9 = (int *)*plVar1;
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if ((!(bool)local_31) && ((void *)*plVar1 != (void *)0x0)) {
        operator_delete((void *)*plVar1);
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
      *plVar1 = 0;
    }
  }
  uVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b99f0(uVar4);
  uVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = FUN_1005b87b0(uVar4);
  FUN_1005cca30(uVar4);
  CAbstractWizardModel::wizardCtrl();
  lVar5 = CWizardController::parentWidget();
  uVar4 = 0;
  if (lVar5 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    uVar4 = QWidget::window();
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  pQVar6 = operator_new(0x180);
  uVar7 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar7 = FUN_1005b87b0(uVar7);
  FUN_100217490(pQVar6,uVar7,uVar4,0,0);
  piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  piVar9 = (int *)*plVar1;
  if (piVar9 != piVar8) {
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      piVar9 = (int *)*plVar1;
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if ((!(bool)local_31) && ((void *)*plVar1 != (void *)0x0)) {
        operator_delete((void *)*plVar1);
      }
    }
    *(int **)(param_1 + 0x38) = piVar8;
    *(QObject **)(param_1 + 0x40) = pQVar6;
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + -1;
    local_31 = *piVar8 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar8);
    }
  }
  uVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  cVar3 = FUN_1005b99e0(uVar4);
  if (cVar3 != '\0') {
    uVar4 = 0;
    if ((*plVar1 != 0) && (uVar4 = 0, *(int *)(*plVar1 + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x40);
    }
    QObject::connect(local_40,uVar4,"2osImageDownloadWillStart()",param_1,
                     "1onOsImageDownloadWillStart()",0);
    QMetaObject::Connection::~Connection(local_40);
  }
  uVar4 = 0;
  if ((*plVar1 != 0) && (uVar4 = 0, *(int *)(*plVar1 + 4) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  QObject::connect(local_48,uVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1onInstallOsTaskFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_48);
  CAbstractTask::execute();
  return;
}

