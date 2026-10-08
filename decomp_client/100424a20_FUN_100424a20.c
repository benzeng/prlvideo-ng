
void FUN_100424a20(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  Connection local_50 [8];
  Data *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar2 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar3 = FUN_1001548f0(uVar2,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100424a94;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100424a94:
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x68) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    return;
  }
  CVmDevice::getSystemName();
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100424aff;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100424aff:
  if (iVar1 == 0) {
    return;
  }
  pvVar4 = operator_new(0x1a8);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
  }
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100212b40(pvVar4,lVar3,uVar2,0,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100424b6f;
    }
    QListData::dispose(local_48);
  }
LAB_100424b6f:
  QObject::connect(local_50,pvVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1onHddInfoUpdated(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_50);
  CAbstractTask::execute();
  return;
}

