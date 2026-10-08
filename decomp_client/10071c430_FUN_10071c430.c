
void FUN_10071c430(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  long local_38;
  long local_30;
  
  uVar2 = FUN_100060bb0();
  cVar1 = '\0';
  QObject::connect(&local_30,uVar2,"2contextChanged(QPointer<QObject>, QPointer<QObject>)",param_1,
                   "1onAppContextChanged(QPointer<QObject>, QPointer<QObject>)",0);
  if (local_30 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_38,DAT_1023108e0,
                   "2keyboardGrabStateChanged(QString, bool, GUI::InputStateChangeReason)",param_1,
                   "1onKeyboardGrabStateChanged(QString, bool, GUI::InputStateChangeReason)",0);
  if ((cVar1 != '\0') && (local_38 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

