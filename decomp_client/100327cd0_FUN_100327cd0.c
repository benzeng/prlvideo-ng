
void FUN_100327cd0(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  Connection local_30 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220b9e0;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  QTimer::QTimer((QTimer *)(param_1 + 0x28),(QObject *)0x0);
  param_1[0x44] = (QObject)((byte)param_1[0x44] | 1);
  QObject::connect(local_30,(QTimer *)(param_1 + 0x28),"2timeout()",param_1,
                   "1onGateOpeningTimeout()",0);
  QMetaObject::Connection::~Connection(local_30);
  return;
}

