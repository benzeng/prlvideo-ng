
undefined8 FUN_10015c890(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_100794960();
  lVar3 = FUN_100795470(uVar2,param_1,param_2);
  if ((lVar3 == 0) || (lVar1 = *(long *)(lVar3 + 0x158), lVar1 == 0)) {
    uVar2 = 0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to stop appliance");
  }
  else {
    _PrlHandle_AddRef(lVar1);
    _PrlHandle_Free(lVar1);
    lVar1 = *(long *)(param_1 + 0x80);
    if (lVar1 != 0) {
      _PrlHandle_AddRef(lVar1);
    }
    lVar3 = *(long *)(lVar3 + 0x158);
    if (lVar3 != 0) {
      _PrlHandle_AddRef(lVar3);
    }
    uVar2 = _PrlSrv_StopInstallAppliance(lVar1,lVar3,0);
    uVar2 = FUN_10015c580(param_1,uVar2,0x857,param_2);
    if (lVar3 != 0) {
      _PrlHandle_Free(lVar3);
    }
    if (lVar1 != 0) {
      _PrlHandle_Free(lVar1);
    }
  }
  return uVar2;
}

