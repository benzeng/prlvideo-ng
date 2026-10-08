
undefined8 FUN_1002e0f90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  QObject *this;
  CTaskSendHttpRequest *pCVar6;
  long local_50;
  QArrayData *local_48;
  int *local_40;
  undefined1 local_31;
  
  this = operator_new(0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined **)this = PTR_DAT_1021e17d0 + 0x10;
  puVar4 = PTR_shared_null_1021e1288;
  *(undefined **)(this + 0x10) = PTR_shared_null_1021e1288;
  iVar5 = *(int *)puVar4;
  if (1 < iVar5 + 1U) {
    LOCK();
    *(int *)puVar4 = *(int *)puVar4 + 1;
    local_31 = *(int *)puVar4 != 0;
    UNLOCK();
    iVar5 = *(int *)puVar4;
  }
  *(undefined4 *)(this + 0x20) = 0x80000000;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = &DAT_102273478;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0x38) = uVar3;
  if (iVar5 != -1) {
    if (iVar5 != 0) {
      LOCK();
      *(int *)puVar4 = *(int *)puVar4 + -1;
      local_31 = *(int *)puVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e104f;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1002e104f:
  pCVar6 = operator_new(0x48);
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 8) == 100) {
    local_40 = (int *)PTR_shared_null_1021e15e8;
  }
  else {
    FUN_1002dd0a0(&local_40,param_1);
  }
  local_48 = (QArrayData *)puVar4;
  CTaskSendHttpRequest::CTaskSendHttpRequest(pCVar6,lVar1 + 0x10,&local_40,this,2,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e10d3;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1002e10d3:
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_31 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e10fd;
    }
    FUN_1001c45d0(&local_40,local_40);
  }
LAB_1002e10fd:
  QObject::connect(&local_50,pCVar6,"2taskFinished(PRL_RESULT)",param_1,
                   "1onDescriptorDownloaded(PRL_RESULT)",0);
  if (local_50 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

