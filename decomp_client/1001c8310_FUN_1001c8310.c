
void FUN_1001c8310(undefined8 param_1)

{
  Connection local_18 [8];
  
  QObject::connect(local_18,param_1,"2aboutToShow()",param_1,"1onAboutToShow()",0);
  QMetaObject::Connection::~Connection(local_18);
  return;
}

