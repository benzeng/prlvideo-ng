
undefined8 FUN_1000a7520(long param_1,undefined8 param_2)

{
  long local_20;
  
  local_20 = param_1;
  FUN_1000a7580(param_2,&local_20,param_2);
  if (param_1 != 0) {
    _PrlHandle_Free(param_1);
  }
  return 0;
}

