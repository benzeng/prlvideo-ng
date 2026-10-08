
void FUN_100ad6780(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 uVar12;
  uint uVar13;
  Data *pDVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  Data *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  if ((*(int *)(param_1 + 0xae4) != -1) && (iVar5 = QTime::elapsed(), iVar5 < 1000)) {
    return;
  }
  QTime::start();
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"*** Coherence state full dump: Flags = 0x%08X ***",
                  param_2);
  }
  lVar1 = param_1 + 0x100;
  plVar7 = (long *)FUN_100adb590(lVar1,*(undefined4 *)(param_1 + 0x910));
  lVar9 = *plVar7;
  plVar7 = (long *)FUN_100adb590(lVar1,*(undefined4 *)(param_1 + 0x914));
  if (0 < DAT_10230ffd0) {
    lVar4 = *plVar7;
    uVar17 = 0;
    uVar12 = 0;
    if (lVar9 != 0) {
      uVar17 = *(undefined4 *)(lVar9 + 8);
      uVar12 = *(undefined4 *)(lVar9 + 0x48);
    }
    uVar15 = 0;
    FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"activeWnd = 0x%08X (hostid = %d)",uVar17,uVar12);
    if (0 < DAT_10230ffd0) {
      uVar17 = 0;
      if (lVar4 != 0) {
        uVar15 = *(undefined4 *)(lVar4 + 8);
        uVar17 = *(undefined4 *)(lVar4 + 0x48);
      }
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"prevActiveWnd = 0x%08X (hostid = %d)",uVar15,
                    uVar17);
      if ((0 < DAT_10230ffd0) &&
         (FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                        "emptyHostIdCount = %d; ActiveWndClearedByMetro = %d",
                        *(undefined4 *)(param_1 + 0x918),*(undefined1 *)(param_1 + 0x91c)),
         0 < DAT_10230ffd0)) {
        FUN_100df99c0("CHRCLIENT","ChrToolClient",1,">>> Full wnd list <<<");
      }
    }
  }
  FUN_100adc1f0(&local_40,lVar1);
  if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
    pDVar14 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
    do {
      lVar9 = *(long *)pDVar14;
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                      "  0x%08X: (hostid=%d) pid=%d tid=%d psn{%d;%d} initialPsn{%d;%d}",
                      *(undefined4 *)(lVar9 + 8),*(undefined4 *)(lVar9 + 0x48),
                      *(undefined4 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0xc),
                      *(undefined4 *)(lVar9 + 0x38),*(undefined4 *)(lVar9 + 0x3c),
                      *(undefined4 *)(lVar9 + 0x40),*(undefined4 *)(lVar9 + 0x44));
      }
      QString::fromUtf16((ushort *)&local_50,(int)*(undefined8 *)(lVar9 + 0x88));
      QString::normalized(&local_48,&local_50,1,0);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ad6a33;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100ad6a33:
      if ((*(int *)(local_48 + 4) != 0) && (0 < DAT_10230ffd0)) {
        QString::toUtf8();
        FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"    path: %s",
                      local_58 + *(long *)(local_58 + 0x10));
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ad6ab0;
          }
          QArrayData::deallocate(local_58,1,8);
        }
      }
LAB_100ad6ab0:
      QString::fromUtf16((ushort *)&local_68,(int)*(undefined8 *)(lVar9 + 0x78));
      QString::normalized(&local_60,&local_68,1,0);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ad6b06;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100ad6b06:
      if ((*(int *)(local_60 + 4) != 0) && (0 < DAT_10230ffd0)) {
        QString::toUtf8();
        FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"    caption: %s",
                      local_70 + *(long *)(local_70 + 0x10));
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ad6b88;
          }
          QArrayData::deallocate(local_70,1,8);
        }
      }
LAB_100ad6b88:
      if (0 < DAT_10230ffd0) {
        uVar2 = *(uint *)(lVar9 + 0x18);
        uVar17 = *(undefined4 *)(lVar9 + 0x1c);
        uVar6 = uVar2 >> 4 & 1;
        uVar13 = uVar2 >> 5 & 1;
        uVar10 = uVar2 >> 6 & 1;
        FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                      "    [%d;%d]w=%d;h=%d mn=%d mx=%d tpmst=%d tool=%d lyrd=%d hid=%d nrcts=%d",
                      *(int *)(lVar9 + 0x28),*(int *)(lVar9 + 0x2c),
                      *(int *)(lVar9 + 0x30) - *(int *)(lVar9 + 0x28),
                      *(int *)(lVar9 + 0x34) - *(int *)(lVar9 + 0x2c),uVar2 & 1,uVar2 >> 1 & 1,
                      uVar2 >> 3 & 1,uVar6,uVar13,uVar10,uVar17);
        if (0 < DAT_10230ffd0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                        "    noact=%d mov=%d app=%d mxmzbl=%d startmenu=%d noshadow=%d titlebar=%d",
                        uVar2 >> 8 & 1,uVar2 >> 9 & 1,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
                        uVar2 >> 0xc & 1,uVar2 >> 0xd & 1,uVar2 >> 0x15 & 1,uVar6,uVar13,uVar10,
                        uVar17);
        }
      }
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ad6cd8;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100ad6cd8:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ad6d08;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100ad6d08:
      pDVar14 = pDVar14 + 8;
    } while (pDVar14 != local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10);
  }
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",1,">>> Guest Zorder <<<");
  }
  uVar2 = *(uint *)(param_1 + 0x900);
  if ((ulong)uVar2 != 0) {
    lVar9 = *(long *)(param_1 + 0x908);
    uVar11 = 0;
    do {
      plVar7 = (long *)FUN_100adb590(lVar1,*(undefined4 *)(lVar9 + uVar11 * 4));
      lVar4 = *plVar7;
      if (lVar4 == 0) {
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"  0x%08X",*(undefined4 *)(lVar9 + uVar11 * 4)
                       );
        }
      }
      else {
        QString::fromUtf16((ushort *)&local_80,(int)*(undefined8 *)(lVar4 + 0x88));
        QString::normalized(&local_78,&local_80,1,0);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ad6df3;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100ad6df3:
        QString::fromUtf16((ushort *)&local_90,(int)*(undefined8 *)(lVar4 + 0x78));
        QString::normalized(&local_88,&local_90,1,0);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ad6e57;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_100ad6e57:
        if (((0 < DAT_10230ffd0) &&
            (FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"  0x%08X ==> hostId=%d",
                           *(undefined4 *)(lVar9 + uVar11 * 4),*(undefined4 *)(lVar4 + 0x48)),
            *(int *)(local_78 + 4) != 0)) && (0 < DAT_10230ffd0)) {
          QString::toUtf8();
          FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"    path: %s",
                        local_98 + *(long *)(local_98 + 0x10));
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ad6f30;
            }
            QArrayData::deallocate(local_98,1,8);
          }
        }
LAB_100ad6f30:
        if ((*(int *)(local_88 + 4) != 0) && (0 < DAT_10230ffd0)) {
          QString::toUtf8();
          FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"    caption: %s",
                        local_a0 + *(long *)(local_a0 + 0x10));
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ad6fc0;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
        }
LAB_100ad6fc0:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ad6ff0;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100ad6ff0:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ad7061;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
LAB_100ad7061:
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  if ((param_2 & 1) != 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,">>> Host Zorder <<<");
    }
    local_a8 = (Data *)PTR_shared_null_1021e15e8;
    (**(code **)(**(long **)(param_1 + 0x9b8) + 0x10))(*(long **)(param_1 + 0x9b8),&local_a8);
    iVar5 = *(int *)(local_a8 + 0xc);
    iVar3 = *(int *)(local_a8 + 8);
    if (iVar5 != iVar3 && *(int *)(local_a8 + 8) <= iVar5) {
      iVar16 = 0;
      do {
        puVar8 = (undefined4 *)FUN_100989eb0(&local_a8,iVar16);
        lVar9 = FUN_100adbbf0(lVar1,*puVar8);
        if (lVar9 != 0) {
          if (0 < DAT_10230ffd0) {
            puVar8 = (undefined4 *)FUN_100989eb0(&local_a8,iVar16);
            FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"  hostid=%d ==> Guest 0x%08X",*puVar8,
                          *(undefined4 *)(lVar9 + 8));
          }
          QString::fromUtf16((ushort *)&local_b8,(int)*(undefined8 *)(lVar9 + 0x88));
          QString::normalized(&local_b0,&local_b8,1,0);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ad71ca;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_100ad71ca:
          if ((*(int *)(local_b0 + 4) != 0) && (0 < DAT_10230ffd0)) {
            QString::toUtf8();
            FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"    path: %s",
                          local_c0 + *(long *)(local_c0 + 0x10));
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ad7270;
              }
              QArrayData::deallocate(local_c0,1,8);
            }
          }
LAB_100ad7270:
          QString::fromUtf16((ushort *)&local_d0,(int)*(undefined8 *)(lVar9 + 0x78));
          QString::normalized(&local_c8,&local_d0,1,0);
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ad72d7;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
LAB_100ad72d7:
          if ((*(int *)(local_c8 + 4) != 0) && (0 < DAT_10230ffd0)) {
            QString::toUtf8();
            FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"    caption: %s",
                          local_d8 + *(long *)(local_d8 + 0x10));
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ad7370;
              }
              QArrayData::deallocate(local_d8,1,8);
            }
          }
LAB_100ad7370:
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ad73a6;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_100ad73a6:
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ad73dc;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
        }
LAB_100ad73dc:
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar5 - iVar3);
    }
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ad7414;
      }
      QListData::dispose(local_a8);
    }
  }
LAB_100ad7414:
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"**********************************");
  }
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
    QListData::dispose(local_40);
  }
  return;
}

