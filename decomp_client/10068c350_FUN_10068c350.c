
void * FUN_10068c350(undefined8 param_1)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  void *pvVar3;
  long local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined4 local_50 [2];
  undefined *local_48;
  undefined1 local_40 [16];
  undefined1 local_30;
  undefined1 local_21;
  
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Download Trial activation promo");
  local_50[0] = 0x65;
  local_48 = PTR_shared_null_1021e1288;
  local_40._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_40._0_8_ = PTR_shared_null_1021e15e8;
  local_40._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_30 = 0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("Coupon",6);
  local_58 = pQVar1;
  FUN_1000341d0(local_40 + 8,&local_58);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10068c3f6;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10068c3f6:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("day_of_trial",0xc);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("0",1);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_21 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_68 = pQVar1;
  local_60 = pQVar2;
  FUN_1001c44c0(local_40,&local_68);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10068c482;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10068c482:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10068c4af;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10068c4af:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10068c4da;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10068c4da:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10068c507;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10068c507:
  pvVar3 = operator_new(0x30);
  FUN_1002dce60(pvVar3,local_50);
  QObject::connect(&local_70,pvVar3,"2taskFinished( PRL_RESULT )",param_1,
                   "1onDownloadTrialActivationPromoFinished(PRL_RESULT)",0);
  if (local_70 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  CAbstractTask::execute();
  FUN_1002748b0(local_50);
  return pvVar3;
}

