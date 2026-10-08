
void FUN_1001f7e70(CAbstractTask *param_1,QObject *param_2,QObject *param_3,CAbstractTask param_4)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  undefined1 local_33;
  
  pCVar1 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  FUN_10019a8f0(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_1001f7ef3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001f7ef3:
  *(undefined ***)param_1 = &PTR_FUN_102200270;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar2 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(QObject **)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x48] = param_4;
  return;
}

