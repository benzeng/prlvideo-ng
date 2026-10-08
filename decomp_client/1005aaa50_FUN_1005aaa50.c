
void FUN_1005aaa50(long param_1)

{
  QObject *pQVar1;
  char cVar2;
  long lVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  QArrayData *local_70;
  int *local_68;
  QObject *pQStack_60;
  int *local_58;
  QObject *pQStack_50;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    FUN_100df99c0("","prl_client_app",0,"No antivirus selected");
    return;
  }
  local_40 = 0;
  local_58 = (int *)0x0;
  pQStack_50 = (QObject *)0x0;
  local_68 = (int *)0x0;
  pQStack_60 = (QObject *)0x0;
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar3 == 0) {
    QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  }
  local_44 = (uint)(lVar3 != 0);
  piVar6 = (int *)0x0;
  pQVar4 = (QObject *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    piVar6 = (int *)0x0;
    pQVar4 = (QObject *)0x0;
    if (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0) {
      pQVar1 = *(QObject **)(param_1 + 0x28);
      piVar6 = (int *)0x0;
      pQVar4 = (QObject *)0x0;
      if (pQVar1 != (QObject *)0x0) {
        piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
        pQVar4 = pQVar1;
      }
    }
  }
  piVar5 = local_68;
  pQVar1 = pQStack_60;
  if (local_68 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_29 = *piVar6 != 0;
      UNLOCK();
    }
    piVar5 = piVar6;
    pQVar1 = pQVar4;
    if (local_68 != (int *)0x0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_29 = *local_68 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_68 != (int *)0x0)) {
        operator_delete(local_68);
      }
    }
  }
  pQStack_60 = pQVar1;
  local_68 = piVar5;
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_29 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar6);
    }
  }
  local_40 = 0;
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = CAntivirusInfo::developer(*(QString **)(param_1 + 0x40));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005aabbf;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005aabbf:
  CAbstractWizardModel::wizardCtrl();
  lVar3 = CWizardController::parentWidget();
  if (lVar3 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    QWidget::window();
  }
  pQVar4 = (QObject *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221dc70);
  piVar6 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar5 = local_58;
  pQVar1 = pQStack_50;
  if (local_58 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_29 = *piVar6 != 0;
      UNLOCK();
    }
    piVar5 = piVar6;
    pQVar1 = pQVar4;
    if (local_58 != (int *)0x0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_29 = *local_58 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_58 != (int *)0x0)) {
        operator_delete(local_58);
      }
    }
  }
  pQStack_50 = pQVar1;
  local_58 = piVar5;
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_29 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar6);
    }
  }
  pQVar4 = operator_new(200);
  FUN_1002a05f0(pQVar4,&local_68);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  piVar6 = *(int **)(param_1 + 0x48);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x48);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x48));
      }
    }
    *(int **)(param_1 + 0x48) = piVar5;
    *(QObject **)(param_1 + 0x50) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_29 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar5);
    }
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x50);
  }
  QObject::connect(&local_78,uVar7,"2subTaskStarted(int)",param_1,"1onSubtaskStarted(int)",0);
  if (local_78 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x50);
  }
  QObject::connect(&local_80,uVar7,"2taskFinished(PRL_RESULT)",param_1,"1onTaskFinished(PRL_RESULT)"
                   ,0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_80 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x50);
  }
  QObject::connect(&local_88,uVar7,"2downloadProgress(DownloadProgressData)",param_1,
                   "1onDownloadProgress(DownloadProgressData)",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_88 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x50);
  }
  QObject::connect(&local_90,uVar7,"2installProgress(int)",param_1,"1onInstallProgress(int)",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_90 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x50);
  }
  QObject::connect(&local_98,uVar7,"2downloadStateChanged(CTaskDownloadFile::State)",param_1,
                   "1onDownloadStateChanged(CTaskDownloadFile::State)",0);
  if ((cVar2 != '\0') && (local_98 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  CAbstractTask::execute();
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    local_29 = *local_58 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_58 != (int *)0x0)) {
      operator_delete(local_58);
    }
  }
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    local_29 = *local_68 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68 != (int *)0x0)) {
      operator_delete(local_68);
    }
  }
  return;
}

