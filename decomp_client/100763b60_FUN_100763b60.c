
void FUN_100763b60(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  Connection local_30 [13];
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  pQVar1 = (QObject *)FUN_100194170(uVar4,0x1000);
  piVar2 = (int *)0x0;
  if (pQVar1 != (QObject *)0x0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  }
  piVar3 = *(int **)(param_1 + 0x20);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_23 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x20);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_22 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_22) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
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
  QObject::connect(local_30,uVar4,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onRequestCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_30);
  return;
}

