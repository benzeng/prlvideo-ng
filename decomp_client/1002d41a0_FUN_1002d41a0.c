
undefined8 FUN_1002d41a0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_60;
  undefined *local_58;
  int *local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_21;
  
  if (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0) {
    return 0x3bfa;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  puVar1 = PTR_shared_null_1021e1288;
  local_30[0] = 0;
  local_2c = 0;
  local_28 = 0;
  local_27 = 0;
  local_58 = PTR_shared_null_1021e1288;
  if (1 < *(int *)PTR_shared_null_1021e1288 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_21 = *(int *)puVar1 != 0;
    UNLOCK();
  }
  local_50 = *(int **)(param_1 + 0x28);
  if (1 < *local_50 + 1U) {
    LOCK();
    *local_50 = *local_50 + 1;
    local_21 = *local_50 != 0;
    UNLOCK();
  }
  local_48 = puVar1;
  iVar2 = *(int *)puVar1;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_21 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar2 = *(int *)puVar1;
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0x2714;
  if (iVar2 == -1) goto LAB_1002d42ab;
  if (iVar2 == 0) {
LAB_1002d4261:
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  else {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    local_21 = *(int *)puVar1 != 0;
    UNLOCK();
    if (!(bool)local_21) goto LAB_1002d4261;
  }
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002d42ab;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1002d42ab:
  pvVar3 = operator_new(200);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_1002294c0(pvVar3,uVar4,&local_58,local_30,uVar5);
  QObject::connect(&local_60,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onTaskRegisterVmFinished(PRL_RESULT)",0);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  CAbstractTask::execute();
  FUN_100086a10(&local_58);
  return 0;
}

