
void FUN_10020dc40(CAbstractTask *param_1,QObject *param_2,QObject *param_3)

{
  undefined *puVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  CTimeEstimator *this;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar2 = operator_new(0x18);
  if (param_2 == (QObject *)0x0) {
    local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(&local_40,param_2);
  }
  FUN_100210050(pCVar2,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10020dcd7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10020dcd7:
  uVar3 = 0;
  *(undefined ***)param_1 = &PTR_FUN_102200c90;
  if (param_2 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar3 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(QObject **)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
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
  *(CTimeEstimator **)(param_1 + 0x88) = this;
  puVar1 = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x90) = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x98) = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0xa0) = puVar1;
  return;
}

