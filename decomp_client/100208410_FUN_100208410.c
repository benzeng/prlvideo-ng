
undefined8 FUN_100208410(QString *param_1)

{
  char cVar1;
  QObject *pQVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  Connection local_68 [8];
  Connection local_60 [8];
  Connection local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_1[3].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return 0x80000009;
  }
  if (*(int *)(param_1[3].field0_0x0 + 4) == 0) {
    return 0x80000009;
  }
  if (param_1[4].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return 0x80000009;
  }
  if (param_1[5].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return 0x80000009;
  }
  if (*(int *)(param_1[5].field0_0x0 + 4) == 0) {
    return 0x80000009;
  }
  if (param_1[6].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return 0x80000009;
  }
  FUN_1002088f0(param_1);
  cVar1 = '\0';
  if ((param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (cVar1 = '\0', *(int *)(param_1[3].field0_0x0 + 4) != 0)) {
    cVar1 = (char)param_1[4].field0_0x0;
  }
  CBaseNode::toString(SUB81(&local_48,0),(bool)(cVar1 + '\x10'));
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"Sending create hard disk request. HDD config: %s",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10020852a;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10020852a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10020855a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10020855a:
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[5].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[5].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[6].field0_0x0;
  }
  pQVar3 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar3 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[3].field0_0x0 + 4) != 0)) {
    pQVar3 = param_1[4].field0_0x0;
  }
  pQVar2 = (QObject *)FUN_100196620(pQVar4,pQVar3,*(undefined1 *)&param_1[0xb].field0_0x0);
  if (pQVar2 == (QObject *)0x0) {
    return 0x80000009;
  }
  cVar1 = CSdkRequest::isCompleted((bool *)pQVar2,(int *)0x0);
  if (cVar1 != '\0') {
    return 0x80000009;
  }
  pQVar2[0x60] = (QObject)0x1;
  local_50 = (QArrayData *)QString::fromAscii_helper("handleCreateHddImageEvent",0x19);
  CSdkRequest::addEventFilter(pQVar2,param_1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10020860a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10020860a:
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  QObject::connect(local_58,pQVar2,"2jobCompleted(PRL_RESULT)",param_1,"1onHddCreated(PRL_RESULT)",0
                  );
  QMetaObject::Connection::~Connection(local_58);
  if ((param_1[9].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[9].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[10].field0_0x0;
  }
  QObject::connect(local_60,pQVar2,"2jobProgressChanged(uint)",pQVar4,"1setProgressValue(uint)",0);
  QMetaObject::Connection::~Connection(local_60);
  pQVar4 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[9].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar4 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[9].field0_0x0 + 4) != 0)) {
    pQVar4 = param_1[10].field0_0x0;
  }
  QObject::connect(local_68,pQVar4,"2canceled()",pQVar2,"1cancel()",0);
  QMetaObject::Connection::~Connection(local_68);
  return 0;
}

