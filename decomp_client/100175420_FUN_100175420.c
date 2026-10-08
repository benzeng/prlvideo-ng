
bool FUN_100175420(long param_1)

{
  long lVar1;
  int iVar2;
  int local_1c;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  iVar2 = _PrlSrv_IsConfirmationModeEnabled(lVar1,&local_1c);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to get confirmation mode status");
  }
  return iVar2 >= 0 && local_1c != 0;
}

