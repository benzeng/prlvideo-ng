
undefined8 FUN_100268ce0(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_40,uVar7);
  lVar2 = FUN_100269170(&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100268d52;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100268d52:
  plVar3 = operator_new(0x38);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1007b3640(plVar3,lVar2,uVar7,param_1,1);
  pQVar4 = operator_new(0xb0);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_48,uVar7);
  FUN_1007a1230(&local_50,plVar3);
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1007b2340(pQVar4,&local_48,lVar2,&local_50,&local_58);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  piVar6 = *(int **)(param_1 + 0x58);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x58);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x58));
      }
    }
    *(int **)(param_1 + 0x58) = piVar5;
    *(QObject **)(param_1 + 0x60) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_31 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100268e93;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100268e93:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100268eca;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100268eca:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100268efa;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100268efa:
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x60);
  }
  QObject::connect(&local_60,uVar7,"2finished(int)",param_1,"1onCreateSnapshotDialogFinished(int)",0
                  );
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x60);
  }
  QWidget::setAttribute(uVar7,0x37,1);
  plVar8 = (long *)0x0;
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (plVar8 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
    plVar8 = *(long **)(param_1 + 0x60);
  }
  if (lVar2 == 0) {
    QWidget::show();
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar7 = FUN_10018c280(uVar7);
    iVar1 = FUN_100319ae0(uVar7);
    if ((((iVar1 == 3) && (*(long *)(param_1 + 0x58) != 0)) &&
        (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) && (*(long *)(param_1 + 0x60) != 0)) {
      QWidget::raise();
      QWidget::activateWindow();
    }
  }
  else {
    (**(code **)(*plVar8 + 0x1a0))();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

