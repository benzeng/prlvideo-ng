
void FUN_100d77c40(long *param_1)

{
  int iVar1;
  
  iVar1 = _PrlCVSrc_Close(*param_1);
  if ((iVar1 < 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("CVSRC","CVSrcStreamManager",1,"PrlCVSrc_Close() err %#x",iVar1);
  }
  if (*param_1 != 0) {
    _PrlHandle_Free();
    return;
  }
  return;
}

