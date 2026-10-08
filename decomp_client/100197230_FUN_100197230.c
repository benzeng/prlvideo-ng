
void * FUN_100197230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x70);
  FUN_1001f6dd0(pvVar1,param_1,param_2,param_3);
  CAbstractTask::execute();
  return pvVar1;
}

