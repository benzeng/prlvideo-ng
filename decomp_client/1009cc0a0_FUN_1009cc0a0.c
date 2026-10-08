
void FUN_1009cc0a0(ulong param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long local_1c8;
  QEventLoop local_1c0 [16];
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  CParallelsProblemReportDialog local_1a0 [8];
  long local_198;
  long local_d8;
  QTimer local_d0;
  long local_b0;
  long local_a8;
  long local_a0 [14];
  undefined1 local_29;
  
  CProgressDialog::CProgressDialog((CProgressDialog *)local_a0,(QWidget *)0x0);
  QObject::connect(&local_a8,param_1,"2finished()",(CProgressDialog *)local_a0,"1accept()",0);
  if (local_a8 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  QObject::connect(&local_b0,local_a0,"2canceled()",param_1,"1cancel()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_b0 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  (**(code **)(local_a0[0] + 0x1a0))(local_a0);
  QWidget::raise();
  QWidget::activateWindow();
  QTimer::QTimer(&local_d0,(QObject *)0x0);
  QObject::connect(&local_d8,&local_d0,"2timeout()",param_1,"1start()",0);
  if ((cVar2 != '\0') && (local_d8 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_d8);
  local_d0.field5_0x1c.bitField0_1 = local_d0.field5_0x1c.bitField0_1 | 1;
  QTimer::setInterval((int)&local_d0);
  QTimer::start();
  (**(code **)(local_a0[0] + 0x1a8))(local_a0);
  cVar2 = QThread::isRunning();
  if (cVar2 != '\0') {
    FUN_1009cbfc0(param_1);
    QThread::wait(param_1);
  }
  if (*(int *)(param_1 + 0x30) != 0x8000000) {
    FUN_100df99c0("","PTProblemReporting",0,
                  "Error : Problem report collecting failed with error 0x%X");
    goto LAB_1009cc4e2;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  plVar4 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    plVar4 = (long *)plVar1[2];
  }
  (**(code **)(*plVar4 + 0x278))();
  lVar5 = 0;
  if ((param_2 != 0) && (lVar5 = 0, (*(byte *)(*(long *)(param_2 + 0x28) + 0xc) & 1) != 0)) {
    lVar5 = param_2;
  }
  plVar4 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    plVar4 = (long *)plVar1[2];
  }
  (**(code **)(*plVar4 + 0x288))(&local_1a8);
  local_1b0 = (QArrayData *)PTR_shared_null_1021e1288;
  pvVar3 = operator_new(0x18);
  FUN_1009cc940(pvVar3,0);
  CParallelsProblemReportDialog::CParallelsProblemReportDialog
            (local_1a0,&local_1a8,&local_1b0,pvVar3,lVar5,0);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_29 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009cc368;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_1009cc368:
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_29 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009cc39e;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_1009cc39e:
  cVar2 = CParallelsProblemReportDialog::isValid();
  if (cVar2 == '\0') {
    FUN_100df99c0("","PTProblemReporting",0,
                  "Error : Problem report collecting failed, report dialog is invalid");
  }
  else {
    lVar5 = 0;
    if (plVar1 != (long *)0x0) {
      lVar5 = plVar1[2];
    }
    FUN_1009f8a20(lVar5);
    QEventLoop::QEventLoop(local_1c0,(QObject *)0x0);
    QObject::connect(&local_1c8,local_1a0,"2finished( int )",local_1c0,"1quit()",2);
    if (local_1c8 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_1c8);
    QWidget::setWindowModality(local_1a0,*(long *)(local_198 + 0x10) != 0);
    QWidget::show();
    QWidget::raise();
    QEventLoop::exec(local_1c0,0x40);
    QEventLoop::~QEventLoop(local_1c0);
  }
  CParallelsProblemReportDialog::~CParallelsProblemReportDialog(local_1a0);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar4 = plVar1 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
LAB_1009cc4e2:
  QTimer::~QTimer(&local_d0);
  CProgressDialog::~CProgressDialog((CProgressDialog *)local_a0);
  return;
}

