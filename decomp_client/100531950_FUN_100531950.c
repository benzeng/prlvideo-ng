
void FUN_100531950(long param_1)

{
  int iVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  Data *pDVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  Data_conflict local_100;
  undefined4 local_f8;
  QString local_f0;
  int *local_e8;
  Data *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  if (*local_e8 != -1) {
    if (*local_e8 != 0) {
      LOCK();
      *local_e8 = *local_e8 + -1;
      local_31 = *local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005319c8;
    }
    FUN_100533ef0(&local_e8,local_e8);
  }
LAB_1005319c8:
  uVar7 = *(uint *)(local_e0 + 8);
  if (*(uint *)(local_e0 + 0xc) != uVar7) {
    if (1 < *(uint *)local_e0) {
      FUN_100534020(&local_e0,*(uint *)(local_e0 + 4));
      uVar7 = *(uint *)(local_e0 + 8);
    }
    plVar5 = *(long **)(*(long *)(local_e0 + (long)(int)uVar7 * 8 + 0x10) + 0x10);
    if (plVar5 == (long *)0x0) {
      local_f8 = 0x80000000;
      local_100.field7 = 0;
    }
    else {
      (**(code **)(*plVar5 + 0x90))
                (&local_100,plVar5,*(long *)(local_e0 + (long)(int)uVar7 * 8 + 0x10),0x101);
    }
    QVariant::toString();
    QVariant::~QVariant((QVariant *)&local_100);
    plVar5 = *(long **)(param_1 + 0x20);
    uVar7 = *(uint *)(plVar5 + 4);
    if (uVar7 != 0) {
      uVar4 = qHash(&local_f0,*(uint *)((long)plVar5 + 0x24));
      uVar2 = (ulong)uVar4 % (ulong)uVar7;
      plVar9 = *(long **)(plVar5[1] + uVar2 * 8);
      if (plVar9 != plVar5) {
        plVar8 = (long *)(plVar5[1] + uVar2 * 8);
        do {
          plVar6 = plVar5;
          if (*(uint *)(plVar9 + 1) == uVar4) {
            cVar3 = operator==(&local_f0,(QString *)(plVar9 + 2));
            plVar5 = (long *)*plVar8;
            plVar9 = plVar5;
            plVar6 = *(long **)(param_1 + 0x20);
            if (cVar3 != '\0') break;
          }
          plVar5 = plVar6;
          plVar8 = plVar9;
          plVar9 = (long *)*plVar8;
          plVar6 = plVar5;
        } while (plVar9 != plVar5);
        if (plVar5 != plVar6) {
          lVar11 = 0;
          if (*(int *)((long)plVar6 + 0x14) != 0) {
            uVar7 = *(uint *)(plVar6 + 4);
            lVar11 = 0;
            if (uVar7 != 0) {
              uVar4 = qHash(&local_f0,*(uint *)((long)plVar6 + 0x24));
              uVar2 = (ulong)uVar4 % (ulong)uVar7;
              plVar5 = *(long **)(plVar6[1] + uVar2 * 8);
              lVar11 = 0;
              if (plVar5 != plVar6) {
                plVar9 = (long *)(plVar6[1] + uVar2 * 8);
                do {
                  plVar8 = plVar6;
                  if (*(uint *)(plVar5 + 1) == uVar4) {
                    cVar3 = operator==(&local_f0,(QString *)(plVar5 + 2));
                    plVar6 = (long *)*plVar9;
                    plVar5 = plVar6;
                    plVar8 = *(long **)(param_1 + 0x20);
                    if (cVar3 != '\0') break;
                  }
                  plVar6 = plVar8;
                  plVar9 = plVar5;
                  plVar5 = (long *)*plVar9;
                  plVar8 = plVar6;
                } while (plVar5 != plVar6);
                lVar11 = 0;
                if (plVar6 != plVar8) {
                  lVar11 = plVar6[3];
                }
              }
            }
          }
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          uVar30 = 0;
          uVar29 = 0;
          uVar28 = 0;
          uVar27 = 0;
          uVar26 = 0;
          uVar25 = 0;
          uVar24 = 0;
          uVar23 = 0;
          uVar22 = 0;
          uVar21 = 0;
          uVar20 = 0;
          uVar19 = 0;
          uVar18 = 0;
          uVar17 = 0;
          uVar16 = 0;
          uVar15 = 0;
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 0;
          cVar3 = QMetaObject::invokeMethod(lVar11,"restoreDefaults",0,0,0);
          if (cVar3 == '\0') {
            FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "invokeSucceeded","AppPreferences/Pages/CAppPreferencesShortcutsPage.cpp",
                          CONCAT44(uVar12,0x173),"restoreDefaults",uVar13,uVar14,uVar15,uVar16,
                          uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,
                          uVar27,uVar28,uVar29,uVar30);
          }
        }
      }
    }
    if (*(int *)local_f0.field0_0x0 != -1) {
      if (*(int *)local_f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
        local_31 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100531cfb;
      }
      QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
    }
  }
LAB_100531cfb:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      UNLOCK();
      if (*(int *)local_e0 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_e0 + 0xc);
    if (iVar1 != *(int *)(local_e0 + 8)) {
      lVar11 = (long)*(int *)(local_e0 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = local_e0 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar10 != (void *)0x0) {
          operator_delete(*(void **)pDVar10);
        }
        pDVar10 = pDVar10 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(local_e0);
  }
  return;
}

