
void FUN_100167310(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long local_28;
  
  lVar1 = *param_2;
  local_28 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  FUN_100166730(param_1,&local_28,param_3);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
    return;
  }
  return;
}

