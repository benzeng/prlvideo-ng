
void FUN_100629b90(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  QArrayData *local_40;
  undefined1 local_33;
  
  pCVar2 = operator_new(0x18);
  FUN_10015aab0(&local_40,param_2);
  FUN_10062a440(pCVar2,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_100629c10;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100629c10:
  *(undefined ***)param_1 = &PTR_FUN_1022217f0;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x38) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  auVar4._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar4._0_8_ = PTR_shared_null_1021e1288;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar4;
  return;
}

