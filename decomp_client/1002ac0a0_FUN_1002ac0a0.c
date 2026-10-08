
void FUN_1002ac0a0(CAbstractTask *param_1,QObject *param_2)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  undefined1 local_2b;
  
  pCVar1 = operator_new(0x18);
  uVar2 = FUN_10061b510(param_2);
  FUN_10015aab0(&local_38,uVar2);
  FUN_1002ad160(pCVar1,&local_38);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2b = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2b) goto LAB_1002ac123;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002ac123:
  *(undefined ***)param_1 = &PTR_FUN_102207b70;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  QNetworkProxy::QNetworkProxy((QNetworkProxy *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

