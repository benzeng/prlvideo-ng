
void FUN_1001c57d0(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  long local_38;
  long local_30;
  undefined1 local_28 [7];
  undefined1 local_21;
  
  QObject::connect(&local_30,param_2,
                   "2vmConfigurationChanged(const QString &, const CVmConfiguration &)",param_1,
                   "1onVmConfigurationChanged(const QString &, const CVmConfiguration &)",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
LAB_1001c582a:
    FUN_100df99c0("","prl_client_app",0,"Failed to connect to Vm configuration signal");
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    if (cVar1 == '\0') goto LAB_1001c582a;
  }
  QObject::connect(&local_38,param_2,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                   ,param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    if (cVar1 != '\0') goto LAB_1001c58b0;
  }
  FUN_100df99c0("","prl_client_app",0,"Failed to connect to Vm state signal");
LAB_1001c58b0:
  uVar3 = FUN_10018c2b0(param_2);
  cVar1 = FUN_1001c4d50(uVar3);
  if (cVar1 != '\0') {
    FUN_100188480(&local_40,param_2);
    FUN_100062d00(param_1 + 0x10,&local_40,local_28);
    cVar1 = FUN_1001c5c70();
    if (cVar1 != '\0') {
      cVar1 = FUN_1001c4dd0(param_1);
      cVar2 = FUN_1001c5c80();
      if (cVar1 == '\0') {
        if (cVar2 != '\0') {
          FUN_1001c6400();
        }
      }
      else if (cVar2 == '\0') {
        FUN_1001c6010(1);
      }
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
  return;
}

