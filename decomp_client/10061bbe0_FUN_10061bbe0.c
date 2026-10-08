
undefined8 FUN_10061bbe0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: Server instance is null.");
    return 0;
  }
  FUN_10015aa20(&local_30);
  lVar1 = local_30;
  QString::toUtf8();
  uVar2 = _PrlSrv_ActivateInstalledLicenseOffline(lVar1,local_38 + *(long *)(local_38 + 0x10),0);
  uVar2 = FUN_10061b530(param_1,uVar2,0x820);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061bc81;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10061bc81:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return uVar2;
}

