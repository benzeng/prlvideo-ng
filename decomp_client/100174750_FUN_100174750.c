
bool FUN_100174750(long param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = _PrlUsrCfg_IsLocalAdministrator(*(undefined8 *)(param_1 + 0x98),&local_c);
  if (iVar1 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to retrieve user priveleges information");
  }
  return local_c != 0;
}

