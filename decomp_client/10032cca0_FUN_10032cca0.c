
undefined8 * FUN_10032cca0(undefined8 *param_1)

{
  int iVar1;
  long local_20;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_10032ca00(&local_20);
  if (local_20 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid tis record handle");
  }
  else {
    iVar1 = _PrlTisRecord_GetInfo(local_20,param_1);
    if (iVar1 < 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Failed to get tis record info");
    }
    _PrlHandle_Free(local_20);
  }
  return param_1;
}

