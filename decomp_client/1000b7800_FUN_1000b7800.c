
undefined1 FUN_1000b7800(long param_1)

{
  void *pvVar1;
  undefined1 local_19;
  
  local_19 = 0;
  pvVar1 = operator_new(0x278);
  FUN_1000c4450(pvVar1,param_1 + 0x20,param_1,&local_19);
  *(void **)(param_1 + 0x40) = pvVar1;
  return local_19;
}

