
undefined8 FUN_10024e4c0(long param_1)

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
  QArrayData *local_68;
  QArrayData *local_60;
  QVariant local_58;
  int *local_48;
  int *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    pcVar8 = 
    "Failed to send product update purchase request. Failed to get server instance to fill query list."
    ;
LAB_10024e52e:
    FUN_100df99c0("","prl_client_app",0,pcVar8);
    return 0x80000009;
  }
  uVar3 = FUN_10016f500(lVar4);
  cVar2 = FUN_10061b500(uVar3,0x4002);
  if (cVar2 != '\0') {
    pcVar8 = "Failed to send product update purchase request. Wrong license!";
    goto LAB_10024e52e;
  }
  local_40 = (int *)PTR_shared_null_1021e15e8;
  FUN_10061abe0(&local_58,uVar3,5);
  FUN_10024fb10(&local_48,&local_58);
  FUN_10024f800(&local_40,&local_48);
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_31 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10024e5a1;
    }
    FUN_1001c45d0(&local_48,local_48);
  }
LAB_10024e5a1:
  QVariant::~QVariant(&local_58);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("Locale",6);
  pQVar6 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)(pQVar6 + 4) == 0) {
    pQVar6 = (QArrayData *)QString::fromAscii_helper("en_US",5);
  }
  else if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_31 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  local_68 = pQVar5;
  local_60 = pQVar6;
  FUN_1001c44c0(&local_40,&local_68);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10024e653;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10024e653:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10024e680;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10024e680:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10024e6ab;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10024e6ab:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10024e6d8;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10024e6d8:
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0) {
    pQVar6 = (QArrayData *)QString::fromAscii_helper("PromoId",7);
    if (1 < *(int *)pQVar6 + 1U) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + 1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
    }
    pQVar5 = *(QArrayData **)(param_1 + 0x20);
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
        if ((bool)local_31) goto LAB_10024e762;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_10024e762:
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 == 0) {
LAB_10024e77d:
        QArrayData::deallocate(pQVar6,2,8);
      }
      else {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_10024e77d;
      }
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10024e7bc;
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
    }
  }
LAB_10024e7bc:
  CAbstractTask::setWaitForSubTaskCompletion();
  pCVar7 = operator_new(0x48);
  local_80 = (QArrayData *)
             QString::fromAscii_helper
                       ("https://registration.parallels.com/license/gen_update_order",0x3b);
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
      if ((bool)local_31) goto LAB_10024e86d;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_10024e86d:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10024e89d;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10024e89d:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10024e8cd;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10024e8cd:
  QObject::connect(&local_98,pCVar7,"2taskFinished(PRL_RESULT)",param_1,
                   "1onUpdatePurchaseRequestFinished(PRL_RESULT)",0);
  if (local_98 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
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

