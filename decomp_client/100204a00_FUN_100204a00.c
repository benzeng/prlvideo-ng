
void FUN_100204a00(QString *param_1)

{
  QObject *pQVar1;
  char cVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  long local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar3 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[10].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar3 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[10].field0_0x0 + 4) != 0)) {
    pQVar3 = param_1[0xb].field0_0x0;
  }
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[5].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[5].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[6].field0_0x0;
  }
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar3 = (QTypedArrayData<unsigned_short> *)
           FUN_10015efb0(pQVar3,pQVar4,param_1 + 8,param_1 + 9,0x4000,&local_28);
  param_1[0xc].field0_0x0 = pQVar3;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100204a92;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100204a92:
  pQVar1 = (QObject *)param_1[0xc].field0_0x0;
  pQVar1[0x60] = (QObject)0x1;
  local_30 = (QArrayData *)QString::fromAscii_helper("handleCloneEvent",0x10);
  CSdkRequest::addEventFilter(pQVar1,param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100204aee;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100204aee:
  QObject::connect(&local_38,param_1[0xc].field0_0x0,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onImportFinished(PRL_RESULT)",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    if (cVar2 != '\0') {
      return;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                "Tasks/CTaskImportBootCampVm.cpp",0xd7,"scheduleImportRequest");
  return;
}

