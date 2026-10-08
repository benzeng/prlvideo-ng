
undefined8 FUN_1002f65f0(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  QPoint *pQVar5;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  pQVar1 = operator_new(0x70);
  FUN_1006f2890(pQVar1,param_1 + 0x28,param_1 + 0x78,0);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_23 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x18);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_22 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_22) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar2;
    *(QObject **)(param_1 + 0x20) = pQVar1;
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
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  QWidget::setAttribute(uVar4,0x37,1);
  if ((*(int *)(param_1 + 0x70) != 0) || (*(int *)(param_1 + 0x74) != 0)) {
    pQVar5 = (QPoint *)0x0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pQVar5 = (QPoint *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      pQVar5 = *(QPoint **)(param_1 + 0x20);
    }
    QWidget::move(pQVar5);
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_30,uVar4,"2finished(int)",param_1,"1onUpgradePurchaseDialogFinished(int)",
                   0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  CAbstractTask::setWaitForSubTaskCompletion();
  QWidget::show();
  return 0;
}

