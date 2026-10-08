
void FUN_1002096b0(CAbstractTask *param_1,QObject *param_2,CVmConfiguration *param_3,
                  undefined4 param_4,QObject *param_5)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  long local_60;
  long local_58;
  long local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar2 = operator_new(0x18);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_10020b610(pCVar2,&local_48);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10020975b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10020975b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100209781;
    }
    QListData::dispose(local_40);
  }
LAB_100209781:
  *(undefined ***)param_1 = &PTR_FUN_102200930;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(QObject **)(param_1 + 0x30) = param_2;
  uVar3 = 0;
  if (param_5 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_5);
  }
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(QObject **)(param_1 + 0x40) = param_5;
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(param_1 + 0x48),param_3);
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x150) = param_4;
  param_1[0x154] = (CAbstractTask)0x0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined **)(param_1 + 0x160) = PTR_shared_null_1021e15e8;
  QObject::connect(&local_50,param_2,"2vmRegistered(PRL_RESULT, const QString&)",param_1,
                   "1onVmCreated(PRL_RESULT, const QString&)",0);
  if (local_50 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  QObject::connect(&local_58,param_2,"2afterVmAdded(const CVmWrap&)",param_1,
                   "1onVmAdded(const CVmWrap&)",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_58 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  uVar3 = CMessageManager::instance();
  QObject::connect(&local_60,uVar3,
                   "2aboutToShowMessage(Messaging::MessageData,QWidget*, CMessageBoxWndBase*)",
                   param_1,
                   "1onAboutToShowMessage(Messaging::MessageData,QWidget*, CMessageBoxWndBase*)",0);
  if ((cVar1 != '\0') && (local_60 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  return;
}

