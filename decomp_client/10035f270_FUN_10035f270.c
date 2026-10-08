
void FUN_10035f270(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long local_38;
  long local_30;
  long local_28;
  
  uVar1 = FUN_10035da40(*(undefined8 *)(param_1 + 0x18));
  uVar1 = FUN_100319be0(uVar1);
  QObject::connect(&local_28,uVar1,"2vmMouseCursorHidden(const QString&)",param_1,
                   "1onMouseCursorHidden()",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,uVar1,
                     "2vmMouseCursorReceived(const QString&, PRL_IO_MOUSE_CURSOR, QByteArray)",
                     param_1,"1onMouseCursorSet(const QString&, PRL_IO_MOUSE_CURSOR, QByteArray)",0)
    ;
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,uVar1,
                     "2vmMouseCursorReceived(const QString&, PRL_IO_MOUSE_CURSOR, QByteArray)",
                     param_1,"1onMouseCursorSet(const QString&, PRL_IO_MOUSE_CURSOR, QByteArray)",0)
    ;
    if ((cVar2 != '\0') && (local_30 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      QObject::connect(&local_38,uVar1,"2vmMouseCursorMoved(const QPoint&)",param_1,
                       "1onMouseCursorMoved(const QPoint&)",0);
      if ((cVar2 != '\0') && (local_38 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10035f3b7;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,uVar1,"2vmMouseCursorMoved(const QPoint&)",param_1,
                   "1onMouseCursorMoved(const QPoint&)",0);
LAB_10035f3b7:
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

