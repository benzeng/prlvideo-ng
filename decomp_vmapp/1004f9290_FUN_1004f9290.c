
void FUN_1004f9290(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  undefined *puVar5;
  long lVar6;
  QArrayData *pQVar7;
  undefined *puVar8;
  char cVar9;
  int iVar10;
  long *plVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  long lStack_c0;
  long *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  uint local_50;
  long *local_48;
  long local_40;
  int local_38;
  undefined1 local_31;
  
  lVar3 = param_1[1];
  lVar16 = 0;
  if (lVar3 != 0) {
    QMutex::lock();
    lVar16 = param_1[1];
  }
  local_68 = *(int **)(lVar16 + 8);
  if (local_68[3] == local_68[2]) {
    local_40 = DAT_1011c3698 + 0x110;
    iVar10 = FUN_1000b4970(&local_40);
    puVar8 = PTR_shared_null_100ba20d0;
    if (PTR_s_iCloud_100bc3c98 != (undefined *)0x0) {
      ppuVar20 = &PTR_s_Photo_Stream_100bc3cb0;
      auVar23._8_4_ = (int)PTR_shared_null_100ba20d0;
      auVar23._0_8_ = PTR_shared_null_100ba20d0;
      auVar23._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
      do {
        if ((0 < iVar10) || (((ulong)ppuVar20[-4] & 1) == 0)) {
          plVar11 = operator_new(0x28);
          plVar18 = plVar11 + 1;
          *(undefined4 *)(plVar11 + 1) = 1;
          *plVar11 = (long)&PTR_FUN_100bc3c50;
          plVar11[2] = 0;
          lStack_c0 = auVar23._8_8_;
          plVar11[3] = (long)puVar8;
          plVar11[4] = lStack_c0;
          (*(code *)ppuVar20[-2])(&local_48,ppuVar20[-3]);
          if (local_48 != (long *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          plVar19 = (long *)plVar11[2];
          plVar11[2] = (long)local_48;
          if (plVar19 != (long *)0x0) {
            LOCK();
            plVar1 = plVar19 + 1;
            lVar16 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)(*plVar19 + 0x10))();
            }
          }
          if (local_48 != (long *)0x0) {
            LOCK();
            plVar19 = local_48 + 1;
            lVar16 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)(*local_48 + 0x10))();
            }
          }
          puVar4 = *(uint **)(param_1[1] + 8);
          plVar19 = (long *)(param_1[1] + 8);
          if (*puVar4 < 2) {
            puVar13 = (undefined8 *)QListData::append();
            puVar14 = operator_new(8);
            *puVar14 = plVar11;
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            *puVar13 = puVar14;
          }
          else {
            local_38 = 0x7fffffff;
            uVar15 = puVar4[2];
            piVar12 = (int *)QListData::detach_grow((int *)plVar19,(int)&local_38);
            lVar16 = *plVar19;
            FUN_1004fa180(lVar16 + 0x10 + (long)*(int *)(lVar16 + 8) * 8,
                          lVar16 + 0x10 + ((long)local_38 + (long)*(int *)(lVar16 + 8)) * 8,
                          puVar4 + (long)(int)uVar15 * 2 + 4);
            lVar16 = *plVar19;
            FUN_1004fa180(lVar16 + 0x18 + ((long)*(int *)(lVar16 + 8) + (long)local_38) * 8,
                          lVar16 + 0x10 + (long)*(int *)(lVar16 + 0xc) * 8,
                          puVar4 + ((long)(int)uVar15 + (long)local_38) * 2 + 4);
            if (*piVar12 != -1) {
              if (*piVar12 != 0) {
                LOCK();
                *piVar12 = *piVar12 + -1;
                local_31 = *piVar12 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004f94b0;
              }
              FUN_1004fa0f0();
            }
LAB_1004f94b0:
            lVar16 = *plVar19;
            iVar2 = *(int *)(lVar16 + 8);
            lVar17 = (long)local_38;
            puVar13 = operator_new(8);
            *puVar13 = plVar11;
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            *(undefined8 **)(lVar16 + 0x10 + (lVar17 + iVar2) * 8) = puVar13;
          }
          LOCK();
          lVar16 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
        puVar5 = *ppuVar20;
        ppuVar20 = ppuVar20 + 3;
      } while (puVar5 != (undefined *)0x0);
    }
    lVar16 = param_1[1];
    local_68 = *(int **)(lVar16 + 8);
  }
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_68);
      FUN_1004fa180(local_68 + (long)local_68[2] * 2 + 4,local_68 + (long)local_68[3] * 2 + 4,
                    *(long *)(lVar16 + 8) + 0x10 + (long)*(int *)(*(long *)(lVar16 + 8) + 8) * 8);
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)local_68[2] * 2 + 4;
  local_58 = local_68 + (long)local_68[3] * 2 + 4;
  local_50 = 1;
  if (local_68[2] != local_68[3]) {
    do {
      plVar11 = (long *)**(long **)local_60;
      if (plVar11 != (long *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      if (local_50 != 0) {
        plVar18 = (long *)0x0;
        if (plVar11[2] != 0) {
          plVar18 = *(long **)(plVar11[2] + 0x10);
        }
        (**(code **)(*plVar18 + 0x10))(&local_70);
        if (*(int *)(plVar11[3] + 4) == 0) {
LAB_1004f9800:
          if (*(int *)(local_70.field0_0x0 + 4) != 0) {
            QString::operator=((QString *)(plVar11 + 4),&local_70);
            lVar17 = plVar11[2];
            lVar16 = *(long *)(lVar17 + 0x10);
            uVar21 = 0x21;
            if (*(char *)(lVar16 + 0x18) == '\0') {
              uVar21 = 0x20;
            }
            lVar6 = *param_1;
            local_88 = *(QArrayData **)(lVar16 + 8);
            if (1 < *(int *)local_88 + 1U) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + 1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              lVar17 = plVar11[2];
              lVar16 = *(long *)(lVar17 + 0x10);
            }
            local_90 = *(QArrayData **)(lVar16 + 0x10);
            if (1 < *(int *)local_90 + 1U) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + 1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              lVar17 = plVar11[2];
            }
            plVar18 = (long *)0x0;
            if (lVar17 != 0) {
              plVar18 = *(long **)(lVar17 + 0x10);
            }
            (**(code **)(*plVar18 + 0x18))(&local_98);
            FUN_1004d02a0(&local_80,lVar6 + 0x48,&local_70,&local_88,&local_90,uVar21,&local_98);
            pQVar7 = (QArrayData *)plVar11[3];
            plVar11[3] = (long)local_80;
            local_80 = pQVar7;
            if (*(int *)pQVar7 != -1) {
              if (*(int *)pQVar7 != 0) {
                LOCK();
                *(int *)pQVar7 = *(int *)pQVar7 + -1;
                local_31 = *(int *)pQVar7 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004f98ff;
              }
              QArrayData::deallocate(pQVar7,2,8);
            }
LAB_1004f98ff:
            if (local_98 != (long *)0x0) {
              LOCK();
              plVar18 = local_98 + 1;
              lVar16 = *plVar18;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)lVar16 == 1) {
                (**(code **)(*local_98 + 0x10))();
              }
            }
            if (*(int *)local_90 != -1) {
              if (*(int *)local_90 != 0) {
                LOCK();
                *(int *)local_90 = *(int *)local_90 + -1;
                local_31 = *(int *)local_90 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004f9959;
              }
              QArrayData::deallocate(local_90,2,8);
            }
LAB_1004f9959:
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004f9990;
              }
              QArrayData::deallocate(local_88,2,8);
            }
          }
        }
        else {
          cVar9 = operator==((QString *)(plVar11 + 4),&local_70);
          if (cVar9 == '\0') {
            local_78 = (QArrayData *)plVar11[3];
            plVar11[3] = (long)PTR_shared_null_100ba20d0;
            FUN_1004d0a00(*param_1 + 0x48,&local_78);
            if (*(int *)local_78 != -1) {
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                local_31 = *(int *)local_78 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004f9800;
              }
              QArrayData::deallocate(local_78,2,8);
            }
            goto LAB_1004f9800;
          }
        }
LAB_1004f9990:
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004f99c0;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_1004f99c0:
        local_50 = 0;
      }
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar18 = plVar11 + 1;
        lVar16 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      local_60 = local_60 + 2;
      uVar15 = local_50 ^ 1;
      bVar22 = local_50 != 1;
      local_50 = uVar15;
    } while ((bVar22) && (local_60 != local_58));
  }
  if (*local_68 != -1) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_31 = *local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004f9a3d;
    }
    FUN_1004fa0f0(local_68);
  }
LAB_1004f9a3d:
  if (lVar3 != 0) {
    QMutex::unlock();
  }
  return;
}

