
void FUN_1005a6be0(long param_1)

{
  long in_RAX;
  long local_18;
  
  local_18 = in_RAX;
  QObject::connect(&local_18,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20),"2stateChanged(int)",
                   param_1,"1onDontShowAgainStateChanged()",0);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return;
}

