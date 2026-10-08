
undefined8 FUN_1001433b0(long param_1,undefined8 param_2)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  Connection local_50 [8];
  Connection local_48 [8];
  Connection local_40 [15];
  undefined1 local_31;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (((lVar4 == 0) || (*(int *)(lVar4 + 4) == 0)) || (*(long *)(param_1 + 0x28) == 0)) {
    pQVar1 = operator_new(0x48);
    FUN_100142910(pQVar1,param_2);
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    piVar3 = *(int **)(param_1 + 0x20);
    if (piVar3 != piVar2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_31 = *piVar2 != 0;
        UNLOCK();
        piVar3 = *(int **)(param_1 + 0x20);
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        local_31 = *piVar3 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x20));
        }
      }
      *(int **)(param_1 + 0x20) = piVar2;
      *(QObject **)(param_1 + 0x28) = pQVar1;
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
    lVar4 = *(long *)(param_1 + 0x28);
    *(undefined1 *)(lVar4 + 0x44) = *(undefined1 *)(param_1 + 0x34);
    lVar6 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      lVar6 = lVar4;
    }
    FUN_100142fa0(lVar6,*(undefined4 *)(param_1 + 0x30));
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar7 = 0;
    QObject::connect(local_40,uVar5,"2hovered()",param_1,"1hover()",0);
    QMetaObject::Connection::~Connection(local_40);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
    }
    QObject::connect(local_48,uVar7,"2colorClicked( PRL_VM_COLOR )",param_1,
                     "2colorClicked( PRL_VM_COLOR )",0);
    QMetaObject::Connection::~Connection(local_48);
    QObject::connect(local_50,param_1,"2colorClicked( PRL_VM_COLOR )",param_1,
                     "1onColorClicked( PRL_VM_COLOR )",0);
    QMetaObject::Connection::~Connection(local_50);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) {
      return 0;
    }
  }
  uVar5 = 0;
  if (*(int *)(lVar4 + 4) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
  return uVar5;
}

