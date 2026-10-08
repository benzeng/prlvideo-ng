
undefined8 * FUN_1005c1610(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  bool bVar5;
  int *local_48;
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
      if ((bool)local_29) goto LAB_1005c1665;
    }
    FUN_1005bfdc0(&local_38,CONCAT71(uStack_37,local_38));
  }
LAB_1005c1665:
  if (iVar1 - iVar2 <= param_3) goto LAB_1005c1744;
  FUN_1005bbe80(&local_40,*(undefined8 *)(param_2 + 0x20));
  lVar3 = **(long **)(local_40 + ((long)local_40[2] + (long)param_3) * 2 + 4);
  if (lVar3 == 0) {
    bVar5 = false;
  }
  else if (*(int *)(lVar3 + 4) == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(long **)(local_40 + ((long)local_40[2] + (long)param_3) * 2 + 4))[1] != 0;
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_38 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_38) goto LAB_1005c16d2;
    }
    FUN_1005bfdc0(&local_40,local_40);
  }
LAB_1005c16d2:
  if (bVar5) {
    FUN_1005bbe80(&local_48,*(undefined8 *)(param_2 + 0x20));
    CAppliance::getApplianceOsVer();
    EnumUtils::OsVerToString((uint)param_1);
    if (*local_48 == -1) {
      return param_1;
    }
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 != 0) {
        return param_1;
      }
      local_38 = 0;
    }
    FUN_1005bfdc0(&local_48,local_48);
    return param_1;
  }
LAB_1005c1744:
  *param_1 = PTR_shared_null_1021e1288;
  return param_1;
}

