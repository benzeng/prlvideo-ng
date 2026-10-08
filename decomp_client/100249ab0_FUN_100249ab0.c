
void FUN_100249ab0(CAbstractTask *param_1,QObject *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar2 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  FUN_1001884b0(&local_48,param_2);
  FUN_1001910e0(pCVar2,&local_40,&local_48,param_3);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100249b50;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100249b50:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100249b80;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100249b80:
  *(undefined ***)param_1 = &PTR_FUN_102203de0;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  uVar1 = FUN_10018a9d0(param_2);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = param_4;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  CAbstractTask::setOption(param_1,4,1);
  return;
}

