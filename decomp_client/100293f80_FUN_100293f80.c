
void FUN_100293f80(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  long local_68;
  QArrayData *local_60;
  long local_58;
  undefined4 local_4c;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) goto LAB_100293ff7;
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar3 = FUN_10015cb20(param_2,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100293ff2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100293ff2:
  if (lVar3 != 0) {
LAB_100293ff7:
    if ((long *)param_1[1] != (long *)0x0) {
      (**(code **)(*(long *)param_1[1] + 0x20))();
    }
    param_1[1] = 0;
    return;
  }
  local_48 = 0;
  local_4c = 0x30000001;
  lVar3 = *param_1;
  if ((lVar3 != 0) && (_PrlHandle_AddRef(lVar3), local_48 != 0)) {
    _PrlHandle_Free();
  }
  local_48 = 0;
  iVar1 = _PrlVmCfg_GetVmInfo(lVar3,&local_48);
  if (lVar3 != 0) {
    _PrlHandle_Free(lVar3);
  }
  if ((-1 < iVar1) && (iVar2 = _PrlVmInfo_GetState(local_48,&local_4c), iVar2 < 0)) {
    local_4c = 0x30000001;
  }
  pvVar4 = operator_new(0x118);
  local_58 = *param_1;
  if (local_58 != 0) {
    _PrlHandle_AddRef();
  }
  lVar3 = param_1[1];
  FUN_10015aab0(&local_60,param_2);
  FUN_1001888f0(pvVar4,&local_58,lVar3,&local_60,local_4c,1,0,param_2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10029411a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10029411a:
  if (local_58 != 0) {
    _PrlHandle_Free();
  }
  if (iVar1 < 0) {
    if (iVar1 == -0x7fffffec) {
      FUN_1001923f0(pvVar4,0);
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM state from info handle");
    }
  }
  FUN_10018b9a0(pvVar4,local_4c);
  FUN_10015b240(param_2,pvVar4);
  if (-1 < iVar1) {
    local_68 = local_48;
    if (local_48 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_10018dea0(pvVar4,&local_68,0);
    if (local_68 != 0) {
      _PrlHandle_Free();
    }
  }
  FUN_100194400(pvVar4);
  FUN_100194170(pvVar4,0);
  if (local_48 == 0) {
    return;
  }
  _PrlHandle_Free();
  return;
}

