
void FUN_100241aa0(CAbstractTask *param_1,QObject *param_2,int param_3)

{
  char cVar1;
  CAbstractTask CVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  Connection local_58 [8];
  undefined8 local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar3 = operator_new(0x18);
  FUN_100188480(&local_48,param_2);
  FUN_1002450f0(pCVar3,&local_48);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100241b2f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100241b2f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100241b55;
    }
    QListData::dispose(local_40);
  }
LAB_100241b55:
  *(undefined ***)param_1 = &PTR_FUN_102203950;
  uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x68] = (CAbstractTask)0x0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (param_3 == 0x18a88) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else if (param_3 == 0x18a8f) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  else if (param_3 == 0x18a90) {
    *(undefined4 *)(param_1 + 0x2c) = 2;
  }
  CAbstractTask::appendSubTask((int)param_1);
  local_50 = 0;
  cVar1 = FUN_1001b86b0(param_2,&local_50);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 100) = 0x32;
    CVar2 = (CAbstractTask)FUN_100262750(local_50);
    param_1[0x68] = CVar2;
  }
  QObject::connect(local_58,param_2,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                   param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
  QMetaObject::Connection::~Connection(local_58);
  return;
}

