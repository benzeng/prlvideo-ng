
void FUN_10024cdb0(CAbstractTask *param_1,QObject *param_2,char param_3)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  int iVar3;
  QArrayData *local_40;
  undefined1 local_33;
  
  pCVar1 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  FUN_10024e080(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_10024ce30;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10024ce30:
  *(undefined ***)param_1 = &PTR_FUN_102204140;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  iVar3 = (int)param_1;
  if (param_3 == '\0') {
    CAbstractTask::appendSubTask(iVar3);
    CAbstractTask::appendSubTask(iVar3);
  }
  CAbstractTask::appendSubTask(iVar3);
  CAbstractTask::appendSubTask(iVar3);
  return;
}

