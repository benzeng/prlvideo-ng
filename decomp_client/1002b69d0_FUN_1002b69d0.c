
void FUN_1002b69d0(CAbstractTask *param_1,QObject *param_2,QObject *param_3,CAbstractTask param_4)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar1 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  FUN_1002bab50(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b6a53;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002b6a53:
  *(undefined ***)param_1 = &PTR_FUN_102208170;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar2 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(QObject **)(param_1 + 0x30) = param_3;
  param_1[0x38] = param_4;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x50) = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x58) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  param_1[0x70] = (CAbstractTask)0x0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  QDir::homePath();
  QString::operator=((QString *)(param_1 + 0x50),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b6b24;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002b6b24:
  FUN_100d867e0(&local_50);
  QString::operator=((QString *)(param_1 + 0x50),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return;
}

