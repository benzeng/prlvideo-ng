
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100ade9c0(undefined8 *param_1,undefined8 param_2,int *param_3,QRect *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  QRect *pQVar3;
  double dVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  void *pvVar18;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  long lVar19;
  int iVar20;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_var_02;
  int extraout_var_03;
  int extraout_var_04;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  double dVar28;
  undefined1 auVar29 [16];
  int local_14c;
  int local_148;
  int local_144;
  int local_13c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined **local_b0;
  int *local_a8;
  undefined1 local_a0 [8];
  int *local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [8];
  int *local_70;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined1 local_31;
  
  FUN_100ae78f0(local_48,&local_38);
  local_58 = 0;
  iStack_54 = 0;
  local_50 = -1;
  iStack_4c = -1;
  local_68 = 0;
  iStack_64 = 0;
  local_60 = -1;
  iStack_5c = -1;
  *(undefined4 *)(param_4 + 0x18) = 0;
  *(undefined4 *)(param_4 + 0x1c) = 0;
  *(undefined4 *)(param_4 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_4 + 0x24) = 0xffffffff;
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)(param_4 + 4) = 0;
  *(undefined4 *)(param_4 + 8) = 0xffffffff;
  *(undefined4 *)(param_4 + 0xc) = 0xffffffff;
  *(undefined8 *)(param_4 + 0x10) = 0;
  param_4[0x28] = (QRect)0x0;
  FUN_100ae57b0(local_78);
  iVar11 = FUN_100ae79e0(local_48);
  if (iVar11 == 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"Failed to get host displays geometry. Err = %d",
                    local_38);
    }
    *param_1 = &PTR_FUN_10223b2c8;
    plVar1 = param_1 + 1;
    if (*local_70 == 0) {
      if (local_70[2] < 0) {
        lVar21 = QArrayData::allocate(0x20,8,local_70[2] & 0x7fffffff,0);
        *plVar1 = lVar21;
        if (lVar21 == 0) {
          qBadAlloc();
        }
        *(byte *)(lVar21 + 0xb) = *(byte *)(lVar21 + 0xb) | 0x80;
      }
      else {
        lVar21 = QArrayData::allocate(0x20,8,(long)local_70[1],0);
        *plVar1 = lVar21;
        if (lVar21 == 0) {
          lVar21 = 0;
          qBadAlloc();
        }
      }
      auVar29._8_8_ = local_90._8_8_;
      auVar29._0_8_ = local_90._0_8_;
      if ((*(uint *)(lVar21 + 8) & 0x7fffffff) != 0) {
        lVar19 = (long)local_70[1] << 5;
        if (lVar19 != 0) {
          puVar22 = (undefined8 *)(*(long *)(local_70 + 4) + (long)local_70);
          puVar24 = (undefined8 *)(lVar21 + *(long *)(lVar21 + 0x10));
          do {
            puVar24[3] = puVar22[3];
            puVar24[2] = puVar22[2];
            uVar5 = *puVar22;
            puVar2 = puVar22 + 1;
            puVar22 = puVar22 + 4;
            puVar24[1] = *puVar2;
            *puVar24 = uVar5;
            puVar24 = puVar24 + 4;
            lVar19 = lVar19 + -0x20;
          } while (lVar19 != 0);
          lVar21 = *plVar1;
        }
        *(int *)(lVar21 + 4) = local_70[1];
        local_90 = auVar29;
      }
    }
    else {
      if (*local_70 != -1) {
        LOCK();
        *local_70 = *local_70 + 1;
        local_31 = *local_70 != 0;
        UNLOCK();
      }
      *plVar1 = (long)local_70;
    }
    goto LAB_100adfb8d;
  }
  iVar12 = FUN_100ae7f00(&local_68,&local_58,local_48);
  iVar11 = FUN_100ae79e0(local_48);
  if ((param_3[2] + 1) - *param_3 < 1) {
LAB_100adebb9:
    iVar13 = FUN_100ae79f0(local_48);
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                    "Main wnd geometry is empty. Primary display will be primaryScreen(%d)",iVar13);
    }
  }
  else {
    if ((param_3[3] + 1) - param_3[1] < 1) goto LAB_100adebb9;
    local_80 = CONCAT44((param_3[1] + param_3[3]) / 2,(*param_3 + param_3[2]) / 2);
    iVar13 = FUN_100ae7e50(local_48,&local_80);
    if ((iVar13 == -1) && (iVar13 = FUN_100ae79f0(local_48), 0 < DAT_10230ffd0)) {
      iVar25 = *param_3;
      iVar16 = param_3[1];
      iVar27 = param_3[2];
      iVar26 = param_3[3];
      uVar14 = FUN_100ae79f0(local_48);
      uVar15 = FUN_100ae79e0(local_48);
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                    "Cannot get display by Wnd rectangle([%d;%d]w=%d;h=%d); desktop.primaryScreen()=%d;\t\t\t\tdesktop.numScreens()=%d"
                    ,iVar25,iVar16,(1 - iVar25) + iVar27,(1 - iVar16) + iVar26,uVar14,uVar15);
    }
  }
  local_14c = 0;
  iVar25 = 0;
  if (param_3[4] == 0) {
    iVar11 = iVar13 + 1;
    iVar25 = iVar13;
  }
  iVar16 = iStack_4c - iStack_54;
  iVar27 = iVar11 - iVar25;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (long)iVar27;
  uVar23 = 0xffffffffffffffff;
  if (SUB168(auVar6 * ZEXT816(0x20),8) == 0) {
    uVar23 = SUB168(auVar6 * ZEXT816(0x20),0);
  }
  pvVar18 = operator_new__(uVar23);
  ___bzero(pvVar18,(long)iVar27 << 5);
  local_144 = -1;
  local_13c = -1;
  local_148 = iVar12;
  if (iVar25 < iVar11) {
    local_144 = -1;
    local_14c = 0;
    local_13c = -1;
    do {
      iVar26 = 0;
      if (iVar25 < iVar13) {
        iVar26 = iVar27;
      }
      auVar29 = FUN_100ae7d30(local_48,iVar25);
      local_90 = auVar29;
      iVar17 = FUN_100ae7de0(local_48);
      dVar28 = (double)MacUtils::getDisplayDPI(iVar17,false);
      iVar26 = (iVar26 - iVar13) + iVar25;
      dVar4 = *(double *)(param_3 + 6);
      if ((char)param_3[10] == '\0') {
        cVar10 = QRect::intersects((QRect *)local_90);
        if (cVar10 != '\0') {
          local_90._4_4_ = iStack_4c;
          local_13c = iVar26;
        }
        if (param_3[5] != 0) {
          cVar10 = QRect::intersects((QRect *)local_90);
          auVar9._8_8_ = local_90._8_8_;
          auVar9._0_8_ = local_90._0_8_;
          if (cVar10 != '\0') {
            local_144 = iVar26;
            if (iVar12 == 3) {
              iVar20 = DAT_10228293c - iStack_64;
              iVar17 = -iVar20;
              if (0 < iVar20) {
                iVar17 = iVar20;
              }
              iVar20 = DAT_10228293c;
              if (9 < iVar17) {
                _DAT_102282938 = CONCAT44(iStack_64,local_68);
                _DAT_102282940 = CONCAT44(iStack_5c,local_60);
                iVar20 = iStack_64;
              }
              local_90._12_4_ = iVar20;
              local_14c = iStack_5c - iStack_64;
              local_148 = 3;
            }
            else if (iVar12 == 2) {
              iVar20 = DAT_102282938 - local_68;
              iVar17 = -iVar20;
              if (0 < iVar20) {
                iVar17 = iVar20;
              }
              iVar20 = DAT_102282938;
              if (9 < iVar17) {
                _DAT_102282938 = CONCAT44(iStack_64,local_68);
                _DAT_102282940 = CONCAT44(iStack_5c,local_60);
                iVar20 = local_68;
              }
              local_90._8_4_ = iVar20;
              local_14c = local_60 - local_68;
              local_148 = 2;
            }
            else {
              local_90 = auVar9;
              if (iVar12 == 0) {
                iVar20 = DAT_102282940 - local_60;
                iVar17 = -iVar20;
                if (0 < iVar20) {
                  iVar17 = iVar20;
                }
                iVar20 = DAT_102282940;
                if (9 < iVar17) {
                  _DAT_102282938 = CONCAT44(iStack_64,local_68);
                  _DAT_102282940 = CONCAT44(iStack_5c,local_60);
                  iVar20 = local_60;
                }
                local_90._0_4_ = iVar20;
                local_14c = local_60 - local_68;
                local_148 = 0;
              }
            }
          }
        }
      }
      if (iVar25 == iVar13) {
        *(undefined8 *)(param_4 + 0x10) = local_90._0_8_;
      }
      auVar29 = QRect::operator|(param_4,(QRect *)local_90);
      *(undefined1 (*) [16])param_4 = auVar29;
      lVar21 = (long)iVar26 * 0x20;
      *(int *)((long)pvVar18 + lVar21 + 0x18) = local_90._0_4_;
      *(int *)((long)pvVar18 + lVar21 + 0x1c) = local_90._4_4_;
      *(short *)((long)pvVar18 + lVar21 + 4) = (local_90._8_2_ + 1) - local_90._0_2_;
      *(short *)((long)pvVar18 + lVar21 + 6) = (local_90._12_2_ + 1) - local_90._4_2_;
      *(short *)((long)pvVar18 + lVar21) = (short)iVar26;
      *(short *)((long)pvVar18 + lVar21 + 0x12) =
           (short)(int)((double)((int)dVar28 & 0xffff) * dVar4);
      iVar25 = iVar25 + 1;
    } while (iVar25 < iVar11);
  }
  FUN_100ae59d0(local_a0,iVar27,pvVar18);
  local_b0 = &PTR_FUN_10223b2c8;
  if (*local_98 == 0) {
    if (local_98[2] < 0) {
      local_a8 = (int *)QArrayData::allocate(0x20,8,local_98[2] & 0x7fffffff,0);
      if (local_a8 == (int *)0x0) {
        qBadAlloc();
      }
      *(byte *)((long)local_a8 + 0xb) = *(byte *)((long)local_a8 + 0xb) | 0x80;
    }
    else {
      local_a8 = (int *)QArrayData::allocate(0x20,8,(long)local_98[1],0);
      if (local_a8 == (int *)0x0) {
        qBadAlloc();
      }
    }
    if ((local_a8[2] & 0x7fffffffU) != 0) {
      lVar21 = (long)local_98[1] << 5;
      if (lVar21 != 0) {
        puVar22 = (undefined8 *)(*(long *)(local_98 + 4) + (long)local_98);
        puVar24 = (undefined8 *)(*(long *)(local_a8 + 4) + (long)local_a8);
        do {
          puVar24[3] = puVar22[3];
          puVar24[2] = puVar22[2];
          uVar5 = *puVar22;
          puVar2 = puVar22 + 1;
          puVar22 = puVar22 + 4;
          puVar24[1] = *puVar2;
          *puVar24 = uVar5;
          puVar24 = puVar24 + 4;
          lVar21 = lVar21 + -0x20;
        } while (lVar21 != 0);
      }
      local_a8[1] = local_98[1];
    }
  }
  else if (*local_98 == -1) {
    local_a8 = local_98;
  }
  else {
    LOCK();
    *local_98 = *local_98 + 1;
    local_31 = *local_98 != 0;
    UNLOCK();
    local_a8 = local_98;
  }
  local_b8 = *(undefined8 *)((long)pvVar18 + 0x18);
  FUN_100ae65b0(local_a0,&local_b8);
  operator_delete__(pvVar18);
  cVar10 = FUN_100ae6240(local_a0,*(undefined1 *)((long)param_3 + 0x29));
  pQVar3 = param_4 + 0x18;
  bVar8 = 1;
  if ((cVar10 == '\0') && ((char)param_3[10] == '\0')) {
    FUN_100adfc60(local_c8);
    FUN_100ae5dd0(local_78,local_c8);
    FUN_100ae5820(local_c8);
    cVar10 = FUN_100ae6240(local_78,*(undefined1 *)((long)param_3 + 0x29));
    if (cVar10 == '\0') {
      if ((-1 < local_144) && (param_3[5] != 0)) {
        FUN_100adfde0(local_d8);
        FUN_100ae5dd0(local_78,local_d8);
        FUN_100ae5820(local_d8);
        cVar10 = FUN_100ae6240(local_78,*(undefined1 *)((long)param_3 + 0x29));
        if (cVar10 == '\0') {
          FUN_100adff60(local_e8);
          FUN_100ae5dd0(local_78,local_e8);
          FUN_100ae5820(local_e8);
          cVar10 = FUN_100ae6240(local_78,*(undefined1 *)((long)param_3 + 0x29));
          if (cVar10 != '\0') {
            *(ulong *)(param_4 + 0x20) = CONCAT44(iStack_4c,local_50);
            *(ulong *)pQVar3 = CONCAT44(iStack_54,local_58);
            if (local_13c == 0) {
              *(int *)(param_4 + 0x14) = *(int *)(param_4 + 0x14) - iVar16;
            }
            param_4[0x28] = (QRect)0x1;
            if (local_148 == 0 && local_144 == 0) {
              *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - local_14c;
            }
            FUN_100ae5dd0(local_a0,local_78);
            goto LAB_100adf234;
          }
        }
        else {
          param_4[0x28] = (QRect)0x1;
          if (local_148 == 0 && local_144 == 0) {
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - local_14c;
          }
          FUN_100ae5dd0(local_a0,local_78);
        }
      }
    }
    else {
      *(ulong *)(param_4 + 0x20) = CONCAT44(iStack_4c,local_50);
      *(ulong *)pQVar3 = CONCAT44(iStack_54,local_58);
      if (local_13c == 0) {
        *(int *)(param_4 + 0x14) = *(int *)(param_4 + 0x14) - iVar16;
      }
      FUN_100ae5dd0(local_a0,local_78);
LAB_100adf234:
      bVar8 = 0;
    }
  }
  iVar11 = FUN_100ae60d0(local_a0,0);
  if ((extraout_EDX + 1) - iVar11 < param_3[8]) {
LAB_100adf4a5:
    FUN_100ae5dd0(local_78,local_a0);
    bVar7 = (bool)(local_13c == 0 & bVar8);
    if (bVar7) {
      FUN_100adfc60(local_f8);
      FUN_100ae5dd0(local_78,local_f8);
      FUN_100ae5820(local_f8);
    }
    if ((local_144 == 0) && (param_4[0x28] == (QRect)0x0)) {
      if (local_148 == 3) {
        FUN_100ae7d30(local_48,iVar13);
        FUN_100ae60d0(local_78,0);
      }
      else {
        FUN_100ae7d30(local_48,iVar13);
        FUN_100ae60d0(local_78,0);
      }
      FUN_100adfde0(local_108);
      FUN_100ae5dd0(local_78,local_108);
      cVar10 = '\x01';
      FUN_100ae5820(local_108);
    }
    else {
      if (!bVar7) goto LAB_100adf727;
      cVar10 = '\0';
    }
    iVar11 = FUN_100ae60d0(local_78,0);
    if (param_3[8] <= (extraout_EDX_00 + 1) - iVar11) {
      FUN_100ae60d0(local_78,0);
      if (param_3[9] <= (extraout_var_03 + 1) - extraout_var_00) {
        if (0 < DAT_10230ffd0) {
          iVar11 = FUN_100ae60d0(local_78,0);
          FUN_100ae60d0(local_78,0);
          FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                        "Primary screen size increased to [%d;%d] minimal size (%d;%d) [menuadded=%d; dockadded=%d]"
                        ,(extraout_EDX_01 + 1) - iVar11,(extraout_var_04 + 1) - extraout_var_01,
                        param_3[8],param_3[9],bVar7,cVar10);
        }
        if (bVar7) {
          *(ulong *)(param_4 + 0x20) = CONCAT44(iStack_4c,local_50);
          *(ulong *)pQVar3 = CONCAT44(iStack_54,local_58);
          if (local_13c == 0) {
            *(int *)(param_4 + 0x14) = *(int *)(param_4 + 0x14) - iVar16;
          }
        }
        if ((cVar10 != '\0') && (param_4[0x28] = (QRect)0x1, local_148 == 0 && local_144 == 0)) {
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - local_14c;
        }
        FUN_100ae5dd0(local_a0,local_78);
      }
    }
  }
  else {
    FUN_100ae60d0(local_a0,0);
    if ((extraout_var_02 + 1) - extraout_var < param_3[9]) goto LAB_100adf4a5;
  }
LAB_100adf727:
  cVar10 = FUN_100ae6580(local_a0,*(undefined1 *)((long)param_3 + 0x29));
  if (cVar10 == '\0') {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"ValidityStrongCheck: failed");
    }
    cVar10 = FUN_100ae6240(local_a0,*(undefined1 *)((long)param_3 + 0x29));
    if ((0 < DAT_10230ffd0) && (cVar10 == '\x01')) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"[weak]CheckValidity: passed");
    }
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"Displays configuration dump");
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"  initial displays cfg:");
      }
    }
    FUN_100ae6c10(&local_b0,1);
    iVar11 = 0;
    if (0 < DAT_10230ffd0) {
      iVar11 = 0;
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"  other params:");
      if (0 < DAT_10230ffd0) {
        iVar11 = 0;
        FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                      "    mainWndRect(xywh)={%d, %d, %d, %d} bUseMultipleMonitors=%d bExcludeDock=%d"
                      ,*param_3,param_3[1],(1 - *param_3) + param_3[2],(1 - param_3[1]) + param_3[3]
                      ,param_3[4],param_3[5]);
        if (0 < DAT_10230ffd0) {
          iVar26 = (1 - local_58) + local_50;
          iVar27 = (1 - iStack_54) + iStack_4c;
          iVar11 = 0;
          iVar25 = local_58;
          iVar16 = iStack_54;
          FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                        "    rectDock(xywh)={%d,%d,%d,%d} rectMenu(xywh)={%d, %d, %d, %d} posDock=%d"
                        ,local_68,iStack_64,(1 - local_68) + local_60,(1 - iStack_64) + iStack_5c,
                        local_58,iStack_54,iVar26,iVar27,iVar12);
          if (0 < DAT_10230ffd0) {
            uVar14 = FUN_100ae79f0(local_48);
            iVar11 = 0;
            FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                          "    primaryDisplay=%d desktop.primaryScreen=%d displayWithMenuIndex=%d displayWithDockIndex=%d"
                          ,iVar13,uVar14,local_13c,local_144,iVar25,iVar16,iVar26,iVar27,iVar12);
            if (0 < DAT_10230ffd0) {
              uVar14 = FUN_100ae79e0(local_48);
              iVar11 = 0;
              FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"  desktop cfg: numScreens=%d",uVar14);
            }
          }
        }
      }
    }
    while( true ) {
      iVar12 = FUN_100ae79e0(local_48);
      if (iVar12 <= iVar11) break;
      auVar29 = FUN_100ae7d30(local_48,iVar11);
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"    desktopRect(%d) xywh={%d, %d, %d, %d}",
                      iVar11,auVar29._0_8_ & 0xffffffff,auVar29._4_4_,
                      (auVar29._8_4_ + 1) - auVar29._0_4_,(auVar29._12_4_ + 1) - auVar29._4_4_);
      }
      iVar11 = iVar11 + 1;
    }
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"  final displays cfg:");
    }
    FUN_100ae6c10(local_a0,1);
  }
  *param_1 = &PTR_FUN_10223b2c8;
  plVar1 = param_1 + 1;
  if (*local_98 == 0) {
    if (local_98[2] < 0) {
      lVar21 = QArrayData::allocate(0x20,8,local_98[2] & 0x7fffffff,0);
      *plVar1 = lVar21;
      if (lVar21 == 0) {
        qBadAlloc();
      }
      *(byte *)(lVar21 + 0xb) = *(byte *)(lVar21 + 0xb) | 0x80;
    }
    else {
      lVar21 = QArrayData::allocate(0x20,8,(long)local_98[1],0);
      *plVar1 = lVar21;
      if (lVar21 == 0) {
        lVar21 = 0;
        qBadAlloc();
      }
    }
    if ((*(uint *)(lVar21 + 8) & 0x7fffffff) != 0) {
      lVar19 = (long)local_98[1] << 5;
      if (lVar19 != 0) {
        puVar22 = (undefined8 *)(*(long *)(local_98 + 4) + (long)local_98);
        puVar24 = (undefined8 *)(lVar21 + *(long *)(lVar21 + 0x10));
        do {
          puVar24[3] = puVar22[3];
          puVar24[2] = puVar22[2];
          uVar5 = *puVar22;
          puVar2 = puVar22 + 1;
          puVar22 = puVar22 + 4;
          puVar24[1] = *puVar2;
          *puVar24 = uVar5;
          puVar24 = puVar24 + 4;
          lVar19 = lVar19 + -0x20;
        } while (lVar19 != 0);
        lVar21 = *plVar1;
      }
      *(int *)(lVar21 + 4) = local_98[1];
    }
  }
  else if (*local_98 == -1) {
    *plVar1 = (long)local_98;
  }
  else {
    LOCK();
    *local_98 = *local_98 + 1;
    local_31 = *local_98 != 0;
    UNLOCK();
    *plVar1 = (long)local_98;
  }
  FUN_100ae5820(&local_b0);
  FUN_100ae5820(local_a0);
LAB_100adfb8d:
  FUN_100ae5820(local_78);
  FUN_100ae79a0(local_48);
  return param_1;
}

