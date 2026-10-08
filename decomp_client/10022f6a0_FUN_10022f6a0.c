
void FUN_10022f6a0(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar2 = operator_new(0x18);
  FUN_100188480(&local_48,param_2);
  FUN_1002300b0(pCVar2,&local_48,param_3);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10022f737;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10022f737:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10022f75d;
    }
    QListData::dispose(local_40);
  }
LAB_10022f75d:
  *(undefined ***)param_1 = &PTR_FUN_102202580;
  uVar3 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x38) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0x40) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

