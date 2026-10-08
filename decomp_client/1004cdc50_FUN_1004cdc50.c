
void FUN_1004cdc50(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_38;
  long local_30;
  long local_28;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38);
  uVar2 = FUN_10044b340();
  uVar2 = FUN_1003b0b00(uVar2);
  QObject::connect(&local_28,uVar3,"2clicked()",uVar2,"1editAdvancedApplications()",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xa0);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_30,uVar3,"2clicked()",uVar2,"1installSafariPlugin()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xa0);
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    QObject::connect(&local_30,uVar3,"2clicked()",uVar2,"1installSafariPlugin()",0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      uVar3 = FUN_10044b340(param_1);
      uVar3 = FUN_1003b0b00(uVar3);
      QObject::connect(&local_38,uVar3,
                       "2safariPluginUpdated(CTaskManageOpenInIEPlugin::PluginStatus)",param_1,
                       "1updateInstallIePluginButton(CTaskManageOpenInIEPlugin::PluginStatus)",0);
      if ((cVar1 != '\0') && (local_38 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1004cddf9;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  uVar3 = FUN_10044b340(param_1);
  uVar3 = FUN_1003b0b00(uVar3);
  QObject::connect(&local_38,uVar3,"2safariPluginUpdated(CTaskManageOpenInIEPlugin::PluginStatus)",
                   param_1,"1updateInstallIePluginButton(CTaskManageOpenInIEPlugin::PluginStatus)",0
                  );
LAB_1004cddf9:
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar3 = FUN_10044b340(param_1);
  uVar3 = FUN_1003b0b00(uVar3);
  FUN_1003adb90(uVar3);
  return;
}

