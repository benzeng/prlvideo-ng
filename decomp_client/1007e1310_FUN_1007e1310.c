
undefined8 FUN_1007e1310(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar2 = FUN_100748240();
  local_28 = (QArrayData *)QString::fromAscii_helper("toolbox",7);
  uVar2 = FUN_100748290(uVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007e137a;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1007e137a:
  iVar1 = FUN_100746a60(uVar2);
  if (iVar1 != 2) {
    QObject::connect(&local_30,uVar2,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                     "1onWebStoreCatalogStateChanged(WebStore::CCatalogModel::State)",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    CAbstractTask::setWaitForSubTaskCompletion();
    FUN_1007469d0(uVar2,0);
  }
  return 0;
}

