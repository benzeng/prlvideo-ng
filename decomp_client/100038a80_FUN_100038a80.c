
void FUN_100038a80(QObject *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  Connection local_50 [8];
  code *local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined **)param_1 = &DAT_10226c150;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15d0;
  uVar1 = FUN_10098ae20();
  local_38 = FUN_10098d5e0;
  local_30 = 0;
  local_48 = FUN_100038ba0;
  local_40 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_100039c60;
  *(code **)(puVar2 + 4) = FUN_100038ba0;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl
            (local_50,uVar1,&local_38,param_1,&local_48,puVar2,0,0,&PTR_staticMetaObject_1022333d0);
  QMetaObject::Connection::~Connection(local_50);
  return;
}

