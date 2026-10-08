
void FUN_100265ca0(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3,QObject *param_4)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar2 = operator_new(0x18);
  FUN_100266c70(pCVar2,param_3 + 1);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100265d16;
    }
    QListData::dispose(local_40);
  }
LAB_100265d16:
  *(undefined ***)param_1 = &PTR_FUN_1022052b0;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
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
  uVar3 = param_3[3];
  *(undefined8 *)(param_1 + 0x48) = param_3[4];
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_3 + 5);
  piVar1 = (int *)param_3[6];
  *(int **)(param_1 + 0x58) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_3 + 5);
  piVar1 = (int *)param_3[7];
  *(int **)(param_1 + 0x60) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_3 + 5);
  uVar3 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(QObject **)(param_1 + 0x70) = param_4;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  auVar4._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar4._0_8_ = PTR_shared_null_1021e1288;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x88) = auVar4;
  return;
}

