
void FUN_1002451b0(CAbstractTask *param_1,QObject *param_2,undefined4 param_3,QObject *param_4)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  undefined1 local_33;
  
  pCVar1 = operator_new(0x18);
  uVar2 = FUN_10061b510(param_2);
  FUN_10015aab0(&local_40,uVar2);
  FUN_100246330(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_10024523b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10024523b:
  *(undefined ***)param_1 = &PTR_FUN_102203a70;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  uVar2 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(QObject **)(param_1 + 0x38) = param_4;
  param_1[0x40] = (CAbstractTask)0x0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}

