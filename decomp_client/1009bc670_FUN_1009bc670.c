
void FUN_1009bc670(QObject *param_1,QObject *param_2)

{
  undefined4 *puVar1;
  Connection local_58 [8];
  code *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102233900;
  *(QObject **)(param_1 + 0x10) = param_2;
  QFutureWatcherBase::QFutureWatcherBase((QFutureWatcherBase *)(param_1 + 0x18),(QObject *)0x0);
  *(undefined ***)(param_1 + 0x18) = &PTR_metaObject_10226d0a0;
  QFutureInterfaceBase::QFutureInterfaceBase((QFutureInterfaceBase *)(param_1 + 0x28),0xe);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_10226d138;
  QFutureInterfaceBase::refT();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_1021e15e8;
  param_1[0x48] = (QObject)0x0;
  local_40 = PTR_finished_1021e13f0;
  local_38 = 0;
  local_50 = FUN_1009bc7f0;
  local_48 = 0;
  puVar1 = operator_new(0x20);
  *puVar1 = 1;
  *(code **)(puVar1 + 2) = FUN_1009bd1c0;
  *(code **)(puVar1 + 4) = FUN_1009bc7f0;
  *(undefined8 *)(puVar1 + 6) = 0;
  QObject::connectImpl
            (local_58,(QFutureWatcherBase *)(param_1 + 0x18),&local_40,param_1,&local_50,puVar1,0,0,
             PTR_staticMetaObject_1021e13e8);
  QMetaObject::Connection::~Connection(local_58);
  return;
}

