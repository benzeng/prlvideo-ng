
void FUN_100727f10(long param_1)

{
  char cVar1;
  long local_28;
  long local_20;
  
  QObject::connect(&local_20,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x50),"2accepted()",param_1
                   ,"1onCloneVm()",0);
  if (local_20 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30),"2clicked()",
                     param_1,"1onBrowseVmDir()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30),"2clicked()",
                     param_1,"1onBrowseVmDir()",0);
    if ((cVar1 != '\0') && (local_28 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_28);
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_100727fec;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
LAB_100727fec:
  FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","bRes",
                "CloneVm/CCloneVmParametersDialog.cpp",0x85,"setupSignals");
  return;
}

