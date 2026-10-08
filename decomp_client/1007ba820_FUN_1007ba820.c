
void FUN_1007ba820(undefined8 param_1,undefined8 param_2)

{
  Connection local_18 [8];
  
  QObject::connect(local_18,param_2,"2deviceActionTriggered(const CDeviceAction&)",param_1,
                   "1onDeviceActionTriggered(const CDeviceAction&)",0);
  QMetaObject::Connection::~Connection(local_18);
  return;
}

