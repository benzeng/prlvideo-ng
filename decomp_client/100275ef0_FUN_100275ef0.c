
void FUN_100275ef0(CAbstractTask *param_1,QObject *param_2,undefined4 param_3)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar1 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  FUN_1001884b0(&local_48,param_2);
  FUN_100276dd0(pCVar1,&local_40,&local_48,param_3);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100275f89;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100275f89:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100275fb9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100275fb9:
  *(undefined ***)param_1 = &PTR_FUN_102205cd0;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return;
}

