
void FUN_1007baa40(undefined8 param_1)

{
  Connection local_18 [8];
  
  QObject::connect(local_18,param_1,"2recreateActions()",param_1,"1onRecreateActions()",2);
  QMetaObject::Connection::~Connection(local_18);
  return;
}

