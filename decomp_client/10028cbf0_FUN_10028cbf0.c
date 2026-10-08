
undefined8 FUN_10028cbf0(long param_1)

{
  char cVar1;
  QArrayData *pQVar2;
  void *pvVar3;
  long local_60;
  QArrayData *local_58;
  undefined4 local_50 [2];
  undefined *local_48;
  undefined1 local_40 [16];
  undefined1 local_30;
  undefined1 local_21;
  
  cVar1 = FUN_10028d450(*(undefined8 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    return 0x3bfa;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  local_50[0] = 0x65;
  local_48 = PTR_shared_null_1021e1288;
  local_40._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_40._0_8_ = PTR_shared_null_1021e15e8;
  local_40._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_30 = 0;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("Coupon",6);
  local_58 = pQVar2;
  FUN_1000341d0(local_40 + 8,&local_58);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028cc9a;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10028cc9a:
  pvVar3 = operator_new(0x30);
  FUN_1002dce60(pvVar3,local_50);
  QObject::connect(&local_60,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onExpiredTrialPromoTaskFinished(PRL_RESULT)",0);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  CAbstractTask::execute();
  FUN_1002748b0(local_50);
  return 0;
}

