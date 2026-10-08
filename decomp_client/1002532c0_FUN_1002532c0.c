
void FUN_1002532c0(CAbstractTask *param_1,QObject *param_2)

{
  CTaskGenericId *this;
  undefined8 uVar1;
  Data *local_38;
  undefined1 local_2a;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x45);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_38,this);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10025332f;
    }
    QListData::dispose(local_38);
  }
LAB_10025332f:
  *(undefined ***)param_1 = &PTR_FUN_102204500;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  return;
}

