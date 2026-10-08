
void FUN_100d77b50(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = _PrlCVSrc_Disconnect(*param_1);
  if ((iVar1 < 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("CVSRC","CVSrcStreamManager",1,"PrlCVSrc_Disconnect() err %#x");
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

