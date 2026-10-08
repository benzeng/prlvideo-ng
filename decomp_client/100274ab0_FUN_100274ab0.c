
void FUN_100274ab0(CAbstractTask *param_1,QObject *param_2)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pCVar1 = operator_new(0x18);
  FUN_100188480(&local_38,param_2);
  FUN_1001884b0(&local_40,param_2);
  FUN_1002752f0(pCVar1,&local_38,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100274b41;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100274b41:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100274b71;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100274b71:
  *(undefined ***)param_1 = &PTR_FUN_102205a90;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  CAbstractTask::setOption(param_1,4,1);
  return;
}

