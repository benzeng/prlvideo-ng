
void FUN_10025b020(CAbstractTask *param_1,QObject *param_2,QObject *param_3,QObject *param_4)

{
  undefined *puVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar2 = operator_new(0x18);
  FUN_10015aab0(&local_48,param_2);
  FUN_1001e3540(pCVar2,&local_48);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025b0b3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10025b0b3:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025b0d9;
    }
    QListData::dispose(local_40);
  }
LAB_10025b0d9:
  *(undefined ***)param_1 = &PTR_FUN_102204d10;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(QObject **)(param_1 + 0x70) = param_3;
  puVar1 = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x78) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xff;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  auVar4._8_4_ = (int)puVar1;
  auVar4._0_8_ = puVar1;
  auVar4._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x98) = auVar4;
  auVar5._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar5._0_8_ = PTR_shared_null_1021e15e8;
  auVar5._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa8) = auVar5;
  param_1[0xb8] = (CAbstractTask)0x0;
  *(undefined **)(param_1 + 0xc0) = puVar1;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xcc] = (CAbstractTask)0x0;
  param_1[0xd0] = (CAbstractTask)0x0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  uVar3 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  *(QObject **)(param_1 + 0xf8) = param_4;
  return;
}

