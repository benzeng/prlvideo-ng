
void FUN_10062e4e0(CAbstractTask *param_1,QObject *param_2,undefined8 param_3)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  QArrayData *local_40;
  undefined1 local_33;
  
  pCVar1 = operator_new(0x18);
  FUN_10015aab0(&local_40,param_2);
  FUN_100613f40(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_10062e55e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10062e55e:
  *(undefined ***)param_1 = &PTR_FUN_102222020;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  pQVar3 = operator_new(0x80);
  uVar2 = FUN_10016f500(param_2);
  FUN_100632d20(pQVar3,uVar2,param_3,0,0xb);
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(QObject **)(param_1 + 0x30) = pQVar3;
  return;
}

