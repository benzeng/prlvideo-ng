
undefined4 FUN_10061aab0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 local_1c;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: Invalid license handle.");
    local_1c = 0x80011000;
  }
  else {
    _PrlHandle_AddRef(lVar1);
    _PrlHandle_Free(lVar1);
    local_1c = 0x80011000;
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      _PrlHandle_AddRef(lVar1);
    }
    iVar2 = _PrlLic_GetStatus(lVar1,&local_1c);
    if (lVar1 != 0) {
      _PrlHandle_Free(lVar1);
    }
    if (iVar2 < 0) {
      FUN_100df99c0("[LICENSE]","prl_client_app",0,
                    "(!)Error: Couldn\'t extract dispatcher license info (get status). \t\t\tError code: %.8X"
                    ,iVar2);
      local_1c = 0x80011000;
    }
  }
  return local_1c;
}

