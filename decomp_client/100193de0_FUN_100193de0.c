
void FUN_100193de0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long local_30;
  uint local_24;
  
  local_24 = 0;
  FUN_10018c250(&local_30,param_1);
  iVar1 = _PrlVm_ToolsGetShutdownCapabilities(local_30,&local_24);
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  if ((iVar1 < 0) || ((local_24 & 2) == 0)) {
    FUN_1001930a0(param_1,param_2);
  }
  else {
    FUN_100193b40(param_1,param_2);
  }
  return;
}

