
undefined4 entry(undefined4 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  long local_98;
  undefined1 local_90 [72];
  char local_48;
  undefined1 local_40 [28];
  undefined4 local_24;
  
  local_24 = param_1;
  FUN_100b5e1a0(0x1000);
  FUN_1001cd8b0(local_40,param_1,param_2);
  FUN_1001cda40(local_90,local_40);
  uVar2 = 0x80000003;
  if (local_48 != '\0') {
    cVar1 = FUN_1001cd9f0(local_40);
    if (cVar1 == '\0') {
      FUN_1001cddd0(local_40);
      pvVar3 = operator_new(0x30);
      FUN_1001d4f70(pvVar3,&local_24,param_2);
      QObject::connect(&local_98,*(undefined8 *)PTR_self_1021e1388,"2aboutToQuit()",local_40,
                       "1deinit()",0);
      if (local_98 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_98);
      uVar2 = QApplication::exec();
      FUN_1001ce360(local_40);
    }
    else {
      uVar2 = 0;
      FUN_1001cda10(local_40,param_1,param_2);
    }
  }
  FUN_1001091d0(local_90);
  FUN_1001cd920(local_40);
  return uVar2;
}

