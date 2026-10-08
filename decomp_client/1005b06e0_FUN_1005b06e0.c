
void FUN_1005b06e0(long param_1)

{
  char cVar1;
  QObject *pQVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  long local_58;
  long local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar2 = operator_new(0x78);
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar6 = 0;
  if ((*(long *)(lVar3 + 400) != 0) && (uVar6 = 0, *(int *)(*(long *)(lVar3 + 400) + 4) != 0)) {
    uVar6 = *(undefined8 *)(lVar3 + 0x198);
  }
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  local_40 = *(QArrayData **)(lVar3 + 0x178);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  lVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  local_48 = *(QArrayData **)(lVar3 + 0x180);
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  FUN_1002011b0(pQVar2,uVar6,&local_40,&local_48);
  piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar5 = *(int **)(param_1 + 0x68);
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 0x68);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x68));
      }
    }
    *(int **)(param_1 + 0x68) = piVar4;
    *(QObject **)(param_1 + 0x70) = pQVar2;
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_31 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar4);
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b0833;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005b0833:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b0863;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005b0863:
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x70);
  }
  cVar1 = '\0';
  QObject::connect(&local_50,uVar6,"2convertProgressChanged(uint)",param_1,
                   "2vmConvertingProgress(uint)",0);
  if (local_50 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x70);
  }
  QObject::connect(&local_58,uVar6,"2taskFinished(PRL_RESULT)",param_1,
                   "1onConvertThirdPartyVmTaskFinished(PRL_RESULT)",0);
  if ((cVar1 != '\0') && (local_58 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  CAbstractTask::execute();
  return;
}

