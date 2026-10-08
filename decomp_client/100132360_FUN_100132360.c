
void FUN_100132360(undefined8 param_1)

{
  Connection local_18 [8];
  
  QObject::connect(local_18,param_1,"2triggered(bool)",param_1,"1onActionTriggered()",0);
  QMetaObject::Connection::~Connection(local_18);
  return;
}

