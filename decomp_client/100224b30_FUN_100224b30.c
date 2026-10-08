
void FUN_100224b30(CAbstractTask *param_1,QObject *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar1 = operator_new(0x18);
  FUN_1003193e0(&local_48,param_2);
  FUN_1001d3460(pCVar1,&local_48);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100224bc2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100224bc2:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100224be8;
    }
    QListData::dispose(local_40);
  }
LAB_100224be8:
  *(undefined ***)param_1 = &PTR_FUN_102201cd0;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_9;
  *(undefined8 *)(param_1 + 0x38) = param_8;
  *(undefined8 *)(param_1 + 0x30) = param_7;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_100224d40(param_1);
  return;
}

