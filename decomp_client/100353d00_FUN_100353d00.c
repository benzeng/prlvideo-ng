
void FUN_100353d00(long param_1)

{
  Connection local_18 [8];
  
  QObject::connect(local_18,param_1 + 0x60,"2timeout()",param_1,"1requestNextImage()",0);
  QMetaObject::Connection::~Connection(local_18);
  return;
}

