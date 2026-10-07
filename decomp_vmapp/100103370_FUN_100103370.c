
void FUN_100103370(QThread *param_1)

{
  Connection local_20 [8];
  
  QObject::thread();
  QObject::moveToThread(param_1);
  QObject::connect(local_20,param_1,"2beginCollecting()",param_1,"1onStartCollecting()",2);
  QMetaObject::Connection::~Connection(local_20);
  FUN_100117ca0(param_1);
  return;
}

