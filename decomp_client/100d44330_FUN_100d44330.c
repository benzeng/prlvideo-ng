
uint FUN_100d44330(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 in_R8D;
  uint local_1c;
  
  lVar2 = _PrlSrv_LoginLocalEx(*param_1);
  uVar1 = _PrlJob_Wait(lVar2,in_R8D);
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

