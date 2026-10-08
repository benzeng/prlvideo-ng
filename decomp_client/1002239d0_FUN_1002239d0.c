
void FUN_1002239d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x18);
  FUN_100223bd0(pvVar1,param_2,param_3);
  FUN_100223cc0(param_1,param_2,param_3,pvVar1,param_4);
  *param_1 = &PTR_FUN_102201a50;
  return;
}

