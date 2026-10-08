
undefined8 * FUN_1005c17a0(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  int *local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined1 local_29;
  
  FUN_1005bbe80(&local_38,*(undefined8 *)(param_2 + 0x20));
  piVar4 = (int *)CONCAT71(uStack_37,local_38);
  iVar1 = piVar4[3];
  iVar2 = piVar4[2];
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005c17f5;
    }
    FUN_1005bfdc0(&local_38,CONCAT71(uStack_37,local_38));
  }
LAB_1005c17f5:
  if (iVar1 - iVar2 <= param_3) goto LAB_1005c1958;
  FUN_1005bbe80(&local_40,*(undefined8 *)(param_2 + 0x20));
  lVar3 = **(long **)(local_40 + ((long)local_40[2] + (long)param_3) * 2 + 4);
  lVar5 = 0;
  if ((lVar3 != 0) && (lVar5 = 0, *(int *)(lVar3 + 4) != 0)) {
    lVar5 = (*(long **)(local_40 + ((long)local_40[2] + (long)param_3) * 2 + 4))[1];
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_38 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_38) goto LAB_1005c185a;
    }
    FUN_1005bfdc0(&local_40,local_40);
  }
LAB_1005c185a:
  if (lVar5 == 0) {
LAB_1005c1958:
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("DownloadAppliance.%1",0x14);
  FUN_1005bbe80(&local_58,*(undefined8 *)(param_2 + 0x20));
  CAppliance::getApplianceId();
  QString::arg(param_1,&local_48,&local_50,0,0x20);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_38) goto LAB_1005c18fc;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005c18fc:
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_38 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_38) goto LAB_1005c1926;
    }
    FUN_1005bfdc0(&local_58,local_58);
  }
LAB_1005c1926:
  if (*(int *)local_48 == -1) {
    return param_1;
  }
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return param_1;
    }
    local_38 = 0;
  }
  QArrayData::deallocate(local_48,2,8);
  return param_1;
}

