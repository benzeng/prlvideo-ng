
void * FUN_100796290(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = FUN_100795f20();
  if (lVar1 == 0) {
    pvVar3 = (void *)0x0;
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: Cannot cancel appliance install, server instance is 0");
  }
  else {
    lVar2 = FUN_100795470(param_1,lVar1,param_2);
    if (lVar2 != 0) {
      FUN_10079d6a0(lVar2);
    }
    pvVar3 = operator_new(0x38);
    FUN_10023f880(pvVar3,lVar1,param_2,0);
    CAbstractTask::execute();
  }
  return pvVar3;
}

