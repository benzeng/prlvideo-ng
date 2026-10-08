
void * FUN_10068c950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  Connection local_50 [8];
  code *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Get subscriptions to extend");
  pvVar1 = operator_new(0x50);
  FUN_10062d250(pvVar1,param_2,param_3);
  local_38 = PTR_taskFinished_1021e1300;
  local_30 = 0;
  local_48 = FUN_10068ca60;
  local_40 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_10068d280;
  *(code **)(puVar2 + 4) = FUN_10068ca60;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl
            (local_50,pvVar1,&local_38,param_1,&local_48,puVar2,0,0,PTR_staticMetaObject_1021e1308);
  QMetaObject::Connection::~Connection(local_50);
  CAbstractTask::execute();
  return pvVar1;
}

