
void FUN_1001f01b0(CAbstractTask *param_1,QObject *param_2,QObject *param_3,undefined4 param_4)

{
  CTaskGenericId *this;
  undefined8 uVar1;
  Data *local_40;
  undefined1 local_35;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x33);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,this);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_35 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_35) goto LAB_1001f0227;
    }
    QListData::dispose(local_40);
  }
LAB_1001f0227:
  *(undefined ***)param_1 = &PTR_FUN_1021fff10;
  uVar1 = 0;
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
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  CAbstractTask::setOption(param_1,4,1);
  return;
}

