
void FUN_1009900e0(QObject *param_1,undefined4 param_2,QObject *param_3,QObject *param_4)

{
  QTimer *this;
  undefined8 uVar1;
  undefined4 *puVar2;
  Connection local_50 [16];
  code *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_102233c40;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar1 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_3;
  param_1[0x28] = (QObject)0x0;
  this = (QTimer *)(param_1 + 0x30);
  QTimer::QTimer(this,(QObject *)0x0);
  param_1[0x50] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  QTimer::setInterval((int)this);
  param_1[0x4c] = (QObject)((byte)param_1[0x4c] | 1);
  local_30 = PTR_timeout_1021e14c0;
  local_28 = 0;
  local_40 = FUN_100990240;
  local_38 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_100990410;
  *(code **)(puVar2 + 4) = FUN_100990240;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl
            (local_50,this,&local_30,param_1,&local_40,puVar2,0,0,PTR_staticMetaObject_1021e14b8);
  QMetaObject::Connection::~Connection(local_50);
  return;
}

