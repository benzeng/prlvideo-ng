
void FUN_10026b000(CAbstractTask *param_1,QObject *param_2,undefined4 param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined *puVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar3 = operator_new(0x18);
  FUN_1001884b0(&local_40,param_2);
  FUN_100188480(&local_48,param_2);
  FUN_10026e220(pCVar3,&local_40,&local_48);
  CAbstractTask::CAbstractTask(param_1,pCVar3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026b09a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10026b09a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026b0ca;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10026b0ca:
  *(undefined ***)param_1 = &PTR_FUN_102205850;
  uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar2 = PTR_shared_null_1021e1288;
  auVar5._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar5._0_8_ = PTR_shared_null_1021e1288;
  auVar5._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar5;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  param_1[0x5c] = (CAbstractTask)0x0;
  *(undefined **)(param_1 + 0x60) = puVar2;
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0x68) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  CAbstractTask::setOption(param_1,4,1);
  return;
}

