
void FUN_100a65d70(QObject *param_1,QObject *param_2)

{
  char cVar1;
  QObject QVar2;
  undefined8 uVar3;
  long local_58;
  long local_50;
  long local_48;
  long local_40 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100a4a020(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_FUN_102238f10;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102238fa0;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_102238fd8;
  *(undefined2 *)(param_1 + 0x28) = 0;
  uVar3 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(QObject **)(param_1 + 0x38) = param_2;
  FUN_1003193e0(param_1 + 0x40,param_2);
  FUN_100a65ca0(param_1 + 0x48,param_1 + 0x20);
  FUN_1003193b0(local_40,param_2);
  FUN_100a4a120(param_1 + 0x10,local_40[0],0xe);
  if (local_40[0] != 0) {
    _PrlHandle_Free();
  }
  FUN_10009c520("SmartPtr<char>",0,0);
  FUN_100acde40("CVmConfiguration",0,0);
  QObject::connect(&local_48,param_1,"2sigDataReceived(const SmartPtr<char> &, unsigned)",param_1,
                   "1onDataReceived(const SmartPtr<char> &, unsigned)",2);
  if (local_48 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar3 = FUN_100319390(param_2);
  QObject::connect(&local_50,uVar3,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                   "1onVmConfigurationChanged(const CVmConfiguration&)",2);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_50 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar3 = FUN_100319390(param_2);
  QObject::connect(&local_58,uVar3,"2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                   param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",2);
  if ((cVar1 != '\0') && (local_58 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  QVar2 = (QObject)FUN_100a66030(param_1);
  param_1[0x2a] = QVar2;
  return;
}

