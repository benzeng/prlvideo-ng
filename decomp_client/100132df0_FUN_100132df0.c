
void FUN_100132df0(undefined8 *param_1)

{
  Connection local_28 [16];
  
  FUN_100132560();
  *param_1 = &PTR_FUN_1021f9b50;
  param_1[2] = &PTR_FUN_1021f9d10;
  FUN_100132ec0(param_1);
  FUN_100133060(param_1);
  FUN_100133240(param_1);
  QObject::connect(local_28,param_1,"2currentIndexChanged(int, int)",param_1,
                   "1onCurrentIndexChanged(int, int)",0);
  QMetaObject::Connection::~Connection(local_28);
  return;
}

