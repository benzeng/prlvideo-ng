
void FUN_100991a40(long param_1,long *param_2)

{
  long lVar1;
  
  if ((long *)(param_1 + 0x38) != param_2) {
    if (*param_2 != 0) {
      _PrlHandle_Free();
    }
    lVar1 = *(long *)(param_1 + 0x38);
    *param_2 = lVar1;
    if (lVar1 != 0) {
      _PrlHandle_AddRef();
      return;
    }
  }
  return;
}

