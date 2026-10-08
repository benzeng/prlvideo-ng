
QVariant * FUN_1005a0270(QVariant *param_1,long param_2,QString *param_3)

{
  code *pcVar1;
  uint uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  ulong uVar4;
  QArrayData *pQVar5;
  QString QVar6;
  int *piVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  long *plVar13;
  undefined8 uVar14;
  void *pvVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  Data *pDVar19;
  QKeySequence *this;
  long *plVar20;
  long *plVar21;
  long lVar22;
  _func_void_Node_ptr *local_f8;
  Data *local_f0 [2];
  undefined4 local_dc;
  Data *local_d8;
  undefined1 local_d0 [8];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QString local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  int local_70;
  int *local_68;
  QVariant local_60;
  int *local_50;
  int *local_48;
  int *local_40;
  undefined1 local_31;
  
  pQVar3 = param_3->field0_0x0;
  iVar10 = QString::compare_helper
                     (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                      PTR_s_ProfileAssignments_1022744b8,0xffffffff,1);
  if (iVar10 != 0) {
    plVar13 = *(long **)(param_2 + 0x50);
    uVar2 = *(uint *)(plVar13 + 4);
    if (uVar2 != 0) {
      uVar11 = qHash(param_3,*(uint *)((long)plVar13 + 0x24));
      uVar4 = (ulong)uVar11 % (ulong)uVar2;
      plVar20 = *(long **)(plVar13[1] + uVar4 * 8);
      if (plVar20 != plVar13) {
        plVar17 = (long *)(plVar13[1] + uVar4 * 8);
        do {
          plVar18 = plVar13;
          if (*(uint *)(plVar20 + 1) == uVar11) {
            cVar9 = operator==(param_3,(QString *)(plVar20 + 2));
            plVar13 = (long *)*plVar17;
            plVar18 = *(long **)(param_2 + 0x50);
            plVar20 = plVar13;
            if (cVar9 != '\0') break;
          }
          plVar13 = plVar18;
          plVar17 = plVar20;
          plVar20 = (long *)*plVar17;
          plVar18 = plVar13;
        } while (plVar20 != plVar13);
        if (plVar13 != plVar18) {
          FUN_100036660(param_1,(undefined8 *)(param_2 + 0x50),param_3);
          return param_1;
        }
      }
    }
    pQVar3 = param_3->field0_0x0;
    iVar10 = QString::compare_helper
                       (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                        PTR_s_Profiles_1022744b0,0xffffffff,1);
    if (iVar10 == 0) {
      if (DAT_102310998 == (void *)0x0) {
        pvVar15 = operator_new(0x18);
        FUN_1006faf60(pvVar15);
        DAT_102274400 = 1;
        DAT_102310998 = pvVar15;
      }
      FUN_1006fb6d0(local_d0,DAT_102310998);
      if (DAT_102274378 == 0) {
        DAT_102274378 = FUN_100581170("Remaps::ProfilesList",0xffffffffffffffff,1);
      }
      QVariant::QVariant(param_1,DAT_102274378,local_d0,0);
      FUN_1000fe670(local_d0);
      return param_1;
    }
    pQVar3 = param_3->field0_0x0;
    iVar10 = QString::compare_helper
                       (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                        PTR_s_MouseShortcuts_1022744c0,0xffffffff,1);
    if (iVar10 == 0) {
      if (DAT_102310998 == (void *)0x0) {
        pvVar15 = operator_new(0x18);
        FUN_1006faf60(pvVar15);
        DAT_102274400 = 1;
        DAT_102310998 = pvVar15;
      }
      FUN_1006fb680(&local_d8,DAT_102310998,0);
      if (DAT_1022743bc == 0) {
        DAT_1022743bc = FUN_100597550("Remaps::MouseRemapList",0xffffffffffffffff,1);
      }
      QVariant::QVariant(param_1,DAT_1022743bc,&local_d8,0);
      if (*(int *)local_d8 == -1) {
        return param_1;
      }
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        UNLOCK();
        if (*(int *)local_d8 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      iVar10 = *(int *)(local_d8 + 0xc);
      local_f0[0] = local_d8;
      if (iVar10 != *(int *)(local_d8 + 8)) {
        lVar22 = (long)*(int *)(local_d8 + 8) * 8 + (long)iVar10 * -8;
        pDVar19 = local_d8 + (long)iVar10 * 8 + 8;
        do {
          if (*(void **)pDVar19 != (void *)0x0) {
            operator_delete(*(void **)pDVar19);
          }
          pDVar19 = pDVar19 + -8;
          lVar22 = lVar22 + 8;
        } while (lVar22 != 0);
      }
    }
    else {
      pQVar3 = param_3->field0_0x0;
      iVar10 = QString::compare_helper
                         (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                          PTR_s_GrabHostShortcutsType_1022744c8,0xffffffff,1);
      if (iVar10 == 0) {
        if (DAT_102310998 == (void *)0x0) {
          pvVar15 = operator_new(0x18);
          FUN_1006faf60(pvVar15);
          DAT_102274400 = 1;
          DAT_102310998 = pvVar15;
        }
        local_dc = FUN_1006fb750(DAT_102310998,0);
        if (DAT_1022743d8 == 0) {
          DAT_1022743d8 = FUN_100598070("Shortcuts::GrabHostShortcutsType",0xffffffffffffffff,1);
        }
        QVariant::QVariant(param_1,DAT_1022743d8,&local_dc,0);
        return param_1;
      }
      pQVar3 = param_3->field0_0x0;
      iVar10 = QString::compare_helper
                         (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                          PTR_s_ShowHideAppShortcut_1022744d0,0xffffffff,1);
      if (iVar10 != 0) {
        pQVar3 = param_3->field0_0x0;
        iVar10 = QString::compare_helper
                           (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                            PTR_s_AppShortcuts_1022744a8,0xffffffff,1);
        if (iVar10 != 0) {
          (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
          (param_1->field0_0x0).field0_0x0.field7 = 0;
          return param_1;
        }
        if (DAT_102310998 == (void *)0x0) {
          pvVar15 = operator_new(0x18);
          FUN_1006faf60(pvVar15);
          DAT_102274400 = 1;
          DAT_102310998 = pvVar15;
        }
        FUN_1006fb0c0(&local_f8,DAT_102310998,0);
        if (DAT_1022743dc == 0) {
          DAT_1022743dc = FUN_100598590("Shortcuts::ShortcutsMap",0xffffffffffffffff,1);
        }
        QVariant::QVariant(param_1,DAT_1022743dc,&local_f8,0);
        if (*(int *)(local_f8 + 0x10) == -1) {
          return param_1;
        }
        if (*(int *)(local_f8 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_f8 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) {
            return param_1;
          }
          local_31 = 0;
        }
        QHashData::free_helper(local_f8);
        return param_1;
      }
      if (DAT_102310998 == (void *)0x0) {
        pvVar15 = operator_new(0x18);
        FUN_1006faf60(pvVar15);
        DAT_102274400 = 1;
        DAT_102310998 = pvVar15;
      }
      FUN_1006fb7b0(local_f0,DAT_102310998,0);
      if (DAT_102274448 == 0) {
        DAT_102274448 = FUN_100597d90("CShortcutInfo",0xffffffffffffffff,1);
      }
      QVariant::QVariant(param_1,DAT_102274448,local_f0,0);
      if (*(int *)local_f0[0] == -1) {
        return param_1;
      }
      if (*(int *)local_f0[0] != 0) {
        LOCK();
        *(int *)local_f0[0] = *(int *)local_f0[0] + -1;
        UNLOCK();
        if (*(int *)local_f0[0] != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      iVar10 = *(int *)(local_f0[0] + 0xc);
      if (iVar10 != *(int *)(local_f0[0] + 8)) {
        lVar22 = (long)*(int *)(local_f0[0] + 8) * 8 + (long)iVar10 * -8;
        this = (QKeySequence *)(local_f0[0] + (long)iVar10 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(this);
          this = this + -8;
          lVar22 = lVar22 + 8;
        } while (lVar22 != 0);
      }
    }
    QListData::dispose(local_f0[0]);
    return param_1;
  }
  local_48 = (int *)PTR_shared_null_1021e15e8;
  plVar13 = *(long **)(param_2 + 0x50);
  uVar2 = *(uint *)(plVar13 + 4);
  if (uVar2 != 0) {
    uVar11 = qHash(param_3,*(uint *)((long)plVar13 + 0x24));
    uVar4 = (ulong)uVar11 % (ulong)uVar2;
    plVar20 = *(long **)(plVar13[1] + uVar4 * 8);
    if (plVar20 != plVar13) {
      plVar17 = (long *)(plVar13[1] + uVar4 * 8);
      do {
        plVar18 = plVar13;
        plVar21 = plVar20;
        if (*(uint *)(plVar20 + 1) == uVar11) {
          cVar9 = operator==(param_3,(QString *)(plVar20 + 2));
          plVar13 = (long *)*plVar17;
          plVar18 = *(long **)(param_2 + 0x50);
          plVar21 = plVar13;
          if (cVar9 != '\0') break;
        }
        plVar13 = plVar18;
        plVar20 = (long *)*plVar21;
        plVar18 = plVar13;
        plVar17 = plVar21;
      } while (plVar20 != plVar13);
      if (plVar13 != plVar18) {
        FUN_100036660(&local_60,(undefined8 *)(param_2 + 0x50),param_3);
        FUN_10024fb10(&local_50,&local_60);
        if (local_48 != local_50) {
          FUN_1002101d0(&local_40,&local_50);
          piVar8 = local_40;
          piVar7 = local_48;
          local_40 = local_48;
          local_48 = piVar8;
          if (*piVar7 != -1) {
            if (*piVar7 != 0) {
              LOCK();
              *piVar7 = *piVar7 + -1;
              local_31 = *piVar7 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005a0540;
            }
            FUN_1001c45d0(&local_40,piVar7);
          }
        }
LAB_1005a0540:
        if (*local_50 != -1) {
          if (*local_50 != 0) {
            LOCK();
            *local_50 = *local_50 + -1;
            local_31 = *local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005a056a;
          }
          FUN_1001c45d0(&local_50,local_50);
        }
LAB_1005a056a:
        QVariant::~QVariant(&local_60);
      }
    }
  }
  local_68 = (int *)PTR_shared_null_1021e15e8;
  uVar14 = FUN_100152280();
  FUN_100154b10(&local_90,uVar14);
  local_88 = local_90;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 == 0) {
      QListData::detach((int)&local_88);
      lVar22 = (long)*(int *)(local_88 + 8);
      if ((local_90 + (long)*(int *)(local_90 + 8) * 8 != local_88 + lVar22 * 8) &&
         (lVar16 = *(int *)(local_88 + 0xc) - lVar22,
         lVar16 != 0 && lVar22 <= *(int *)(local_88 + 0xc))) {
        _memcpy(local_88 + lVar22 * 8 + 0x10,local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10,
                lVar16 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  local_70 = 1;
  if (*(int *)local_90 == -1) {
LAB_1005a07ef:
    if (local_80 != local_78) {
      do {
        lVar22 = *(long *)local_80;
        if ((lVar22 != 0) && (cVar9 = FUN_10018ecf0(lVar22), cVar9 != '\0')) {
          FUN_100188480(&local_a0,lVar22);
          FUN_100714ea0(&local_98,&local_48,&local_a0);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005a088c;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_1005a088c:
          if (*(int *)(local_98.field0_0x0 + 4) == 0) {
            FUN_100188480(&local_b0,lVar22);
            uVar12 = FUN_10018f860(lVar22);
            FUN_100719ad0(&local_a8,&local_b0,uVar12);
            QString::operator=(&local_98,&local_a8);
            if (*(int *)local_a8.field0_0x0 != -1) {
              if (*(int *)local_a8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                local_31 = *(int *)local_a8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005a0910;
              }
              QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
            }
LAB_1005a0910:
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005a0950;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
          }
LAB_1005a0950:
          FUN_100188480(&local_c8,lVar22);
          QVar6.field0_0x0 = local_98.field0_0x0;
          pQVar5 = local_c8;
          local_c0 = local_c8;
          if (1 < *(int *)local_c8 + 1U) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + 1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
          }
          local_b8 = (QArrayData *)local_98.field0_0x0;
          if (1 < *(int *)local_98.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
          }
          FUN_1001c44c0(&local_68,&local_c0);
          if (*(int *)QVar6.field0_0x0 != -1) {
            if (*(int *)QVar6.field0_0x0 != 0) {
              LOCK();
              *(int *)QVar6.field0_0x0 = *(int *)QVar6.field0_0x0 + -1;
              local_31 = *(int *)QVar6.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005a09d8;
            }
            QArrayData::deallocate((QArrayData *)QVar6.field0_0x0,2,8);
          }
LAB_1005a09d8:
          if (*(int *)pQVar5 != -1) {
            if (*(int *)pQVar5 != 0) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              local_31 = *(int *)pQVar5 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005a0a07;
            }
            QArrayData::deallocate(pQVar5,2,8);
          }
LAB_1005a0a07:
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005a0a3d;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_1005a0a3d:
          if (*(int *)local_98.field0_0x0 != -1) {
            if (*(int *)local_98.field0_0x0 != 0) {
              LOCK();
              *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
              local_31 = *(int *)local_98.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005a0a80;
            }
            QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
          }
        }
LAB_1005a0a80:
        local_80 = local_80 + 8;
        local_70 = 1;
      } while (local_80 != local_78);
    }
  }
  else {
    if (*(int *)local_90 == 0) {
LAB_1005a07e0:
      QListData::dispose(local_90);
    }
    else {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1005a07e0;
    }
    if (local_70 != 0) goto LAB_1005a07ef;
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a0ac3;
    }
    QListData::dispose(local_88);
  }
LAB_1005a0ac3:
  if (DAT_1022743a0 == 0) {
    DAT_1022743a0 = FUN_10024fc20("GUI::StringPairList",0xffffffffffffffff,1);
  }
  QVariant::QVariant(param_1,DAT_1022743a0,&local_68,0);
  if (*local_68 != -1) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_31 = *local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a0b29;
    }
    FUN_1001c45d0(&local_68,local_68);
  }
LAB_1005a0b29:
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    FUN_1001c45d0(&local_48,local_48);
  }
  return param_1;
}

