
undefined1 FUN_100369150(long param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  int iVar14;
  undefined1 uVar15;
  uint uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  QWidget *pQVar20;
  undefined8 uVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  ulong in_stack_fffffffffffffe88;
  undefined8 in_stack_fffffffffffffe90;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar28;
  undefined8 in_stack_fffffffffffffea0;
  undefined4 uVar29;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  long local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar6 = (undefined4)((ulong)in_stack_fffffffffffffe90 >> 0x20);
  uVar28 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 0x20);
  uVar29 = (undefined4)((ulong)in_stack_fffffffffffffea0 >> 0x20);
  CScreenUpdatesLocker::syncScreenUpdates();
  if (2 < DAT_10230ffd0) {
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x50);
    }
    uVar4 = FUN_100323e20(uVar9);
    FUN_100df99c0("","prl_client_app",3,"About to update VM overlay for display %d",uVar4);
  }
  if (*(char *)(param_1 + 0x8c) == '\0') {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar12 = "Failed to update VM overlay. Overlay is hidden.";
    goto LAB_10036930c;
  }
  if (((((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
       (*(long *)(param_1 + 0x20) == 0)) ||
      ((*(long *)(param_1 + 0x28) == 0 || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)))) ||
     ((((*(long *)(param_1 + 0x30) == 0 ||
        ((*(long *)(param_1 + 0x38) == 0 || (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0)))) ||
       (*(long *)(param_1 + 0x40) == 0)) || (lVar7 = QWidget::window(), lVar7 == 0)))) {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar21 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar21 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar21 = *(undefined8 *)(param_1 + 0x30);
    }
    uVar17 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar17 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar17 = *(undefined8 *)(param_1 + 0x40);
    }
    uVar8 = QWidget::window();
    FUN_100df99c0("","prl_client_app",3,
                  "Failed to update VM overlay. HostWidget=%p, ViewportWidget=%p, ViewWidget=%p HostWidgetWindow=%p"
                  ,uVar9,uVar21,uVar17,uVar8);
    return 0;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 9) & 0x80) == 0) {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar12 = "Failed to update VM overlay. Host widget is hidden.";
    goto LAB_10036930c;
  }
  iVar5 = *(int *)(param_1 + 0x80);
  if (((iVar5 == 0) || (*(int *)(param_1 + 0x84) == 0)) && (param_2 == '\0')) {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x84);
    pcVar12 = 
    "Failed to update VM overlay. Conditions: m_winID = %d m_surfID = %d forceCreateSurface = %d";
    uVar15 = 0;
    goto LAB_100369411;
  }
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x50);
  }
  uVar9 = FUN_100323e00(uVar9);
  iVar5 = FUN_100319d30(uVar9);
  if (iVar5 != 1) {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x50);
    }
    uVar9 = FUN_100323e00(uVar9);
    uVar6 = FUN_100319d30(uVar9);
    FUN_100df99c0("","prl_client_app",3,"Failed to update VM overlay. Conditions: PRL_IO_STATE = %d"
                  ,uVar6);
    return 0;
  }
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x50);
  }
  auVar27 = FUN_1003261e0(uVar9);
  uVar13 = (auVar27._8_8_ + 1) - auVar27._0_8_;
  lVar7 = ((auVar27._8_8_ >> 0x20) + 1) - (auVar27._0_8_ >> 0x20);
  uVar10 = (uint)uVar13;
  uVar16 = (uint)lVar7;
  if (uVar10 == 0) {
    if (0 < (int)uVar16) goto LAB_100369482;
  }
  else if (-1 < (int)(uVar16 | uVar10)) {
LAB_100369482:
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
    local_38 = CONCAT44(*(int *)(lVar2 + 0x20) - *(int *)(lVar2 + 0x18),
                        *(int *)(lVar2 + 0x1c) - *(int *)(lVar2 + 0x14));
    local_40 = 0;
    auVar27 = QRect::operator&((QRect *)(*(long *)(*(long *)(param_1 + 0x40) + 0x28) + 0x14),
                               (QRect *)&local_40);
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
    uVar9 = *(undefined8 *)(lVar2 + 0x14);
    uVar21 = *(undefined8 *)(lVar2 + 0x1c);
    MacUtils::getRectInWindow((QWidget *)&local_60);
    if (0.0 <= local_60) {
      iVar5 = (int)(local_60 + DAT_100e110f0);
    }
    else {
      iVar5 = (int)((local_60 - (double)(int)(DAT_100e110e0 + local_60)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + local_60);
    }
    if (0.0 <= local_58) {
      iVar11 = (int)(local_58 + DAT_100e110f0);
    }
    else {
      iVar11 = (int)((local_58 - (double)(int)(DAT_100e110e0 + local_58)) + DAT_100e110f0) +
               (int)(DAT_100e110e0 + local_58);
    }
    iVar22 = auVar27._0_4_ + iVar5;
    iVar18 = auVar27._4_4_ + iVar11;
    iVar19 = auVar27._8_4_ + iVar5;
    iVar14 = auVar27._12_4_ + iVar11;
    local_f8 = (int)uVar9;
    iStack_f4 = (int)((ulong)uVar9 >> 0x20);
    iStack_f0 = (int)uVar21;
    iStack_ec = (int)((ulong)uVar21 >> 0x20);
    local_f8 = iVar5 + local_f8;
    iStack_f4 = iVar11 + iStack_f4;
    iStack_f0 = iVar5 + iStack_f0;
    iStack_ec = iVar11 + iStack_ec;
    if (2 < DAT_10230ffd0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
      in_stack_fffffffffffffe88 = CONCAT44((int)(in_stack_fffffffffffffe88 >> 0x20),iVar22);
      FUN_100df99c0("","prl_client_app",3,
                    "Overlay parameters: visibleRect: %dx%d at (%d, %d) surfaceRect: %dx%d at (%d, %d) viewWidget size: %dx%d translation delta: (%d, %d)"
                    ,(iVar19 + 1) - iVar22,(iVar14 + 1) - iVar18,in_stack_fffffffffffffe88,
                    CONCAT44(uVar6,iVar18),CONCAT44(uVar28,(iStack_f0 + 1) - local_f8),
                    CONCAT44(uVar29,(iStack_ec + 1) - iStack_f4),local_f8,iStack_f4,
                    (*(int *)(lVar2 + 0x1c) + 1) - *(int *)(lVar2 + 0x14),
                    (*(int *)(lVar2 + 0x20) + 1) - *(int *)(lVar2 + 0x18),iVar5,iVar11);
    }
    if (((((param_3 != '\0') || (*(int *)(param_1 + 0x58) != iVar22)) ||
         (*(int *)(param_1 + 0x60) != iVar19)) ||
        (((*(int *)(param_1 + 0x5c) != iVar18 || (*(int *)(param_1 + 100) != iVar14)) ||
         ((*(int *)(param_1 + 0x68) != local_f8 ||
          ((*(int *)(param_1 + 0x70) != iStack_f0 || (*(int *)(param_1 + 0x6c) != iStack_f4))))))))
       || ((*(int *)(param_1 + 0x74) != iStack_ec ||
           ((*(uint *)(param_1 + 0x78) != uVar10 || (*(uint *)(param_1 + 0x7c) != uVar16)))))) {
      *(ulong *)(param_1 + 0x58) = CONCAT44(iVar18,iVar22);
      *(ulong *)(param_1 + 0x60) = CONCAT44(iVar14,iVar19);
      *(ulong *)(param_1 + 0x78) = uVar13 & 0xffffffff | lVar7 << 0x20;
      *(int *)(param_1 + 0x68) = local_f8;
      *(int *)(param_1 + 0x6c) = iStack_f4;
      *(int *)(param_1 + 0x70) = iStack_f0;
      *(int *)(param_1 + 0x74) = iStack_ec;
      uVar6 = (*DAT_1023119d8)();
      pQVar20 = (QWidget *)0x0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (pQVar20 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        pQVar20 = *(QWidget **)(param_1 + 0x20);
      }
      iVar5 = MacUtils::getWindowNumber(pQVar20);
      if (*(int *)(param_1 + 0x80) != iVar5) {
        if (*(int *)(param_1 + 0x84) != 0) {
          (*DAT_102311a80)(uVar6);
          *(undefined8 *)(param_1 + 0x80) = 0;
        }
        if (iVar5 == -1) {
          if (2 < DAT_10230ffd0) {
            FUN_100df99c0("","prl_client_app",3,
                          "Failed to update VM overlay. Conditions: winID is invalid");
          }
          if (*(char *)(param_1 + 0x8d) != '\0') {
            *(undefined1 *)(param_1 + 0x8d) = 0;
            FUN_100832cc0(*(undefined8 *)(param_1 + 0x10),0);
            return 0;
          }
          return 0;
        }
        *(int *)(param_1 + 0x80) = iVar5;
        (*DAT_102311b80)(uVar6,iVar5,2);
        (*DAT_102311a78)(uVar6,*(undefined4 *)(param_1 + 0x80),param_1 + 0x84);
        (*DAT_102311ab8)(uVar6,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),1,0);
      }
      dVar24 = (double)local_f8;
      dVar25 = (double)iStack_f4;
      iVar5 = (iStack_f0 + 1) - local_f8;
      dVar26 = (double)iVar5;
      iVar11 = (iStack_ec + 1) - iStack_f4;
      dVar23 = (double)iVar11;
      if ((((iStack_ec == iVar14) && (local_f8 == iVar22)) && (iStack_f0 == iVar19)) &&
         (iStack_f4 == iVar18)) {
        local_80 = dVar24;
        local_78 = dVar25;
        local_70 = dVar26;
        local_68 = dVar23;
        (*DAT_102311aa0)(uVar6,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
        uVar28 = (undefined4)((ulong)dVar24 >> 0x20);
        uVar29 = (undefined4)((ulong)dVar25 >> 0x20);
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("","prl_client_app",3,
                        "Overlay surface rect equals to visible rect. Do not clip it!");
        }
      }
      else {
        local_88 = 0;
        local_a8 = (double)iVar22;
        local_a0 = (double)iVar18;
        iVar19 = (iVar19 + 1) - iVar22;
        local_98 = (double)iVar19;
        iVar14 = (iVar14 + 1) - iVar18;
        local_90 = (double)iVar14;
        (*DAT_1023119f0)(&local_a8,&local_88);
        local_c8 = dVar24;
        local_c0 = dVar25;
        local_b8 = dVar26;
        local_b0 = dVar23;
        (*DAT_102311ab0)(uVar6,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                         local_88);
        uVar28 = (undefined4)((ulong)dVar24 >> 0x20);
        uVar29 = (undefined4)((ulong)dVar25 >> 0x20);
        if (2 < DAT_10230ffd0) {
          uVar21 = CONCAT44(uVar29,iStack_f4);
          uVar9 = CONCAT44(uVar28,local_f8);
          FUN_100df99c0("","prl_client_app",3,
                        "Clip overlay surface %dx%d at (%d, %d) to %dx%d at (%d, %d)",iVar5,iVar11,
                        uVar9,uVar21,iVar19,iVar14,iVar22,iVar18);
          uVar28 = (undefined4)((ulong)uVar9 >> 0x20);
          uVar29 = (undefined4)((ulong)uVar21 >> 0x20);
        }
        (*DAT_1023119e8)(local_88);
      }
      pcVar3 = DAT_102311a90;
      if (DAT_102311a90 != (code *)0x0) {
        uVar4 = *(undefined4 *)(param_1 + 0x80);
        uVar1 = *(undefined4 *)(param_1 + 0x84);
        uVar9 = 0;
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
          uVar9 = *(undefined8 *)(param_1 + 0x50);
        }
        FUN_1003277b0(uVar9);
        (*pcVar3)(uVar6,uVar4,uVar1);
      }
      if (0 < *(int *)(param_1 + 0x90)) {
        dVar23 = (double)*(int *)(param_1 + 0x90);
        MacUtils::makeRoundCorners(*(int *)(param_1 + 0x84),*(int *)(param_1 + 0x80),dVar23,dVar23);
      }
      if (*(char *)(param_1 + 0x8d) != '\x01') {
        *(undefined1 *)(param_1 + 0x8d) = 1;
        FUN_100832cc0(*(undefined8 *)(param_1 + 0x10),1);
      }
      if (2 < DAT_10230ffd0) {
        uVar21 = CONCAT44(uVar29,*(undefined4 *)(param_1 + 0x84));
        uVar9 = CONCAT44(uVar28,*(undefined4 *)(param_1 + 0x80));
        FUN_100df99c0("","prl_client_app",3,
                      "Update VM overlay SetScreenSurface %dx%d (winID=%d, surfID=%d)",
                      *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),uVar9,uVar21);
        uVar28 = (undefined4)((ulong)uVar9 >> 0x20);
        uVar29 = (undefined4)((ulong)uVar21 >> 0x20);
      }
      uVar9 = 0;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
        uVar9 = *(undefined8 *)(param_1 + 0x50);
      }
      FUN_100323d50(&local_d0,uVar9);
      lVar7 = local_d0;
      uVar9 = 0;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
        uVar9 = *(undefined8 *)(param_1 + 0x50);
      }
      uVar6 = FUN_100323e20(uVar9);
      iVar5 = _PrlDevDisplay_SyncSetScreenSurface
                        (lVar7,uVar6,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84)
                         ,0,0,CONCAT44(uVar28,*(undefined4 *)(param_1 + 0x78)),
                         CONCAT44(uVar29,*(undefined4 *)(param_1 + 0x7c)));
      if (local_d0 != 0) {
        _PrlHandle_Free();
      }
      if (-1 < iVar5) {
        return 1;
      }
      uVar9 = FUN_100dddcf0(iVar5);
      FUN_100df99c0("","prl_client_app",0,
                    "Update VM overlay SetScreenSurface has failed with RC = %.8X, rc = [%s].",iVar5
                    ,uVar9);
      return 0;
    }
    uVar15 = 1;
    if (DAT_10230ffd0 < 3) {
      return 1;
    }
    pcVar12 = 
    "Skipped VM overlay update. Conditions: forceUpdate = %d m_visibleRect != viewRect is %d m_surfaceRect != surfaceRect is %d"
    ;
    iVar5 = 0;
    uVar6 = 0;
LAB_100369411:
    FUN_100df99c0("","prl_client_app",3,pcVar12,iVar5,uVar6,
                  in_stack_fffffffffffffe88 & 0xffffffff00000000);
    return uVar15;
  }
  if (DAT_10230ffd0 < 3) {
    return 0;
  }
  pcVar12 = "Failed to update VM overlay. Display size is null";
LAB_10036930c:
  FUN_100df99c0("","prl_client_app",3,pcVar12);
  return 0;
}

