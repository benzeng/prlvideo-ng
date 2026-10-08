
long * FUN_1001905d0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x40);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  return param_1;
}

