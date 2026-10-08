
void FUN_1004aabe0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  lVar2 = FUN_10044e580();
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  uVar3 = FUN_10044e660(param_1);
  cVar1 = FUN_1003beaf0(uVar3);
  if (cVar1 != '\0') {
    if ((((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
        (*(bool **)(param_1 + 0x48) != (bool *)0x0)) &&
       (cVar1 = CSdkRequest::isCompleted(*(bool **)(param_1 + 0x48),(int *)0x0), cVar1 == '\0')) {
      return;
    }
    uVar3 = FUN_10044e580(param_1);
    pQVar4 = (QObject *)FUN_100175350(uVar3);
    piVar5 = (int *)0x0;
    if (pQVar4 != (QObject *)0x0) {
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    }
    piVar6 = *(int **)(param_1 + 0x40);
    if (piVar6 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_23 = *piVar5 != 0;
        UNLOCK();
        piVar6 = *(int **)(param_1 + 0x40);
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_22 = *piVar6 != 0;
        UNLOCK();
        if ((!(bool)local_22) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x40));
        }
      }
      *(int **)(param_1 + 0x40) = piVar5;
      *(QObject **)(param_1 + 0x48) = pQVar4;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar5);
      }
    }
    lVar2 = *(long *)(param_1 + 0x48);
    *(undefined1 *)(lVar2 + 0x60) = 1;
    lVar7 = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar7 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      lVar7 = lVar2;
    }
    QObject::connect(&local_30,lVar7,"2jobCompleted( PRL_RESULT )",param_1,
                     "1onGetUserInfoListFinished( PRL_RESULT )",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  return;
}

