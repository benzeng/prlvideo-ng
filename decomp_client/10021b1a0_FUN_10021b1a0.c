
void FUN_10021b1a0(CAbstractTask *param_1,undefined4 param_2,QObject *param_3,QObject *param_4)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  undefined1 local_33;
  
  pCVar1 = operator_new(0x18);
  if (param_3 == (QObject *)0x0) {
    local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(&local_40,param_3);
  }
  FUN_10021bfc0(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_10021b23c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10021b23c:
  uVar2 = 0;
  *(undefined ***)param_1 = &PTR_FUN_102201540;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_3;
  uVar2 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(QObject **)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}

