
void FUN_1002c22e0(CAbstractTask *param_1,QObject *param_2)

{
  CTaskGenericId *this;
  undefined8 uVar1;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x86);
  *(undefined ***)this = &PTR_FUN_102272dc0;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_1022089b0;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  FUN_1001eef00(param_1 + 0x28);
  *(undefined **)(param_1 + 0x68) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x70) = 0x80000007;
  return;
}

