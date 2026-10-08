
void FUN_10032d570(undefined8 param_1,long *param_2,uint param_3)

{
  long lVar1;
  long local_28;
  long local_20;
  
  lVar1 = *param_2;
  if ((param_3 & 0x40000000) == 0) {
    local_28 = lVar1;
    if (lVar1 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_10082caa0(param_1,&local_28,param_3);
    lVar1 = local_28;
  }
  else {
    local_20 = lVar1;
    if (lVar1 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_10082cb00(param_1,&local_20);
    lVar1 = local_20;
  }
  if (lVar1 != 0) {
    _PrlHandle_Free();
  }
  return;
}

