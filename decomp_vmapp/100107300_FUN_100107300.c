
void FUN_100107300(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  CVmEventParameter *pCVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint local_94;
  undefined1 local_90 [8];
  QArrayData *local_88;
  int *local_80;
  long *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  CVmEventParameter *local_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  undefined1 local_31;
  
  iVar3 = FUN_100106810(local_90);
  if (iVar3 != 0) {
    return;
  }
  cVar2 = FUN_100106640(&DAT_100b2e3e0,local_90);
  if (cVar2 != '\0') {
    return;
  }
  lVar7 = DAT_1011c3698 + 0x10840;
  local_88 = (QArrayData *)QString::fromAscii_helper("parallels.ToolsInstallation.guest.win",0x25);
  FUN_100473b30(&local_80,lVar7,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) goto LAB_1001073a9;
      local_31 = 0;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1001073a9:
  if (local_80[0x16] == 0) {
    iVar4 = 0;
    local_94 = 0;
    iVar8 = 0;
    iVar3 = 0;
    bVar1 = false;
    if (local_80 == (int *)0x0) {
      return;
    }
  }
  else {
    iVar3 = local_80[6];
    iVar8 = local_80[7];
    local_94 = local_80[8];
    iVar4 = local_80[9];
    bVar1 = true;
  }
  LOCK();
  *local_80 = *local_80 + -1;
  local_31 = *local_80 != 0;
  UNLOCK();
  if ((!(bool)local_31) && (local_80 != (int *)0x0)) {
    FUN_100031ed0(local_80);
    operator_delete(local_80);
  }
  if (!bVar1) {
    return;
  }
  iVar9 = 0;
  if (-1 < iVar4) {
    iVar9 = iVar4;
  }
  iVar4 = _memcmp(&DAT_100b2e3e8,&DAT_1011b768c,0x10);
  if (local_94 < 0x3a4b) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  if (0x3a4a < DAT_1011b7694) {
    return;
  }
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("FIXWIN8VIDEOFLAGS","vm",1,
                  "version changed from {%u, %u, %u, %u} to {%u, %u, %u, %u}, fix system flags",
                  DAT_1011b768c,DAT_1011b7690,DAT_1011b7694,DAT_1011b7698,iVar3,iVar8,local_94,iVar9
                 );
  }
  local_58 = (undefined8 *)0x0;
  puStack_50 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  pCVar5 = operator_new(0xd0);
  local_68 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_70 = (QArrayData *)QString::fromAscii_helper("vmcfg_system_flags_value",0x18);
  CVmEventParameter::CVmEventParameter(pCVar5,1,&local_68);
  local_60 = pCVar5;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010755d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10010755d:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010758d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10010758d:
  if (puStack_50 == local_48) {
    FUN_10002da50(&local_58,&local_60);
  }
  else {
    *puStack_50 = pCVar5;
    puStack_50 = puStack_50 + 1;
  }
  lVar7 = DAT_1011c3650;
  plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_78 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_100bef0d0;
    local_78 = plVar6;
  }
  cVar2 = FUN_100063770(lVar7,0x186bc,0,&local_58,0xbbb,&local_78);
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar6 = local_78 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if (cVar2 == '\0') {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("FIXWIN8VIDEOFLAGS","vm",1,"Failed to post config update");
    }
  }
  else {
    if (*(long *)(*(long *)(DAT_1011c3650 + 0x10) + 0x120) != 0) {
      FUN_100107830();
    }
    FUN_100107830(*(undefined8 *)(DAT_1011c3698 + 0x110));
  }
  if (local_58 != (undefined8 *)0x0) {
    if (puStack_50 != local_58) {
      puStack_50 = (undefined8 *)
                   ((~((long)puStack_50 + (-8 - (long)local_58)) & 0xfffffffffffffff8U) +
                   (long)puStack_50);
    }
    operator_delete(local_58);
  }
  DAT_1011b7698 = iVar9;
  DAT_1011b7694 = local_94;
  DAT_1011b7690 = iVar8;
  DAT_1011b768c = iVar3;
  return;
}

