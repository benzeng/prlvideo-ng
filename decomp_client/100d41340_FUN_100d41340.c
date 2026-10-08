
int FUN_100d41340(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_2c;
  long local_28;
  
  lVar3 = _PrlSrv_GetUserProfile(*param_1);
  local_28 = lVar3;
  iVar1 = _PrlJob_Wait(lVar3,param_3);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the user profile, 0x%x",iVar1);
  }
  else {
    iVar1 = _PrlJob_GetRetCode(lVar3,&local_2c);
    if (iVar1 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"Failed to get job result code, 0x%x",iVar1);
    }
    else if (local_2c < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the user profile, 0x%x");
      iVar1 = local_2c;
    }
    else {
      iVar2 = FUN_100d40f80(&local_28,param_2);
      iVar1 = 0;
      if (iVar2 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the user profile, 0x%x",local_2c);
        iVar1 = iVar2;
      }
    }
  }
  if (lVar3 != 0) {
    _PrlHandle_Free(lVar3);
  }
  return iVar1;
}

