
void FUN_100999d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  char *pcVar1;
  long local_48;
  undefined1 local_39;
  QVariant local_38;
  
  pcVar1 = (char *)qt_qFindChild_helper(param_2,param_3,PTR_staticMetaObject_1021e1390);
  if (pcVar1 != (char *)0x0) {
    if (param_5 != '\0') {
      local_39 = 1;
      QVariant::QVariant(&local_38,1,&local_39,0);
      QObject::setProperty(pcVar1,(QVariant *)"checked");
      QVariant::~QVariant(&local_38);
    }
    QObject::connect(&local_48,pcVar1,"2toggled( bool )",param_1,param_4,0);
    if (local_48 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
  }
  return;
}

