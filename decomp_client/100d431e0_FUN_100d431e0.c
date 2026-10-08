
int FUN_100d431e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 in_RAX;
  int local_24;
  
  local_24 = (int)((ulong)in_RAX >> 0x20);
  iVar1 = _PrlJob_Wait(param_1,param_3);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to %s. Wait for job completion has failed with RC = %.8X",param_2,iVar1);
    _PrlHandle_Free(param_1);
    local_24 = iVar1;
  }
  else {
    iVar1 = _PrlJob_GetRetCode(param_1,&local_24);
    if (iVar1 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"Failed to %s. Cannot get job return code. RC = %.8X",param_2
                    ,iVar1);
      local_24 = iVar1;
    }
    else if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","PrlSdkUtils",2,"%s completed with RC = %.8X",param_2,local_24);
    }
  }
  return local_24;
}

