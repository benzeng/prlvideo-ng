
void FUN_1007d0b60(undefined8 param_1)

{
  undefined8 uVar1;
  Connection local_20 [8];
  
  uVar1 = FUN_1006b56b0();
  uVar1 = FUN_1006b5700(uVar1);
  QObject::connect(local_20,uVar1,"2triggered( QAction * )",param_1,
                   "1onVmWindowActionTriggered( QAction * )",0);
  QMetaObject::Connection::~Connection(local_20);
  return;
}

