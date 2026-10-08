
void FUN_10032f890(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  FUN_100327cd0();
  *param_1 = &PTR_FUN_10220c0d0;
  param_1[10] = 0;
  param_1[9] = param_2;
  pvVar1 = operator_new(0x38);
  FUN_100a4a690(pvVar1,param_2);
  param_1[10] = pvVar1;
  return;
}

