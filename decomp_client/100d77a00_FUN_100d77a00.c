
void FUN_100d77a00(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

