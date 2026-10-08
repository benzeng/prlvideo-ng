
int FUN_100d4bad0(long param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                 undefined1 param_5,undefined1 param_6,long *param_7,int param_8)

{
  long lVar1;
  int iVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  local_40 = 0;
  iVar2 = _PrlVmCfg_CreateVmDev(*(undefined8 *)(param_1 + 8),8,&local_40);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.68\t0x%x",iVar2);
    goto LAB_100d4be04;
  }
  iVar2 = _PrlVmDev_SetIndex(local_40,param_2);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.69\t0x%x",iVar2);
    goto LAB_100d4be04;
  }
  iVar2 = _PrlVmDev_SetEmulatedType(local_40,param_3);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.70\t0x%x",iVar2);
    goto LAB_100d4be04;
  }
  iVar2 = _PrlVmDevNet_SetBoundAdapterIndex(local_40,0xffffffff);
  lVar1 = local_40;
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.71\t0x%x",iVar2);
    goto LAB_100d4be04;
  }
  if (*(int *)(*param_4 + 4) == 0) {
    iVar2 = _PrlVmDevNet_GenerateMacAddr(local_40);
    if (iVar2 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"TR00055.72.1\t0x%x",iVar2);
      goto LAB_100d4be04;
    }
  }
  else {
    QString::toUtf8();
    iVar2 = _PrlVmDevNet_SetMacAddress(lVar1,local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d4bbc0;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100d4bbc0:
    if (iVar2 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"TR00055.72.2\t0x%x",iVar2);
      goto LAB_100d4be04;
    }
  }
  iVar2 = _PrlVmDev_SetEnabled(local_40,param_5);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.73:\t0x%x",iVar2);
    goto LAB_100d4be04;
  }
  iVar2 = _PrlVmDev_SetConnected(local_40,param_6);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.74:\t0x%x",iVar2);
  }
  lVar1 = local_40;
  if (*(int *)(*param_7 + 4) != 0) {
    QString::toUtf8();
    iVar2 = _PrlVmDevNet_SetVirtualNetworkId(lVar1,local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d4bd49;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_100d4bd49:
    if (iVar2 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"TR00055.75\t0x%x",iVar2);
      goto LAB_100d4be04;
    }
  }
  if ((param_8 != 0) && (iVar2 = _PrlVmDevNet_SetAdapterType(local_40,param_8), iVar2 < 0)) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to set network adapter type %d: \t0x%x",param_8,iVar2);
  }
LAB_100d4be04:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return iVar2;
}

