
void FUN_10076f1d0(long param_1)

{
  char cVar1;
  char cVar2;
  QObject *pQVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  pQVar3 = operator_new(0x78);
  CAbstractWizardModel::wizardCtrl();
  lVar4 = CWizardController::parentWidget();
  if (lVar4 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    QWidget::window();
  }
  uVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102229d80);
  FUN_1002c23d0(pQVar3,uVar5);
  piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  piVar7 = *(int **)(param_1 + 0x28);
  if (piVar7 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      piVar7 = *(int **)(param_1 + 0x28);
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar6;
    *(QObject **)(param_1 + 0x30) = pQVar3;
  }
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_29 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar6);
    }
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  cVar1 = '\0';
  QObject::connect(&local_38,uVar5,"2subTaskStarted(int)",param_1,"1onSubtaskStarted(int)",0);
  if (local_38 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  cVar2 = '\0';
  QObject::connect(&local_40,uVar5,"2taskFinished(PRL_RESULT)",param_1,"1onTaskFinished(PRL_RESULT)"
                   ,0);
  if (cVar1 != '\0') {
    if (local_40 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  cVar1 = '\0';
  QObject::connect(&local_48,uVar5,"2downloadProgress(DownloadProgressData)",param_1,
                   "1onDownloadProgress(DownloadProgressData)",0);
  if (cVar2 != '\0') {
    if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  cVar2 = '\0';
  QObject::connect(&local_50,uVar5,"2installProgress(int)",param_1,"1onInstallProgress(int)",0);
  if (cVar1 != '\0') {
    if (local_50 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  QObject::connect(&local_58,uVar5,"2downloadStateChanged(CTaskDownloadFile::State)",param_1,
                   "1onDownloadStateChanged(CTaskDownloadFile::State)",0);
  if ((cVar2 != '\0') && (local_58 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  CAbstractTask::execute();
  return;
}

