
undefined8 FUN_100210d60(QObject *param_1)

{
  QObject *pQVar1;
  int *piVar2;
  CTimeEstimator *this;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x208) != 0) &&
     (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x208) + 4) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x210);
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x218) != 0) &&
     (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x218) + 4) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x220);
  }
  pQVar1 = (QObject *)FUN_100192870(uVar5,param_1 + 0x110,uVar4);
  piVar2 = (int *)0x0;
  if (pQVar1 != (QObject *)0x0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  }
  piVar3 = *(int **)(param_1 + 0x228);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x228);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x228) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x228));
      }
    }
    *(int **)(param_1 + 0x228) = piVar2;
    *(QObject **)(param_1 + 0x230) = pQVar1;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar2);
    }
  }
  pQVar1 = (QObject *)0x0;
  if ((*(long *)(param_1 + 0x228) != 0) &&
     (pQVar1 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x228) + 4) != 0)) {
    pQVar1 = *(QObject **)(param_1 + 0x230);
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("handleCommitConfigEvent",0x17);
  CSdkRequest::addEventFilter(pQVar1,(QString *)param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100210ea9;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100210ea9:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x228) != 0) &&
     (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x228) + 4) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x230);
  }
  QObject::connect(local_38,uVar5,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onCommitConfigFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_38);
  CAbstractTask::setWaitForSubTaskCompletion();
  this = operator_new(0x18);
  CTimeEstimator::CTimeEstimator(this,param_1);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar2 = *(int **)(param_1 + 0x248);
  if (piVar2 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      piVar2 = *(int **)(param_1 + 0x248);
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x248) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x248));
      }
    }
    *(int **)(param_1 + 0x248) = piVar3;
    *(CTimeEstimator **)(param_1 + 0x250) = this;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar3);
    }
  }
  CTimeEstimator::start();
  return 0;
}

