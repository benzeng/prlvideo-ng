
void FUN_100359290(undefined8 *param_1)

{
  void *pvVar1;
  undefined2 local_30;
  undefined1 local_2e;
  
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = param_1 + 3;
  ___bzero(param_1 + 5,0x10060);
  local_2e = 0;
  local_30 = 0x400;
  pvVar1 = operator_new(0xd8);
  FUN_10032f040(pvVar1,0,0x76,0,1,1,1,1,1,1,&local_30);
  param_1[0x200d] = pvVar1;
  return;
}

