
void FUN_10033d8c0(QObject *param_1,QObject *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  QObject *pQVar5;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  if (param_2 == (QObject *)0x0) {
    pQVar5 = (QObject *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar5 = *(QObject **)(param_1 + 0x40);
    }
    QObject::disconnect(pQVar5,"2taskFinished(PRL_RESULT)",param_1,"1setResult(PRL_RESULT)");
    *(undefined4 *)(param_1 + 0x2c) = 0x80000009;
    param_1[0x30] = (QObject)0x0;
    uVar2 = 0x80000009;
  }
  else {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 == '\0') {
      piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != piVar3) {
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          local_23 = *piVar3 != 0;
          UNLOCK();
          piVar4 = *(int **)(param_1 + 0x38);
        }
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + -1;
          local_22 = *piVar4 != 0;
          UNLOCK();
          if ((!(bool)local_22) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x38));
          }
        }
        *(int **)(param_1 + 0x38) = piVar3;
        *(QObject **)(param_1 + 0x40) = param_2;
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
      QObject::connect(&local_30,param_2,"2taskFinished(PRL_RESULT)",param_1,
                       "1setResult(PRL_RESULT)",0);
      if (local_30 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      return;
    }
    uVar2 = CAbstractTask::getResult();
    pQVar5 = (QObject *)0x0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      pQVar5 = *(QObject **)(param_1 + 0x40);
    }
    QObject::disconnect(pQVar5,"2taskFinished(PRL_RESULT)",param_1,"1setResult(PRL_RESULT)");
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    param_1[0x30] = (QObject)0x0;
  }
  FUN_10082f2d0(param_1,uVar2);
  QObject::deleteLater();
  return;
}

