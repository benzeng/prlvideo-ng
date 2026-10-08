
void FUN_1002bfad0(CAbstractTask *param_1,undefined8 *param_2,QObject *param_3,QObject *param_4,
                  undefined4 param_5)

{
  int *piVar1;
  undefined *puVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar3 = operator_new(0x18);
  FUN_10015aab0(&local_40,param_3);
  FUN_1002c0730(pCVar3,param_2,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002bfb59;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002bfb59:
  *(undefined ***)param_1 = &PTR_FUN_102208650;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 1);
  puVar2 = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  auVar5._8_4_ = (int)puVar2;
  auVar5._0_8_ = puVar2;
  auVar5._12_4_ = (int)((ulong)puVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar5;
  auVar6._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar6._0_8_ = PTR_shared_null_1021e15e8;
  auVar6._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x58) = auVar6;
  param_1[0x68] = (CAbstractTask)0x0;
  *(undefined **)(param_1 + 0x70) = puVar2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x7c] = (CAbstractTask)0x0;
  param_1[0x80] = (CAbstractTask)0x0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(QObject **)(param_1 + 0xa8) = param_3;
  uVar4 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  *(QObject **)(param_1 + 0xb8) = param_4;
  *(undefined4 *)(param_1 + 0xc0) = param_5;
  uVar4 = CMessageManager::instance();
  QObject::connect(&local_48,uVar4,"2notificationClicked ( PRL_RESULT )",param_1,
                   "1onNotificationClicked(PRL_RESULT)",0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

