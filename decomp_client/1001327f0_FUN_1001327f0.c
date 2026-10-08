
void FUN_1001327f0(QObject *param_1,QObject *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  QObject *pQVar4;
  undefined8 uVar5;
  long local_38;
  long local_30;
  undefined1 local_21;
  
  pQVar4 = (QObject *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar4 = *(QObject **)(param_1 + 0x40);
  }
  QObject::disconnect(param_1,(char *)0x0,pQVar4,(char *)0x0);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  piVar3 = *(int **)(param_1 + 0x38);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x38);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x38));
      }
    }
    *(int **)(param_1 + 0x38) = piVar2;
    *(QObject **)(param_1 + 0x40) = param_2;
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
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
  }
  cVar1 = '\0';
  QObject::connect(&local_30,uVar5,"2triggered(QAction*)",param_1,"1onMenuTriggered(QAction*)",0);
  if (local_30 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
  }
  QObject::connect(&local_38,uVar5,"2aboutToHide()",param_1,"1onMenuAboutToHide()",0);
  if ((cVar1 != '\0') && (local_38 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

