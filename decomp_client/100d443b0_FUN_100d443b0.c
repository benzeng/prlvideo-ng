
int FUN_100d443b0(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = 0;
  iVar1 = _PrlSrv_Create(&local_48);
  if (iVar1 < 0) {
    _PrlDbg_PrlResultToString(iVar1,&local_40);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Error : Failed to create Srv handle object with code 0x%X: \'%s\'",iVar1,local_40
                 );
  }
  else {
    iVar1 = FUN_100d44330(&local_48,param_2,param_3,param_4,param_5,4);
    if (iVar1 < 0) {
      _PrlDbg_PrlResultToString(iVar1,&local_38);
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Error : Failed to locally connect with dispatcher with code 0x%X: \'%s\'",iVar1
                    ,local_38);
    }
    else {
      iVar1 = 0;
      if (&local_48 != param_1) {
        if (*param_1 != 0) {
          _PrlHandle_Free();
        }
        *param_1 = local_48;
        if (local_48 != 0) {
          _PrlHandle_AddRef();
        }
      }
    }
  }
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  return iVar1;
}

