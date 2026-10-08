
void FUN_100d77960(long *param_1)

{
  int iVar1;
  
  iVar1 = _PrlHandle_UnregEventHandler(*param_1,param_1[1],param_1[2]);
  if ((iVar1 < 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("CVSRC","CVSrcStreamManager",1,"PrlHandle_UnregEventHandler() err %#x");
  }
  if (*param_1 != 0) {
    _PrlHandle_Free();
    return;
  }
  return;
}

