
undefined8 FUN_100259070(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
    return 0x3bfa;
  }
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to get local server instance");
    return 0;
  }
  uVar3 = FUN_10016f500(lVar4);
  cVar1 = FUN_10061b4d0(uVar3,0x80);
  if ((cVar1 != '\0') && (iVar2 = CustomUpdateServerInfo::policy(), iVar2 == 2)) {
    CustomUpdateServerInfo::url();
    QString::operator=((QString *)(param_1 + 0x38),&local_40);
    if (*(int *)local_40.field0_0x0 == -1) {
      return 0;
    }
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    return 0;
  }
  cVar1 = FUN_1006272c0();
  if (cVar1 == '\0') {
    uVar3 = FUN_10016f500(lVar4);
    cVar1 = FUN_10061b4d0(uVar3,0x8000);
    if (cVar1 == '\0') {
      return 0x3bfa;
    }
    FUN_100df99c0("","prl_client_app",0,"Check update for subscription");
    QString::fromUtf8_helper((char *)&local_38,0x1de02e9);
    QString::operator=((QString *)(param_1 + 0x38),&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return 0;
        }
        local_29 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
    return 0;
  }
  uVar3 = FUN_100748240();
  local_48 = (QArrayData *)QString::fromAscii_helper("updates",7);
  uVar3 = FUN_100748290(uVar3,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100259193;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100259193:
  FUN_1007469d0(uVar3,1);
  CAbstractTask::setWaitForSubTaskCompletion();
  QObject::connect(&local_50,uVar3,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                   "1onWebStoreCatalogStateChanged(WebStore::CCatalogModel::State)",0);
  if (local_50 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  return 0;
}

