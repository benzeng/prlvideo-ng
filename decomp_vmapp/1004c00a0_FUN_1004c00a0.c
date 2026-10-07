
void FUN_1004c00a0(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  param_1[0x22] = 0;
  ___bzero(param_1 + 1,0x104);
  pvVar1 = operator_new(8);
  FUN_1004c0c00(pvVar1,param_1);
  param_1[0x22] = pvVar1;
  FUN_1004c0120(param_1);
  FUN_1004c0870(&DAT_1011cc7f8,param_1);
  return;
}

