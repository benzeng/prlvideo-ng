
undefined8 FUN_1002b8100(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar3 = 0;
  if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar3 = param_1[4];
  }
  uVar2 = FUN_10018c280(lVar3);
  FUN_100321a70(uVar2,0,3);
  FUN_1002b74a0(param_1,0xffffffff);
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar2 = FUN_100748240();
  local_30 = (QArrayData *)QString::fromAscii_helper("win7look",8);
  uVar2 = FUN_100748290(uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002b81ac;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002b81ac:
  iVar1 = FUN_100746a60(uVar2);
  if (iVar1 == 2) {
    FUN_1002b7560(param_1);
    uVar2 = 0x80000009;
    if (*(int *)(param_1[0xb] + 0xc) != *(int *)(param_1[0xb] + 8)) {
      uVar2 = 0;
    }
    (**(code **)(*param_1 + 0xb0))(param_1,uVar2);
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

