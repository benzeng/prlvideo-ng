
bool FUN_1001172a0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int local_24;
  long local_20;
  long local_18;
  
  FUN_10018c250(&local_18,param_1);
  local_20 = 0;
  iVar2 = _PrlVm_TisGetRecord(local_18,"parallels.GracefulShutdown.guest.win",&local_20);
  lVar1 = local_18;
  if (iVar2 != 0) {
    if (local_20 != 0) {
      _PrlHandle_Free();
    }
    local_20 = 0;
    iVar2 = _PrlVm_TisGetRecord(lVar1,"parallels.GracefulShutdown.guest.lin",&local_20);
    if (iVar2 != 0) {
      bVar3 = false;
      goto LAB_100117329;
    }
  }
  iVar2 = _PrlTisRecord_GetState(local_20,&local_24);
  if (iVar2 == 0) {
    bVar3 = local_24 == 1;
  }
  else {
    bVar3 = false;
  }
LAB_100117329:
  if (local_20 != 0) {
    _PrlHandle_Free();
  }
  if (local_18 != 0) {
    _PrlHandle_Free();
  }
  return bVar3;
}

