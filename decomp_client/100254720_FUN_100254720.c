
undefined8 FUN_100254720(QObject *param_1)

{
  QArrayData *pQVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  CTaskSendHttpRequest *pCVar4;
  CHttpResponseParser *this;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  Connection local_98 [8];
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QLocale local_68 [8];
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  int *local_40;
  undefined1 local_31;
  
  local_40 = (int *)PTR_shared_null_1021e15e8;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("Email",5);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_50 = pQVar3;
  local_48 = pQVar1;
  FUN_1001c44c0(&local_40,&local_50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002547c0;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002547c0:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 == 0) {
LAB_1002547dd:
      QArrayData::deallocate(pQVar3,2,8);
    }
    else {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1002547dd;
    }
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10025481e;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
  }
LAB_10025481e:
  QLocale::QLocale(local_68);
  QLocale::name();
  WebUtils::productInfo(&local_58);
  FUN_10024f800(&local_40,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100254878;
    }
    FUN_1001c45d0(&local_58);
  }
LAB_100254878:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002548a8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002548a8:
  QLocale::~QLocale(local_68);
  if (1 < DAT_10230ffd0) {
    WebUtils::maskedEMail(&local_78);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",2,
                  "[Task Retrieve Password] About to retrieve password for an email: %s",
                  local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100254933;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_100254933:
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100254963;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
  }
LAB_100254963:
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (*(QObject **)(param_1 + 0x38) != (QObject *)0x0)) {
    QObject::disconnect(*(QObject **)(param_1 + 0x38),(char *)0x0,param_1,(char *)0x0);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x78))(*(long **)(param_1 + 0x38),0x80000275);
    if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
       (*(long **)(param_1 + 0x38) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
    }
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  pCVar4 = operator_new(0x48);
  local_80 = (QArrayData *)
             QString::fromAscii_helper("https://registration.parallels.com/account/retrieval",0x34);
  this = operator_new(0x40);
  puVar2 = PTR_shared_null_1021e1288;
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  CHttpResponseParser::CHttpResponseParser(this,&local_88);
  local_90 = (QArrayData *)puVar2;
  CTaskSendHttpRequest::CTaskSendHttpRequest(pCVar4,&local_80,&local_40,this,2,&local_90);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pCVar4);
  piVar6 = *(int **)(param_1 + 0x30);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x30);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x30));
      }
    }
    *(int **)(param_1 + 0x30) = piVar5;
    *(CTaskSendHttpRequest **)(param_1 + 0x38) = pCVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_31 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100254ae8;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100254ae8:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100254b18;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100254b18:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100254b48;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100254b48:
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
  }
  QObject::connect(local_98,uVar7,"2taskFinished(PRL_RESULT)",param_1,
                   "1onRetrievePasswordFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_98);
  CAbstractTask::execute();
  if (*local_40 != -1) {
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
  }
  return 0;
}

