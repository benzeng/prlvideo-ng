
undefined8 FUN_100239040(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  Connection local_50 [8];
  Connection local_48 [8];
  long local_40;
  undefined1 local_31;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar3 = 0x80000001;
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) {
    if (((*(long *)(param_1 + 0x48) == 0) || (*(int *)(*(long *)(param_1 + 0x48) + 4) == 0)) ||
       (lVar7 = *(long *)(param_1 + 0x50), lVar7 == 0)) {
      pQVar4 = operator_new(0x28);
      lVar7 = 0;
      if (*(int *)(lVar1 + 4) != 0) {
        lVar7 = lVar2;
      }
      FUN_1003193b0(&local_40,lVar7);
      FUN_100a4d630(pQVar4,local_40);
      *(undefined ***)pQVar4 = &PTR_FUN_102202ba8;
      *(undefined ***)(pQVar4 + 0x10) = &PTR_FUN_102202c28;
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
      piVar6 = *(int **)(param_1 + 0x48);
      if (piVar6 != piVar5) {
        if (piVar5 != (int *)0x0) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          local_31 = *piVar5 != 0;
          UNLOCK();
          piVar6 = *(int **)(param_1 + 0x48);
        }
        if (piVar6 != (int *)0x0) {
          LOCK();
          *piVar6 = *piVar6 + -1;
          local_31 = *piVar6 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x48));
          }
        }
        *(int **)(param_1 + 0x48) = piVar5;
        *(QObject **)(param_1 + 0x50) = pQVar4;
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
      if (local_40 != 0) {
        _PrlHandle_Free();
      }
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x50);
      }
      QObject::connect(local_48,uVar3,"2toolStatusChanged(int)",param_1,"1onToolStatusChanged(int)",
                       2);
      QMetaObject::Connection::~Connection(local_48);
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x50);
      }
      QObject::connect(local_50,uVar3,"2receivedRequestAnswer(bool, PRL_RESULT)",param_1,
                       "2confirmationAnswerReceived(bool, PRL_RESULT)",2);
      QMetaObject::Connection::~Connection(local_50);
      lVar7 = *(long *)(param_1 + 0x50);
    }
    uVar3 = 0;
    if (*(char *)(lVar7 + 0x21) == '\0') {
      uVar3 = 0x80000013;
    }
  }
  return uVar3;
}

