
undefined8 FUN_10029bbc0(long *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  QObject *pQVar4;
  int *piVar5;
  QObject *pQVar6;
  long local_38;
  long local_30;
  undefined1 local_21;
  
  pQVar4 = operator_new(0x50);
  FUN_100783b90(pQVar4,0);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  piVar2 = DAT_102310940;
  pQVar6 = DAT_102310948;
  if (DAT_102310940 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_21 = *piVar5 != 0;
      UNLOCK();
    }
    piVar1 = DAT_102310940;
    piVar2 = piVar5;
    pQVar6 = pQVar4;
    if (DAT_102310940 != (int *)0x0) {
      LOCK();
      *DAT_102310940 = *DAT_102310940 + -1;
      local_21 = *piVar1 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (DAT_102310940 != (int *)0x0)) {
        operator_delete(DAT_102310940);
      }
    }
  }
  DAT_102310948 = pQVar6;
  DAT_102310940 = piVar2;
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_21 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar5);
    }
  }
  pQVar6 = (QObject *)0x0;
  if ((DAT_102310940 != (int *)0x0) && (pQVar6 = (QObject *)0x0, DAT_102310940[1] != 0)) {
    pQVar6 = DAT_102310948;
  }
  QWidget::setAttribute(pQVar6,0x37,1);
  pQVar6 = (QObject *)0x0;
  if ((DAT_102310940 != (int *)0x0) && (pQVar6 = (QObject *)0x0, DAT_102310940[1] != 0)) {
    pQVar6 = DAT_102310948;
  }
  cVar3 = '\0';
  QObject::connect(&local_30,pQVar6,"2closed()",param_1,"1onDialogClosed()",0);
  if (local_30 != 0) {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  pQVar6 = (QObject *)0x0;
  if ((DAT_102310940 != (int *)0x0) && (pQVar6 = (QObject *)0x0, DAT_102310940[1] != 0)) {
    pQVar6 = DAT_102310948;
  }
  QObject::connect(&local_38,pQVar6,"2sendRequested()",param_1,"1onSendRequest()",0);
  if ((cVar3 != '\0') && (local_38 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  (**(code **)(*param_1 + 0x80))(param_1);
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

