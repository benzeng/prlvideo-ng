
void FUN_1004bdd20(long param_1)

{
  long in_RAX;
  long local_18;
  
  local_18 = in_RAX;
  QObject::connect(&local_18,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38),"2clicked(bool)",
                   param_1,"1onOpenPreferences()",0);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return;
}

