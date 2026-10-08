
void FUN_10038ff60(long param_1)

{
  long in_RAX;
  long local_18;
  
  local_18 = in_RAX;
  QObject::connect(&local_18,*(undefined8 *)(param_1 + 0x160),"2needReadjustSize()",param_1,
                   "1onNeedReadjustSize()",2);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return;
}

