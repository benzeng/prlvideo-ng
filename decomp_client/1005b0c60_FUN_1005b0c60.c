
void FUN_1005b0c60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  Connection local_40 [8];
  Connection local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar2 = FUN_1005b86c0(uVar1);
  if (lVar2 == 0) {
    FUN_1005b1b50(param_1);
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar1,4);
  pvVar3 = operator_new(0x38);
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_1005b86c0(uVar1);
  lVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  local_30 = *(QArrayData **)(lVar2 + 0x170);
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  FUN_100283eb0(pvVar3,uVar1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b0d25;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005b0d25:
  QObject::connect(local_38,pvVar3,"2vmCreationProgress(int)",param_1,"2vmCreationProgress(int)",0);
  QMetaObject::Connection::~Connection(local_38);
  QObject::connect(local_40,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onVmFromLionRecoveryCreationFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_40);
  CAbstractTask::execute();
  return;
}

