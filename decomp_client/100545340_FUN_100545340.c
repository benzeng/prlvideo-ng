
void FUN_100545340(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  FUN_100525c10();
  cVar1 = '\0';
  QObject::connect(&local_20,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x58),"2stateChanged(int)",
                   *(undefined8 *)(param_1 + 0x38),"1onPreprocessedValueChanged()",0);
  if (local_20 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18),"2toggled(bool)",
                   param_1,"1onEnableSpokenCommands(bool)",0);
  if ((cVar1 == '\0') || (local_28 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),"2clicked()",
                     param_1,"1onRestoreHiddenMessages()",0);
LAB_100545507:
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x30),"2submitFinished( PRL_RESULT )",
                     param_1,"1onSubmitFinished( PRL_RESULT )",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),"2clicked()",
                     param_1,"1onRestoreHiddenMessages()",0);
    if ((cVar1 == '\0') || (local_30 == 0)) goto LAB_100545507;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x30),"2submitFinished( PRL_RESULT )",
                     param_1,"1onSubmitFinished( PRL_RESULT )",0);
    if ((cVar1 != '\0') && (local_38 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar2 = CMessageManager::instance();
      QObject::connect(&local_40,uVar2,
                       "2messageClosed(const Messaging::MessageData&, Messaging::ButtonID)",param_1,
                       "1updateRestoreHiddenButton()",0);
      if ((cVar1 != '\0') && (local_40 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10054555d;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar2 = CMessageManager::instance();
  QObject::connect(&local_40,uVar2,
                   "2messageClosed(const Messaging::MessageData&, Messaging::ButtonID)",param_1,
                   "1updateRestoreHiddenButton()",0);
LAB_10054555d:
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

