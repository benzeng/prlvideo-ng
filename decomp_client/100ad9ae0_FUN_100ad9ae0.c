
void FUN_100ad9ae0(QObject *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  Connection local_28 [8];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10223a9f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10223aa80;
  uVar1 = FUN_100cd2260(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  param_1[0x28] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  FUN_100adac40(param_1 + 0x38);
  param_1[0x68] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  QObject::connect(local_28,param_1 + 0x38,"2GuestCursorChanged()",param_1,"1OnGuestCursorChanged()"
                   ,0);
  QMetaObject::Connection::~Connection(local_28);
  return;
}

