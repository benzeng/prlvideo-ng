
undefined8 FUN_1001ef5d0(long param_1)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  Connection local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  undefined1 local_40 [31];
  undefined1 local_21;
  
  uVar5 = 0;
  FUN_10098e0d0(local_40,0);
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10011cdf0(&local_48,uVar5);
  FUN_10098e1b0(&local_50,local_40,&local_48);
  if (*(int *)(local_50 + 4) != 0) {
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    pQVar2 = (QObject *)FUN_100197430(uVar5,&local_50);
    piVar3 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    piVar4 = *(int **)(param_1 + 0x28);
    if (piVar4 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        local_21 = *piVar3 != 0;
        UNLOCK();
        piVar4 = *(int **)(param_1 + 0x28);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_21 = *piVar4 != 0;
        UNLOCK();
        if ((!(bool)local_21) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x28));
        }
      }
      *(int **)(param_1 + 0x28) = piVar3;
      *(QObject **)(param_1 + 0x30) = pQVar2;
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
    lVar1 = *(long *)(param_1 + 0x30);
    *(undefined1 *)(lVar1 + 0x60) = 1;
    lVar6 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      lVar6 = lVar1;
    }
    QObject::connect(local_58,lVar6,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onCheckSavedPasswordCompleted(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_58);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001ef73c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001ef73c:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001ef76c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001ef76c:
  FUN_10098e170(local_40);
  return 0;
}

