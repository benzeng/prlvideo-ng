
void FUN_100ade540(QObject *param_1)

{
  long in_RAX;
  long local_28;
  
  local_28 = in_RAX;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10223ae40;
  QTimer::QTimer((QTimer *)(param_1 + 0x10),(QObject *)0x0);
  param_1[0x30] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x34) = 0xbb8000001f4;
  param_1[0x2c] = (QObject)((byte)param_1[0x2c] | 1);
  QObject::connect(&local_28,(QTimer *)(param_1 + 0x10),"2timeout()",param_1,"1onTimeout()",1);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

