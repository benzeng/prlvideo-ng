
undefined8 *
FUN_100d45ae0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  lVar1 = *param_2;
  local_40 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  iVar2 = FUN_100d45110(&local_40,&local_38);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  plVar3 = local_38;
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Error : Failed to create blank Vm configuration, error 0x%X",
                  iVar2);
    *param_1 = 0;
    plVar3 = local_38;
  }
  else {
    iVar2 = FUN_100d4aef0(local_38,param_3,param_4,param_5);
    if (-1 < iVar2) {
      *param_1 = plVar3;
      return param_1;
    }
    FUN_100df99c0("","PrlSdkUtils",0,"Error : Failed to set Vm configuration to default, error 0x%X"
                  ,iVar2);
    *param_1 = 0;
  }
  if (plVar3 != (long *)0x0) {
    if (plVar3[1] != 0) {
      _PrlHandle_Free();
    }
    if (*plVar3 != 0) {
      _PrlHandle_Free();
    }
    operator_delete(plVar3);
  }
  return param_1;
}

