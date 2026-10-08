
void FUN_100291d00(CAbstractTask *param_1,QObject *param_2,QObject *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  undefined1 local_34;
  
  pCVar2 = operator_new(0x18);
  FUN_10015aab0(&local_40,param_2);
  FUN_1002925a0(pCVar2,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_34 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_34) goto LAB_100291d8b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100291d8b:
  *(undefined ***)param_1 = &PTR_FUN_102206ba0;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar3 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(QObject **)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_5;
  piVar1 = (int *)*param_6;
  *(int **)(param_1 + 0x50) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

