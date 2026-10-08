
long * FUN_100293d30(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  long local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100df99c0("","prl_client_app",0,"About to abtain result with index %d",param_2);
  local_50 = 0;
  iVar2 = _PrlResult_GetParamByIndex(*param_1,param_2,&local_50);
  if (iVar2 < 0) {
    plVar3 = (long *)0x0;
    FUN_100df99c0("","prl_client_app",0,
                  "Can\'t get event parameter with index = [%d]. Return code = [%.8X]",param_2,iVar2
                 );
    goto LAB_100293e80;
  }
  plVar3 = operator_new(0x10);
  lVar1 = local_50;
  if (local_50 == 0) {
    *plVar3 = 0;
  }
  else {
    _PrlHandle_AddRef(local_50);
    *plVar3 = lVar1;
    _PrlHandle_AddRef(lVar1);
  }
  plVar3[1] = 0;
  pvVar4 = operator_new(0xf8);
  local_48 = *plVar3;
  if (local_48 != 0) {
    _PrlHandle_AddRef();
  }
  FUN_10018d690(&local_40,&local_48);
  FUN_100129dd0(pvVar4,&local_40);
  plVar3[1] = (long)pvVar4;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100293e65;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100293e65:
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
LAB_100293e80:
  FUN_100df99c0("","prl_client_app",0,"Vm data with index %d obtained",param_2);
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  return plVar3;
}

