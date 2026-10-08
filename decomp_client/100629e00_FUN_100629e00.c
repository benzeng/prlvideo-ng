
undefined8 FUN_100629e00(long param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  Connection local_48 [8];
  code *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  pvVar1 = operator_new(0x50);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10062a7f0(pvVar1,uVar3,param_1 + 0x38);
  local_30 = PTR_taskFinished_1021e1300;
  local_28 = 0;
  local_40 = FUN_100629f00;
  local_38 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_10062a500;
  *(code **)(puVar2 + 4) = FUN_100629f00;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl
            (local_48,pvVar1,&local_30,param_1,&local_40,puVar2,0,0,PTR_staticMetaObject_1021e1308);
  QMetaObject::Connection::~Connection(local_48);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  return 0;
}

