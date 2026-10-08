
undefined8 FUN_1002a19e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  FUN_1002a1b90(&local_30,param_1 + 0x18);
  QString::operator=((QString *)(param_1 + 0x78),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002a1a3f;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1002a1a3f:
  uVar2 = FUN_100748240();
  local_38 = (QArrayData *)QString::fromAscii_helper("is",2);
  uVar2 = FUN_100748290(uVar2,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002a1a9b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002a1a9b:
  iVar1 = FUN_100746a60(uVar2);
  if (iVar1 != 2) {
    QObject::connect(&local_40,uVar2,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                     "1onWebStoreCatalogStateChanged(WebStore::CCatalogModel::State)",0);
    if (local_40 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    CAbstractTask::setWaitForSubTaskCompletion();
    FUN_1007469d0(uVar2,1);
  }
  return 0;
}

