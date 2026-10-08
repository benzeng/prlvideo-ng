
void FUN_100607fb0(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_100152a20(uVar2,param_2);
  if ((param_3 == 0) && (lVar3 != 0)) {
    uVar2 = FUN_10016f500(lVar3);
    QObject::connect(&local_38,uVar2,
                     "2licenseChanged(const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                     ,param_1,"1onLicenseChanged()",0);
    if (local_38 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      QObject::connect(&local_40,lVar3,"2serverStateChanged(GUI::ServerState)",param_1,
                       "1onServerStateChanged(GUI::ServerState)",0);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      QObject::connect(&local_40,lVar3,"2serverStateChanged(GUI::ServerState)",param_1,
                       "1onServerStateChanged(GUI::ServerState)",0);
      if ((cVar1 != '\0') && (local_40 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    FUN_10015a2b0(&local_48,lVar3);
    FUN_10060d6d0(param_1,&local_48);
    FUN_10060f560(param_1,&local_48);
    FUN_1006103a0(param_1,&local_48);
    FUN_100609af0(param_1,&local_48,1);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
  return;
}

