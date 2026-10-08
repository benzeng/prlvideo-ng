
void FUN_10028b320(CAbstractTask *param_1,undefined8 param_2,QObject *param_3)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  undefined1 local_32;
  
  pCVar1 = operator_new(0x18);
  uVar2 = FUN_10061b510(param_2);
  FUN_10015aab0(&local_40,uVar2);
  FUN_10028c560(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_10028b3a8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10028b3a8:
  *(undefined ***)param_1 = &PTR_FUN_102206720;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  uVar2 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(QObject **)(param_1 + 0x28) = param_3;
  param_1[0x30] = (CAbstractTask)0x0;
  return;
}

