
void FUN_1007880f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long in_RAX;
  long local_28;
  
  local_28 = in_RAX;
  FUN_100787900();
  *param_1 = &PTR_FUN_10222b408;
  QObject::connect(&local_28,param_3,"2serverStateChanged(GUI::ServerState)",param_1,
                   "1updateSubscriptionState()",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

