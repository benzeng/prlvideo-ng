
int FUN_100586540(long param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  QString QVar3;
  QString QVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  char *pcVar14;
  long *plVar15;
  byte extraout_DL;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  bool bVar20;
  QString local_200;
  QString local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QString local_1c8;
  QString local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  QString local_1a8;
  undefined8 local_1a0;
  int local_194;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  undefined1 local_169;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined1 local_f8 [16];
  undefined4 local_e8 [2];
  QString local_e0;
  QString local_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  undefined4 local_b8 [2];
  QString local_b0;
  QString local_a8;
  long local_a0;
  long local_98;
  long *local_90;
  undefined1 local_88 [16];
  long local_78;
  long local_70;
  undefined4 local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar19 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar19;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    pcVar14 = "Trying to create state on inconsistend disk";
LAB_1005867e0:
    FUN_1008e3970("","vdisk",0,pcVar14);
    iVar7 = -0x7ffe6fea;
    goto LAB_1005870f7;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    FUN_1008e3970("","vdisk",0,"Pointer to base class is NULL");
    iVar7 = -0x7fffffff;
    goto LAB_1005870f7;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    pcVar14 = "There are no files opened at create state operation";
    goto LAB_1005867e0;
  }
  plVar15 = (long *)(param_1 + 0x28);
  plVar18 = *(long **)(param_1 + 0x28);
  plVar16 = plVar15;
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    do {
      while (plVar11 = plVar18, iVar7 = FUN_1007ea6f0(plVar11 + 4,param_2), iVar7 < 0) {
        plVar18 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) goto LAB_10058661d;
      }
      plVar16 = plVar11;
      plVar18 = (long *)*plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
LAB_10058661d:
    if ((plVar16 != plVar15) && (iVar7 = FUN_1007ea6f0(param_2,plVar16 + 4), -1 < iVar7)) {
      FUN_1007d6a70(&local_180,param_2);
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error: try to create snapshot by existing uuid %s",
                    local_178 + *(long *)(local_178 + 0x10));
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_169 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_169) goto LAB_1005866ca;
        }
        QArrayData::deallocate(local_178,1,8);
      }
LAB_1005866ca:
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_169 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_169) goto LAB_100586706;
        }
        QArrayData::deallocate(local_180,2,8);
      }
LAB_100586706:
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",0x171,
                    "CreateState");
      iVar7 = -0x7ffe6feb;
      goto LAB_1005870f7;
    }
  }
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x10) + 0xa0))(local_88);
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    plVar16 = (long *)(param_1 + 0x20);
    plVar11 = *(long **)(param_1 + 0x28);
    plVar18 = plVar15;
    do {
      while (plVar13 = plVar11, iVar7 = FUN_1007ea6f0(plVar13 + 4,local_88), iVar7 < 0) {
        plVar11 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) goto LAB_1005867f6;
      }
      plVar18 = plVar13;
      plVar11 = (long *)*plVar13;
    } while ((long *)*plVar13 != (long *)0x0);
LAB_1005867f6:
    if ((plVar18 != plVar15) && (iVar7 = FUN_1007ea6f0(local_88), -1 < iVar7)) {
      local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)plVar18[7];
      if (1 < *(int *)local_b0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
        local_169 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
      }
      local_b8[0] = (undefined4)plVar18[6];
      local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)plVar18[8];
      if (1 < *(int *)local_a8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
        local_169 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
      }
      local_a0 = plVar18[9];
      local_98 = plVar18[10];
      local_90 = (long *)plVar18[0xb];
      if (local_90 != (long *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      cVar5 = FUN_10059ee30(local_b8[0]);
      if (cVar5 == '\0') {
        iVar7 = -0x7ffe6fde;
        FUN_1008e3970("","vdisk",0,
                      "We do not able to create state. Image type [%u] is not supported",local_b8[0]
                     );
      }
      else {
        *(undefined1 *)(param_1 + 0x7c) = 0;
        uVar10 = FUN_100586410(param_1);
        lVar19 = *(long *)(*(long *)(param_1 + 0x70) + 8);
        plVar15 = (long *)0x0;
        if (lVar19 != 0) {
          plVar15 = *(long **)(lVar19 + 0x10);
        }
        (**(code **)(*plVar15 + 0xf0))(&local_188,plVar15,param_2,*(undefined4 *)(param_1 + 0x78));
        local_190 = (QArrayData *)local_b0.field0_0x0;
        if (1 < *(int *)local_b0.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
          local_169 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
        }
        cVar5 = QDir::isRelativePath(&local_b0);
        local_194 = 0;
        if ((cVar5 == '\0') ||
           (local_194 = FUN_100586240(param_1,local_b8,&local_188), -1 < local_194)) {
          local_1a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
          FUN_1005b67f0();
          lVar19 = *(long *)(*(long *)(param_1 + 0x70) + 8);
          plVar15 = (long *)0x0;
          if (lVar19 != 0) {
            plVar15 = *(long **)(lVar19 + 0x10);
          }
          lVar19 = param_1 + 0x68;
          local_194 = (**(code **)(*plVar15 + 0xf8))();
          if (local_194 < 0) {
            FUN_1008e3970("","vdisk",0,"Error: can\'t do preparation work in descriptor, err 0x%x",
                          local_194);
LAB_10058772c:
            iVar7 = local_194;
            if (cVar5 != '\0') {
              FUN_100585a10(param_1,local_b8,&local_190);
              iVar7 = local_194;
            }
          }
          else {
            lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            plVar15 = *(long **)(lVar12 + 0x10);
            pcVar1 = *(code **)(*plVar15 + 0xf0);
            (**(code **)(*plVar15 + 0xa0))(local_f8,plVar15);
            (*pcVar1)(&local_1c0,plVar15,local_f8,*(undefined4 *)(param_1 + 0x78));
            QString::operator=(&local_e0,&local_1c0);
            if (*(int *)local_1c0.field0_0x0 != -1) {
              if (*(int *)local_1c0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
                local_169 = *(int *)local_1c0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_169) goto LAB_100586a54;
              }
              QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
            }
LAB_100586a54:
            lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
            plVar11 = (long *)0x0;
            if (lVar12 != 0) {
              plVar11 = *(long **)(lVar12 + 0x10);
            }
            (**(code **)(*plVar11 + 0xa0))();
            local_c8 = local_100;
            local_d0 = local_108;
            lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
            plVar11 = (long *)0x0;
            if (lVar12 != 0) {
              plVar11 = *(long **)(lVar12 + 0x10);
            }
            local_e8[0] = (**(code **)(*plVar11 + 0x138))();
            if (*(int *)(*param_3 + 4) != 0) {
              cVar6 = QString::endsWith(param_3,0x2f,1);
              if (cVar6 == '\0') {
                cVar6 = QString::endsWith(param_3,0x5c,1);
                uVar17 = CONCAT62((int6)((ulong)plVar15 >> 0x10),0x2f);
                if (cVar6 != '\0') goto LAB_100586b07;
              }
              else {
LAB_100586b07:
                uVar17 = 0;
              }
              local_1e0 = (QArrayData *)QString::fromAscii_helper("%1%2%3",6);
              QString::arg(&local_1d8,&local_1e0,param_3,0,0x20);
              QString::arg(&local_1d0,&local_1d8,uVar17 & 0xffffffff,0,0x20);
              QString::arg(&local_1c8,&local_1d0,&local_e0,0,0x20);
              QString::operator=(&local_e0,&local_1c8);
              if (*(int *)local_1c8.field0_0x0 != -1) {
                if (*(int *)local_1c8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
                  local_169 = *(int *)local_1c8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_169) goto LAB_100586bd1;
                }
                QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
              }
LAB_100586bd1:
              if (*(int *)local_1d0 != -1) {
                if (*(int *)local_1d0 != 0) {
                  LOCK();
                  *(int *)local_1d0 = *(int *)local_1d0 + -1;
                  local_169 = *(int *)local_1d0 != 0;
                  UNLOCK();
                  if ((bool)local_169) goto LAB_100586c0d;
                }
                QArrayData::deallocate(local_1d0,2,8);
              }
LAB_100586c0d:
              if (*(int *)local_1d8 != -1) {
                if (*(int *)local_1d8 != 0) {
                  LOCK();
                  *(int *)local_1d8 = *(int *)local_1d8 + -1;
                  local_169 = *(int *)local_1d8 != 0;
                  UNLOCK();
                  if ((bool)local_169) goto LAB_100586c49;
                }
                QArrayData::deallocate(local_1d8,2,8);
              }
LAB_100586c49:
              if (*(int *)local_1e0 != -1) {
                if (*(int *)local_1e0 != 0) {
                  LOCK();
                  *(int *)local_1e0 = *(int *)local_1e0 + -1;
                  local_169 = *(int *)local_1e0 != 0;
                  UNLOCK();
                  if ((bool)local_169) goto LAB_100586c85;
                }
                QArrayData::deallocate(local_1e0,2,8);
              }
            }
LAB_100586c85:
            plVar15 = local_c0;
            QVar4.field0_0x0 = local_d8.field0_0x0;
            QVar3.field0_0x0 = local_e0.field0_0x0;
            local_138 = *param_2;
            local_130 = param_2[1];
            if (1 < *(int *)local_e0.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
              local_169 = *(int *)local_e0.field0_0x0 != 0;
              UNLOCK();
            }
            if (1 < *(int *)local_d8.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
              local_169 = *(int *)local_d8.field0_0x0 != 0;
              UNLOCK();
            }
            local_140 = local_c8;
            local_148 = local_d0;
            if (local_c0 != (long *)0x0) {
              LOCK();
              *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
              UNLOCK();
            }
            if (1 < *(int *)local_e0.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
              local_169 = *(int *)local_e0.field0_0x0 != 0;
              UNLOCK();
            }
            if (1 < *(int *)local_d8.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
              local_169 = *(int *)local_d8.field0_0x0 != 0;
              UNLOCK();
            }
            local_120 = local_c8;
            local_128 = local_d0;
            if (local_c0 != (long *)0x0) {
              LOCK();
              *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
              UNLOCK();
            }
            local_60 = (QArrayData *)local_e0.field0_0x0;
            if (1 < *(int *)local_e0.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
              local_169 = *(int *)local_e0.field0_0x0 != 0;
              UNLOCK();
            }
            local_68 = local_e8[0];
            local_58 = (QArrayData *)local_d8.field0_0x0;
            if (1 < *(int *)local_d8.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
              local_169 = *(int *)local_d8.field0_0x0 != 0;
              UNLOCK();
            }
            local_48 = local_c8;
            local_50 = local_d0;
            local_40 = local_c0;
            if (local_c0 != (long *)0x0) {
              LOCK();
              *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
              UNLOCK();
            }
            local_118 = local_138;
            local_110 = local_130;
            local_78 = local_138;
            local_70 = local_130;
            plVar11 = (long *)FUN_1005990a0(plVar16,&local_78);
            if (local_40 != (long *)0x0) {
              LOCK();
              plVar13 = local_40 + 1;
              lVar12 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)(*local_40 + 0x10))();
              }
            }
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_169 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_169) goto LAB_100586e89;
              }
              QArrayData::deallocate(local_58,2,8);
            }
LAB_100586e89:
            if (*(int *)local_60 != -1) {
              if (*(int *)local_60 != 0) {
                LOCK();
                *(int *)local_60 = *(int *)local_60 + -1;
                local_169 = *(int *)local_60 != 0;
                UNLOCK();
                if ((bool)local_169) goto LAB_100586ebf;
              }
              QArrayData::deallocate(local_60,2,8);
            }
LAB_100586ebf:
            if (plVar15 != (long *)0x0) {
              LOCK();
              plVar13 = plVar15 + 1;
              lVar12 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
            if (*(int *)QVar4.field0_0x0 != -1) {
              if (*(int *)QVar4.field0_0x0 != 0) {
                LOCK();
                *(int *)QVar4.field0_0x0 = *(int *)QVar4.field0_0x0 + -1;
                local_169 = *(int *)QVar4.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_169) goto LAB_100586f11;
              }
              QArrayData::deallocate((QArrayData *)QVar4.field0_0x0,2,8);
            }
LAB_100586f11:
            if (*(int *)QVar3.field0_0x0 != -1) {
              if (*(int *)QVar3.field0_0x0 != 0) {
                LOCK();
                *(int *)QVar3.field0_0x0 = *(int *)QVar3.field0_0x0 + -1;
                local_169 = *(int *)QVar3.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_169) goto LAB_100586f54;
              }
              QArrayData::deallocate((QArrayData *)QVar3.field0_0x0,2,8);
            }
LAB_100586f54:
            if (plVar15 != (long *)0x0) {
              LOCK();
              plVar13 = plVar15 + 1;
              lVar12 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
            if (*(int *)QVar4.field0_0x0 != -1) {
              if (*(int *)QVar4.field0_0x0 != 0) {
                LOCK();
                *(int *)QVar4.field0_0x0 = *(int *)QVar4.field0_0x0 + -1;
                local_169 = *(int *)QVar4.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_169) goto LAB_100586fa6;
              }
              QArrayData::deallocate((QArrayData *)QVar4.field0_0x0,2,8);
            }
LAB_100586fa6:
            if (*(int *)QVar3.field0_0x0 != -1) {
              if (*(int *)QVar3.field0_0x0 != 0) {
                LOCK();
                *(int *)QVar3.field0_0x0 = *(int *)QVar3.field0_0x0 + -1;
                local_169 = *(int *)QVar3.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_169) goto LAB_100586fde;
              }
              QArrayData::deallocate((QArrayData *)QVar3.field0_0x0,2,8);
            }
LAB_100586fde:
            if ((extraout_DL & 1) == 0) {
              FUN_1007d6a70(&local_1f0,param_2);
              QString::toUtf8();
              FUN_1008e3970("","vdisk",0,"Error: duplicate UID \'%s\' entry!",
                            local_1e8 + *(long *)(local_1e8 + 0x10));
              if (*(int *)local_1e8 != -1) {
                if (*(int *)local_1e8 != 0) {
                  LOCK();
                  *(int *)local_1e8 = *(int *)local_1e8 + -1;
                  local_169 = *(int *)local_1e8 != 0;
                  UNLOCK();
                  if ((bool)local_169) goto LAB_100587076;
                }
                QArrayData::deallocate(local_1e8,1,8);
              }
LAB_100587076:
              if (*(int *)local_1f0 != -1) {
                if (*(int *)local_1f0 != 0) {
                  LOCK();
                  *(int *)local_1f0 = *(int *)local_1f0 + -1;
                  local_169 = *(int *)local_1f0 != 0;
                  UNLOCK();
                  if ((bool)local_169) goto LAB_1005870b2;
                }
                QArrayData::deallocate(local_1f0,2,8);
              }
LAB_1005870b2:
              local_194 = -0x7ffdeff8;
LAB_100587706:
              lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
              plVar15 = (long *)0x0;
              if (lVar12 != 0) {
                plVar15 = *(long **)(lVar12 + 0x10);
              }
              (**(code **)(*plVar15 + 0x100))(plVar15,lVar19);
              goto LAB_10058772c;
            }
            FUN_100585d90(&local_1f8,param_1,&local_e0);
            QString::operator=(&local_1a8,&local_1f8);
            if (*(int *)local_1f8.field0_0x0 != -1) {
              if (*(int *)local_1f8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
                local_169 = *(int *)local_1f8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_169) goto LAB_1005871d2;
              }
              QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
            }
LAB_1005871d2:
            local_1ac = local_e8[0];
            local_1b0 = *(undefined4 *)(param_1 + 0x18);
            local_1b8 = uVar10;
            local_1a0 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2e0))();
            uVar8 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2f8))();
            lVar12 = FUN_1006848d0(&local_1b8,uVar8,&DAT_1011bc648,&local_194,param_1);
            if (lVar12 == 0) {
              FUN_1008e3970("","vdisk",0,"Can\'t open image. Error 0x%x",local_194);
LAB_1005876a0:
              plVar15 = plVar11;
              plVar18 = (long *)plVar11[1];
              if ((long *)plVar11[1] == (long *)0x0) {
                do {
                  plVar13 = (long *)plVar15[2];
                  bVar20 = (long *)*plVar13 != plVar15;
                  plVar15 = plVar13;
                } while (bVar20);
              }
              else {
                do {
                  plVar13 = plVar18;
                  plVar18 = (long *)*plVar13;
                } while ((long *)*plVar13 != (long *)0x0);
              }
              if ((long *)*plVar16 == plVar11) {
                *plVar16 = (long)plVar13;
              }
              *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
              FUN_1000e86c0(*(undefined8 *)(param_1 + 0x28),plVar11);
              FUN_10057e590(plVar11 + 6);
              operator_delete(plVar11);
              goto LAB_100587706;
            }
            FUN_10056b070();
            local_a0 = *param_2;
            local_98 = param_2[1];
            lVar2 = *(long *)(*(long *)(param_1 + 0x70) + 8);
            plVar15 = (long *)0x0;
            if (lVar2 != 0) {
              plVar15 = *(long **)(lVar2 + 0x10);
            }
            local_194 = (**(code **)(*plVar15 + 0x130))(plVar15,local_b8);
            if (local_194 < 0) {
              FUN_1008e3970("","vdisk",0,"Error: can\'t set image snapshot UID, err 0x%x",local_194)
              ;
              lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
              plVar15 = (long *)0x0;
              if (lVar12 != 0) {
                plVar15 = *(long **)(lVar12 + 0x10);
              }
              (**(code **)(*plVar15 + 0xa0))(&local_158);
              local_98 = local_150;
              local_a0 = local_158;
LAB_10058763e:
              FUN_100585d90(&local_200,param_1,&local_e0);
              QFile::remove(&local_200);
              if (*(int *)local_200.field0_0x0 != -1) {
                if (*(int *)local_200.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
                  local_169 = *(int *)local_200.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_169) goto LAB_1005876a0;
                }
                QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
              }
              goto LAB_1005876a0;
            }
            lVar2 = *(long *)(*(long *)(param_1 + 0x70) + 8);
            plVar15 = (long *)0x0;
            if (lVar2 != 0) {
              plVar15 = *(long **)(lVar2 + 0x10);
            }
            local_194 = (**(code **)(*plVar15 + 0x108))(plVar15,lVar19,local_e8);
            if (local_194 < 0) {
              FUN_1008e3970("","vdisk",0,"Error: can\'t create image in descriptor, err 0x%x",
                            local_194);
LAB_1005875c8:
              lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
              plVar15 = (long *)0x0;
              if (lVar12 != 0) {
                plVar15 = *(long **)(lVar12 + 0x10);
              }
              (**(code **)(*plVar15 + 0xa0))();
              local_98 = local_160;
              local_a0 = local_168;
              lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
              plVar15 = (long *)0x0;
              if (lVar12 != 0) {
                plVar15 = *(long **)(lVar12 + 0x10);
              }
              (**(code **)(*plVar15 + 0x130))(plVar15,local_b8);
              goto LAB_10058763e;
            }
            local_194 = FUN_100586100(param_1,lVar12,0);
            if (local_194 < 0) {
              FUN_1008e3970("","vdisk",0,"CreateState: Can\'t add new image in the list");
              lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
              plVar15 = (long *)0x0;
              if (lVar12 != 0) {
                plVar15 = *(long **)(lVar12 + 0x10);
              }
              (**(code **)(*plVar15 + 0x110))(plVar15,lVar19,&local_c0);
              goto LAB_1005875c8;
            }
            *(undefined4 *)(plVar11 + 6) = local_b8[0];
            QString::operator=((QString *)(plVar11 + 7),&local_b0);
            QString::operator=((QString *)(plVar11 + 8),&local_a8);
            plVar11[10] = local_98;
            plVar11[9] = local_a0;
            if (local_90 != (long *)0x0) {
              LOCK();
              *(int *)(local_90 + 1) = (int)local_90[1] + 1;
              UNLOCK();
            }
            plVar15 = (long *)plVar11[0xb];
            plVar11[0xb] = (long)local_90;
            if (plVar15 != (long *)0x0) {
              LOCK();
              plVar16 = plVar15 + 1;
              lVar19 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)(*plVar15 + 0x10))();
              }
            }
            *(undefined4 *)(plVar18 + 6) = local_e8[0];
            QString::operator=((QString *)(plVar18 + 7),&local_e0);
            QString::operator=((QString *)(plVar18 + 8),&local_d8);
            plVar18[10] = local_c8;
            plVar18[9] = local_d0;
            if (local_c0 != (long *)0x0) {
              LOCK();
              *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
              UNLOCK();
            }
            plVar15 = (long *)plVar18[0xb];
            plVar18[0xb] = (long)local_c0;
            if (plVar15 != (long *)0x0) {
              LOCK();
              plVar16 = plVar15 + 1;
              lVar19 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)(*plVar15 + 0x10))();
              }
            }
            *(undefined1 *)(param_1 + 0x7c) = 1;
            iVar9 = 1000;
            while( true ) {
              pcVar1 = (code *)*param_4;
              if ((pcVar1 == (code *)0x0) && (iVar7 = 0, param_4[4] == 0)) goto LAB_100587751;
              if ((-1 < iVar9) && (1 < *(uint *)(param_4 + 2))) {
                iVar7 = *(int *)((long)param_4 + 0x14);
                if (iVar9 < *(int *)((long)param_4 + 0x14)) {
                  *(int *)((long)param_4 + 0x14) = iVar9;
                  iVar7 = 0;
                  goto LAB_100587751;
                }
                *(int *)((long)param_4 + 0x14) = iVar9;
                iVar9 = (uint)(iVar9 - iVar7) / *(uint *)(param_4 + 2) + *(int *)(param_4 + 3);
                *(int *)(param_4 + 3) = iVar9;
              }
              if (pcVar1 != (code *)0x0) break;
              param_4 = (undefined8 *)param_4[4];
            }
            (*pcVar1)(iVar9,param_4[1]);
            iVar7 = 0;
          }
LAB_100587751:
          if (local_c0 != (long *)0x0) {
            LOCK();
            plVar15 = local_c0 + 1;
            lVar19 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar19 == 1) {
              (**(code **)(*local_c0 + 0x10))();
            }
          }
          if (*(int *)local_d8.field0_0x0 != -1) {
            if (*(int *)local_d8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
              local_169 = *(int *)local_d8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_169) goto LAB_1005877b1;
            }
            QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
          }
LAB_1005877b1:
          if (*(int *)local_e0.field0_0x0 != -1) {
            if (*(int *)local_e0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
              local_169 = *(int *)local_e0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_169) goto LAB_1005877ed;
            }
            QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
          }
LAB_1005877ed:
          if (*(int *)local_1a8.field0_0x0 != -1) {
            if (*(int *)local_1a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
              local_169 = *(int *)local_1a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_169) goto LAB_100587829;
            }
            QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
          }
        }
        else {
          FUN_1008e3970("","vdisk",0,"Error renaming base image");
          iVar7 = local_194;
        }
LAB_100587829:
        if (*(int *)local_190 != -1) {
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            local_169 = *(int *)local_190 != 0;
            UNLOCK();
            if ((bool)local_169) goto LAB_100587865;
          }
          QArrayData::deallocate(local_190,2,8);
        }
LAB_100587865:
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_169 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_169) goto LAB_1005878a1;
          }
          QArrayData::deallocate(local_188,2,8);
        }
      }
LAB_1005878a1:
      if (local_90 != (long *)0x0) {
        LOCK();
        plVar15 = local_90 + 1;
        lVar19 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      lVar19 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_169 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_169) goto LAB_10058790c;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_10058790c:
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_169 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_169) goto LAB_1005870f7;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
      goto LAB_1005870f7;
    }
  }
  FUN_1008e3970("","vdisk",0,"No temporary UID found, looks like state corrupted");
  *(undefined1 *)(param_1 + 0x7c) = 0;
  iVar7 = -0x7ffe6fed;
  lVar19 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1005870f7:
  if (lVar19 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

