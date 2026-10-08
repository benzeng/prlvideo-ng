
void FUN_100615be0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
    return;
  }
  return;
}

