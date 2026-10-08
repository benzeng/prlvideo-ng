
int FUN_100d4a410(long param_1)

{
  int iVar1;
  long lVar2;
  int local_1c;
  
  lVar2 = _PrlVm_RefreshConfig(*(undefined8 *)(param_1 + 8));
  local_1c = _PrlJob_Wait(lVar2,100000);
  if (local_1c < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.108:\t0x%x",local_1c);
    iVar1 = local_1c;
  }
  else {
    iVar1 = _PrlJob_GetRetCode(lVar2,&local_1c);
    if (iVar1 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"TR00055.106:\t0x%x",iVar1);
    }
    else {
      iVar1 = local_1c;
      if (local_1c < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"TR00055.107:\t0x%x",local_1c);
        iVar1 = local_1c;
      }
    }
  }
  if (lVar2 != 0) {
    _PrlHandle_Free(lVar2);
  }
  return iVar1;
}

