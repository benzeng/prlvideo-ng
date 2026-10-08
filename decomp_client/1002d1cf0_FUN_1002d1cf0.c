
void FUN_1002d1cf0(CAbstractTask *param_1,QObject *param_2)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  undefined1 local_2a;
  
  pCVar1 = operator_new(0x18);
  FUN_100188480(&local_38,param_2);
  FUN_1002d2cd0(pCVar1,&local_38);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_1002d1d6b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002d1d6b:
  *(undefined ***)param_1 = &PTR_FUN_102209ec0;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e15e8;
  return;
}

