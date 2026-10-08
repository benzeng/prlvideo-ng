
void FUN_100633510(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  Connection *this;
  long local_50;
  QVariant local_48;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x68) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    return;
  }
  lVar3 = FUN_10061b510();
  if (lVar3 == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x78);
  pcVar4 = operator_new(0x50);
  if (cVar1 == '\0') {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x70);
    }
    uVar5 = FUN_10061b510(uVar5);
    FUN_10028b200(pcVar4,uVar5);
    iVar2 = FUN_1006268d0();
    QVariant::QVariant(&local_48,iVar2);
    QObject::setProperty(pcVar4,(QVariant *)"ProductEdition");
    QVariant::~QVariant(&local_48);
    QObject::connect(&local_50,pcVar4,"2taskFinished(PRL_RESULT)",param_1,
                     "1onRenewalLicenseFinished(PRL_RESULT)",0);
    if (local_50 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    this = (Connection *)&local_50;
    goto LAB_100633695;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
  }
  uVar5 = FUN_10061b510(uVar5);
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10062e050(pcVar4,uVar5,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006335d3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006335d3:
  QObject::connect(&local_38,pcVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1onGetRenewUrlFinished(PRL_RESULT)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  this = (Connection *)&local_38;
LAB_100633695:
  QMetaObject::Connection::~Connection(this);
  CAbstractTask::setOption(pcVar4,4,1);
  CAbstractTask::execute();
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),0));
  QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x20));
  CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40),0));
  return;
}

