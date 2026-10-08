
void * FUN_1007858e0(long param_1,long param_2)

{
  void *pvVar1;
  void *local_30;
  long local_28;
  
  pvVar1 = (void *)0x0;
  if (param_2 != 0) {
    local_28 = param_2;
    pvVar1 = operator_new(0x18);
    FUN_100787700(pvVar1,param_2,param_1);
    local_30 = pvVar1;
    FUN_100785e90(param_1 + 0x18,&local_28,&local_30);
  }
  return pvVar1;
}

