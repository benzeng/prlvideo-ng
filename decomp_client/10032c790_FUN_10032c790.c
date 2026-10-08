
undefined8 FUN_10032c790(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long local_28;
  
  uVar1 = 0x80000003;
  if (param_2 != 0) {
    local_28 = param_2;
    _PrlHandle_AddRef(param_2);
    FUN_10082cb50(param_1,&local_28,param_3);
    if (local_28 != 0) {
      _PrlHandle_Free();
    }
    _PrlHandle_Free(param_2);
    uVar1 = 0;
  }
  return uVar1;
}

