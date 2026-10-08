
void FUN_10099f280(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  Connection local_50 [8];
  code *local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  
  uVar1 = FUN_1009983c0();
  local_38 = FUN_1009bec80;
  local_30 = 0;
  local_48 = FUN_10099f350;
  local_40 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_1009a59a0;
  *(code **)(puVar2 + 4) = FUN_10099f350;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl
            (local_50,uVar1,&local_38,param_1,&local_48,puVar2,0,0,&PTR_staticMetaObject_102233d80);
  QMetaObject::Connection::~Connection(local_50);
  FUN_1009992a0(param_1,param_2);
  return;
}

