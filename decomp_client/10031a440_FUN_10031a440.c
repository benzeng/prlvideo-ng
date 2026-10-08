
void FUN_10031a440(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"About to open VM [%s] desktop with %d action on open",
                local_40 + *(long *)(local_40 + 0x10),param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031a4d9;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10031a4d9:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031a509;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10031a509:
  lVar7 = FUN_100319960(param_1);
  iVar2 = 0;
  if (lVar7 != 0) {
    iVar2 = FUN_100325aa0(lVar7);
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_10018c2b0(uVar8);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmStartupOptions();
  uVar3 = CVmStartupOptionsBase::getWindowMode();
  iVar4 = EnumUtils::pwmToConsoleWindowMode(uVar3);
  uVar8 = FUN_100370280();
  local_50 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  iVar5 = FUN_100375450(uVar8,&local_50,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031a5c1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10031a5c1:
  cVar1 = FUN_10031a7f0(param_1,param_2);
  if (cVar1 == '\0') {
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
    }
    iVar6 = FUN_10018a9d0(uVar8);
    if (iVar6 == 0x30000004) goto LAB_10031a5f7;
  }
  else {
LAB_10031a5f7:
    iVar6 = 3;
    if ((iVar4 == 3) || ((iVar4 == 0 && (iVar5 == 3)))) goto LAB_10031a6c1;
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar4 = FUN_10018a9d0(uVar8);
  if (iVar4 != 0x30000004) {
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
    }
    iVar4 = FUN_10018a9d0(uVar8);
    iVar6 = 1;
    if (iVar4 != 0x30000005) goto LAB_10031a6c1;
  }
  uVar8 = FUN_100370280();
  local_58 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  iVar6 = FUN_100375450(uVar8,&local_58,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031a6c1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10031a6c1:
  if (iVar2 != 0) {
    iVar6 = iVar2;
  }
  FUN_10031a960(param_1,iVar6,param_2);
  return;
}

