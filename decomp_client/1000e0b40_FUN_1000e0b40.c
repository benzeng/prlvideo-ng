
void FUN_1000e0b40(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  char *pcVar14;
  bool bVar15;
  QArrayData *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  uint local_58 [2];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    pcVar14 = "Error: current Vm Tools configuration is 0";
LAB_1000e0c6d:
    FUN_100df99c0("SGAC","prl_client_app",0,pcVar14);
    return;
  }
  uVar11 = FUN_100152280();
  plVar2 = param_1 + 2;
  lVar12 = FUN_1001548f0(uVar11,plVar2);
  if (lVar12 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get vm for vmUuid=\"%s\"",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
    return;
  }
  lVar12 = CVmTools::getVmSharedApplications();
  if (lVar12 == 0) {
    pcVar14 = "Error: current Shared Applications configuration is 0";
    goto LAB_1000e0c6d;
  }
  local_50 = (QArrayData *)*plVar2;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  uVar11 = FUN_100152280();
  lVar12 = FUN_1001548f0(uVar11,&local_50);
  if (lVar12 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    lVar12 = 0;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        lVar12 = 0;
        if ((bool)local_31) goto LAB_1000e0cf3;
      }
      lVar12 = 0;
      QArrayData::deallocate(local_40,1,8);
    }
  }
  else {
    lVar12 = FUN_10018c2b0(lVar12);
  }
LAB_1000e0cf3:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000e0d23;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000e0d23:
  if (lVar12 == 0) {
    return;
  }
  cVar4 = CVmTools::isIsolatedVm();
  cVar5 = FUN_1000a6380(plVar2);
  bVar6 = FUN_1000a6280(plVar2);
  if (cVar5 == '\0') {
    cVar7 = '\0';
  }
  else {
    FUN_100d752c0();
    cVar7 = FUN_100d75500(lVar12,0);
    if (cVar7 == '\0' && cVar4 == '\0') {
      cVar7 = CVmSharedApplications::isWinToMac();
    }
  }
  FUN_100d752c0();
  cVar8 = FUN_100d75500(lVar12,0);
  iVar10 = 2;
  if (cVar8 == '\0') {
    iVar10 = CVmSharedApplications::getApplicationInDock();
  }
  bVar15 = (int)param_1[0x21] != iVar10;
  if (bVar15) {
    *(int *)(param_1 + 0x21) = iVar10;
  }
  lVar12 = param_1[9];
  *(char *)(param_1 + 9) = cVar7;
  uVar9 = CVmSharedApplications::isDisableRecentDocs();
  *(undefined1 *)((long)param_1 + 0x10d) = uVar9;
  if ((cVar4 == '\0' && cVar5 == '\x01') && ((char)param_1[9] != '\0')) {
    uVar9 = CVmSharedApplications::isShowWindowsAppInDock();
  }
  else {
    uVar9 = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = uVar9;
  uVar9 = CVmSharedApplications::isAddInstalledApplicationsToLaunchpad();
  *(undefined1 *)((long)param_1 + 0x101) = uVar9;
  if ((char)lVar12 == cVar7) {
LAB_1000e0e5b:
    if ((char)param_1[9] == '\0') goto LAB_1000e0e91;
    uVar9 = CVmSharedApplications::isShowGuestNotifications();
    cVar4 = '\0';
    *(undefined1 *)((long)param_1 + 0x105) = uVar9;
    uVar9 = 0;
    if ((char)param_1[9] != '\0') {
      uVar9 = CVmSharedApplications::isBounceDockIconWhenAppFlashes();
      cVar4 = (char)param_1[9];
    }
  }
  else {
    if ((char)param_1[9] != '\0') {
      uVar9 = CVmSharedApplications::isIconGroupingEnabled();
      *(undefined1 *)((long)param_1 + 0x102) = uVar9;
      goto LAB_1000e0e5b;
    }
LAB_1000e0e91:
    *(undefined1 *)((long)param_1 + 0x105) = 0;
    cVar4 = '\0';
    uVar9 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x106) = uVar9;
  local_58[0] = (uint)bVar6;
  if (cVar4 == '\0') {
    local_58[0] = 0;
  }
  uVar11 = (**(code **)(*param_1 + 0x68))(param_1);
  FUN_1000e9a30(uVar11,local_58);
  if ((char)lVar12 == cVar7) {
    if ((bVar15) && ((char)param_1[9] != '\0')) {
      cVar4 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar4 == '\0') {
        (**(code **)(*param_1 + 0x70))(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x78))();
      }
    }
    goto LAB_1000e13a9;
  }
  if ((*(int *)((long)param_1 + 0x21c) != 0) || ((int)param_1[0x43] != 0)) {
    FUN_1000c4970(param_1 + 0x43,0x6c,0,0);
  }
  if ((*(int *)((long)param_1 + 0x214) != 0) || ((int)param_1[0x42] != 0)) {
    FUN_1000c4970(param_1 + 0x42,0x6c,0,0);
  }
  if ((char)param_1[9] == '\0') {
    if ((long *)param_1[0x4e] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x4e] + 0x20))();
    }
    param_1[0x4e] = 0;
    FUN_1000c6560(param_1);
    local_98 = *(QArrayData **)(param_1[0x1e] + 0x58);
    if (1 < *(int *)local_98 + 1U) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
    }
    FUN_100050cd0(plVar2,&local_98);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000e119f;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1000e119f:
    FUN_100d9bbb0(param_1 + 0x35);
    QMutex::lock();
    FUN_1000e68a0(param_1 + 0x34);
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",2,"[Shared Guest Apps] Disabled");
    }
    QMutex::unlock();
    goto LAB_1000e13a9;
  }
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_60,&local_68);
  local_70 = *(QArrayData **)(param_1[0x1e] + 0x58);
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_31 = *(int *)local_70 != 0;
    UNLOCK();
  }
  cVar4 = QDir::exists(&local_60);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000e0fad;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000e0fad:
  QDir::~QDir((QDir *)&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000e0fe6;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1000e0fe6:
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  local_78 = *(QArrayData **)(param_1[0x1e] + 0x58);
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  FUN_10004edc0(plVar2,&local_78,param_1 + 4,1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000e105d;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1000e105d:
  FUN_100052040(plVar2,param_1 + 0x35,param_1 + 4);
  plVar3 = param_1 + 0x17;
  puVar13 = operator_new(0x10);
  *puVar13 = &PTR_FUN_1021ee3a8;
  puVar13[1] = param_1;
  local_80 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (local_80 == (long *)0x0) {
    operator_delete(puVar13);
    local_80 = (long *)0x0;
  }
  else {
    *(undefined4 *)(local_80 + 1) = 1;
    local_80[2] = (long)puVar13;
    *local_80 = (long)&PTR_FUN_10226ce10;
  }
  FUN_1000eef10(plVar3,&local_80);
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  puVar13 = operator_new(0x10);
  *puVar13 = &PTR_FUN_1021ee3e8;
  puVar13[1] = param_1;
  local_88 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (local_88 == (long *)0x0) {
    operator_delete(puVar13);
    local_88 = (long *)0x0;
  }
  else {
    *(undefined4 *)(local_88 + 1) = 1;
    local_88[2] = (long)puVar13;
    *local_88 = (long)&PTR_FUN_10226ce10;
  }
  FUN_1000eef10(plVar3,&local_88);
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  puVar13 = operator_new(0x10);
  *puVar13 = &PTR_FUN_1021ee428;
  puVar13[1] = param_1;
  local_90 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (local_90 == (long *)0x0) {
    operator_delete(puVar13);
    local_90 = (long *)0x0;
  }
  else {
    *(undefined4 *)(local_90 + 1) = 1;
    local_90[2] = (long)puVar13;
    *local_90 = (long)&PTR_FUN_10226ce10;
  }
  FUN_1000eef10(plVar3,&local_90);
  if (local_90 != (long *)0x0) {
    LOCK();
    plVar3 = local_90 + 1;
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  uVar11 = (**(code **)(*param_1 + 0x68))(param_1);
  FUN_1000e8f90(uVar11);
  if ((char)param_1[0x2d] != '\0') {
    uVar11 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_1000e9320(uVar11);
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",2,"[Shared Guest Apps] Enabled");
  }
LAB_1000e13a9:
  FUN_1000c5a50(plVar2,(char)param_1[0x20],0);
  FUN_1007f8840(param_1);
  if (1 < DAT_10230ffd0) {
    if ((char)param_1[9] == '\0') {
      pcVar14 = "false";
    }
    else {
      pcVar14 = "true";
    }
    FUN_100df99c0("SGAC","prl_client_app",2,"Shared Guest Applications enabled: %s",pcVar14);
  }
  return;
}

