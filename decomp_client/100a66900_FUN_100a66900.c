
void FUN_100a66900(QObject *param_1,QObject *param_2)

{
  QTimer *this;
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  long local_58;
  long local_50;
  long local_48;
  long local_40 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100a4a020();
  *(undefined ***)param_1 = &PTR_FUN_102239080;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102239100;
  uVar3 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(QObject **)(param_1 + 0x28) = param_2;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e1288;
  *(undefined2 *)(param_1 + 0x38) = 0x100;
  param_1[0x3a] = (QObject)0x0;
  this = (QTimer *)(param_1 + 0x40);
  QTimer::QTimer(this,(QObject *)0x0);
  if (DAT_10226ca68 == 0) {
    DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
  }
  FUN_10009bee0("unsigned",0,0);
  FUN_1003193b0(local_40,param_2);
  FUN_100a4a120(param_1 + 0x10,local_40[0],0x11);
  if (local_40[0] != 0) {
    _PrlHandle_Free();
  }
  QObject::connect(&local_48,param_1,"2sigDataReceived(const SmartCharPtr_t, const unsigned)",
                   param_1,"1onDataReceived(const SmartCharPtr_t, const unsigned)",2);
  bVar1 = 1;
  if (local_48 != 0) {
    bVar1 = QMetaObject::Connection::isConnected_helper();
    bVar1 = bVar1 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar3 = FUN_100319390(param_2);
  QObject::connect(&local_50,uVar3,"2vmConfigurationChanged(const CVmConfiguration &)",param_1,
                   "1onVmConfigurationChanged(const CVmConfiguration &)",0);
  if (bVar1 == 0) {
    if (local_50 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  else {
    cVar2 = '\0';
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  param_1[0x5c] = (QObject)((byte)param_1[0x5c] & 0xfe);
  QTimer::setInterval((int)this);
  QObject::connect(&local_58,this,"2timeout()",param_1,"1onVmIdleTimeout()",0);
  if ((cVar2 != '\0') && (local_58 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  uVar3 = FUN_100319390(param_2);
  uVar3 = FUN_10018c2b0(uVar3);
  FUN_100a66bd0(param_1,uVar3);
  return;
}

