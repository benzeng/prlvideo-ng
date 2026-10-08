
void FUN_100793610(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  long local_40;
  long local_38 [2];
  
  FUN_100790360(param_1,0);
  *param_1 = &PTR_FUN_10222c120;
  param_1[4] = 0;
  param_1[3] = 0;
  QObject::connect(local_38,*(undefined8 *)PTR_self_1021e1388,"2focusChanged(QWidget*,QWidget*)",
                   param_1,"1onFocusChanged(QWidget*,QWidget*)",0);
  if (local_38[0] == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_38);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(&local_40,DAT_1023108e0,"2coherenceWndActivated(const QString&)",param_1,
                   "1onCoherenceWindowActivated(const QString&)",0);
  if ((cVar1 != '\0') && (local_40 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

