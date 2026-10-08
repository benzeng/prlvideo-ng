
undefined8 FUN_1007e4910(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long local_48;
  QString local_40;
  QVariant local_38;
  undefined1 local_21;
  
  pQVar1 = operator_new(0x50);
  FUN_1007dc980(pQVar1,*(undefined4 *)(param_1 + 0x18));
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  piVar3 = *(int **)(param_1 + 0x20);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x20);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x20));
      }
    }
    *(int **)(param_1 + 0x20) = piVar2;
    *(QObject **)(param_1 + 0x28) = pQVar1;
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
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  QWidget::setAttribute(uVar4,0x37,1);
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if (lVar5 != 0) {
    pcVar6 = (char *)0x0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (pcVar6 = (char *)0x0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      pcVar6 = *(char **)(param_1 + 0x28);
    }
    FUN_10015aab0(&local_40,lVar5);
    QVariant::QVariant(&local_38,&local_40);
    QObject::setProperty(pcVar6,(QVariant *)"serverUuid");
    QVariant::~QVariant(&local_38);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007e4a58;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_1007e4a58:
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  QObject::connect(&local_48,uVar4,"2finished(PRL_RESULT)",param_1,
                   "1onParallelsToolboxWizardClosed()",0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_1007dca80(uVar4);
  return 0;
}

