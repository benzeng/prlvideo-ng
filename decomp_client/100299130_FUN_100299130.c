
void FUN_100299130(CAbstractTask *param_1,undefined4 param_2,QObject *param_3,QObject *param_4)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  
  pCVar1 = operator_new(0x18);
  FUN_100299ec0(pCVar1,param_2,param_3);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  *(undefined ***)param_1 = &PTR_FUN_102207140;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  uVar2 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(QObject **)(param_1 + 0x28) = param_3;
  uVar2 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(QObject **)(param_1 + 0x38) = param_4;
  return;
}

