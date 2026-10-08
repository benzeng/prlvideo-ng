
undefined8 FUN_10061bde0(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  long local_18;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    uVar1 = 0;
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: Server instance is null.");
  }
  else {
    local_18 = in_RAX;
    FUN_10015aa20(&local_18);
    uVar1 = _PrlSrv_UpdateLicenseEx(local_18,"","","",0x810000);
    uVar1 = FUN_10061b530(param_1,uVar1,0x820);
    if (local_18 != 0) {
      _PrlHandle_Free();
    }
  }
  return uVar1;
}

