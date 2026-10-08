
void * FUN_10068c7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  Connection local_58 [8];
  code *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Wait Keys changes in Account");
  pvVar1 = operator_new(0x198);
  FUN_10062b420(pvVar1,param_2,param_3,param_4);
  local_40 = PTR_taskFinished_1021e1300;
  local_38 = 0;
  local_50 = FUN_10068c8d0;
  local_48 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_10068d280;
  *(code **)(puVar2 + 4) = FUN_10068c8d0;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl
            (local_58,pvVar1,&local_40,param_1,&local_50,puVar2,0,0,PTR_staticMetaObject_1021e1308);
  QMetaObject::Connection::~Connection(local_58);
  CAbstractTask::execute();
  return pvVar1;
}

