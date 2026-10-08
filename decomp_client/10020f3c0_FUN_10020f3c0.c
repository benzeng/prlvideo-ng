
undefined8 FUN_10020f3c0(QString *param_1)

{
  QObject *pQVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  CProgressDialog *this;
  QTypedArrayData<unsigned_short> *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QWidget *pQVar5;
  int iVar6;
  Connection local_70 [8];
  Connection local_68 [8];
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  Connection local_48 [8];
  Connection local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[3].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[4].field0_0x0;
  }
  pQVar3 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[5].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar3 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[5].field0_0x0 + 4) != 0)) {
    pQVar3 = param_1[6].field0_0x0;
  }
  pQVar2 = (QTypedArrayData<unsigned_short> *)0x0;
  pQVar1 = (QObject *)FUN_100197520(pQVar4,param_1 + 0x12,0,param_1 + 0x14,pQVar3);
  if (pQVar1 != (QObject *)0x0) {
    pQVar2 = (QTypedArrayData<unsigned_short> *)
             QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  }
  pQVar4 = param_1[0xf].field0_0x0;
  if (pQVar4 != pQVar2) {
    if (pQVar2 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      pQVar4 = param_1[0xf].field0_0x0;
    }
    if (pQVar4 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (param_1[0xf].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0))
      {
        operator_delete(param_1[0xf].field0_0x0);
      }
    }
    param_1[0xf].field0_0x0 = pQVar2;
    param_1[0x10].field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
  }
  if (pQVar2 != (QTypedArrayData<unsigned_short> *)0x0) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + -1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(pQVar2);
    }
  }
  pQVar1 = (QObject *)0x0;
  if ((param_1[0xf].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar1 = (QObject *)0x0, *(int *)(param_1[0xf].field0_0x0 + 4) != 0)) {
    pQVar1 = (QObject *)param_1[0x10].field0_0x0;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("handleEncryptEvent",0x12);
  CSdkRequest::addEventFilter(pQVar1,param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020f500;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10020f500:
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[0xf].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[0xf].field0_0x0 + 4) != 0))
  {
    pQVar4 = param_1[0x10].field0_0x0;
  }
  pQVar3 = (QTypedArrayData<unsigned_short> *)0x0;
  QObject::connect(local_40,pQVar4,"2jobCompleted(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_40);
  if ((param_1[0xf].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar3 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[0xf].field0_0x0 + 4) != 0))
  {
    pQVar3 = param_1[0x10].field0_0x0;
  }
  QObject::connect(local_48,pQVar3,"2jobCanceled(PRL_RESULT)",param_1,
                   "1onEncryptionCanceled(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_48);
  pQVar4 = param_1[9].field0_0x0;
  if (((pQVar4 == (QTypedArrayData<unsigned_short> *)0x0) || (*(int *)(pQVar4 + 4) == 0)) ||
     (param_1[10].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0)) {
    this = operator_new(0x70);
    pQVar5 = (QWidget *)0x0;
    if ((param_1[5].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar5 = (QWidget *)0x0, *(int *)(param_1[5].field0_0x0 + 4) != 0)) {
      pQVar5 = (QWidget *)param_1[6].field0_0x0;
    }
    CProgressDialog::CProgressDialog(this,pQVar5);
    pQVar3 = (QTypedArrayData<unsigned_short> *)
             QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
    pQVar4 = param_1[9].field0_0x0;
    if (pQVar4 != pQVar3) {
      if (pQVar3 != (QTypedArrayData<unsigned_short> *)0x0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_29 = *(int *)pQVar3 != 0;
        UNLOCK();
        pQVar4 = param_1[9].field0_0x0;
      }
      if (pQVar4 != (QTypedArrayData<unsigned_short> *)0x0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (param_1[9].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0))
        {
          operator_delete(param_1[9].field0_0x0);
        }
      }
      param_1[9].field0_0x0 = pQVar3;
      param_1[10].field0_0x0 = (QTypedArrayData<unsigned_short> *)this;
    }
    if (pQVar3 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(pQVar3);
      }
    }
    pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[9].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[9].field0_0x0 + 4) != 0))
    {
      pQVar4 = param_1[10].field0_0x0;
    }
    FUN_1001c72e0(&local_50);
    QWidget::setWindowTitle((QString *)pQVar4);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10020f694;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10020f694:
    pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[9].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[9].field0_0x0 + 4) != 0))
    {
      pQVar4 = param_1[10].field0_0x0;
    }
    QMetaObject::tr((char *)&local_58,(char *)&PTR_staticMetaObject_102200c50,0x1ddbd30);
    local_60 = (QArrayData *)PTR_shared_null_1021e1288;
    CProgressDialog::setText((QString *)pQVar4,&local_58);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10020f717;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10020f717:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10020f747;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10020f747:
    iVar6 = 0;
    if ((param_1[9].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (iVar6 = 0, *(int *)(param_1[9].field0_0x0 + 4) != 0)) {
      iVar6 = (int)param_1[10].field0_0x0;
    }
    pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
    CProgressDialog::setRange(iVar6,0);
    if ((param_1[9].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[9].field0_0x0 + 4) != 0))
    {
      pQVar4 = param_1[10].field0_0x0;
    }
    pQVar3 = (QTypedArrayData<unsigned_short> *)0x0;
    QObject::connect(local_68,pQVar4,"2canceled()",param_1,"1onProgressDlgCanceled()",0);
    QMetaObject::Connection::~Connection(local_68);
    if ((param_1[0xf].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar3 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[0xf].field0_0x0 + 4) != 0)
       ) {
      pQVar3 = param_1[0x10].field0_0x0;
    }
    pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[9].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[9].field0_0x0 + 4) != 0))
    {
      pQVar4 = param_1[10].field0_0x0;
    }
    iVar6 = 0;
    QObject::connect(local_70,pQVar3,"2jobCompleted(PRL_RESULT)",pQVar4,"1close()",0);
    QMetaObject::Connection::~Connection(local_70);
    pQVar4 = param_1[9].field0_0x0;
    if (pQVar4 == (QTypedArrayData<unsigned_short> *)0x0) goto LAB_10020f820;
  }
  iVar6 = 0;
  if (*(int *)(pQVar4 + 4) != 0) {
    iVar6 = (int)param_1[10].field0_0x0;
  }
LAB_10020f820:
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  CProgressDialog::setValue(iVar6);
  if ((param_1[9].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[9].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[10].field0_0x0;
  }
  (**(code **)(*(long *)pQVar4 + 0x1a0))(pQVar4);
  CTimeEstimator::start();
  return 0;
}

