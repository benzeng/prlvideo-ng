
undefined8 FUN_1002e0910(long param_1)

{
  undefined *puVar1;
  CTaskSendHttpRequest *pCVar2;
  CHttpResponseParser *this;
  long local_60;
  QArrayData *local_58;
  QString local_50;
  int *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(*(long *)(param_1 + 0x18) + 8) != 100) {
    return 0x3bfa;
  }
  pCVar2 = operator_new(0x48);
  local_40 = (QArrayData *)
             QString::fromAscii_helper
                       ("https://webservices.pdfm12.parallels.com/get_welcomescreen_details",0x42);
  FUN_1002dd0a0(&local_48,param_1);
  this = operator_new(0x40);
  puVar1 = PTR_shared_null_1021e1288;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  CHttpResponseParser::CHttpResponseParser(this,&local_50);
  local_58 = (QArrayData *)puVar1;
  CTaskSendHttpRequest::CTaskSendHttpRequest(pCVar2,&local_40,&local_48,this,2,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e09e3;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1002e09e3:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e0a13;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002e0a13:
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_31 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e0a3f;
    }
    FUN_1001c45d0(&local_48,local_48);
  }
LAB_1002e0a3f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e0a6f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002e0a6f:
  QObject::connect(&local_60,pCVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onGetDescriptorUrlRequestFinished(PRL_RESULT)",0);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

