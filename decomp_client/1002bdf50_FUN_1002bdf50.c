
void FUN_1002bdf50(long param_1,QString *param_2)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  QString::operator=((QString *)(param_1 + 0x60),param_2);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  piVar3 = (int *)0x0;
  pQVar2 = (QObject *)FUN_100199940(uVar6,param_2,0);
  if (pQVar2 != (QObject *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  piVar4 = *(int **)(param_1 + 0x50);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_23 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x50);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_22 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_22) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x50));
      }
    }
    *(int **)(param_1 + 0x50) = piVar3;
    *(QObject **)(param_1 + 0x58) = pQVar2;
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
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined1 *)(lVar1 + 0x60) = 1;
  lVar5 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (lVar5 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    lVar5 = lVar1;
  }
  QObject::connect(&local_30,lVar5,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onCheckPasswordCompleted(PRL_RESULT)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  return;
}

