
int FUN_100d41ee0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_2c;
  long local_28;
  
  lVar3 = _PrlSrv_RegisterVmEx(*param_1,param_2,0x2004);
  local_28 = lVar3;
  iVar1 = _PrlJob_Wait(lVar3,param_4);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to register VM with error 0x%X",iVar1);
  }
  else {
    iVar1 = _PrlJob_GetRetCode(lVar3,&local_2c);
    if (iVar1 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"Failed to get job result code with error 0x%X",iVar1);
    }
    else if (local_2c < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"VM registration failed with error 0x%X");
      iVar1 = local_2c;
    }
    else {
      iVar2 = FUN_100d40f80(&local_28,param_3);
      iVar1 = 0;
      if (iVar2 < 0) {
        FUN_100df99c0("","PrlSdkUtils",0,"Failed to get VM registration result with error 0x%X",
                      iVar2);
        iVar1 = iVar2;
      }
    }
  }
  if (lVar3 != 0) {
    _PrlHandle_Free(lVar3);
  }
  return iVar1;
}

