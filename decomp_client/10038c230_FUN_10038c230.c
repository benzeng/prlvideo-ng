
void FUN_10038c230(long param_1)

{
  long in_RAX;
  long local_18;
  
  local_18 = in_RAX;
  QObject::connect(&local_18,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60),"2clicked()",param_1,
                   "1updateMirroringPixmap()",0);
  if (local_18 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_18);
  return;
}

