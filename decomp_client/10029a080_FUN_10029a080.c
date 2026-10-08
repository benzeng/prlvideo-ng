
void FUN_10029a080(CAbstractTask *param_1,QObject *param_2,undefined4 param_3,QObject *param_4)

{
  CTaskGenericId *this;
  undefined8 uVar1;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x6e);
  *(undefined ***)this = &PTR_FUN_102272800;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_102207260;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  uVar1 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(QObject **)(param_1 + 0x48) = param_4;
  *(undefined **)(param_1 + 0x50) = PTR_shared_null_1021e1288;
  CAbstractTask::setOption(param_1,4,1);
  return;
}

