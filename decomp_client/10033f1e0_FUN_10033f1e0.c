
void FUN_10033f1e0(long param_1,char param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    pcVar10 = " Failed to switch VM desktop view mode. VM desktop object does not exist!";
LAB_10033f3ef:
    FUN_100df99c0("","prl_client_app",0,pcVar10);
    return;
  }
  FUN_10031c890();
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar6 = FUN_100319960(uVar8);
  if (lVar6 == 0) {
    pcVar10 = " Failed to switch VM desktop view mode. Primary VM display object does not exist!";
    goto LAB_10033f3ef;
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar7 = FUN_100319390(uVar8);
  if (lVar7 == 0) {
    pcVar10 = " Failed to switch VM desktop view mode. VM object does not exist!";
    goto LAB_10033f3ef;
  }
  FUN_100188480(&local_40,lVar7);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar3 = FUN_100319ae0(uVar8);
  if (iVar3 == 2) {
    if (param_2 == '\0') goto LAB_10033f4fb;
    FUN_10018c2b0(lVar7);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    iVar3 = CVmRunTimeOptions::getActionOnStop();
    if (iVar3 == 0) goto LAB_10033f4fb;
  }
  iVar3 = FUN_10018d460(lVar7);
  lVar1 = *(long *)(lVar7 + 0x50);
  lVar11 = (long)*(int *)(lVar1 + 0xc) - (long)*(int *)(lVar1 + 8);
  uVar9 = 0;
  if (2 < (int)lVar11) {
    uVar9 = **(uint **)(lVar1 + -8 + (lVar11 + *(int *)(lVar1 + 8)) * 8);
  }
  bVar12 = true;
  if ((iVar3 != 0x30000006) && ((iVar3 != 0x30000007 || ((uVar9 & 0xfffffffe) != 0x30000004)))) {
    bVar12 = iVar3 == 0x30000004;
  }
  iVar3 = FUN_100325aa0(lVar6);
  uVar8 = FUN_100370280();
  iVar5 = 0;
  iVar4 = FUN_100375450(uVar8,&local_40,0);
  if ((param_2 == '\x01') && (!(bool)(bVar12 ^ 1U))) {
    FUN_10018c2b0(lVar7);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    iVar5 = CVmRunTimeOptions::getActionOnStop();
    if (iVar5 == 1) {
      uVar8 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x18);
      }
      local_58 = 3;
      local_50 = 0;
      local_54 = 0;
      local_4c = 0xffff;
      local_48 = 0;
      local_44 = 0;
      FUN_10031bef0(uVar8,0,&local_58);
      goto LAB_10033f4fb;
    }
    if (iVar5 == 2) {
      uVar8 = FUN_1001d50a0();
      FUN_1001d51e0(uVar8,0,1,0xffff);
      goto LAB_10033f4fb;
    }
  }
  if (iVar3 != 0) {
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
    }
    cVar2 = FUN_10031ae60(uVar8);
    if (cVar2 == '\0') {
      uVar8 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x18);
      }
      if (iVar4 == 3) {
        bVar13 = iVar5 != 0;
        if (!(bool)(bVar12 ^ 1U | bVar13)) {
          iVar3 = FUN_10018a9d0(lVar7);
          bVar13 = iVar3 == 0x30000009;
        }
      }
      else {
        bVar13 = false;
      }
      local_70 = 3;
      local_68 = 0;
      local_6c = 0;
      local_64 = 0xffff;
      local_60 = 0;
      local_5c = 0;
      FUN_10031bef0(uVar8,bVar13 ^ 1,&local_70);
    }
  }
LAB_10033f4fb:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

