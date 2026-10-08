
void FUN_1005b0a60(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  QObject *pQVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  Connection local_38 [13];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar3 = FUN_1005b86c0(uVar2);
  if (lVar3 == 0) {
    FUN_1005b1b50(param_1);
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined1 *)(lVar3 + 0x168);
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar2,4);
  pQVar4 = operator_new(0x148);
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = FUN_1005b86c0(uVar2);
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar2 = 0;
  if ((*(long *)(lVar3 + 0x40) != 0) && (uVar2 = 0, *(int *)(*(long *)(lVar3 + 0x40) + 4) != 0)) {
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  FUN_100264c00(pQVar4,uVar5,uVar2,uVar1);
  piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  piVar7 = *(int **)(param_1 + 0x18);
  if (piVar7 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_2b = *piVar6 != 0;
      UNLOCK();
      piVar7 = *(int **)(param_1 + 0x18);
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_2a = *piVar7 != 0;
      UNLOCK();
      if ((!(bool)local_2a) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar6;
    *(QObject **)(param_1 + 0x20) = pQVar4;
  }
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_29 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar6);
    }
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = 0;
  QObject::connect(local_38,uVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onBootcampVmCreationFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_38);
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  CAbstractTask::setOption(uVar5,4,1);
  CAbstractTask::execute();
  return;
}

