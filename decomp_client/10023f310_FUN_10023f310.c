
void FUN_10023f310(CAbstractTask *param_1,QObject *param_2)

{
  undefined8 uVar1;
  
  CAbstractTask::CAbstractTask(param_1,(CTaskGenericId *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102202fa0;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined ***)param_1 = &PTR_FUN_102203588;
  return;
}

