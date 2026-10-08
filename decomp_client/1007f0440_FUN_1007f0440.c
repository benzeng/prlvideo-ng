
void FUN_1007f0440(void)

{
  int iVar1;
  
  iVar1 = (*DAT_1023119c8)(FUN_1007f00e0,0x2f9,0);
  if (iVar1 != 0) {
    FUN_100df99c0("","prl_client_app",0,"CGSRegisterNotifyProc error = %d i =%d\n",iVar1,0);
  }
  iVar1 = (*DAT_1023119c8)(FUN_1007f00e0,0x2fa,0);
  if (iVar1 != 0) {
    FUN_100df99c0("","prl_client_app",0,"CGSRegisterNotifyProc error = %d i =%d\n",iVar1,1);
  }
  iVar1 = (*DAT_1023119c8)(FUN_1007f00e0,0x2fc,0);
  if (iVar1 != 0) {
    FUN_100df99c0("","prl_client_app",0,"CGSRegisterNotifyProc error = %d i =%d\n",iVar1,3);
  }
  FUN_1007f00e0(0x2fc,0,0,0);
  return;
}

