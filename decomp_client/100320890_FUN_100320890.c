
void FUN_100320890(undefined8 param_1,long *param_2)

{
  long lVar1;
  long local_20;
  
  lVar1 = *param_2;
  local_20 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  FUN_100320900(param_1,0,&local_20);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
    return;
  }
  return;
}

