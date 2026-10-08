
void FUN_100255fd0(undefined8 *param_1)

{
  undefined8 uVar1;
  long local_20;
  
  CTaskCheckForProductUpdate::CTaskCheckForProductUpdate();
  *param_1 = &PTR_FUN_1022048f0;
  uVar1 = CMessageManager::instance();
  QObject::connect(&local_20,uVar1,
                   "2aboutToShowMessage(Messaging::MessageData,QWidget*,CMessageBoxWndBase*)",
                   param_1,
                   "1onAboutToShowMessage(Messaging::MessageData,QWidget*,CMessageBoxWndBase*)",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  return;
}

