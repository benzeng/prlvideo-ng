
void FUN_1002bf1f0(long param_1)

{
  QObject *pQVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  pQVar1 = operator_new(0x68);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar2 = FUN_10018c2b0(uVar5);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_100443870(pQVar1,uVar2,uVar5);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_23 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x18);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_22 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_22) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar3;
    *(QObject **)(param_1 + 0x20) = pQVar1;
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
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  QWidget::setAttribute(uVar5,0x37,1);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_30,uVar5,"2finished(int)",param_1,"1onSettingsDialogDone(int)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x1a0))();
  return;
}

