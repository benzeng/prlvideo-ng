
void FUN_100283d10(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar2 = operator_new(0x18);
  FUN_10015a2b0(&local_48,param_2);
  FUN_100285020(pCVar2,&local_48);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100283d9f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100283d9f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100283dc5;
    }
    QListData::dispose(local_40);
  }
LAB_100283dc5:
  *(undefined ***)param_1 = &PTR_FUN_102206170;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x30) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

