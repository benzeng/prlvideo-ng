
undefined8 * FUN_1004d34e0(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  short *psVar6;
  short *psVar7;
  char cVar8;
  undefined1 uVar9;
  byte bVar10;
  byte bVar11;
  short sVar12;
  undefined8 *puVar13;
  uint *puVar14;
  ulong uVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  long *plVar19;
  long lVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint *local_c0;
  uint *local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QArrayData *local_98;
  long *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined1 local_70 [8];
  uint *local_68;
  QArrayData *local_60;
  QString local_58;
  long *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_100ba2188;
  lVar20 = *param_3;
  if (*(int *)(lVar20 + 8) != *(int *)(lVar20 + 0xc)) {
    lVar20 = lVar20 + 0x10 + (long)*(int *)(lVar20 + 8) * 8;
    puVar22 = (undefined8 *)(param_2 + 8);
    do {
      CVmSharedFolder::getName();
      puVar13 = (undefined8 *)QString::replace(&local_40,0x2f,0x3a,1);
      puVar14 = (uint *)*puVar13;
      if ((1 < *puVar14) || (*(long *)(puVar14 + 4) != 0x18)) {
        QString::reallocData((uint)puVar13,(bool)((char)puVar14[1] + '\x01'));
        puVar14 = (uint *)*puVar13;
      }
      uVar15 = (ulong)(int)puVar14[1];
      if ((uVar15 & 0x7fffffffffffffff) != 0) {
        lVar3 = *(long *)(puVar14 + 4);
        psVar18 = (short *)((long)puVar14 + lVar3);
        psVar2 = psVar18 + uVar15;
        do {
          if (*psVar18 == 0x2f) {
            psVar18 = psVar18 + 1;
          }
          else {
            psVar17 = psVar2;
            psVar16 = psVar18;
            if (psVar18 != psVar2) {
              do {
                psVar16 = psVar16 + 1;
                psVar17 = psVar2;
                if ((short *)(lVar3 + uVar15 * 2 + (long)puVar14) == psVar16) break;
                psVar17 = psVar16;
              } while (*psVar16 != 0x2f);
            }
            if ((long)psVar17 - (long)psVar18 != 0) {
              sVar12 = FUN_100541f30(*psVar18);
              *psVar18 = sVar12;
              psVar7 = psVar18 + 1;
              psVar16 = psVar18;
              while (psVar6 = psVar7, psVar6 != psVar17) {
                sVar12 = FUN_100541f30(psVar16[1]);
                psVar16[1] = sVar12;
                psVar7 = psVar16 + 2;
                psVar16 = psVar6;
              }
              if (psVar17[-1] == 0x2e) {
                if ((2 < (ulong)((long)psVar17 - (long)psVar18 >> 1)) ||
                   (sVar12 = *psVar18, psVar18 = psVar17, sVar12 != 0x2e)) {
                  psVar17[-1] = -0xfd7;
                  psVar18 = psVar17;
                }
              }
              else {
                psVar18 = psVar17;
                if (psVar17[-1] == 0x20) {
                  psVar17[-1] = -0xfd8;
                }
              }
            }
          }
        } while (psVar18 != psVar2);
      }
      QString::toUpper_helper(&local_48);
      puVar14 = (uint *)*puVar22;
      if (1 < *puVar14) {
        FUN_1004d6bf0(puVar22,puVar14[1]);
        puVar14 = (uint *)*puVar22;
      }
      puVar21 = puVar14 + (long)(int)puVar14[2] * 2 + 4;
      bVar5 = false;
      while( true ) {
        if (1 < *puVar14) {
          FUN_1004d6bf0(puVar22,puVar14[1]);
          puVar14 = (uint *)*puVar22;
        }
        if (puVar21 == puVar14 + (long)(int)puVar14[3] * 2 + 4) break;
        plVar19 = (long *)**(long **)puVar21;
        if (plVar19 != (long *)0x0) {
          LOCK();
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          UNLOCK();
        }
        local_50 = plVar19;
        if (*(char *)((long)plVar19 + 0x34) == '\0') {
LAB_1004d3895:
          bVar4 = false;
LAB_1004d3897:
          LOCK();
          plVar1 = plVar19 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
          if (bVar4) break;
        }
        else {
          QString::toUpper_helper(&local_58);
          cVar8 = operator==(&local_58,&local_48);
          if (*(int *)local_58.field0_0x0 != -1) {
            if (*(int *)local_58.field0_0x0 != 0) {
              LOCK();
              *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
              local_31 = *(int *)local_58.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004d37c1;
            }
            QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
          }
LAB_1004d37c1:
          if (cVar8 != '\0') {
            CVmSharedFolder::getPath();
            FUN_1004d86d0(plVar19,&local_60);
            if (*(int *)local_60 != -1) {
              if (*(int *)local_60 != 0) {
                LOCK();
                *(int *)local_60 = *(int *)local_60 + -1;
                local_31 = *(int *)local_60 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004d3819;
              }
              QArrayData::deallocate(local_60,2,8);
            }
LAB_1004d3819:
            uVar9 = CVmSharedFolder::isReadOnly();
            *(undefined1 *)(plVar19 + 6) = uVar9;
            cVar8 = CVmSharedFolder::isEnabled();
            bVar4 = true;
            bVar5 = true;
            if (cVar8 == '\0') {
              local_68 = puVar21;
              FUN_1004d4dd0(local_70,puVar22,&local_68);
              FUN_1004d6d80(param_1,&local_50);
              *(long *)(DAT_1011cc980 + 0xf0) = *(long *)(DAT_1011cc980 + 0xf0) + -1;
              bVar4 = true;
              bVar5 = true;
            }
            goto LAB_1004d3897;
          }
          if (plVar19 != (long *)0x0) goto LAB_1004d3895;
        }
        puVar21 = puVar21 + 2;
        puVar14 = (uint *)*puVar22;
      }
      if ((!bVar5) && (cVar8 = CVmSharedFolder::isEnabled(), cVar8 != '\0')) {
        CVmSharedFolder::getPath();
        CVmSharedFolder::getDescription();
        bVar10 = CVmSharedFolder::isReadOnly();
        FUN_1004d08f0(&local_78,param_2,&local_80,&local_40,&local_88,bVar10 | 8);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004d3969;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1004d3969:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004d3999;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1004d3999:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004d39d0;
          }
          QArrayData::deallocate(local_80,2,8);
        }
      }
LAB_1004d39d0:
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d3a00;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_1004d3a00:
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004d3a30;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1004d3a30:
      lVar20 = lVar20 + 8;
    } while (lVar20 != *param_3 + 0x10 + (long)*(int *)(*param_3 + 0xc) * 8);
  }
  puVar22 = (undefined8 *)(param_2 + 8);
  puVar14 = (uint *)*puVar22;
  if (1 < *puVar14) {
    FUN_1004d6bf0(puVar22,puVar14[1]);
    puVar14 = (uint *)*puVar22;
  }
  puVar21 = puVar14 + (long)(int)puVar14[2] * 2 + 4;
  do {
    if (1 < *puVar14) {
      FUN_1004d6bf0(puVar22,puVar14[1]);
      puVar14 = (uint *)*puVar22;
    }
    if (puVar21 == puVar14 + (long)(int)puVar14[3] * 2 + 4) {
      return param_1;
    }
    plVar19 = (long *)**(long **)puVar21;
    if (plVar19 != (long *)0x0) {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
    }
    local_90 = plVar19;
    if (*(char *)((long)plVar19 + 0x34) == '\0') {
LAB_1004d3e31:
      puVar21 = puVar21 + 2;
    }
    else {
      lVar20 = *param_3;
      if (*(int *)(lVar20 + 8) != *(int *)(lVar20 + 0xc)) {
        lVar20 = lVar20 + 0x10 + (long)*(int *)(lVar20 + 8) * 8;
        bVar5 = true;
        do {
          CVmSharedFolder::getName();
          puVar13 = (undefined8 *)QString::replace(&local_98,0x2f,0x3a,1);
          puVar14 = (uint *)*puVar13;
          if ((1 < *puVar14) || (*(long *)(puVar14 + 4) != 0x18)) {
            QString::reallocData((uint)puVar13,(bool)((char)puVar14[1] + '\x01'));
            puVar14 = (uint *)*puVar13;
          }
          uVar15 = (ulong)(int)puVar14[1];
          if ((uVar15 & 0x7fffffffffffffff) != 0) {
            lVar3 = *(long *)(puVar14 + 4);
            psVar18 = (short *)((long)puVar14 + lVar3);
            psVar2 = psVar18 + uVar15;
            do {
              if (*psVar18 == 0x2f) {
                psVar18 = psVar18 + 1;
              }
              else {
                psVar17 = psVar2;
                psVar16 = psVar18;
                if (psVar18 != psVar2) {
                  do {
                    psVar16 = psVar16 + 1;
                    psVar17 = psVar2;
                    if ((short *)(lVar3 + uVar15 * 2 + (long)puVar14) == psVar16) break;
                    psVar17 = psVar16;
                  } while (*psVar16 != 0x2f);
                }
                if ((long)psVar17 - (long)psVar18 != 0) {
                  sVar12 = FUN_100541f30(*psVar18);
                  *psVar18 = sVar12;
                  psVar7 = psVar18 + 1;
                  psVar16 = psVar18;
                  while (psVar6 = psVar7, psVar6 != psVar17) {
                    sVar12 = FUN_100541f30(psVar16[1]);
                    psVar16[1] = sVar12;
                    psVar7 = psVar16 + 2;
                    psVar16 = psVar6;
                  }
                  if (psVar17[-1] == 0x2e) {
                    if ((2 < (ulong)((long)psVar17 - (long)psVar18 >> 1)) ||
                       (sVar12 = *psVar18, psVar18 = psVar17, sVar12 != 0x2e)) {
                      psVar17[-1] = -0xfd7;
                      psVar18 = psVar17;
                    }
                  }
                  else {
                    psVar18 = psVar17;
                    if (psVar17[-1] == 0x20) {
                      psVar17[-1] = -0xfd8;
                    }
                  }
                }
              }
            } while (psVar18 != psVar2);
          }
          QString::toUpper_helper(&local_a0);
          plVar19 = local_90;
          QString::toUpper_helper(&local_a8);
          bVar10 = operator==(&local_a8,&local_a0);
          if (*(int *)local_a8.field0_0x0 != -1) {
            if (*(int *)local_a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
              local_31 = *(int *)local_a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004d3d1f;
            }
            QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
          }
LAB_1004d3d1f:
          CVmSharedFolder::getPath();
          bVar11 = operator==((QString *)(plVar19 + 3),&local_b0);
          if (*(int *)local_b0.field0_0x0 != -1) {
            if (*(int *)local_b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
              local_31 = *(int *)local_b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004d3d78;
            }
            QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
          }
LAB_1004d3d78:
          if ((bVar10 & bVar11) != 0) {
            bVar5 = false;
          }
          if (*(int *)local_a0.field0_0x0 != -1) {
            if (*(int *)local_a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
              local_31 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004d3dbd;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
          }
LAB_1004d3dbd:
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004d3df3;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1004d3df3:
        } while (((bVar10 & bVar11 & 1) == 0) &&
                (lVar20 = lVar20 + 8, lVar20 != *param_3 + 0x10 + (long)*(int *)(*param_3 + 0xc) * 8
                ));
        if (!bVar5) goto LAB_1004d3e31;
      }
      local_c0 = puVar21;
      FUN_1004d4dd0(&local_b8,puVar22,&local_c0);
      puVar21 = local_b8;
      FUN_1004d6d80(param_1,&local_90);
      *(long *)(DAT_1011cc980 + 0xf0) = *(long *)(DAT_1011cc980 + 0xf0) + -1;
    }
    if (plVar19 != (long *)0x0) {
      LOCK();
      plVar1 = plVar19 + 1;
      lVar20 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
    puVar14 = (uint *)*puVar22;
  } while( true );
}

