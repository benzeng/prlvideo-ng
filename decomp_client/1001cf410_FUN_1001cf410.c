
long * FUN_1001cf410(long *param_1,long *param_2)

{
  long lVar1;
  
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    if (lVar1 != 0) {
      _PrlHandle_AddRef();
    }
  }
  return param_1;
}

