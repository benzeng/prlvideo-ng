
void FUN_10029f3e0(CAbstractTask *param_1,QObject *param_2,undefined8 param_3)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar1 = operator_new(0x18);
  uVar2 = FUN_100146f90(param_2);
  FUN_1001884b0(&local_40,uVar2);
  uVar2 = FUN_100146f90(param_2);
  FUN_100188480(&local_48,uVar2);
  FUN_10029fac0(pCVar1,&local_40,&local_48,*(undefined4 *)(param_2 + 0x20),
                *(undefined4 *)(param_2 + 0x24));
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10029f48d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10029f48d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10029f4bd;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10029f4bd:
  *(undefined ***)param_1 = &PTR_FUN_1022076e0;
  uVar2 = FUN_10010e020(*(undefined4 *)(param_2 + 0x20),param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(QObject **)(param_1 + 0x28) = param_2;
  CAbstractTask::setTaskTimeout((int)param_1);
  return;
}

