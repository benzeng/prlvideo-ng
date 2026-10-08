
void * FUN_100770dd0(undefined8 param_1,int param_2,undefined8 param_3)

{
  void *pvVar1;
  
  if (param_2 == 1) {
    pvVar1 = operator_new(0x38);
    FUN_100773480(pvVar1,param_3,0);
  }
  else if (param_2 == 0) {
    pvVar1 = operator_new(0x38);
    FUN_1007727f0(pvVar1,param_3,0);
  }
  else {
    pvVar1 = (void *)0x0;
    FUN_100df99c0("","prl_client_app",0,"Failed to create the page with unknown id %d",param_2);
  }
  return pvVar1;
}

