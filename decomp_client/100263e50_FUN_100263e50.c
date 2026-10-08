
void FUN_100263e50(CAbstractTask *param_1,QObject *param_2,undefined8 param_3,undefined4 param_4,
                  QObject *param_5)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  void *pvVar3;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar1 = operator_new(0x18);
  FUN_10015a2b0(&local_48,param_2);
  FUN_100264760(pCVar1,&local_48,param_3,param_4);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100263eeb;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100263eeb:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100263f11;
    }
    QListData::dispose(local_40);
  }
LAB_100263f11:
  *(undefined ***)param_1 = &PTR_FUN_102205070;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  pvVar3 = operator_new(0x30);
  FUN_10019dcf0(pvVar3,param_3,param_4,1,param_5);
  *(void **)(param_1 + 0x28) = pvVar3;
  uVar2 = 0;
  if (param_5 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_5);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(QObject **)(param_1 + 0x38) = param_5;
  return;
}

