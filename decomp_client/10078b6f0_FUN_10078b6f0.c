
void FUN_10078b6f0(long *param_1)

{
  long in_RAX;
  long lVar1;
  long local_18;
  
  local_18 = in_RAX;
  lVar1 = (**(code **)(*param_1 + 0x60))();
  if (lVar1 != 0) {
    QObject::connect(&local_18,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onFetchRequestCompleted(PRL_RESULT)",0);
    if (local_18 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_18);
  }
  return;
}

