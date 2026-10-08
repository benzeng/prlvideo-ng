
void FUN_10020c3a0(CAbstractTask *param_1,QObject *param_2,QObject *param_3)

{
  undefined8 uVar1;
  CTimeEstimator *this;
  
  uVar1 = 0;
  CAbstractTask::CAbstractTask(param_1,(CTaskGenericId *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102200b70;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar1 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(QObject **)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  this = operator_new(0x18);
  CTimeEstimator::CTimeEstimator(this,(QObject *)0x0);
  *(CTimeEstimator **)(param_1 + 0x78) = this;
  *(undefined **)(param_1 + 0x80) = PTR_shared_null_1021e1288;
  return;
}

