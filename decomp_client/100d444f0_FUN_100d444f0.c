
uint FUN_100d444f0(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  uint local_1c;
  
  lVar2 = _PrlSrv_Logoff(*param_1);
  uVar1 = _PrlJob_Wait(lVar2,param_2);
  if (-1 < (int)uVar1) {
    uVar1 = _PrlJob_GetRetCode(lVar2,&local_1c);
    if (-1 < (int)uVar1) {
      uVar1 = (int)local_1c >> 0x1f & local_1c;
    }
  }
  if (lVar2 != 0) {
    _PrlHandle_Free(lVar2);
  }
  return uVar1;
}

