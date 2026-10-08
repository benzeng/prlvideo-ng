
int FUN_100d42ef0(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  
  FUN_100df99c0("","PrlSdkUtils",0,"configure CD-ROM");
  if (*(int *)(*param_2 + 4) == 0) {
    QString::toUtf8();
    FUN_100df99c0("","PrlSdkUtils",0,"Iso %s was not found",local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 == -1) {
      return -0x7ffbaffb;
    }
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return -0x7ffbaffb;
      }
    }
    QArrayData::deallocate(local_30,1,8);
    return -0x7ffbaffb;
  }
  iVar2 = _PrlVmDev_SetEmulatedType(*param_1,1);
  if (iVar2 < 0) {
    pcVar3 = "Failed to set emulation type PrlVmDev_SetEmulatedType has failed with  RC = %.8X";
    goto LAB_100d43111;
  }
  uVar1 = *param_1;
  QString::toUtf8();
  iVar2 = _PrlVmDev_SetSysName(uVar1,local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100d42f99;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100d42f99:
  if (iVar2 < 0) {
    pcVar3 = "Failed to set iso path PrlVmDev_SetSysName has failed with  RC = %.8X";
    goto LAB_100d43111;
  }
  uVar1 = *param_1;
  QString::toUtf8();
  iVar2 = _PrlVmDev_SetFriendlyName(uVar1,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100d42ff4;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d42ff4:
  if (iVar2 < 0) {
    pcVar3 = "Failed to set iso path PrlVmDev_SetFriendlyName has failed with  RC = %.8X";
  }
  else {
    iVar2 = _PrlVmDev_SetEnabled(*param_1,1);
    if (iVar2 < 0) {
      pcVar3 = 
      "Failed to enable the optical disk devicePrlVmDev_SetEnabled has failed with  RC = %.8X";
    }
    else {
      iVar2 = _PrlVmDev_SetConnected(*param_1,1);
      if (-1 < iVar2) {
        return iVar2;
      }
      pcVar3 = 
      "Failed to set connected the optical disk devicePrlVmDev_SetConnected has failed with  RC = %.8X"
      ;
    }
  }
LAB_100d43111:
  FUN_100df99c0("","PrlSdkUtils",0,pcVar3,iVar2);
  return iVar2;
}

