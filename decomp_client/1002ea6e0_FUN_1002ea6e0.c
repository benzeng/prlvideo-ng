
void FUN_1002ea6e0(CAbstractTask *param_1,QObject *param_2)

{
  CTaskGenericId *this;
  undefined8 uVar1;
  Data *local_38;
  undefined1 local_2a;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x24);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_38,this);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_1002ea74f;
    }
    QListData::dispose(local_38);
  }
LAB_1002ea74f:
  *(undefined ***)param_1 = &PTR_FUN_10220ac60;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  return;
}

