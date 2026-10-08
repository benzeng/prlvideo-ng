
void * FUN_100688d70(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  switch(param_2) {
  case 0:
    pvVar1 = operator_new(0x40);
    FUN_10066b4a0(pvVar1,param_3);
    break;
  case 1:
    pvVar1 = operator_new(0x50);
    FUN_1006401b0(pvVar1,param_3);
    break;
  case 2:
    pvVar1 = operator_new(0x50);
    FUN_100646c00(pvVar1,param_3);
    break;
  case 3:
    pvVar1 = operator_new(0x58);
    FUN_10064af40(pvVar1,param_3);
    break;
  case 4:
    pvVar1 = operator_new(0x60);
    FUN_10064f180(pvVar1,param_3);
    break;
  case 5:
    pvVar1 = operator_new(0x118);
    FUN_1006581f0(pvVar1,param_3);
    break;
  case 6:
    pvVar1 = operator_new(0x38);
    FUN_10065f870(pvVar1,param_3);
    break;
  case 7:
    pvVar1 = operator_new(0x40);
    FUN_100660660(pvVar1,param_3);
    break;
  case 8:
    pvVar1 = operator_new(0x48);
    FUN_100663600(pvVar1,param_3);
    break;
  case 9:
    pvVar1 = operator_new(0x58);
    FUN_100663fd0(pvVar1,param_3);
    break;
  case 10:
    pvVar1 = operator_new(0x48);
    FUN_1006668a0(pvVar1,param_3);
    break;
  case 0xb:
    pvVar1 = operator_new(0x40);
    FUN_1006683c0(pvVar1,param_3);
    break;
  case 0xc:
    pvVar1 = operator_new(0x58);
    FUN_1006698c0(pvVar1,param_3);
    break;
  case 0xd:
    pvVar1 = operator_new(0x60);
    FUN_10066bbc0(pvVar1,param_3);
    break;
  default:
    pvVar1 = (void *)0x0;
    FUN_100df99c0("","prl_client_app",0,"Try to create unknown page[%d]",param_2);
  }
  return pvVar1;
}

