
undefined8 FUN_1002ab920(long param_1)

{
  QObject *pQVar1;
  QString *pQVar2;
  int *piVar3;
  QObject *pQVar4;
  int *piVar5;
  undefined8 uVar6;
  long local_78;
  QArrayData *local_70;
  int *local_68;
  QObject *pQStack_60;
  int *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40;
  undefined1 local_29;
  
  pQVar2 = (QString *)CAntivirusInfo::installedAntivirus(*(undefined4 *)(param_1 + 0x30));
  if (pQVar2 == (QString *)0x0) {
    return 0x80000009;
  }
  local_40 = 0;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_68 = (int *)0x0;
  pQStack_60 = (QObject *)0x0;
  local_44 = (uint)(*(int *)(param_1 + 0x30) == 1);
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (pQVar4 = *(QObject **)(param_1 + 0x20), pQVar4 != (QObject *)0x0)) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    piVar5 = local_68;
    pQVar1 = pQStack_60;
    if (local_68 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        local_29 = *piVar3 != 0;
        UNLOCK();
      }
      piVar5 = piVar3;
      pQVar1 = pQVar4;
      if (local_68 != (int *)0x0) {
        LOCK();
        *local_68 = *local_68 + -1;
        local_29 = *local_68 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_68 != (int *)0x0)) {
          operator_delete(local_68);
        }
      }
    }
    pQStack_60 = pQVar1;
    local_68 = piVar5;
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar3);
      }
    }
  }
  local_40 = 1;
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = CAntivirusInfo::developer(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002aba38;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002aba38:
  pQVar4 = operator_new(200);
  FUN_1002a05f0(pQVar4,&local_68);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  piVar5 = *(int **)(param_1 + 0x48);
  if (piVar5 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 0x48);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x48));
      }
    }
    *(int **)(param_1 + 0x48) = piVar3;
    *(QObject **)(param_1 + 0x50) = pQVar4;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x50);
  }
  QObject::connect(&local_78,uVar6,"2taskFinished(PRL_RESULT)",param_1,
                   "1onUnistallFinished(PRL_RESULT)",0);
  if (local_78 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    local_29 = *local_58 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_58 != (int *)0x0)) {
      operator_delete(local_58);
    }
  }
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    local_29 = *local_68 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68 != (int *)0x0)) {
      operator_delete(local_68);
    }
  }
  return 0;
}

