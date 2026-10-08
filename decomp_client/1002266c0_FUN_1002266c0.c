
void FUN_1002266c0(CAbstractTask *param_1,undefined8 *param_2,QObject *param_3,undefined4 param_4,
                  undefined4 param_5,QObject *param_6,undefined4 param_7)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar2 = operator_new(0x18);
  FUN_1001884b0(&local_48,param_3);
  FUN_100188480(&local_50,param_3);
  FUN_100226c70(pCVar2,&local_48,&local_50,param_2);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100226785;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100226785:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002267bc;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002267bc:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002267e2;
    }
    QListData::dispose(local_40);
  }
LAB_1002267e2:
  *(undefined ***)param_1 = &PTR_FUN_102201df0;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  uVar3 = 0;
  if (param_6 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_6);
  }
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(QObject **)(param_1 + 0x40) = param_6;
  piVar1 = (int *)*param_2;
  uVar3 = param_2[1];
  *(int **)(param_1 + 0x48) = piVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x60) = param_2[3];
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  QVariant::QVariant((QVariant *)(param_1 + 0x68),(QVariant *)(param_2 + 4));
  param_1[0x78] = *(CAbstractTask *)(param_2 + 6);
  return;
}

