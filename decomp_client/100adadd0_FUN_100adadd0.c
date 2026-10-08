
void FUN_100adadd0(QObject *param_1)

{
  Connection local_28 [8];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10223abe0;
  param_1[0x10] = (QObject)0x0;
  QTimer::QTimer((QTimer *)(param_1 + 0x18),(QObject *)0x0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x34] = (QObject)((byte)param_1[0x34] | 1);
  QObject::connect(local_28,(QTimer *)(param_1 + 0x18),"2timeout()",param_1,"1onDeactivateTimeout()"
                   ,0);
  QMetaObject::Connection::~Connection(local_28);
  return;
}

