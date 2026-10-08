
void FUN_1000a7580(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long local_20;
  
  local_20 = *param_2;
  if (local_20 != 0) {
    _PrlHandle_AddRef();
  }
  FUN_1007f5170(param_1,&local_20,param_3);
  if (local_20 != 0) {
    _PrlHandle_Free();
  }
  return;
}

