
undefined4 FUN_1005e79e0(long *param_1,long *param_2,char param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  QArrayData *pQVar3;
  long *plVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  QString *pQVar20;
  char *pcVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  bool bVar26;
  char *in_stack_fffffffffffffda8;
  long *local_210;
  long *local_1f0;
  long local_1e8;
  long *local_1e0;
  long local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QString local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QString local_1a8;
  QString local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QString local_128;
  QString local_120;
  QString local_118;
  QString local_110;
  QFileInfo local_108 [8];
  QArrayData *local_100;
  int *local_f8;
  QString *local_f0;
  QString *local_e8;
  undefined4 local_e0;
  QArrayData *local_d8;
  int *local_d0;
  long local_c8;
  long *local_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  long local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  long *local_68;
  undefined1 local_59;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  if ((param_1[0xd] == 0) || (*(long *)(param_1[0xd] + 0x10) == 0)) {
    uVar8 = 0x80021011;
    FUN_1008e3970("","vdisk",0,"Error: can\'t remove snapshot, current VMDK is unavailable");
    goto LAB_1005e7ab0;
  }
  local_68 = (long *)0x0;
  FUN_1007d6870(&local_48);
  plVar13 = param_1 + 10;
  cVar5 = FUN_1007ea210();
  if (cVar5 == '\0') {
    if (param_3 == '\0') {
      in_stack_fffffffffffffda8 =
           (char *)CONCAT44((int)((ulong)in_stack_fffffffffffffda8 >> 0x20),0x688);
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","Merge",
                    "VMwareDiskDescriptor.cpp",in_stack_fffffffffffffda8,"RemoveSnapshot");
    }
    if ((long *)param_1[5] != (long *)0x0) {
      plVar15 = (long *)param_1[5];
      plVar10 = param_1 + 5;
      do {
        while (plVar25 = plVar15, iVar7 = FUN_1007ea6f0(plVar25 + 4,param_2), iVar7 < 0) {
          plVar1 = plVar25 + 1;
          plVar25 = plVar10;
          plVar15 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_1005e7b8b;
        }
        plVar15 = (long *)*plVar25;
        plVar10 = plVar25;
      } while ((long *)*plVar25 != (long *)0x0);
LAB_1005e7b8b:
      if ((plVar25 != param_1 + 5) && (iVar7 = FUN_1007ea6f0(param_2,plVar25 + 4), -1 < iVar7)) {
        local_48 = *plVar13;
        local_40 = param_1[0xb];
        goto LAB_1005e7bc9;
      }
    }
    FUN_1007d6a70(&local_78,param_2);
    QString::toLocal8Bit();
    FUN_1008e3970("","vdisk",0,"Error: can\'t find snapshot by uuid \'%s\' ",
                  local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_59 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1005e7ca9;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_1005e7ca9:
    uVar8 = 0x80021011;
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_59 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1005e7ab0;
      }
      QArrayData::deallocate(local_78,2,8);
    }
    goto LAB_1005e7ab0;
  }
  local_48 = *param_2;
  local_40 = param_2[1];
  plVar25 = param_1;
LAB_1005e7bc9:
  plVar15 = param_1 + 5;
  if ((long *)*plVar15 != (long *)0x0) {
    plVar10 = param_1 + 0xd;
    plVar1 = (long *)*plVar15;
    plVar11 = plVar15;
    do {
      while (plVar22 = plVar1, iVar7 = FUN_1007ea6f0(plVar22 + 4,&local_48), iVar7 < 0) {
        plVar19 = plVar22 + 1;
        plVar22 = plVar11;
        plVar1 = (long *)*plVar19;
        if ((long *)*plVar19 == (long *)0x0) goto LAB_1005e7cf8;
      }
      plVar1 = (long *)*plVar22;
      plVar11 = plVar22;
    } while ((long *)*plVar22 != (long *)0x0);
LAB_1005e7cf8:
    if ((plVar22 != plVar15) && (iVar7 = FUN_1007ea6f0(&local_48,plVar22 + 4), -1 < iVar7)) {
      plVar1 = (long *)plVar22[6];
      if (plVar1 != (long *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      cVar5 = FUN_1007ea210(param_4);
      plVar11 = (long *)0x0;
      if (cVar5 == '\0') {
        plVar11 = (long *)*plVar15;
        plVar19 = plVar15;
        if ((long *)*plVar15 != (long *)0x0) {
          do {
            while (plVar18 = plVar11, iVar7 = FUN_1007ea6f0(plVar18 + 4,param_4), iVar7 < 0) {
              plVar4 = plVar18 + 1;
              plVar18 = plVar19;
              plVar11 = (long *)*plVar4;
              if ((long *)*plVar4 == (long *)0x0) goto LAB_1005e7e7a;
            }
            plVar11 = (long *)*plVar18;
            plVar19 = plVar18;
          } while ((long *)*plVar18 != (long *)0x0);
LAB_1005e7e7a:
          if ((plVar18 != plVar15) && (iVar7 = FUN_1007ea6f0(param_4,plVar18 + 4), -1 < iVar7)) {
            plVar11 = (long *)plVar18[6];
            local_68 = plVar11;
            if (plVar11 != (long *)0x0) {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
            }
            goto LAB_1005e7eb2;
          }
        }
        FUN_1007d6a70(&local_98,param_4);
        QString::toLocal8Bit();
        FUN_1008e3970("","vdisk",0,"Error: can\'t find parent snapshot by uuid \'%s\' to remove",
                      local_90 + *(long *)(local_90 + 0x10));
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_59 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_59) goto LAB_1005e80e8;
          }
          QArrayData::deallocate(local_90,1,8);
        }
LAB_1005e80e8:
        uVar8 = 0x80021011;
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_59 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_59) goto LAB_1005e8d25;
          }
          QArrayData::deallocate(local_98,2,8);
        }
      }
      else {
LAB_1005e7eb2:
        if (param_3 == '\0') {
LAB_1005e8145:
          (**(code **)(*param_1 + 0xc0))(&local_c8,param_1,&local_48);
          for (plVar19 = local_c0; plVar19 != &local_c8; plVar19 = (long *)plVar19[1]) {
            (**(code **)(*param_1 + 0x78))(param_1,plVar19 + 2,0,param_4);
          }
          if (local_b8 != 0) {
            lVar9 = *local_c0;
            *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(local_c8 + 8);
            **(long **)(local_c8 + 8) = lVar9;
            local_b8 = 0;
            while (local_c0 != &local_c8) {
              plVar19 = (long *)local_c0[1];
              operator_delete(local_c0);
              local_c0 = plVar19;
            }
          }
        }
        else {
          cVar5 = FUN_1007ea210(plVar13);
          if (cVar5 == '\0') {
            cVar5 = FUN_1007ea210(plVar13);
            if (cVar5 != '\0') goto LAB_1005e8145;
          }
          else {
            (**(code **)(*param_1 + 0xc0))(&local_b0,param_1,&local_48);
            if (local_a8 != &local_b0) {
              plVar19 = local_a8;
              do {
                uVar8 = (undefined4)((ulong)in_stack_fffffffffffffda8 >> 0x20);
                if ((long *)*plVar15 == (long *)0x0) {
LAB_1005e7f94:
                  in_stack_fffffffffffffda8 = (char *)CONCAT44(uVar8,0x6b1);
                  FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                                "SnapIt != m_Snapshots.end()","VMwareDiskDescriptor.cpp",
                                in_stack_fffffffffffffda8,"RemoveSnapshot");
                  plVar18 = plVar15;
                }
                else {
                  plVar4 = (long *)*plVar15;
                  plVar18 = plVar15;
                  do {
                    while( true ) {
                      plVar24 = plVar4;
                      iVar7 = FUN_1007ea6f0(plVar24 + 4,plVar19 + 2);
                      uVar8 = (undefined4)((ulong)in_stack_fffffffffffffda8 >> 0x20);
                      if (-1 < iVar7) break;
                      plVar4 = (long *)plVar24[1];
                      if ((long *)plVar24[1] == (long *)0x0) goto LAB_1005e7f7b;
                    }
                    plVar18 = plVar24;
                    plVar4 = (long *)*plVar24;
                  } while ((long *)*plVar24 != (long *)0x0);
LAB_1005e7f7b:
                  if (plVar18 == plVar15) goto LAB_1005e7f94;
                  iVar7 = FUN_1007ea6f0(plVar19 + 2,plVar18 + 4);
                  uVar8 = (undefined4)((ulong)in_stack_fffffffffffffda8 >> 0x20);
                  if (iVar7 < 0) goto LAB_1005e7f94;
                }
                FUN_1005d8320(plVar18 + 6,&local_68,param_1 + 0xe);
                plVar19 = (long *)plVar19[1];
              } while (plVar19 != &local_b0);
            }
            if (local_a0 != 0) {
              lVar9 = *local_a8;
              *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(local_b0 + 8);
              **(long **)(local_b0 + 8) = lVar9;
              local_a0 = 0;
              while (local_a8 != &local_b0) {
                plVar19 = (long *)local_a8[1];
                operator_delete(local_a8);
                local_a8 = plVar19;
              }
            }
          }
        }
        lVar9 = 0;
        if (*plVar10 != 0) {
          lVar9 = *(long *)(*plVar10 + 0x10);
        }
        iVar7 = FUN_1007ea6f0(lVar9 + 0x218,&local_48);
        if ((iVar7 == 0) && (cVar5 = FUN_1007ea210(plVar13), cVar5 != '\0')) {
          uVar8 = FUN_1005d8320(plVar10,&local_68,param_1 + 0xe);
        }
        else {
          local_d0 = (int *)PTR_shared_null_100ba2188;
          uVar23 = 0;
          if (*(long *)(plVar1[2] + 0x200) != 0) {
            uVar23 = *(undefined8 *)(*(long *)(plVar1[2] + 0x200) + 0x10);
          }
          local_d8 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
          cVar5 = FUN_1006afe20(uVar23,&local_d8,&local_d0);
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_59 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_59) goto LAB_1005e82e8;
            }
            QArrayData::deallocate(local_d8,2,8);
          }
LAB_1005e82e8:
          if (cVar5 == '\0') {
            QFileInfo::absoluteFilePath();
            QString::toUtf8();
            FUN_1008e3970("","vdisk",0,"Warning: can\'t get EXTENTS block for VMDK \'%s\'",
                          local_150 + *(long *)(local_150 + 0x10));
            if (*(int *)local_150 != -1) {
              if (*(int *)local_150 != 0) {
                LOCK();
                *(int *)local_150 = *(int *)local_150 + -1;
                local_59 = *(int *)local_150 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005e8418;
              }
              QArrayData::deallocate(local_150,1,8);
            }
LAB_1005e8418:
            if (*(int *)local_158 != -1) {
              if (*(int *)local_158 != 0) {
                LOCK();
                *(int *)local_158 = *(int *)local_158 + -1;
                local_59 = *(int *)local_158 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005e898e;
              }
              QArrayData::deallocate(local_158,2,8);
            }
          }
          else {
            local_f8 = local_d0;
            if (*local_d0 != -1) {
              if (*local_d0 == 0) {
                QListData::detach((int)&local_f8);
                iVar7 = local_f8[2];
                if (iVar7 != local_f8[3]) {
                  piVar12 = local_d0 + (long)local_d0[2] * 2 + 4;
                  piVar17 = local_f8 + (long)iVar7 * 2 + 4;
                  lVar9 = (long)local_f8[3] * 8 + (long)iVar7 * -8;
                  do {
                    piVar2 = *(int **)piVar12;
                    *(int **)piVar17 = piVar2;
                    if (1 < *piVar2 + 1U) {
                      LOCK();
                      *piVar2 = *piVar2 + 1;
                      local_59 = *piVar2 != 0;
                      UNLOCK();
                    }
                    piVar17 = piVar17 + 2;
                    piVar12 = piVar12 + 2;
                    lVar9 = lVar9 + -8;
                  } while (lVar9 != 0);
                }
              }
              else {
                LOCK();
                *local_d0 = *local_d0 + 1;
                local_59 = *local_d0 != 0;
                UNLOCK();
              }
            }
            pQVar20 = (QString *)(local_f8 + (long)local_f8[2] * 2 + 4);
            local_e8 = (QString *)(local_f8 + (long)local_f8[3] * 2 + 4);
            local_f0 = pQVar20;
            if (local_f8[2] != local_f8[3]) {
              do {
                local_e0 = 1;
                uVar23 = 0;
                if (*(long *)(plVar1[2] + 0x200) != 0) {
                  uVar23 = *(undefined8 *)(*(long *)(plVar1[2] + 0x200) + 0x10);
                }
                local_f0 = pQVar20;
                local_100 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
                FUN_1006af990(uVar23,&local_100,pQVar20);
                if (*(int *)local_100 != -1) {
                  if (*(int *)local_100 != 0) {
                    LOCK();
                    *(int *)local_100 = *(int *)local_100 + -1;
                    local_59 = *(int *)local_100 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1005e85df;
                  }
                  QArrayData::deallocate(local_100,2,8);
                }
LAB_1005e85df:
                QFileInfo::QFileInfo(local_108,pQVar20);
                local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
                cVar5 = QFileInfo::isRelative();
                if (cVar5 == '\0') {
                  QFileInfo::absoluteFilePath();
                  QString::operator=(&local_110,&local_118);
                  if (*(int *)local_118.field0_0x0 != -1) {
                    if (*(int *)local_118.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
                      local_59 = *(int *)local_118.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1005e8884;
                    }
                    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
                  }
                }
                else {
                  QFileInfo::absolutePath();
                  uVar6 = QDir::separator();
                  local_130 = local_138;
                  if (1 < *(uint *)local_138 + 1) {
                    LOCK();
                    *(uint *)local_138 = *(uint *)local_138 + 1;
                    local_59 = *(uint *)local_138 != 0;
                    UNLOCK();
                  }
                  uVar16 = *(uint *)(local_138 + 4);
                  if ((1 < *(uint *)local_138) ||
                     ((*(uint *)(local_138 + 8) & 0x7fffffff) < uVar16 + 2)) {
                    QString::reallocData((uint)&local_130,SUB41(uVar16 + 2,0));
                    uVar16 = *(uint *)(local_130 + 4);
                  }
                  *(uint *)(local_130 + 4) = uVar16 + 1;
                  *(undefined2 *)(local_130 + (long)(int)uVar16 * 2 + *(long *)(local_130 + 0x10)) =
                       uVar6;
                  *(undefined2 *)
                   (local_130 +
                   (long)(int)*(uint *)(local_130 + 4) * 2 + *(long *)(local_130 + 0x10)) = 0;
                  QFileInfo::fileName();
                  local_128.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_130;
                  if (1 < *(uint *)local_130 + 1) {
                    LOCK();
                    *(uint *)local_130 = *(uint *)local_130 + 1;
                    local_59 = *(uint *)local_130 != 0;
                    UNLOCK();
                  }
                  QString::append(&local_128);
                  QDir::fromNativeSeparators(&local_120);
                  QString::operator=(&local_110,&local_120);
                  if (*(int *)local_120.field0_0x0 != -1) {
                    if (*(int *)local_120.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                      local_59 = *(int *)local_120.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1005e874e;
                    }
                    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
                  }
LAB_1005e874e:
                  if (*(int *)local_128.field0_0x0 != -1) {
                    if (*(int *)local_128.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                      local_59 = *(int *)local_128.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1005e8784;
                    }
                    QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
                  }
LAB_1005e8784:
                  if (*(int *)local_140 != -1) {
                    if (*(int *)local_140 != 0) {
                      LOCK();
                      *(int *)local_140 = *(int *)local_140 + -1;
                      local_59 = *(int *)local_140 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1005e87ba;
                    }
                    QArrayData::deallocate(local_140,2,8);
                  }
LAB_1005e87ba:
                  if (*(int *)local_130 != -1) {
                    if (*(int *)local_130 != 0) {
                      LOCK();
                      *(int *)local_130 = *(int *)local_130 + -1;
                      local_59 = *(int *)local_130 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1005e87f0;
                    }
                    QArrayData::deallocate(local_130,2,8);
                  }
LAB_1005e87f0:
                  if (*(int *)local_138 != -1) {
                    if (*(int *)local_138 != 0) {
                      LOCK();
                      *(int *)local_138 = *(int *)local_138 + -1;
                      local_59 = *(int *)local_138 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_1005e8884;
                    }
                    QArrayData::deallocate(local_138,2,8);
                  }
                }
LAB_1005e8884:
                cVar5 = QFile::remove(&local_110);
                QString::toUtf8();
                pcVar21 = "FAILURE";
                if (cVar5 != '\0') {
                  pcVar21 = "SUCCESS";
                }
                FUN_1008e3970("","vdisk",0,"[VMDK] Info: vmdk was removed #1 \'%s\': %s",
                              local_148 + *(long *)(local_148 + 0x10),pcVar21);
                if (*(int *)local_148 != -1) {
                  if (*(int *)local_148 != 0) {
                    LOCK();
                    *(int *)local_148 = *(int *)local_148 + -1;
                    local_59 = *(int *)local_148 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1005e891b;
                  }
                  QArrayData::deallocate(local_148,1,8);
                }
LAB_1005e891b:
                if (*(int *)local_110.field0_0x0 != -1) {
                  if (*(int *)local_110.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                    local_59 = *(int *)local_110.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_59) goto LAB_1005e8951;
                  }
                  QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
                }
LAB_1005e8951:
                QFileInfo::~QFileInfo(local_108);
                pQVar20 = local_f0 + 1;
                local_f0 = pQVar20;
              } while (pQVar20 != local_e8);
            }
            local_e0 = 1;
            FUN_100013180(&local_f8);
          }
LAB_1005e898e:
          cVar5 = FUN_1007ea210(plVar13);
          if (cVar5 != '\0') {
            plVar13 = plVar22;
            plVar15 = (long *)plVar22[1];
            if ((long *)plVar22[1] == (long *)0x0) {
              do {
                plVar10 = (long *)plVar13[2];
                bVar26 = (long *)*plVar10 != plVar13;
                plVar13 = plVar10;
              } while (bVar26);
            }
            else {
              do {
                plVar10 = plVar15;
                plVar15 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
            }
            if ((long *)param_1[4] == plVar22) {
              param_1[4] = (long)plVar10;
            }
            param_1[6] = param_1[6] + -1;
            FUN_1000e86c0(param_1[5],plVar22);
            plVar13 = (long *)plVar22[6];
            if (plVar13 != (long *)0x0) {
              LOCK();
              plVar15 = plVar13 + 1;
              lVar9 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)(*plVar13 + 0x10))();
              }
            }
            operator_delete(plVar22);
            uVar8 = 0;
            goto LAB_1005e8cf8;
          }
          if (plVar25 == plVar15) {
            in_stack_fffffffffffffda8 =
                 (char *)CONCAT44((int)((ulong)in_stack_fffffffffffffda8 >> 0x20),0x6e8);
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "ParentSnapIt != m_Snapshots.end()","VMwareDiskDescriptor.cpp",
                          in_stack_fffffffffffffda8,"RemoveSnapshot");
          }
          lVar9 = *(long *)(*(long *)(plVar22[6] + 0x10) + 0x200);
          uVar23 = 0;
          if (lVar9 != 0) {
            uVar23 = *(undefined8 *)(lVar9 + 0x10);
          }
          local_160 = (QArrayData *)QString::fromAscii_helper("DDB",3);
          local_168 = (QArrayData *)QString::fromAscii_helper("ddb.parallels_snapshot_uuid",0x1b);
          lVar9 = FUN_1006aff80(uVar23,&local_160,&local_168);
          if (*(int *)local_168 != -1) {
            if (*(int *)local_168 != 0) {
              LOCK();
              *(int *)local_168 = *(int *)local_168 + -1;
              local_59 = *(int *)local_168 != 0;
              UNLOCK();
              if ((bool)local_59) goto LAB_1005e8aa8;
            }
            QArrayData::deallocate(local_168,2,8);
          }
LAB_1005e8aa8:
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_59 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_59) goto LAB_1005e8ade;
            }
            QArrayData::deallocate(local_160,2,8);
          }
LAB_1005e8ade:
          lVar14 = *(long *)(*(long *)(plVar25[6] + 0x10) + 0x200);
          if (lVar9 == 0) {
            uVar23 = 0;
            if (lVar14 != 0) {
              uVar23 = *(undefined8 *)(lVar14 + 0x10);
            }
            local_190 = (QArrayData *)QString::fromAscii_helper("DDB",3);
            local_198 = (QArrayData *)QString::fromAscii_helper("ddb.parallels_snapshot_uuid",0x1b);
            FUN_1006af990(uVar23,&local_190,&local_198);
            if (*(int *)local_198 != -1) {
              if (*(int *)local_198 != 0) {
                LOCK();
                *(int *)local_198 = *(int *)local_198 + -1;
                local_59 = *(int *)local_198 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005e8de8;
              }
              QArrayData::deallocate(local_198,2,8);
            }
LAB_1005e8de8:
            if (*(int *)local_190 != -1) {
              if (*(int *)local_190 != 0) {
                LOCK();
                *(int *)local_190 = *(int *)local_190 + -1;
                local_59 = *(int *)local_190 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005e8e1e;
              }
              QArrayData::deallocate(local_190,2,8);
            }
LAB_1005e8e1e:
            if ((plVar25[6] == 0) || (lVar9 = *(long *)(plVar25[6] + 0x10), lVar9 == 0)) {
              in_stack_fffffffffffffda8 =
                   (char *)CONCAT44((int)((ulong)in_stack_fffffffffffffda8 >> 0x20),0xd4);
              FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","VMDK.isValid()",
                            "VMwareDiskDescriptor.cpp",in_stack_fffffffffffffda8,"IsVMDKEmbedded");
              lVar9 = *(long *)(plVar25[6] + 0x10);
            }
            if (*(int *)(lVar9 + 0x240) == 0x5b) {
              QFileInfo::absoluteFilePath();
              cVar5 = QFile::remove(&local_1c0);
              if (*(int *)local_1c0.field0_0x0 != -1) {
                if (*(int *)local_1c0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
                  local_59 = *(int *)local_1c0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1005e8ee5;
                }
                QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
              }
LAB_1005e8ee5:
              QFileInfo::absoluteFilePath();
              QString::toUtf8();
              pcVar21 = "FAILURE";
              if (cVar5 != '\0') {
                pcVar21 = "SUCCESS";
              }
              FUN_1008e3970("","vdisk",0,"[VMDK] Info: vmdk was removed #2 \'%s\': %s",
                            local_1c8 + *(long *)(local_1c8 + 0x10),pcVar21);
              if (*(int *)local_1c8 != -1) {
                if (*(int *)local_1c8 != 0) {
                  LOCK();
                  *(int *)local_1c8 = *(int *)local_1c8 + -1;
                  local_59 = *(int *)local_1c8 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1005e8f90;
                }
                QArrayData::deallocate(local_1c8,1,8);
              }
LAB_1005e8f90:
              if (*(int *)local_1d0 != -1) {
                if (*(int *)local_1d0 != 0) {
                  LOCK();
                  *(int *)local_1d0 = *(int *)local_1d0 + -1;
                  local_59 = *(int *)local_1d0 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1005e916c;
                }
                QArrayData::deallocate(local_1d0,2,8);
              }
            }
            else {
              QFileInfo::absoluteFilePath();
              QFileInfo::absoluteFilePath();
              cVar5 = QFile::rename(&local_1a0,&local_1a8);
              QString::toUtf8();
              pQVar3 = local_1b0;
              lVar9 = *(long *)(local_1b0 + 0x10);
              QString::toUtf8();
              in_stack_fffffffffffffda8 = "FAILURE";
              if (cVar5 != '\0') {
                in_stack_fffffffffffffda8 = "SUCCESS";
              }
              FUN_1008e3970("","vdisk",0,"[VMDK] Info: vmdk was renamed #4 \'%s\' to \'%s\': %s",
                            pQVar3 + lVar9,local_1b8 + *(long *)(local_1b8 + 0x10),
                            in_stack_fffffffffffffda8);
              if (*(int *)local_1b8 != -1) {
                if (*(int *)local_1b8 != 0) {
                  LOCK();
                  *(int *)local_1b8 = *(int *)local_1b8 + -1;
                  local_59 = *(int *)local_1b8 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1005e90ca;
                }
                QArrayData::deallocate(local_1b8,1,8);
              }
LAB_1005e90ca:
              if (*(int *)local_1b0 != -1) {
                if (*(int *)local_1b0 != 0) {
                  LOCK();
                  *(int *)local_1b0 = *(int *)local_1b0 + -1;
                  local_59 = *(int *)local_1b0 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1005e9100;
                }
                QArrayData::deallocate(local_1b0,1,8);
              }
LAB_1005e9100:
              if (*(int *)local_1a8.field0_0x0 != -1) {
                if (*(int *)local_1a8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
                  local_59 = *(int *)local_1a8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1005e9136;
                }
                QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
              }
LAB_1005e9136:
              if (*(int *)local_1a0.field0_0x0 != -1) {
                if (*(int *)local_1a0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
                  local_59 = *(int *)local_1a0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_59) goto LAB_1005e916c;
                }
                QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
              }
            }
LAB_1005e916c:
            lVar9 = 0;
            if (plVar25[6] != 0) {
              lVar9 = *(long *)(plVar25[6] + 0x10);
            }
            lVar14 = 0;
            if (plVar22[6] != 0) {
              lVar14 = *(long *)(plVar22[6] + 0x10);
            }
            QFileInfo::operator=((QFileInfo *)(lVar9 + 0x208),(QFileInfo *)(lVar14 + 0x208));
            lVar9 = 0;
            if (plVar25[6] != 0) {
              lVar9 = *(long *)(plVar25[6] + 0x10);
            }
            lVar14 = 0;
            if (plVar22[6] != 0) {
              lVar14 = *(long *)(plVar22[6] + 0x10);
            }
            uVar23 = *(undefined8 *)(lVar14 + 0x218);
            *(undefined8 *)(lVar9 + 0x220) = *(undefined8 *)(lVar14 + 0x220);
            *(undefined8 *)(lVar9 + 0x218) = uVar23;
            plVar11 = (long *)*plVar10;
            if (plVar11 == (long *)plVar22[6]) {
              lVar9 = plVar25[6];
              if (lVar9 != 0) {
                LOCK();
                *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
                UNLOCK();
                plVar11 = (long *)*plVar10;
              }
              *plVar10 = lVar9;
              if (plVar11 != (long *)0x0) {
                LOCK();
                plVar10 = plVar11 + 1;
                lVar9 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)(*plVar11 + 0x10))();
                }
              }
            }
            (**(code **)(*param_1 + 0xc0))(&local_1e8,param_1,plVar13);
            local_1f0 = (long *)plVar25[6];
            if (local_1f0 != (long *)0x0) {
              LOCK();
              *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
              UNLOCK();
            }
            if (local_1e0 != &local_1e8) {
              plVar10 = local_1e0;
              do {
                uVar8 = (undefined4)((ulong)in_stack_fffffffffffffda8 >> 0x20);
                if ((long *)*plVar15 == (long *)0x0) {
LAB_1005e9311:
                  in_stack_fffffffffffffda8 = (char *)CONCAT44(uVar8,0x735);
                  FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                                "SnapIt != m_Snapshots.end()","VMwareDiskDescriptor.cpp",
                                in_stack_fffffffffffffda8,"RemoveSnapshot");
                  local_210 = plVar15;
                }
                else {
                  plVar11 = (long *)*plVar15;
                  local_210 = plVar15;
                  do {
                    while( true ) {
                      plVar19 = plVar11;
                      iVar7 = FUN_1007ea6f0(plVar19 + 4,plVar10 + 2);
                      uVar8 = (undefined4)((ulong)in_stack_fffffffffffffda8 >> 0x20);
                      if (-1 < iVar7) break;
                      plVar11 = (long *)plVar19[1];
                      if ((long *)plVar19[1] == (long *)0x0) goto LAB_1005e92f8;
                    }
                    plVar11 = (long *)*plVar19;
                    local_210 = plVar19;
                  } while ((long *)*plVar19 != (long *)0x0);
LAB_1005e92f8:
                  if (local_210 == plVar15) goto LAB_1005e9311;
                  iVar7 = FUN_1007ea6f0(plVar10 + 2,local_210 + 4);
                  uVar8 = (undefined4)((ulong)in_stack_fffffffffffffda8 >> 0x20);
                  if (iVar7 < 0) goto LAB_1005e9311;
                }
                FUN_1005d8320(local_210 + 6,&local_1f0,param_1 + 0xe);
                plVar10 = (long *)plVar10[1];
              } while (plVar10 != &local_1e8);
            }
            lVar9 = plVar25[6];
            if (lVar9 != 0) {
              LOCK();
              *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
              UNLOCK();
            }
            plVar15 = (long *)plVar22[6];
            plVar22[6] = lVar9;
            if (plVar15 != (long *)0x0) {
              LOCK();
              plVar10 = plVar15 + 1;
              lVar9 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)(*plVar15 + 0x10))();
              }
            }
            plVar15 = plVar25;
            plVar10 = (long *)plVar25[1];
            if ((long *)plVar25[1] == (long *)0x0) {
              do {
                plVar11 = (long *)plVar15[2];
                bVar26 = (long *)*plVar11 != plVar15;
                plVar15 = plVar11;
              } while (bVar26);
            }
            else {
              do {
                plVar11 = plVar10;
                plVar10 = (long *)*plVar11;
              } while ((long *)*plVar11 != (long *)0x0);
            }
            if ((long *)param_1[4] == plVar25) {
              param_1[4] = (long)plVar11;
            }
            param_1[6] = param_1[6] + -1;
            FUN_1000e86c0(param_1[5],plVar25);
            plVar15 = (long *)plVar25[6];
            if (plVar15 != (long *)0x0) {
              LOCK();
              plVar10 = plVar15 + 1;
              lVar9 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)(*plVar15 + 0x10))();
              }
            }
            operator_delete(plVar25);
            FUN_1007d6870(&local_58);
            param_1[0xb] = local_50;
            *plVar13 = local_58;
            if (local_1f0 != (long *)0x0) {
              LOCK();
              plVar13 = local_1f0 + 1;
              lVar9 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)(*local_1f0 + 0x10))();
              }
            }
            uVar8 = 0;
            if (local_1d8 != 0) {
              lVar9 = *local_1e0;
              *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(local_1e8 + 8);
              **(long **)(local_1e8 + 8) = lVar9;
              local_1d8 = 0;
              while (local_1e0 != &local_1e8) {
                plVar13 = (long *)local_1e0[1];
                operator_delete(local_1e0);
                local_1e0 = plVar13;
              }
            }
          }
          else {
            uVar23 = 0;
            if (lVar14 != 0) {
              uVar23 = *(undefined8 *)(lVar14 + 0x10);
            }
            local_170 = (QArrayData *)QString::fromAscii_helper("DDB",3);
            local_178 = (QArrayData *)QString::fromAscii_helper("ddb.parallels_snapshot_uuid",0x1b);
            cVar5 = FUN_1006ad450(uVar23,&local_170,&local_178,lVar9 + 0x20);
            if (*(int *)local_178 != -1) {
              if (*(int *)local_178 != 0) {
                LOCK();
                *(int *)local_178 = *(int *)local_178 + -1;
                local_59 = *(int *)local_178 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005e8b87;
              }
              QArrayData::deallocate(local_178,2,8);
            }
LAB_1005e8b87:
            if (*(int *)local_170 != -1) {
              if (*(int *)local_170 != 0) {
                LOCK();
                *(int *)local_170 = *(int *)local_170 + -1;
                local_59 = *(int *)local_170 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005e8bbd;
              }
              QArrayData::deallocate(local_170,2,8);
            }
LAB_1005e8bbd:
            if (cVar5 != '\0') goto LAB_1005e8e1e;
            QFileInfo::absoluteFilePath();
            QString::toUtf8();
            FUN_1008e3970("","vdisk",0,
                          "Error: can\'t insert DDB key \'ddb.parallels_snapshot_uuid\' for VMDK \'%s\'"
                          ,local_180 + *(long *)(local_180 + 0x10));
            if (*(int *)local_180 != -1) {
              if (*(int *)local_180 != 0) {
                LOCK();
                *(int *)local_180 = *(int *)local_180 + -1;
                local_59 = *(int *)local_180 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005e8c59;
              }
              QArrayData::deallocate(local_180,1,8);
            }
LAB_1005e8c59:
            uVar8 = 0x80021025;
            if (*(int *)local_188 != -1) {
              if (*(int *)local_188 != 0) {
                LOCK();
                *(int *)local_188 = *(int *)local_188 + -1;
                local_59 = *(int *)local_188 != 0;
                UNLOCK();
                if ((bool)local_59) goto LAB_1005e8cf8;
              }
              QArrayData::deallocate(local_188,2,8);
            }
          }
LAB_1005e8cf8:
          FUN_100013180(&local_d0);
          plVar11 = local_68;
        }
        if (plVar11 != (long *)0x0) {
          LOCK();
          plVar13 = plVar11 + 1;
          lVar9 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
      }
LAB_1005e8d25:
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar13 = plVar1 + 1;
        lVar9 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*plVar1 + 0x10))();
        }
      }
      goto LAB_1005e7ab0;
    }
  }
  FUN_1007d6a70(&local_88,&local_48);
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"Error: can\'t find snapshot by uuid \'%s\' to remove",
                local_80 + *(long *)(local_80 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_59 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1005e7e2b;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1005e7e2b:
  uVar8 = 0x80021011;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_59 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1005e7ab0;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005e7ab0:
  QMutex::unlock();
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

