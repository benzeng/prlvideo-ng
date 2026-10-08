
void FUN_100262780(CAbstractTask *param_1,QObject *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,QObject *param_7)

{
  CTaskGenericId *this;
  undefined8 uVar1;
  Data *local_40;
  undefined1 local_33;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x4c);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,this);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_1002627ff;
    }
    QListData::dispose(local_40);
  }
LAB_1002627ff:
  *(undefined ***)param_1 = &PTR_FUN_102204f50;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 0x30) = param_5;
  *(undefined4 *)(param_1 + 0x34) = param_6;
  uVar1 = 0;
  if (param_7 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_7);
  }
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(QObject **)(param_1 + 0x40) = param_7;
  return;
}

