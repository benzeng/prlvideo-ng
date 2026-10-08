
undefined8 FUN_10022c340(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  Connection local_58 [8];
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [15];
  bool local_31;
  
  puVar10 = *(uint **)(param_1 + 0x28);
  uVar4 = puVar10[2];
  if (puVar10[3] == uVar4) {
    return 0x80000009;
  }
  puVar1 = (undefined8 *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 100);
  if (1 < *puVar10) {
    FUN_10022d1b0(puVar1);
    puVar10 = (uint *)*puVar1;
    uVar4 = puVar10[2];
  }
  if (*(int *)(*(long *)(puVar10 + ((long)(int)uVar4 + (long)iVar2) * 2 + 4) + 0x18) == 3) {
    pQVar5 = operator_new(0x98);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar2 = *(int *)(param_1 + 100);
    if (1 < *puVar10) {
      FUN_10022d1b0(puVar1,puVar10[1]);
      puVar10 = (uint *)*puVar1;
    }
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x48);
    }
    FUN_100265f70(pQVar5,uVar9,
                  *(undefined8 *)(puVar10 + ((long)(int)puVar10[2] + (long)iVar2) * 2 + 4),uVar8);
    QObject::connect(local_50,pQVar5,"2taskFinished(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_50);
    QObject::connect(local_58,pQVar5,"2vmConvertionProgress(int)",param_1,
                     "1onVmConvertionProgress(int)",0);
    QMetaObject::Connection::~Connection(local_58);
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    piVar7 = *(int **)(param_1 + 0x50);
    if (piVar7 != piVar6) {
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        piVar7 = *(int **)(param_1 + 0x50);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if ((!local_31) && (pvVar3 = *(void **)(param_1 + 0x50), pvVar3 != (void *)0x0)) {
          operator_delete(pvVar3);
        }
      }
      *(int **)(param_1 + 0x50) = piVar6;
      *(QObject **)(param_1 + 0x58) = pQVar5;
    }
    if (piVar6 == (int *)0x0) goto LAB_10022c610;
    LOCK();
    *piVar6 = *piVar6 + -1;
    iVar2 = *piVar6;
    UNLOCK();
  }
  else {
    pQVar5 = operator_new(200);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar2 = *(int *)(param_1 + 100);
    if (1 < *puVar10) {
      FUN_10022d1b0(puVar1,puVar10[1]);
      puVar10 = (uint *)*puVar1;
    }
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x48);
    }
    FUN_1002294c0(pQVar5,uVar9,
                  *(undefined8 *)(puVar10 + ((long)(int)puVar10[2] + (long)iVar2) * 2 + 4),
                  param_1 + 0x30,uVar8);
    QObject::connect(local_40,pQVar5,"2taskFinished(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_40);
    QObject::connect(local_48,pQVar5,"2vmRegistrationProgress(bool, const QString&)",param_1,
                     "1onVmRegistrationProgress(bool)",0);
    QMetaObject::Connection::~Connection(local_48);
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    piVar7 = *(int **)(param_1 + 0x50);
    if (piVar7 != piVar6) {
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        piVar7 = *(int **)(param_1 + 0x50);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if ((!local_31) && (pvVar3 = *(void **)(param_1 + 0x50), pvVar3 != (void *)0x0)) {
          operator_delete(pvVar3);
        }
      }
      *(int **)(param_1 + 0x50) = piVar6;
      *(QObject **)(param_1 + 0x58) = pQVar5;
    }
    if (piVar6 == (int *)0x0) goto LAB_10022c610;
    LOCK();
    *piVar6 = *piVar6 + -1;
    iVar2 = *piVar6;
    UNLOCK();
  }
  local_31 = iVar2 != 0;
  if (!local_31) {
    operator_delete(piVar6);
  }
LAB_10022c610:
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

