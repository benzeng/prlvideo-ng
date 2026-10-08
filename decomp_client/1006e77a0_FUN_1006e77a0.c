
void FUN_1006e77a0(CAppUpdateWorker *param_1,CAppUpdateLogic *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long local_40;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  CAppUpdateWorker::CAppUpdateWorker(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102225890;
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_30,DAT_1023108e0,"2serverStateChanged(const QString&, GUI::ServerState)",
                   param_1,"1onAfterServerStateChanged(const QString&, GUI::ServerState)",0);
  if (local_30 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  uVar4 = FUN_100748240();
  local_38 = (QArrayData *)QString::fromAscii_helper("version",7);
  uVar4 = FUN_100748290(uVar4,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e789f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006e789f:
  iVar2 = FUN_100746a60(uVar4);
  if (iVar2 == 2) {
    FUN_1006e7970();
  }
  else {
    QObject::connect(&local_40,uVar4,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                     "1updateLastReleasedVersion()",0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
  }
  return;
}

