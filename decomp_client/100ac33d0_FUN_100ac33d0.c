
undefined8 FUN_100ac33d0(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_20;
  
  FUN_100ac7cc0(param_1 + 0x15e);
  FUN_100ac7e30(param_1 + 0x160);
  cVar1 = FUN_100ad4780(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    QObject::connect(&local_20,param_1[3],"2ActiveSpaceChanged()",param_1,"1OnActiveSpaceChanged()",
                     2);
    if (local_20 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    if ((cVar1 == '\0') && (0 < DAT_10230ffd0)) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"Failed to connect to ActiveSpaceChanged signal");
    }
    FUN_100ac2fc0(param_1);
    (**(code **)(*param_1 + 0xb0))(param_1);
    uVar2 = 1;
  }
  return uVar2;
}

