
void FUN_10002c480(undefined8 param_1,long *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  bool bVar13;
  ulong uVar14;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  if ((param_3 & 0x14) == 0) {
    return;
  }
  lVar1 = *param_2;
  local_40 = *(undefined8 *)(lVar1 + 0x38);
  local_48 = *(ulong *)(lVar1 + 0x30);
  local_50 = *(undefined8 *)(lVar1 + 0x28);
  local_60 = *(ulong *)(lVar1 + 0x18);
  uVar2 = *(ulong *)(lVar1 + 0x20);
  lVar3 = *(long *)(lVar1 + 0x48);
  if (*(uint *)(lVar3 + 4) < 8) {
    uVar11 = 0xffffffff;
    lVar12 = 0;
    if (3 < *(uint *)(lVar3 + 4)) {
      uVar11 = *(undefined4 *)(lVar3 + *(long *)(lVar3 + 0x10));
      lVar12 = 0;
    }
  }
  else {
    lVar12 = lVar3 + *(long *)(lVar3 + 0x10);
    uVar11 = *(undefined4 *)(lVar3 + *(long *)(lVar3 + 0x10));
  }
  uVar5 = (uint)local_60;
  uVar14 = local_60 & 0xffffffff;
  uVar4 = local_60 >> 0x20;
  local_58._4_4_ = (undefined4)(uVar2 >> 0x20);
  uVar6 = local_58._4_4_;
  lVar1 = *(long *)(lVar1 + 8);
  local_58 = uVar2;
  iVar7 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     "parallels.ToolsInstallation.guest.win",0xffffffff,1);
  iVar10 = 0x3041a28f;
  if (iVar7 == 0) {
    bVar13 = true;
  }
  else {
    lVar1 = *(long *)(*param_2 + 8);
    iVar7 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       "parallels.ToolsInstallation.guest.mac",0xffffffff,1);
    if (iVar7 == 0) {
      bVar13 = true;
    }
    else {
      lVar1 = *(long *)(*param_2 + 8);
      iVar7 = QString::compare_helper
                        (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                         "parallels.ToolsInstallation.guest.lin",0xffffffff,1);
      bVar13 = false;
      iVar10 = 0;
      if (iVar7 == 0) {
        bVar13 = 0x4e4a < (uint)uVar2 && 8 < uVar5;
        iVar10 = 0x3041a28f;
      }
    }
  }
  bVar9 = (int)local_48 != 0 && iVar10 == (int)local_48;
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("PTIAHOST","vm",1,"onTisRecordChanged. upgradeKey=0x%08X ==> uptodate = %d",
                  local_48 & 0xffffffff,bVar9);
  }
  if (lVar12 == 0) {
    local_a8 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3.%4",0xb);
    QString::arg(&local_a0,&local_a8,uVar14,0,10,0x20);
    QString::arg(&local_98,&local_a0,uVar4,0,10,0x20);
    QString::arg(&local_90,&local_98,uVar2 & 0xffffffff,0,10,0x20);
    uVar8 = 0;
    if (-1 < (long)uVar2) {
      uVar8 = uVar6;
    }
    QString::arg(&local_68,&local_90,uVar8,0,10,0x20);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002c87e;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10002c87e:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002c8b4;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_10002c8b4:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002c8ea;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10002c8ea:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002c920;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
  }
  else {
    local_88 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3-%4",0xb);
    QString::arg(&local_80,&local_88,*(undefined4 *)(lVar12 + 4),0,10,0x20);
    QString::arg(&local_78,&local_80,*(undefined4 *)(lVar12 + 8),0,10,0x20);
    QString::arg(&local_70,&local_78,*(undefined4 *)(lVar12 + 0xc),0,10,0x20);
    QString::arg(&local_68,&local_70,*(undefined4 *)(lVar12 + 0x10),0,10,0x20);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002c6f8;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10002c6f8:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002c728;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_10002c728:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002c758;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10002c758:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002c920;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_10002c920:
  local_b0 = local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  FUN_100026d50(param_1,uVar11,bVar9,bVar13,&local_b0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002c992;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10002c992:
  FUN_1001072b0(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return;
}

