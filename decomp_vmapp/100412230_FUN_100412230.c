
void FUN_100412230(QObject *param_1,QObject *param_2)

{
  QProcess *this;
  undefined *puVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  long local_a8;
  long local_a0;
  long local_98;
  code *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_100bc04b0;
  auVar3._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar3._0_8_ = PTR_shared_null_100ba20d0;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar3;
  this = (QProcess *)(param_1 + 0x20);
  QProcess::QProcess(this,param_1);
  param_1[0x30] = (QObject)0x0;
  local_80 = PTR_finished_100ba2168;
  local_78 = 0;
  local_90 = FUN_100412550;
  local_88 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_100413180;
  *(code **)(puVar2 + 4) = FUN_100412550;
  *(undefined8 *)(puVar2 + 6) = 0;
  puVar1 = PTR_staticMetaObject_100ba2150;
  QObject::connectImpl
            (&local_98,this,&local_80,param_1,&local_90,puVar2,0,0,PTR_staticMetaObject_100ba2150);
  if (local_98 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  local_60 = PTR_error_100ba2160;
  local_58 = 0;
  local_70 = FUN_1004125d0;
  local_68 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_1004131f0;
  *(code **)(puVar2 + 4) = FUN_1004125d0;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl(&local_a0,this,&local_60,param_1,&local_70,puVar2,0,0,puVar1);
  if (local_a0 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  local_40 = PTR_readyReadStandardOutput_100ba2158;
  local_38 = 0;
  local_50 = FUN_100412660;
  local_48 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_100413260;
  *(code **)(puVar2 + 4) = FUN_100412660;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl(&local_a8,this,&local_40,param_1,&local_50,puVar2,0,0,puVar1);
  if (local_a8 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  return;
}

