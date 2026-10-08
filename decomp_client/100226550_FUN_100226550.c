
void FUN_100226550(CAbstractTask *param_1,CTaskGenericId *param_2,QObject *param_3,
                  undefined4 param_4,undefined4 param_5,QObject *param_6,undefined4 param_7)

{
  undefined8 uVar1;
  Data *local_40;
  undefined1 local_33;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_1002265b0;
    }
    QListData::dispose(local_40);
  }
LAB_1002265b0:
  *(undefined ***)param_1 = &PTR_FUN_102201df0;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  uVar1 = 0;
  if (param_6 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_6);
  }
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(QObject **)(param_1 + 0x40) = param_6;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x80000000;
  *(undefined8 *)(param_1 + 0x68) = 0;
  param_1[0x78] = (CAbstractTask)0x1;
  return;
}

