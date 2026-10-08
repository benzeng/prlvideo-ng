
int FUN_100d45110(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long local_38;
  undefined8 local_30;
  
  local_38 = 0;
  iVar3 = _PrlSrv_CreateVm(*param_1,&local_38);
  if (iVar3 < 0) {
    _PrlDbg_PrlResultToString(iVar3,&local_30);
    FUN_100df99c0("","PrlSdkUtils",0,"Error : Failed to create VM handle object. error 0x%X \'%s\'",
                  iVar3,local_30);
  }
  else {
    plVar4 = operator_new(0x10);
    lVar1 = *param_1;
    *plVar4 = lVar1;
    if (lVar1 != 0) {
      _PrlHandle_AddRef();
    }
    plVar4[1] = local_38;
    if (local_38 != 0) {
      _PrlHandle_AddRef();
    }
    plVar2 = (long *)*param_2;
    if ((plVar2 != plVar4) && (plVar2 != (long *)0x0)) {
      if (plVar2[1] != 0) {
        _PrlHandle_Free();
      }
      if (*plVar2 != 0) {
        _PrlHandle_Free();
      }
      operator_delete(plVar2);
    }
    *param_2 = plVar4;
    iVar3 = 0;
  }
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return iVar3;
}

