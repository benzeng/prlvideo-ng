
void FUN_1002301a0(CAbstractTask *param_1,QObject *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  undefined1 local_33;
  
  pCVar2 = operator_new(0x18);
  FUN_1003193e0(&local_40,param_2);
  FUN_100033dd0(pCVar2,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_100230220;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100230220:
  *(undefined ***)param_1 = &PTR_FUN_102202790;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  uVar1 = FUN_100319ae0(param_2);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 3;
  param_1[0x38] = (CAbstractTask)0x0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x44] = (CAbstractTask)0x0;
  *(undefined **)(param_1 + 0x48) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

