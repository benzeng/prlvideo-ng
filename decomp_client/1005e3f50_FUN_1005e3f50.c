
void FUN_1005e3f50(QObject *param_1,long param_2,QObject *param_3)

{
  undefined8 uVar1;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f4580;
  *(long *)(param_1 + 0x10) = param_2;
  uVar1 = FUN_1005ec990(param_2 + 0x38);
  local_38 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
  uVar1 = FUN_1005b8a40(uVar1,&local_38);
  QObject::connect(&local_30,uVar1,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                   "1onCatalogStateChanged(WebStore::CCatalogModel::State)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

