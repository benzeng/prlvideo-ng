
void FUN_1003a5840(long param_1,QString *param_2,undefined8 param_3,undefined1 param_4)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  QObject *pQVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long local_68;
  QVariant local_60;
  Data *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  lVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  local_48 = 0;
  uStack_40 = 0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  lVar10 = 0;
  if (lVar3 == 0) {
LAB_1003a58d6:
    lVar9 = 0;
  }
  else {
    do {
      while (lVar9 = lVar3, cVar2 = operator<((QString *)(lVar9 + 0x18),param_2), cVar2 != '\0') {
        lVar3 = *(long *)(lVar9 + 0x10);
        if (*(long *)(lVar9 + 0x10) == 0) {
          lVar9 = lVar10;
          if (lVar10 == 0) goto LAB_1003a58d6;
          goto LAB_1003a58c6;
        }
      }
      lVar3 = *(long *)(lVar9 + 8);
      lVar10 = lVar9;
    } while (*(long *)(lVar9 + 8) != 0);
LAB_1003a58c6:
    cVar2 = operator<(param_2,(QString *)(lVar9 + 0x18));
    if (cVar2 != '\0') goto LAB_1003a58d6;
  }
  puVar6 = &local_48;
  if (lVar9 != 0) {
    puVar6 = (undefined8 *)(lVar9 + 0x20);
  }
  piVar8 = (int *)*puVar6;
  if (piVar8 != (int *)0x0) {
    plVar1 = (long *)puVar6[1];
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
    plVar11 = (long *)0x0;
    if (piVar8[1] != 0) {
      plVar11 = plVar1;
    }
    LOCK();
    *piVar8 = *piVar8 + -1;
    local_31 = *piVar8 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar8);
    }
    if ((plVar11 != (long *)0x0) && (cVar2 = CAbstractTask::isFinished(), cVar2 == '\0')) {
      (**(code **)(*plVar11 + 0x78))(plVar11,0x80000275);
    }
  }
  pQVar4 = operator_new(0x1a8);
  uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100212b40(pQVar4,uVar5,param_3,param_4,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a5997;
    }
    QListData::dispose(local_50);
  }
LAB_1003a5997:
  QVariant::QVariant(&local_60,param_2);
  QObject::setProperty((char *)pQVar4,(QVariant *)"hddStoragePath");
  QVariant::~QVariant(&local_60);
  puVar6 = (undefined8 *)FUN_1003ae230(param_1 + 0x28,param_2);
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  piVar8 = (int *)*puVar6;
  if (piVar8 != piVar7) {
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      piVar8 = (int *)*puVar6;
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && ((void *)*puVar6 != (void *)0x0)) {
        operator_delete((void *)*puVar6);
      }
    }
    *puVar6 = piVar7;
    puVar6[1] = pQVar4;
  }
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar7);
    }
  }
  QObject::connect(&local_68,pQVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1onHddInfoReceived(PRL_RESULT)",0);
  if (local_68 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  CAbstractTask::execute();
  return;
}

