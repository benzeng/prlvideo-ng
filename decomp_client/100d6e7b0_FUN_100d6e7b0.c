
void FUN_100d6e7b0(QObject *param_1,QObject *param_2)

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
  *(undefined ***)param_1 = &PTR_FUN_10225b990;
  auVar3._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar3._0_8_ = PTR_shared_null_1021e1288;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar3;
  this = (QProcess *)(param_1 + 0x20);
  QProcess::QProcess(this,param_1);
  param_1[0x30] = (QObject)0x0;
  local_80 = PTR_finished_1021e1598;
  local_78 = 0;
  local_90 = FUN_100d6ead0;
  local_88 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_100d6f700;
  *(code **)(puVar2 + 4) = FUN_100d6ead0;
  *(undefined8 *)(puVar2 + 6) = 0;
  puVar1 = PTR_staticMetaObject_1021e1580;
  QObject::connectImpl
            (&local_98,this,&local_80,param_1,&local_90,puVar2,0,0,PTR_staticMetaObject_1021e1580);
  if (local_98 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  local_60 = PTR_error_1021e1590;
  local_58 = 0;
  local_70 = FUN_100d6eb50;
  local_68 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_100d6f770;
  *(code **)(puVar2 + 4) = FUN_100d6eb50;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl(&local_a0,this,&local_60,param_1,&local_70,puVar2,0,0,puVar1);
  if (local_a0 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  local_40 = PTR_readyReadStandardOutput_1021e1588;
  local_38 = 0;
  local_50 = FUN_100d6ebe0;
  local_48 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_100d6f7e0;
  *(code **)(puVar2 + 4) = FUN_100d6ebe0;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl(&local_a8,this,&local_40,param_1,&local_50,puVar2,0,0,puVar1);
  if (local_a8 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  return;
}

