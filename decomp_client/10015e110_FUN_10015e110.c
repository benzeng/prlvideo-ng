
void FUN_10015e110(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x130) + 0x18) = 1;
  FUN_10015a6f0(param_1,1);
  lVar1 = _PrlSrv_Logoff(*(undefined8 *)(param_1 + 0x80));
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
    return;
  }
  return;
}

