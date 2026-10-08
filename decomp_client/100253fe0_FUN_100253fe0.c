
void FUN_100253fe0(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3)

{
  int *piVar1;
  CTaskGenericId *this;
  undefined8 uVar2;
  Data *local_40;
  undefined1 local_33;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x47);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,this);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_100254054;
    }
    QListData::dispose(local_40);
  }
LAB_100254054:
  *(undefined ***)param_1 = &PTR_FUN_1022047d0;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

