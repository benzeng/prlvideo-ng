
void FUN_1000a92d0(long *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  QObject::connect(&local_38,param_2,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                   ,param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
  if ((local_38 == 0) || (cVar1 = QMetaObject::Connection::isConnected_helper(), cVar1 == '\0')) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
LAB_1000a944a:
    FUN_100df99c0("SGAD","prl_client_app",0,"Error: failed to connect vm slots");
  }
  else {
    QObject::connect(&local_40,param_2,"2vmCmdStartCompleted(PRL_RESULT, const CRequestInfo &)",
                     param_1,"1onVmCmdStartCompleted(PRL_RESULT, const CRequestInfo &)",0);
    bVar2 = 1;
    if ((local_40 != 0) && (cVar1 = QMetaObject::Connection::isConnected_helper(), cVar1 != '\0')) {
      QObject::connect(&local_48,param_2,
                       "2vmStartChecksCompleted(VIRTUAL_MACHINE_STATE, PRL_RESULT)",param_1,
                       "1onVmStartChecksCompleted(VIRTUAL_MACHINE_STATE, PRL_RESULT)",0);
      bVar2 = 1;
      if ((local_48 != 0) && (cVar1 = QMetaObject::Connection::isConnected_helper(), cVar1 != '\0'))
      {
        QObject::connect(&local_50,param_2,"2vmConfigurationChanged(const CVmConfiguration &)",
                         param_1,"1onVmConfigurationChanged(const CVmConfiguration &)",0);
        bVar2 = 1;
        if ((local_50 != 0) &&
           (cVar1 = QMetaObject::Connection::isConnected_helper(), cVar1 != '\0')) {
          QObject::connect(&local_58,param_2,
                           "2vmToolsStateChanged(PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",param_1,
                           "1onVmToolsStateChanged(PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",0);
          bVar2 = 1;
          if (local_58 != 0) {
            bVar2 = QMetaObject::Connection::isConnected_helper();
            bVar2 = bVar2 ^ 1;
          }
          QMetaObject::Connection::~Connection((Connection *)&local_58);
        }
        QMetaObject::Connection::~Connection((Connection *)&local_50);
      }
      QMetaObject::Connection::~Connection((Connection *)&local_48);
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    if (bVar2 != 0) goto LAB_1000a944a;
  }
  FUN_100188480(&local_60,param_2);
  iVar3 = FUN_1000ab900(param_1 + 4,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a94b6;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000a94b6:
  if (iVar3 != 0) {
    uVar4 = FUN_10018c2b0(param_2);
    (**(code **)(*param_1 + 0x78))(param_1,uVar4);
  }
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
  return;
}

