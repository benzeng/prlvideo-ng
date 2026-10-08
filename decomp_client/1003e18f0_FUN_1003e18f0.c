
void FUN_1003e18f0(CMappingController *param_1,undefined8 param_2,CMappingModel *param_3,
                  undefined8 param_4,QObject *param_5)

{
  char cVar1;
  void *pvVar2;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  CMappingController::CMappingController(param_1,param_3,param_5);
  *(undefined ***)param_1 = &PTR_FUN_1022108c0;
  pvVar2 = operator_new(0x20);
  FUN_1003e0110(pvVar2,param_1,param_2,param_1);
  *(void **)(param_1 + 0x18) = pvVar2;
  QObject::connect(&local_30,param_4,"2deviceAdded(PRL_DEVICE_TYPE,int)",pvVar2,
                   "1onDeviceAdded(PRL_DEVICE_TYPE,int)",0);
  if (local_30 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,param_4,"2deviceRemoved(PRL_DEVICE_TYPE,int)",
                   *(undefined8 *)(param_1 + 0x18),"1onDevicePresenceChanged(PRL_DEVICE_TYPE,int)",0
                  );
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_38 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  QObject::connect(&local_40,param_4,"2encryptionFinished()",*(undefined8 *)(param_1 + 0x18),
                   "1onEncryptionFinished()",0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_40 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,param_4,"2editXmlModelObjectFinished(bool)",
                   *(undefined8 *)(param_1 + 0x18),"1onEditXmlModelObjectFinished(bool)",0);
  if ((cVar1 != '\0') && (local_48 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

