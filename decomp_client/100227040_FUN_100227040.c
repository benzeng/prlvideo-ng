
void FUN_100227040(CAbstractTask *param_1,QObject *param_2,QObject *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar1 = operator_new(0x18);
  if (param_2 == (QObject *)0x0) {
    local_40 = (QArrayData *)PTR_shared_null_1021e1288;
    local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_1001884b0(&local_40,param_2);
    FUN_100188480(&local_48,param_2);
  }
  FUN_10017cde0(pCVar1,&local_40,&local_48);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002270f3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002270f3:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100227123;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100227123:
  uVar2 = 0;
  *(undefined ***)param_1 = &PTR_FUN_102201f20;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar2 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(QObject **)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x3c) = param_5;
  return;
}

