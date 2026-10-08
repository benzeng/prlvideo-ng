
undefined8 FUN_10006bd30(QWidget *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  QWidget *pQVar11;
  undefined8 uVar12;
  ulong *puVar13;
  char *pcVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  ulong local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  ulong local_38;
  
  cVar2 = MacUtils::isWindowInNativeFullScreen(param_1);
  if ((cVar2 == '\0') &&
     ((iVar4 = MacUtils::tabsCountInWindow(param_1), iVar4 < 2 ||
      (cVar2 = MacUtils::isWindowOnActiveTab(param_1), cVar2 != '\0')))) {
    lVar8 = FUN_10036cca0(param_1);
    if (lVar8 == 0) {
      pcVar14 = "Invalid display";
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_10036cca0(param_1);
      auVar27 = FUN_100325fd0(uVar9);
      if (((auVar27._12_4_ + 1) - auVar27._4_4_ | (auVar27._8_4_ + 1) - auVar27._0_4_) < 0) {
        if (DAT_10230ffd0 < 4) goto LAB_10006bec2;
        pcVar14 = "Guest size is not valid";
      }
      else {
        FUN_10036ab70(param_1);
        cVar2 = CScrollArea::widgetResizable();
        if (cVar2 == '\0') {
          if (DAT_10230ffd0 < 4) goto LAB_10006bec2;
          pcVar14 = "Console view is not resizable";
        }
        else {
          uVar9 = FUN_10036ab40(param_1);
          iVar4 = FUN_10018a9d0(uVar9);
          if (iVar4 == 0x30000004) {
            auVar27 = QWidget::frameGeometry();
            if (((auVar27._8_4_ + 1) - auVar27._0_4_ == *param_2) &&
               ((auVar27._12_4_ + 1) - auVar27._4_4_ == param_2[1])) {
              if (DAT_10230ffd0 < 4) goto LAB_10006bec2;
              pcVar14 = "Equal sizes";
            }
            else {
              uVar9 = FUN_10036cca0(param_1);
              iVar4 = FUN_100325aa0(uVar9);
              if ((iVar4 != 4) || (iVar4 = _GetCurrentKeyModifiers(), iVar4 != 0x800)) {
                lVar10 = FUN_10036da80(param_1);
                auVar27 = QWidget::frameGeometry();
                lVar8 = *(long *)(param_1 + 0x28);
                iVar22 = ~*(uint *)(lVar8 + 0x1c) + *(int *)(lVar8 + 0x14) +
                         (((int)lVar10 + 1 + auVar27._8_4_) - auVar27._0_4_);
                iVar4 = ~*(uint *)(lVar8 + 0x20) + *(int *)(lVar8 + 0x18) +
                        (int)(((ulong)(uint)((auVar27._12_4_ + 1) - auVar27._4_4_) << 0x20) + lVar10
                             >> 0x20);
                uVar23 = *param_2 - iVar22;
                uVar5 = param_2[1] - iVar4;
                uVar16 = (ulong)uVar5;
                uVar20 = CONCAT44(uVar5,uVar23);
                local_58 = uVar20;
                uVar9 = FUN_10036cca0(param_1);
                uVar9 = FUN_100323e00(uVar9);
                cVar2 = FUN_10031c1c0(uVar9);
                if (cVar2 != '\0') {
                  uVar9 = FUN_10036cca0(param_1);
                  iVar6 = FUN_100325aa0(uVar9);
                  if (iVar6 != 4) {
                    if (3 < DAT_10230ffd0) {
                      uVar9 = FUN_10036cca0(param_1);
                      uVar9 = FUN_100323e00(uVar9);
                      uVar3 = FUN_10031c1c0(uVar9);
                      uVar9 = FUN_10036cca0(param_1);
                      iVar6 = FUN_100325aa0(uVar9);
                      FUN_100df99c0("","prl_client_app",4,"Dyn res=%d, modality=%d",uVar3,iVar6 != 4
                                   );
                    }
                    local_38 = uVar20;
                    uVar9 = FUN_10036ab40(param_1);
                    uVar9 = FUN_100120d20(uVar9);
                    uVar12 = FUN_10036cca0(param_1);
                    dVar25 = (double)FUN_1003277b0(uVar12);
                    dVar26 = (double)(int)uVar9 / dVar25;
                    if (0.0 <= dVar26) {
                      iVar6 = (int)(dVar26 + DAT_100e110f0);
                    }
                    else {
                      iVar6 = (int)((dVar26 - (double)(int)(DAT_100e110e0 + dVar26)) + DAT_100e110f0
                                   ) + (int)(DAT_100e110e0 + dVar26);
                    }
                    dVar25 = (double)(int)((ulong)uVar9 >> 0x20) / dVar25;
                    if (0.0 <= dVar25) {
                      iVar24 = (int)(dVar25 + DAT_100e110f0);
                    }
                    else {
                      iVar24 = (int)((dVar25 - (double)(int)(DAT_100e110e0 + dVar25)) +
                                    DAT_100e110f0) + (int)(DAT_100e110e0 + dVar25);
                    }
                    local_40 = CONCAT44(iVar24,iVar6);
                    uVar9 = FUN_10036ab40(param_1);
                    uVar7 = FUN_10018f890(uVar9);
                    uVar9 = FUN_100120de0(uVar7);
                    uVar12 = FUN_10036cca0(param_1);
                    dVar25 = (double)FUN_1003277b0(uVar12);
                    dVar26 = (double)(int)uVar9 / dVar25;
                    if (0.0 <= dVar26) {
                      uVar19 = (uint)(dVar26 + DAT_100e110f0);
                    }
                    else {
                      uVar19 = (int)((dVar26 - (double)(int)(DAT_100e110e0 + dVar26)) +
                                    DAT_100e110f0) + (int)(DAT_100e110e0 + dVar26);
                    }
                    dVar25 = (double)(int)((ulong)uVar9 >> 0x20) / dVar25;
                    if (0.0 <= dVar25) {
                      uVar17 = (uint)(dVar25 + DAT_100e110f0);
                    }
                    else {
                      uVar17 = (int)((dVar25 - (double)(int)(DAT_100e110e0 + dVar25)) +
                                    DAT_100e110f0) + (int)(DAT_100e110e0 + dVar25);
                    }
                    uVar18 = (ulong)uVar23;
                    if (((int)uVar23 < iVar6) || ((int)uVar5 < iVar24)) {
                      local_48 = uVar20;
                      local_48 = QSize::scaled(&local_48,&local_40,2);
                      uVar20 = local_48 >> 0x20;
                      iVar6 = (int)(local_48 >> 0x20);
                      if (((int)uVar19 < (int)local_48) || ((int)uVar17 < iVar6)) {
                        local_38 = (ulong)uVar19;
                        if ((int)local_48 <= (int)uVar19) {
                          local_38 = local_48 & 0xffffffff;
                        }
                        if ((int)uVar17 < iVar6) {
                          uVar20 = (ulong)uVar17;
                        }
                        local_38 = local_38 | uVar20 << 0x20;
                        local_38 = QSize::scaled(&local_38,&local_58,1);
                        if (3 < DAT_10230ffd0) {
                          FUN_100df99c0("","prl_client_app",4,
                                        "Guest resolution adjusted to max recomended");
                        }
                        uVar16 = local_38 >> 0x20;
                        uVar18 = local_38;
                      }
                    }
                    iVar6 = (int)uVar16;
                    iVar24 = (int)uVar18;
                    if (((int)uVar17 < iVar6) || ((int)uVar19 < iVar24)) {
                      uVar20 = (ulong)uVar19;
                      if (iVar24 <= (int)uVar19) {
                        uVar20 = uVar18 & 0xffffffff;
                      }
                      uVar18 = (ulong)uVar17;
                      if (iVar6 <= (int)uVar17) {
                        uVar18 = uVar16;
                      }
                      local_38 = uVar20 | uVar18 << 0x20;
                      iVar6 = (int)uVar18;
                      iVar24 = (int)uVar20;
                    }
                    iVar24 = iVar24 - (int)local_40;
                    iVar21 = -iVar24;
                    if (0 < iVar24) {
                      iVar21 = iVar24;
                    }
                    if (iVar21 < 0x1f) {
                      iVar6 = iVar6 - (int)(local_40 >> 0x20);
                      iVar24 = -iVar6;
                      if (0 < iVar6) {
                        iVar24 = iVar6;
                      }
                      puVar13 = &local_38;
                      if (iVar24 < 0x1f) {
                        puVar13 = &local_40;
                      }
                    }
                    else {
                      puVar13 = &local_38;
                    }
                    iVar24 = (int)*puVar13;
                    iVar6 = (int)(*puVar13 >> 0x20);
                    goto LAB_10006c501;
                  }
                }
                uVar9 = FUN_10036cca0(param_1);
                auVar27 = FUN_100325fd0(uVar9);
                uVar9 = FUN_10036cca0(param_1);
                dVar25 = (double)FUN_1003277b0(uVar9);
                dVar26 = (double)((auVar27._8_4_ + 1) - auVar27._0_4_) / dVar25;
                if (0.0 <= dVar26) {
                  iVar6 = (int)(dVar26 + DAT_100e110f0);
                }
                else {
                  iVar6 = (int)((dVar26 - (double)(int)(DAT_100e110e0 + dVar26)) + DAT_100e110f0) +
                          (int)(DAT_100e110e0 + dVar26);
                }
                dVar25 = (double)((auVar27._12_4_ + 1) - auVar27._4_4_) / dVar25;
                if (0.0 <= dVar25) {
                  iVar24 = (int)(dVar25 + DAT_100e110f0);
                }
                else {
                  iVar24 = (int)((dVar25 - (double)(int)(DAT_100e110e0 + dVar25)) + DAT_100e110f0) +
                           (int)(DAT_100e110e0 + dVar25);
                }
                local_38 = CONCAT44(iVar24,iVar6);
                iVar21 = (int)((double)(int)uVar5 * ((double)iVar6 / (double)iVar24));
                local_40 = CONCAT44(uVar5,iVar21);
                uVar7 = FUN_10036c900(param_1);
                local_48 = FUN_10037a280(uVar7);
                if ((iVar21 < (int)local_48) || ((int)uVar5 < (int)(local_48 >> 0x20))) {
                  local_40 = QSize::scaled(&local_40,&local_48,2);
                }
                pQVar11 = (QWidget *)QApplication::desktop();
                auVar27 = QDesktopWidget::availableGeometry(pQVar11);
                iVar21 = ((auVar27._8_4_ + 1) - auVar27._0_4_) - iVar22;
                iVar15 = ((auVar27._12_4_ + 1) - auVar27._4_4_) - iVar4;
                local_50 = CONCAT44(iVar15,iVar21);
                if ((iVar21 < (int)local_40) || (iVar15 < (int)(local_40 >> 0x20))) {
                  local_40 = QSize::scaled(&local_40,&local_50,1);
                }
                iVar6 = (int)local_40 - iVar6;
                iVar21 = -iVar6;
                if (0 < iVar6) {
                  iVar21 = iVar6;
                }
                if (iVar21 < 0x1f) {
                  iVar24 = (int)(local_40 >> 0x20) - iVar24;
                  iVar6 = -iVar24;
                  if (0 < iVar24) {
                    iVar6 = iVar24;
                  }
                  bVar1 = iVar6 < 0x1f;
                }
                else {
                  bVar1 = false;
                }
                puVar13 = &local_40;
                if (bVar1) {
                  puVar13 = &local_38;
                }
                iVar24 = (int)*puVar13;
                iVar6 = (int)(*puVar13 >> 0x20);
LAB_10006c501:
                return CONCAT44(iVar6 + iVar4,iVar22 + iVar24);
              }
              if (DAT_10230ffd0 < 4) goto LAB_10006bec2;
              pcVar14 = "Alt pressed in Modality";
            }
          }
          else {
            if (DAT_10230ffd0 < 4) goto LAB_10006bec2;
            pcVar14 = "VM is not running";
          }
        }
      }
      uVar9 = 4;
    }
    FUN_100df99c0("","prl_client_app",uVar9,pcVar14);
  }
LAB_10006bec2:
  return *(undefined8 *)param_2;
}

