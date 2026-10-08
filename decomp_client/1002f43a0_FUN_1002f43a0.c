
undefined8 FUN_1002f43a0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  CTaskSendHttpRequest *pCVar7;
  CHttpResponseParser *this;
  char *pcVar8;
  long local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  int *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    pcVar8 = 
    "Failed to send product update purchase request. Failed to get server instance to fill query list."
    ;
LAB_1002f440e:
    FUN_100df99c0("","prl_client_app",0,pcVar8);
    return 0x80000009;
  }
  uVar3 = FUN_10016f500(lVar4);
  cVar2 = FUN_10061b500(uVar3,0x4002);
  if (cVar2 != '\0') {
    pcVar8 = "Failed to send product update purchase request. Wrong license!";
    goto LAB_1002f440e;
  }
  local_40 = (int *)PTR_shared_null_1021e15e8;
  pQVar5 = (QArrayData *)QString::fromAscii_helper("product_id",10);
  FUN_10061abe0(&local_68,uVar3,0xc);
  QVariant::toString();
  pQVar6 = local_58;
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_31 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  local_48 = local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  local_50 = pQVar5;
  FUN_1001c44c0(&local_40,&local_50);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f44c8;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1002f44c8:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f44f7;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1002f44f7:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f4527;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002f4527:
  QVariant::~QVariant(&local_68);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f455f;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1002f455f:
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0) {
    pQVar6 = (QArrayData *)QString::fromAscii_helper("promo_id",8);
    if (1 < *(int *)pQVar6 + 1U) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + 1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
    }
    pQVar5 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar5 + 1U) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
    }
    local_78 = pQVar6;
    local_70 = pQVar5;
    FUN_1001c44c0(&local_40,&local_78);
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002f45eb;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_1002f45eb:
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 == 0) {
LAB_1002f4608:
        QArrayData::deallocate(pQVar6,2,8);
      }
      else {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1002f4608;
      }
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002f4649;
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
    }
  }
LAB_1002f4649:
  pCVar7 = operator_new(0x48);
  local_80 = (QArrayData *)
             QString::fromAscii_helper
                       ("https://registration.parallels.com/promo/get_upgrade_key",0x38);
  this = operator_new(0x40);
  puVar1 = PTR_shared_null_1021e1288;
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  CHttpResponseParser::CHttpResponseParser(this,&local_88);
  local_90 = (QArrayData *)puVar1;
  CTaskSendHttpRequest::CTaskSendHttpRequest(pCVar7,&local_80,&local_40,this,2,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f46f2;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1002f46f2:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f4722;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1002f4722:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002f4752;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002f4752:
  QObject::connect(&local_98,pCVar7,"2taskFinished(PRL_RESULT)",param_1,
                   "1onFreeUpgradeRequestFinished(PRL_RESULT)",0);
  if (local_98 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  if (*local_40 == -1) {
    return 0;
  }
  if (*local_40 != 0) {
    LOCK();
    *local_40 = *local_40 + -1;
    UNLOCK();
    if (*local_40 != 0) {
      return 0;
    }
    local_31 = 0;
  }
  FUN_1001c45d0(&local_40,local_40);
  return 0;
}

