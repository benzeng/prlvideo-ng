
void FUN_10066b6c0(undefined8 param_1,long param_2)

{
  char cVar1;
  long local_30;
  long local_28;
  
  if (param_2 != 0) {
    QObject::connect(&local_28,param_2,"2currentIndexChanged(int)",param_1,
                     "1onSelectionChanged(int)",0x80);
    if (local_28 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_28);
      QObject::connect(&local_30,param_2,"2itemDoubleClicked(int)",param_1,
                       "1onItemDoubleClicked(int)",0x80);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_28);
      QObject::connect(&local_30,param_2,"2itemDoubleClicked(int)",param_1,
                       "1onItemDoubleClicked(int)",0x80);
      if ((cVar1 != '\0') && (local_30 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  return;
}

