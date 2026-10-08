
void FUN_100190070(long param_1,undefined4 param_2)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [15];
  undefined1 local_31;
  
  lVar4 = *(long *)(param_1 + 0xb8);
  if (((lVar4 == 0) || (*(int *)(lVar4 + 4) == 0)) || (*(long *)(param_1 + 0xc0) == 0)) {
    pQVar1 = operator_new(0x70);
    FUN_100241d70(pQVar1,param_1,param_2);
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    piVar3 = *(int **)(param_1 + 0xb8);
    if (piVar3 != piVar2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_31 = *piVar2 != 0;
        UNLOCK();
        piVar3 = *(int **)(param_1 + 0xb8);
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        local_31 = *piVar3 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(param_1 + 0xb8) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0xb8));
        }
      }
      *(int **)(param_1 + 0xb8) = piVar2;
      *(QObject **)(param_1 + 0xc0) = pQVar1;
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_31 = *piVar2 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar2);
      }
    }
    uVar6 = 0;
    if ((*(long *)(param_1 + 0xb8) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0xb8) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0xc0);
    }
    uVar5 = 0;
    QObject::connect(local_40,uVar6,"2upgradeStarted()",param_1,"2vmHWUpgradeStarted()",0);
    QMetaObject::Connection::~Connection(local_40);
    if ((*(long *)(param_1 + 0xb8) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0xb8) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0xc0);
    }
    uVar6 = 0;
    QObject::connect(local_48,uVar5,"2upgradeFinished()",param_1,"2vmHWUpgradeFinished()",0);
    QMetaObject::Connection::~Connection(local_48);
    if ((*(long *)(param_1 + 0xb8) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0xb8) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0xc0);
    }
    QObject::connect(local_50,uVar6,"2progressChanged(uint, int)",param_1,
                     "2vmHWUpgradeProgressChanged(uint, int)",0);
    QMetaObject::Connection::~Connection(local_50);
    CAbstractTask::execute();
    lVar4 = *(long *)(param_1 + 0xb8);
    uVar6 = 0;
    if (lVar4 == 0) goto LAB_100190264;
  }
  uVar6 = 0;
  if (*(int *)(lVar4 + 4) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xc0);
  }
LAB_100190264:
  FUN_100244980(uVar6,param_2);
  return;
}

