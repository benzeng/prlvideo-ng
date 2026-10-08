
undefined8 FUN_1002ab140(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar2 = FUN_100748240();
  local_30 = (QArrayData *)QString::fromAscii_helper("is",2);
  uVar2 = FUN_100748290(uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002ab1b1;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002ab1b1:
  iVar1 = FUN_100746a60(uVar2);
  if (iVar1 == 2) {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  else {
    QObject::connect(&local_38,uVar2,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                     "1onWebStoreCatalogStateChanged(WebStore::CCatalogModel::State)",0);
    if (local_38 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    FUN_1007469d0(uVar2,0);
  }
  return 0;
}

