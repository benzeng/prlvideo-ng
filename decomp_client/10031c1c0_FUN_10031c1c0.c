
bool FUN_10031c1c0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int local_1c;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  iVar2 = _PrlDevDisplay_GetDynResToolStatus(lVar1,&local_1c);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  if (iVar2 < 0) {
    if (DAT_10230ffd0 < 3) {
      bVar4 = false;
    }
    else {
      uVar3 = FUN_100dddcf0(iVar2);
      bVar4 = false;
      FUN_100df99c0("","prl_client_app",3,
                    "Failed to get dynamic resolution tool status. PrlDevDisplay_GetDynResToolStatus has failed with RC = %.8X [%s]"
                    ,iVar2,uVar3);
    }
  }
  else {
    bVar4 = local_1c == 1;
  }
  return bVar4;
}

