
void FUN_100ac8f10(undefined8 *param_1)

{
  QTimer *this;
  QTimer *this_00;
  char cVar1;
  long local_38;
  long local_30;
  
  FUN_100adadd0();
  *param_1 = &PTR_FUN_10223b1b0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  param_1[9] = 0;
  this = (QTimer *)(param_1 + 10);
  QTimer::QTimer(this,(QObject *)0x0);
  this_00 = (QTimer *)(param_1 + 0xe);
  QTimer::QTimer(this_00,(QObject *)0x0);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((long)param_1 + 0x92) = 0;
  *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 1;
  QTimer::setInterval((int)this);
  QObject::connect(&local_30,this,"2timeout()",param_1,"1onStubDeactivateTimeout()",0);
  if (local_30 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  *(byte *)((long)param_1 + 0x8c) = *(byte *)((long)param_1 + 0x8c) | 1;
  QTimer::setInterval((int)this_00);
  QObject::connect(&local_38,this_00,"2timeout()",param_1,"1onWndDeactivateTimeout()",0);
  if ((cVar1 != '\0') && (local_38 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

