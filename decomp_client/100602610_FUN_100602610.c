
void * FUN_100602610(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  switch(param_2) {
  case 0:
    pvVar1 = operator_new(0x38);
    FUN_100605270(pvVar1,param_3,0);
    break;
  case 1:
    pvVar1 = operator_new(0x38);
    FUN_100604d20(pvVar1,param_3,0);
    break;
  case 2:
    pvVar1 = operator_new(0x38);
    FUN_1006063a0(pvVar1,param_3,0);
    break;
  case 3:
    pvVar1 = operator_new(0x38);
    FUN_100604790(pvVar1,param_3,0);
    break;
  default:
    pvVar1 = (void *)0x0;
    FUN_100df99c0("","prl_client_app",0,"Failed to create the page with unknown id %d",param_2);
  }
  return pvVar1;
}

