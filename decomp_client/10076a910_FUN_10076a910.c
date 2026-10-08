
void FUN_10076a910(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001554a0(uVar1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (((lVar6 == 0) || (*(int *)(lVar6 + 4) == 0)) || (*(long *)(param_1 + 0x28) == 0)) {
    pQVar3 = operator_new(0x18);
    FUN_100769b30(pQVar3,lVar2,param_1);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    piVar5 = *(int **)(param_1 + 0x20);
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_23 = *piVar4 != 0;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0x20);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_22 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_22) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x20));
        }
      }
      *(int **)(param_1 + 0x20) = piVar4;
      *(QObject **)(param_1 + 0x28) = pQVar3;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar4);
      }
    }
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
    }
    QObject::connect(&local_30,uVar1,"2canFreeDiskSpaceChanged( bool )",
                     *(undefined8 *)(param_1 + 0x10),"2canFreeDiskSpaceChanged( bool )",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    lVar6 = *(long *)(param_1 + 0x20);
    uVar1 = 0;
    if (lVar6 == 0) goto LAB_10076aa38;
  }
  uVar1 = 0;
  if (*(int *)(lVar6 + 4) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
LAB_10076aa38:
  FUN_100769b40(uVar1);
  return;
}

