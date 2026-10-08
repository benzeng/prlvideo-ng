
void FUN_100d449b0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  return;
}

