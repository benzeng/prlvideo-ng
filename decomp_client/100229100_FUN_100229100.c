
void FUN_100229100(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3,undefined8 *param_4,
                  QObject *param_5)

{
  int *piVar1;
  undefined *puVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  Connection local_48 [8];
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar3 = operator_new(0x18);
  FUN_100081140(pCVar3,param_3 + 1);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10022917b;
    }
    QListData::dispose(local_40);
  }
LAB_10022917b:
  *(undefined ***)param_1 = &PTR_FUN_102202160;
  uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(QObject **)(param_1 + 0x20) = param_2;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_3[1];
  *(int **)(param_1 + 0x30) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_3[2];
  *(int **)(param_1 + 0x38) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  uVar4 = param_3[3];
  *(undefined8 *)(param_1 + 0x48) = param_3[4];
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_1 + 0x50) = *param_4;
  puVar2 = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x60) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  uVar4 = 0;
  if (param_5 != (QObject *)0x0) {
    uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_5);
  }
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  *(QObject **)(param_1 + 0x80) = param_5;
  *(undefined **)(param_1 + 0x88) = puVar2;
  param_1[0xb0] = (CAbstractTask)0x0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined **)(param_1 + 0xb8) = puVar2;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(local_48,uVar4,"2afterVmAdded(const CVmWrap&)",param_1,
                   "1onAfterVmAdded(const CVmWrap&)",0);
  QMetaObject::Connection::~Connection(local_48);
  return;
}

