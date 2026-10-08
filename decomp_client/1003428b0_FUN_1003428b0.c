
void FUN_1003428b0(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  QWidget *pQVar8;
  QSize *pQVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  QArrayData *pQVar19;
  int iVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  undefined8 in_stack_fffffffffffffef8;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  QArrayData *local_b8;
  QArrayData *local_b0;
  undefined4 local_a4;
  QMapNodeBase *local_a0;
  QMapNodeBase *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined8 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [16];
  undefined1 local_31;
  
  uVar4 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  if (param_1[2] == 0) {
    return;
  }
  if (*(int *)(param_1[2] + 4) == 0) {
    return;
  }
  if (param_1[3] == 0) {
    return;
  }
  pQVar8 = (QWidget *)FUN_100323e30(param_1[3],0);
  if (pQVar8 == (QWidget *)0x0) {
    return;
  }
  pQVar9 = (QSize *)FUN_100379860(pQVar8);
  if (pQVar9 == (QSize *)0x0) {
    return;
  }
  lVar11 = 0;
  if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar11 = param_1[3];
  }
  local_48 = FUN_100325fd0(lVar11);
  if ((local_48._8_4_ < local_48._0_4_) || (local_48._12_4_ < local_48._4_4_)) {
    if (DAT_10230ffd0 < 2) {
      return;
    }
    lVar11 = 0;
    if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar11 = param_1[3];
    }
    FUN_100323d90(&local_58,lVar11);
    QString::toLocal8Bit();
    pQVar19 = local_50 + *(long *)(local_50 + 0x10);
    lVar11 = 0;
    if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar11 = param_1[3];
    }
    uVar4 = FUN_100323e20(lVar11);
    FUN_100df99c0("GUI_DDRL","prl_client_app",2,
                  "[DRL] Skipped CVmDisplayDynResLogic::fitView for VM [%s], display #%d, new size is not valid"
                  ,pQVar19,uVar4);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100342a19;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_100342a19:
    if (*(int *)local_58 == -1) {
      return;
    }
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
LAB_100342ee7:
    QArrayData::deallocate(local_58,2,8);
    return;
  }
  if (1 < DAT_10230ffd0) {
    (**(code **)*param_1)(param_1);
    uVar10 = QMetaObject::className();
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,1);
    lVar11 = 0;
    if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar11 = param_1[3];
    }
    FUN_100323d90(&local_68,lVar11);
    QString::toLocal8Bit();
    pQVar19 = local_60 + *(long *)(local_60 + 0x10);
    lVar11 = 0;
    if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar11 = param_1[3];
    }
    uVar4 = FUN_100323e20(lVar11);
    FUN_100df99c0("GUI_DDRL","prl_client_app",2,
                  "[DRL] %s (enabled=%d) is about to fit VM [%s] display #%d view to new size %d,%d"
                  ,uVar10,uVar2,pQVar19,uVar4,(local_48._8_4_ + 1) - local_48._0_4_,
                  (local_48._12_4_ + 1) - local_48._4_4_);
    uVar4 = (undefined4)((ulong)pQVar19 >> 0x20);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100342b63;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100342b63:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100342b93;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_100342b93:
  lVar11 = 0;
  if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar11 = param_1[3];
  }
  dVar22 = (double)FUN_1003277b0(lVar11);
  dVar23 = (double)((local_48._8_4_ + 1) - local_48._0_4_) / dVar22;
  if (0.0 <= dVar23) {
    iVar14 = (int)(dVar23 + DAT_100e110f0);
  }
  else {
    iVar14 = (int)((dVar23 - (double)(int)(DAT_100e110e0 + dVar23)) + DAT_100e110f0) +
             (int)(DAT_100e110e0 + dVar23);
  }
  dVar23 = (double)((local_48._12_4_ + 1) - local_48._4_4_) / dVar22;
  if (0.0 <= dVar23) {
    iVar5 = (int)(dVar23 + DAT_100e110f0);
  }
  else {
    iVar5 = (int)((dVar23 - (double)(int)(DAT_100e110e0 + dVar23)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar23);
  }
  local_70 = CONCAT44(iVar5,iVar14);
  QWidget::resize(pQVar9);
  lVar11 = 0;
  if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar11 = param_1[3];
  }
  uVar10 = FUN_100323e00(lVar11);
  uVar10 = FUN_100319cb0(uVar10);
  lVar11 = 0;
  if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar11 = param_1[3];
  }
  uVar6 = FUN_100323e20(lVar11);
  cVar3 = FUN_1003380e0(uVar10,uVar6,local_48);
  if (cVar3 == '\0') {
    if (DAT_10230ffd0 < 2) {
      return;
    }
    lVar11 = 0;
    if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar11 = param_1[3];
    }
    FUN_100323d90(&local_80,lVar11);
    QString::toLocal8Bit();
    pQVar19 = local_78 + *(long *)(local_78 + 0x10);
    lVar11 = 0;
    if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar11 = param_1[3];
    }
    uVar6 = FUN_100323e20(lVar11);
    FUN_100df99c0("GUI_DDRL","prl_client_app",2,
                  "[DRL] Skipped view surrounding adjustment in CVmDisplayDynResLogic::fitView for VM [%s], display #%d, new guest rect %dx%d at (%d,%d) is not accepted by Desktop Dynamic Layout Logic."
                  ,pQVar19,uVar6,CONCAT44(uVar4,(local_48._8_4_ + 1) - local_48._0_4_),
                  (local_48._12_4_ + 1) - local_48._4_4_,local_48._0_4_,local_48._4_4_);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100342ebe;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_100342ebe:
    if (*(int *)local_80 == -1) {
      return;
    }
    local_58 = local_80;
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_100342ee7;
  }
  iVar14 = MacUtils::tabsCountInWindow(pQVar8);
  if (1 < iVar14) {
    if (DAT_10230ffd0 < 2) {
      return;
    }
    lVar11 = 0;
    if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar11 = param_1[3];
    }
    FUN_100323d90(&local_90,lVar11);
    QString::toLocal8Bit();
    pQVar19 = local_88 + *(long *)(local_88 + 0x10);
    lVar11 = 0;
    if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar11 = param_1[3];
    }
    uVar4 = FUN_100323e20(lVar11);
    FUN_100df99c0("GUI_DDRL","prl_client_app",2,
                  "[DRL] VM window is tabbed. Skipping view surrounding adjustment in CVmDisplayDynResLogic::fitView for VM [%s], display #%d"
                  ,pQVar19,uVar4);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100342da6;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_100342da6:
    if (*(int *)local_90 == -1) {
      return;
    }
    local_58 = local_90;
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_100342ee7;
  }
  lVar11 = 0;
  if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar11 = param_1[3];
  }
  lVar11 = FUN_100323e00(lVar11);
  auVar1 = local_48;
  if (lVar11 != 0) {
    lVar11 = 0;
    if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar11 = param_1[3];
    }
    uVar10 = FUN_100323e00(lVar11);
    uVar10 = FUN_100319cb0(uVar10);
    FUN_100338050(&local_98,uVar10);
    lVar11 = 0;
    if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar11 = param_1[3];
    }
    uVar7 = FUN_100323e20(lVar11);
    lVar11 = *(long *)(local_98 + 0x10);
    lVar17 = 0;
    if (*(long *)(local_98 + 0x10) == 0) {
LAB_100342fb3:
      lVar15 = 0;
    }
    else {
      do {
        while (lVar15 = lVar11, uVar16 = *(uint *)(lVar15 + 0x18), uVar16 < uVar7) {
          lVar11 = *(long *)(lVar15 + 0x10);
          if (*(long *)(lVar15 + 0x10) == 0) {
            if (lVar17 == 0) goto LAB_100342fb3;
            uVar16 = *(uint *)(lVar17 + 0x18);
            lVar15 = lVar17;
            goto LAB_100342faf;
          }
        }
        lVar11 = *(long *)(lVar15 + 8);
        lVar17 = lVar15;
      } while (*(long *)(lVar15 + 8) != 0);
LAB_100342faf:
      if (uVar7 < uVar16) goto LAB_100342fb3;
    }
    auVar1 = local_48;
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100342ff5;
      }
      if (*(long *)(local_98 + 0x10) != 0) {
        QMapDataBase::freeTree(local_98,(int)*(long *)(local_98 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_98);
      auVar1 = local_48;
    }
LAB_100342ff5:
    if (lVar15 != 0) {
      lVar11 = -1;
      if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (param_1[6] != 0)) {
        lVar11 = *(long *)(param_1[6] + 0x28);
        lVar11 = CONCAT44(*(int *)(lVar11 + 0x20) - *(int *)(lVar11 + 0x18),
                          *(int *)(lVar11 + 0x1c) - *(int *)(lVar11 + 0x14));
      }
      lVar17 = 0;
      if ((param_1[2] != 0) && (lVar17 = 0, *(int *)(param_1[2] + 4) != 0)) {
        lVar17 = param_1[3];
      }
      local_48 = auVar1;
      uVar10 = FUN_100323e00(lVar17);
      uVar10 = FUN_100319cb0(uVar10);
      FUN_100338050(&local_a0,uVar10);
      lVar17 = 0;
      if ((param_1[2] != 0) && (lVar17 = 0, *(int *)(param_1[2] + 4) != 0)) {
        lVar17 = param_1[3];
      }
      local_a4 = FUN_100323e20(lVar17);
      piVar12 = (int *)FUN_100339f40(&local_a0,&local_a4);
      iVar20 = (auVar1._8_4_ + 1) - auVar1._0_4_;
      iVar18 = (auVar1._12_4_ + 1) - auVar1._4_4_;
      iVar5 = (int)lVar11 + 1;
      iVar14 = (int)((ulong)(lVar11 + 0x100000000) >> 0x20);
      if (*piVar12 == iVar20) {
        if (piVar12[1] == iVar18) {
          if (piVar12[2] == iVar5) {
            bVar21 = piVar12[3] == iVar14;
          }
          else {
            bVar21 = false;
          }
        }
        else {
          bVar21 = false;
        }
      }
      else {
        bVar21 = false;
      }
      auVar1 = local_48;
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10034316f;
        }
        if (*(long *)(local_a0 + 0x10) != 0) {
          QMapDataBase::freeTree(local_a0,(int)*(long *)(local_a0 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)local_a0);
        auVar1 = local_48;
      }
LAB_10034316f:
      if (bVar21) {
        local_48 = auVar1;
        if (DAT_10230ffd0 < 2) goto LAB_1003433a0;
        lVar11 = 0;
        if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
          lVar11 = param_1[3];
        }
        FUN_100323d90(&local_b8,lVar11);
        QString::toUtf8();
        pQVar19 = local_b0 + *(long *)(local_b0 + 0x10);
        lVar11 = 0;
        if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
          lVar11 = param_1[3];
        }
        uVar6 = FUN_100323e20(lVar11);
        FUN_100df99c0("GUI_DDRL","prl_client_app",2,
                      "[DRL] Skipped view surrounding adjustment - already adjusted. VM [%s], display #%d, guest %dx%d, widget [%d,%d]"
                      ,pQVar19,uVar6,CONCAT44(uVar4,iVar20),iVar18,iVar5,iVar14);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100343266;
          }
          QArrayData::deallocate(local_b0,1,8);
        }
LAB_100343266:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003433a0;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
        goto LAB_1003433a0;
      }
    }
  }
  local_c8 = auVar1._0_4_;
  local_c4 = auVar1._4_4_;
  dVar23 = (double)((1 - local_c8) + auVar1._8_4_) / dVar22;
  if (0.0 <= dVar23) {
    local_c0 = (int)(dVar23 + DAT_100e110f0);
  }
  else {
    local_c0 = (int)((dVar23 - (double)(int)(DAT_100e110e0 + dVar23)) + DAT_100e110f0) +
               (int)(DAT_100e110e0 + dVar23);
  }
  dVar22 = (double)((1 - local_c4) + auVar1._12_4_) / dVar22;
  if (0.0 <= dVar22) {
    local_bc = (int)(dVar22 + DAT_100e110f0);
  }
  else {
    local_bc = (int)((dVar22 - (double)(int)(DAT_100e110e0 + dVar22)) + DAT_100e110f0) +
               (int)(DAT_100e110e0 + dVar22);
  }
  local_c0 = local_c8 + -1 + local_c0;
  local_bc = local_c4 + -1 + local_bc;
  local_48 = auVar1;
  (**(code **)(*param_1 + 0x80))(param_1,&local_c8);
LAB_1003433a0:
  lVar11 = 0;
  if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar11 = param_1[3];
  }
  lVar11 = FUN_100323e00(lVar11);
  if (lVar11 == 0) {
    return;
  }
  lVar11 = 0;
  if ((param_1[2] != 0) && (lVar11 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar11 = param_1[3];
  }
  uVar10 = FUN_100323e00(lVar11);
  plVar13 = (long *)FUN_100319cb0(uVar10);
  (**(code **)(*plVar13 + 0x68))(plVar13);
  return;
}

