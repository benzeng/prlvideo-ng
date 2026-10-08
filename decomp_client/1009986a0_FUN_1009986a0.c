
void FUN_1009986a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  Connection local_40 [8];
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  
  FUN_1009982c0();
  *param_1 = &PTR_FUN_102234270;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = param_4;
  puVar1 = PTR_completeChanged_1021e1400;
  local_28 = FUN_1009bf300;
  local_20 = 0;
  local_38 = PTR_completeChanged_1021e1400;
  local_30 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_1009996a0;
  *(undefined **)(puVar2 + 4) = puVar1;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl(local_40,param_1,&local_28,param_1,&local_38,puVar2,0,0,&PTR_PTR_102234230);
  QMetaObject::Connection::~Connection(local_40);
  return;
}

