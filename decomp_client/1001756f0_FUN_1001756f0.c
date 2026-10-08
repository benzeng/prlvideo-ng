
undefined1 FUN_1001756f0(long param_1,undefined1 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  bool *pbVar4;
  char *pcVar5;
  undefined1 local_41;
  QArrayData *local_40;
  int local_38;
  undefined1 local_31;
  
  *param_2 = 0;
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  iVar2 = _PrlSrv_IsConfirmationModeEnabled(lVar1,&local_38);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  if (iVar2 < 0) {
    pcVar5 = "(!)Error: failed to get confirmation mode status";
    goto LAB_10017582d;
  }
  if (local_38 == 0) {
    return 1;
  }
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  uVar3 = _PrlSrv_DisableConfirmationMode(lVar1,"...","...",0xdfae121);
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  pbVar4 = (bool *)FUN_10015c580(param_1,uVar3,0x851,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001757ce;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001757ce:
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  if (pbVar4 != (bool *)0x0) {
    iVar2 = CSdkRequest::waitForCompletion(pbVar4,(uint)&local_41);
    if (-1 < iVar2) {
      *param_2 = 1;
      return 1;
    }
    uVar3 = FUN_100dddcf0(iVar2);
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to disable confirmation mode. nRetCode=%.8X \'%s\'",iVar2,uVar3)
    ;
    return 0;
  }
  pcVar5 = "(!)Error: DspCmdSetSessionConfirmationMode request is null";
LAB_10017582d:
  FUN_100df99c0("","prl_client_app",0,pcVar5);
  return 0;
}

