
void FUN_1001fa130(CAbstractTask *param_1,QObject *param_2,QList *param_3)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  undefined1 local_32;
  
  pCVar1 = operator_new(0x18);
  FUN_10015aab0(&local_40,param_2);
  FUN_1001fba30(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,param_3,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1001fa1b3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001fa1b3:
  *(undefined ***)param_1 = &PTR_FUN_102200390;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0x1400015f90;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

