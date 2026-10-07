
ulong FUN_1005ec9e0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  QString *pQVar2;
  long lVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  void *pvVar16;
  long *plVar17;
  undefined8 *puVar18;
  int *piVar19;
  uint *puVar20;
  int *piVar21;
  long *plVar22;
  undefined8 uVar23;
  void *pvVar24;
  ulong uVar25;
  QArrayData *pQVar26;
  long *plVar27;
  undefined8 local_270;
  long *local_248;
  long *local_228;
  QArrayData *local_218;
  QArrayData *local_210;
  undefined *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QFileInfo local_1d8 [8];
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  uint *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  undefined *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  undefined *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QString local_130;
  QString local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  int *local_108;
  long *local_100;
  long *local_f8;
  undefined4 local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  int *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QFileInfo local_88 [8];
  QString local_80;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar25 = 0x80021020;
  local_38 = lVar3;
  if (((*param_2 == 0) || (lVar12 = *(long *)(*param_2 + 0x10), lVar12 == 0)) ||
     (lVar12 = ___dynamic_cast(lVar12,&PTR_vtable_10111e100,&PTR_vtable_10111e2d0,0), lVar12 == 0))
  goto LAB_1005ecaaf;
  QMutex::lock();
  if (((*(long *)(param_1 + 0x68) == 0) ||
      (lVar15 = *(long *)(*(long *)(param_1 + 0x68) + 0x10), lVar15 == 0)) ||
     (iVar9 = FUN_1007ea6f0(param_3 + 0x18,lVar15 + 0x218), iVar9 != 0)) {
    uVar25 = 0x80021011;
    FUN_1008e3970("","vdisk",0,
                  "Error: current VMDK is unavailable or new image uuid is not equal to current VMDK uuid"
                 );
  }
  else {
    pQVar2 = (QString *)(param_3 + 8);
    QFileInfo::QFileInfo(local_88,pQVar2);
    cVar7 = QFileInfo::isRelative();
    QFileInfo::~QFileInfo(local_88);
    if (cVar7 == '\0') {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error: new image name \'%s\' is absolute",
                    local_90 + *(long *)(local_90 + 0x10));
      uVar25 = 0x80021011;
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_71 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_71) goto LAB_1005eca9f;
        }
        QArrayData::deallocate(local_90,1,8);
      }
    }
    else {
      plVar13 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar22 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        *plVar13 = (long)&PTR_FUN_10111e338;
        plVar13[1] = 0;
        plVar13[2] = (long)PTR_shared_null_100ba20d0;
        plVar22 = plVar13;
      }
      plVar13 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (plVar13 == (long *)0x0) {
        bVar6 = true;
        plVar13 = (long *)0x0;
        if (plVar22 == (long *)0x0) {
          local_228 = (long *)0x0;
        }
        else {
          plVar13 = (long *)0x0;
          (**(code **)(*plVar22 + 8))();
          local_228 = (long *)0x0;
          bVar6 = true;
        }
LAB_1005ecef4:
        uVar25 = 0x80000002;
        FUN_1008e3970("","vdisk",0,"Error: memory problems");
LAB_1005ecf1f:
        if (bVar6) goto LAB_1005eca9f;
      }
      else {
        *(undefined4 *)(plVar13 + 1) = 1;
        plVar13[2] = (long)plVar22;
        *plVar13 = (long)&PTR_FUN_10111e208;
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar13 + 1;
        lVar15 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)(*plVar13 + 0x10))();
        }
        local_228 = (long *)0x0;
        if (plVar13 == (long *)0x0) {
          bVar6 = true;
          goto LAB_1005ecef4;
        }
        local_228 = plVar13;
        if (plVar13[2] == 0) {
          bVar6 = false;
          goto LAB_1005ecef4;
        }
        if ((*(int *)(lVar12 + 8) == 0) || (*(long *)(param_1 + 0x48) != 0)) {
          plVar1 = (long *)(param_1 + 0x68);
          lVar15 = *(long *)(*(long *)(*plVar1 + 0x10) + 0x200);
          uVar23 = 0;
          if (lVar15 != 0) {
            uVar23 = *(undefined8 *)(lVar15 + 0x10);
          }
          local_98 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
          uVar14 = FUN_1006b0130(uVar23,&local_98,*(undefined4 *)(lVar12 + 8));
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_71 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_71) goto LAB_1005ecc73;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1005ecc73:
          bVar6 = false;
          if (uVar14 == 0) {
            FUN_1008e3970("","vdisk",0,"Error: can\'t find extent by idx \'%d\' for current VMDK",
                          *(undefined4 *)(lVar12 + 8));
            uVar25 = 0x80021025;
          }
          else {
            local_a0 = (QArrayData *)PTR_shared_null_100ba20d0;
            if (*(int *)(lVar12 + 8) == 0) {
              pvVar16 = operator_new(0x248,(nothrow_t *)PTR_nothrow_100ba21c8);
              pvVar24 = (void *)0x0;
              if (pvVar16 != (void *)0x0) {
                FUN_1005d7f50(pvVar16);
                pvVar24 = pvVar16;
              }
              plVar17 = (long *)FUN_1005f2b80(pvVar24);
              local_248 = plVar17;
              if (plVar17 != (long *)0x0) {
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
                LOCK();
                plVar27 = plVar17 + 1;
                lVar15 = *plVar27;
                *(int *)plVar27 = (int)*plVar27 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
                  (**(code **)(*plVar17 + 0x10))(plVar17);
                }
                if (plVar17[2] != 0) {
                  cVar7 = FUN_1005d8170(plVar1);
                  if (cVar7 == '\0') {
                    QFileInfo::absolutePath();
                    uVar8 = QDir::separator();
                    local_138 = local_140;
                    if (1 < *(uint *)local_140 + 1) {
                      LOCK();
                      *(uint *)local_140 = *(uint *)local_140 + 1;
                      local_71 = *(uint *)local_140 != 0;
                      UNLOCK();
                    }
                    uVar10 = *(uint *)(local_140 + 4);
                    if ((1 < *(uint *)local_140) ||
                       ((*(uint *)(local_140 + 8) & 0x7fffffff) < uVar10 + 2)) {
                      QString::reallocData((uint)&local_138,SUB41(uVar10 + 2,0));
                      uVar10 = *(uint *)(local_138 + 4);
                    }
                    *(uint *)(local_138 + 4) = uVar10 + 1;
                    *(undefined2 *)(local_138 + (long)(int)uVar10 * 2 + *(long *)(local_138 + 0x10))
                         = uVar8;
                    *(undefined2 *)
                     (local_138 +
                     (long)(int)*(uint *)(local_138 + 4) * 2 + *(long *)(local_138 + 0x10)) = 0;
                    QFileInfo::fileName();
                    uVar11 = FUN_1005db030(&local_150,0);
                    FUN_1005e7700(&local_148,param_1 + 0x78,uVar11);
                    local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_138;
                    if (1 < *(uint *)local_138 + 1) {
                      LOCK();
                      *(uint *)local_138 = *(uint *)local_138 + 1;
                      local_71 = *(uint *)local_138 != 0;
                      UNLOCK();
                    }
                    QString::append(&local_130);
                    QDir::fromNativeSeparators(&local_128);
                    if (*(int *)local_130.field0_0x0 != -1) {
                      if (*(int *)local_130.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
                        local_71 = *(int *)local_130.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005eda99;
                      }
                      QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
                    }
LAB_1005eda99:
                    if (*(int *)local_148 != -1) {
                      if (*(int *)local_148 != 0) {
                        LOCK();
                        *(int *)local_148 = *(int *)local_148 + -1;
                        local_71 = *(int *)local_148 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005edacf;
                      }
                      QArrayData::deallocate(local_148,2,8);
                    }
LAB_1005edacf:
                    if (*(int *)local_150 != -1) {
                      if (*(int *)local_150 != 0) {
                        LOCK();
                        *(int *)local_150 = *(int *)local_150 + -1;
                        local_71 = *(int *)local_150 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005edb05;
                      }
                      QArrayData::deallocate(local_150,2,8);
                    }
LAB_1005edb05:
                    if (*(int *)local_138 != -1) {
                      if (*(int *)local_138 != 0) {
                        LOCK();
                        *(int *)local_138 = *(int *)local_138 + -1;
                        local_71 = *(int *)local_138 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005edb3b;
                      }
                      QArrayData::deallocate(local_138,2,8);
                    }
LAB_1005edb3b:
                    if (*(int *)local_140 != -1) {
                      if (*(int *)local_140 != 0) {
                        LOCK();
                        *(int *)local_140 = *(int *)local_140 + -1;
                        local_71 = *(int *)local_140 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005edb87;
                      }
                      QArrayData::deallocate(local_140,2,8);
                    }
LAB_1005edb87:
                    if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x10), lVar15 == 0)) {
                      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                                    "VMDK.isValid()","VMwareDiskDescriptor.cpp",0xe2,"ChildVMDKType"
                                   );
                      lVar15 = *(long *)(*plVar1 + 0x10);
                    }
                    uVar10 = *(int *)(lVar15 + 0x240) - 0x5a;
                    if (uVar10 < 4) {
                      uVar11 = *(undefined4 *)(&DAT_100b477c0 + (long)(int)uVar10 * 4);
                    }
                    else {
                      uVar11 = 0;
                      FUN_1008e3970("","vdisk",0,"Error: unknown VMDK type %u");
                    }
                    uVar10 = FUN_1005dc7b0(&local_128,uVar11,3,plVar17[2],&local_a0);
                    uVar25 = (ulong)uVar10;
                    iVar9 = 0;
                    if ((int)uVar10 < 0) {
                      QString::toUtf8();
                      FUN_1008e3970("","vdisk",0,"Error: can\'t create VMDK \'%s\'",
                                    local_158 + *(long *)(local_158 + 0x10));
                      if (*(int *)local_158 == -1) {
                        iVar9 = 1;
                      }
                      else {
                        if (*(int *)local_158 != 0) {
                          LOCK();
                          *(int *)local_158 = *(int *)local_158 + -1;
                          local_71 = *(int *)local_158 != 0;
                          UNLOCK();
                          if ((bool)local_71) {
                            iVar9 = 1;
                            goto LAB_1005ee249;
                          }
                        }
                        QArrayData::deallocate(local_158,1,8);
                        iVar9 = 1;
                      }
                    }
LAB_1005ee249:
                    if (*(int *)local_128.field0_0x0 != -1) {
                      if (*(int *)local_128.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                        local_71 = *(int *)local_128.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005ee2aa;
                      }
                      QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
                    }
                  }
                  else {
                    QFileInfo::absolutePath();
                    uVar8 = QDir::separator();
                    local_b8 = local_c0;
                    if (1 < *(uint *)local_c0 + 1) {
                      LOCK();
                      *(uint *)local_c0 = *(uint *)local_c0 + 1;
                      local_71 = *(uint *)local_c0 != 0;
                      UNLOCK();
                    }
                    uVar10 = *(uint *)(local_c0 + 4);
                    if ((1 < *(uint *)local_c0) ||
                       ((*(uint *)(local_c0 + 8) & 0x7fffffff) < uVar10 + 2)) {
                      QString::reallocData((uint)&local_b8,SUB41(uVar10 + 2,0));
                      uVar10 = *(uint *)(local_b8 + 4);
                    }
                    *(uint *)(local_b8 + 4) = uVar10 + 1;
                    *(undefined2 *)(local_b8 + (long)(int)uVar10 * 2 + *(long *)(local_b8 + 0x10)) =
                         uVar8;
                    *(undefined2 *)
                     (local_b8 + (long)(int)*(uint *)(local_b8 + 4) * 2 + *(long *)(local_b8 + 0x10)
                     ) = 0;
                    if (1 < *(uint *)local_b8 + 1) {
                      LOCK();
                      *(uint *)local_b8 = *(uint *)local_b8 + 1;
                      local_71 = *(uint *)local_b8 != 0;
                      UNLOCK();
                    }
                    local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b8;
                    QString::append(&local_b0);
                    QDir::fromNativeSeparators(&local_a8);
                    if (*(int *)local_b0.field0_0x0 != -1) {
                      if (*(int *)local_b0.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
                        local_71 = *(int *)local_b0.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005ed1af;
                      }
                      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
                    }
LAB_1005ed1af:
                    if (*(int *)local_b8 != -1) {
                      if (*(int *)local_b8 != 0) {
                        LOCK();
                        *(int *)local_b8 = *(int *)local_b8 + -1;
                        local_71 = *(int *)local_b8 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005ed1e5;
                      }
                      QArrayData::deallocate(local_b8,2,8);
                    }
LAB_1005ed1e5:
                    if (*(int *)local_c0 != -1) {
                      if (*(int *)local_c0 != 0) {
                        LOCK();
                        *(int *)local_c0 = *(int *)local_c0 + -1;
                        local_71 = *(int *)local_c0 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005ed231;
                      }
                      QArrayData::deallocate(local_c0,2,8);
                    }
LAB_1005ed231:
                    local_c8 = (QArrayData *)PTR_shared_null_100ba20d0;
                    uVar10 = FUN_1005db1c0(&local_a8,3,plVar17[2],&local_c8);
                    uVar25 = (ulong)uVar10;
                    if ((int)uVar10 < 0) {
                      QString::toUtf8();
                      FUN_1008e3970("","vdisk",0,"Error: can\'t open VMDK \'%s\'",
                                    local_d0 + *(long *)(local_d0 + 0x10));
                      iVar9 = 1;
                      if (*(int *)local_d0 != -1) {
                        if (*(int *)local_d0 != 0) {
                          LOCK();
                          *(int *)local_d0 = *(int *)local_d0 + -1;
                          local_71 = *(int *)local_d0 != 0;
                          UNLOCK();
                          if ((bool)local_71) goto LAB_1005ee1a2;
                        }
                        QArrayData::deallocate(local_d0,1,8);
                      }
                    }
                    else {
                      local_d8 = (int *)PTR_shared_null_100ba2188;
                      uVar23 = 0;
                      if (*(long *)(plVar17[2] + 0x200) != 0) {
                        uVar23 = *(undefined8 *)(*(long *)(plVar17[2] + 0x200) + 0x10);
                      }
                      local_e0 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                      cVar7 = FUN_1006afe20(uVar23,&local_e0,&local_d8);
                      if (*(int *)local_e0 != -1) {
                        if (*(int *)local_e0 != 0) {
                          LOCK();
                          *(int *)local_e0 = *(int *)local_e0 + -1;
                          local_71 = *(int *)local_e0 != 0;
                          UNLOCK();
                          if ((bool)local_71) goto LAB_1005ed301;
                        }
                        QArrayData::deallocate(local_e0,2,8);
                      }
LAB_1005ed301:
                      if (cVar7 == '\0') {
                        QString::toUtf8();
                        FUN_1008e3970("","vdisk",0,
                                      "Error: can\'t open get all DDB keys of VMDK \'%s\'",
                                      local_e8 + *(long *)(local_e8 + 0x10));
                        iVar9 = 1;
                        if (*(int *)local_e8 != -1) {
                          if (*(int *)local_e8 != 0) {
                            LOCK();
                            *(int *)local_e8 = *(int *)local_e8 + -1;
                            local_71 = *(int *)local_e8 != 0;
                            UNLOCK();
                            if ((bool)local_71) goto LAB_1005ee190;
                          }
                          QArrayData::deallocate(local_e8,1,8);
                        }
                      }
                      else {
                        local_108 = local_d8;
                        if (*local_d8 != -1) {
                          if (*local_d8 == 0) {
                            QListData::detach((int)&local_108);
                            iVar9 = local_108[2];
                            if (iVar9 != local_108[3]) {
                              piVar19 = local_d8 + (long)local_d8[2] * 2 + 4;
                              piVar21 = local_108 + (long)iVar9 * 2 + 4;
                              lVar15 = (long)local_108[3] * 8 + (long)iVar9 * -8;
                              do {
                                piVar4 = *(int **)piVar19;
                                *(int **)piVar21 = piVar4;
                                if (1 < *piVar4 + 1U) {
                                  LOCK();
                                  *piVar4 = *piVar4 + 1;
                                  local_71 = *piVar4 != 0;
                                  UNLOCK();
                                }
                                piVar21 = piVar21 + 2;
                                piVar19 = piVar19 + 2;
                                lVar15 = lVar15 + -8;
                              } while (lVar15 != 0);
                            }
                          }
                          else {
                            LOCK();
                            *local_d8 = *local_d8 + 1;
                            local_71 = *local_d8 != 0;
                            UNLOCK();
                          }
                        }
                        plVar27 = (long *)(local_108 + (long)local_108[2] * 2 + 4);
                        local_f8 = (long *)(local_108 + (long)local_108[3] * 2 + 4);
                        local_f0 = 1;
                        local_248._0_4_ = 0x12;
                        local_100 = plVar27;
                        if (local_108[2] != local_108[3]) {
                          do {
                            local_f0 = 1;
                            lVar15 = *plVar27;
                            local_100 = plVar27;
                            iVar9 = QString::compare_helper
                                              (*(long *)(lVar15 + 0x10) + lVar15,
                                               *(undefined4 *)(lVar15 + 4),"ddb.longContentID",
                                               0xffffffff,1);
                            if (iVar9 != 0) {
                              uVar23 = 0;
                              if (*(long *)(plVar17[2] + 0x200) != 0) {
                                uVar23 = *(undefined8 *)(*(long *)(plVar17[2] + 0x200) + 0x10);
                              }
                              local_110 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                              cVar7 = FUN_1006af990(uVar23,&local_110,plVar27);
                              if (*(int *)local_110 != -1) {
                                if (*(int *)local_110 != 0) {
                                  LOCK();
                                  *(int *)local_110 = *(int *)local_110 + -1;
                                  local_71 = *(int *)local_110 != 0;
                                  UNLOCK();
                                  if ((bool)local_71) goto LAB_1005ee069;
                                }
                                QArrayData::deallocate(local_110,2,8);
                              }
LAB_1005ee069:
                              if (cVar7 == '\0') {
                                QString::toUtf8();
                                pQVar26 = local_118;
                                lVar15 = *(long *)(local_118 + 0x10);
                                QString::toUtf8();
                                FUN_1008e3970("","vdisk",0,
                                              "Error: can\'t remove DDB key \'%s\' from VMDK \'%s\'"
                                              ,pQVar26 + lVar15,
                                              local_120 + *(long *)(local_120 + 0x10));
                                if (*(int *)local_120 != -1) {
                                  if (*(int *)local_120 != 0) {
                                    LOCK();
                                    *(int *)local_120 = *(int *)local_120 + -1;
                                    local_71 = *(int *)local_120 != 0;
                                    UNLOCK();
                                    if ((bool)local_71) goto LAB_1005ee130;
                                  }
                                  QArrayData::deallocate(local_120,1,8);
                                }
LAB_1005ee130:
                                local_248._0_4_ = 1;
                                if (*(int *)local_118 == -1) break;
                                if (*(int *)local_118 != 0) {
                                  LOCK();
                                  *(int *)local_118 = *(int *)local_118 + -1;
                                  local_71 = *(int *)local_118 != 0;
                                  UNLOCK();
                                  if ((bool)local_71) break;
                                }
                                QArrayData::deallocate(local_118,1,8);
                                break;
                              }
                            }
                            plVar27 = local_100 + 1;
                            local_f0 = 1;
                            local_100 = plVar27;
                          } while (plVar27 != local_f8);
                        }
                        FUN_100013180(&local_108);
                        iVar9 = 0;
                        if ((int)local_248 != 0x12) {
                          iVar9 = (int)local_248;
                        }
                      }
LAB_1005ee190:
                      uVar25 = 0x80021025;
                      FUN_100013180(&local_d8);
                    }
LAB_1005ee1a2:
                    if (*(int *)local_c8 != -1) {
                      if (*(int *)local_c8 != 0) {
                        LOCK();
                        *(int *)local_c8 = *(int *)local_c8 + -1;
                        local_71 = *(int *)local_c8 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005ee1d8;
                      }
                      QArrayData::deallocate(local_c8,2,8);
                    }
LAB_1005ee1d8:
                    if (*(int *)local_a8.field0_0x0 != -1) {
                      if (*(int *)local_a8.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                        local_71 = *(int *)local_a8.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005ee2aa;
                      }
                      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
                    }
                  }
LAB_1005ee2aa:
                  if (iVar9 == 0) {
                    local_270 = 0;
                    if (*(long *)(plVar17[2] + 0x200) != 0) {
                      local_270 = *(undefined8 *)(*(long *)(plVar17[2] + 0x200) + 0x10);
                    }
                    local_160 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
                    local_168 = (QArrayData *)QString::fromAscii_helper("parentCID",9);
                    local_170 = PTR_shared_null_100ba2188;
                    local_178 = (QArrayData *)PTR_shared_null_100ba20d0;
                    uVar23 = QString::sprintf((char *)&local_178,"%08x",
                                              (ulong)*(uint *)(*(long *)(*plVar1 + 0x10) + 0x210));
                    FUN_10000c490(&local_170,uVar23);
                    cVar7 = FUN_1006ad450(local_270,&local_160,&local_168);
                    if (*(int *)local_178 != -1) {
                      if (*(int *)local_178 != 0) {
                        LOCK();
                        *(int *)local_178 = *(int *)local_178 + -1;
                        local_71 = *(int *)local_178 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005ee3d2;
                      }
                      QArrayData::deallocate(local_178,2,8);
                    }
LAB_1005ee3d2:
                    FUN_100013180(&local_170);
                    if (*(int *)local_168 != -1) {
                      if (*(int *)local_168 != 0) {
                        LOCK();
                        *(int *)local_168 = *(int *)local_168 + -1;
                        local_71 = *(int *)local_168 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005ee414;
                      }
                      QArrayData::deallocate(local_168,2,8);
                    }
LAB_1005ee414:
                    if (*(int *)local_160 != -1) {
                      if (*(int *)local_160 != 0) {
                        LOCK();
                        *(int *)local_160 = *(int *)local_160 + -1;
                        local_71 = *(int *)local_160 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005ee454;
                      }
                      QArrayData::deallocate(local_160,2,8);
                    }
LAB_1005ee454:
                    if (cVar7 == '\0') {
                      QFileInfo::absoluteFilePath();
                      QString::toUtf8();
                      FUN_1008e3970("","vdisk",0,"Error: can\'t set parentCID for VMDK \'%s\'",
                                    local_180 + *(long *)(local_180 + 0x10));
                      if (*(int *)local_180 != -1) {
                        if (*(int *)local_180 != 0) {
                          LOCK();
                          *(int *)local_180 = *(int *)local_180 + -1;
                          local_71 = *(int *)local_180 != 0;
                          UNLOCK();
                          if ((bool)local_71) goto LAB_1005ee767;
                        }
                        QArrayData::deallocate(local_180,1,8);
                      }
LAB_1005ee767:
                      uVar25 = 0x80021025;
                      if (*(int *)local_188 != -1) {
                        if (*(int *)local_188 != 0) {
                          LOCK();
                          *(int *)local_188 = *(int *)local_188 + -1;
                          local_71 = *(int *)local_188 != 0;
                          UNLOCK();
                          if ((bool)local_71) goto LAB_1005ee7f6;
                        }
                        QArrayData::deallocate(local_188,2,8);
                      }
                    }
                    else {
                      local_270 = 0;
                      if (*(long *)(plVar17[2] + 0x200) != 0) {
                        local_270 = *(undefined8 *)(*(long *)(plVar17[2] + 0x200) + 0x10);
                      }
                      local_190 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
                      local_198 = (QArrayData *)QString::fromAscii_helper("parentFileNameHint",0x12)
                      ;
                      local_1a0 = PTR_shared_null_100ba2188;
                      QFileInfo::fileName();
                      FUN_10000c490(&local_1a0,&local_1a8);
                      cVar7 = FUN_1006ad450(local_270,&local_190,&local_198,&local_1a0);
                      if (*(int *)local_1a8 != -1) {
                        if (*(int *)local_1a8 != 0) {
                          LOCK();
                          *(int *)local_1a8 = *(int *)local_1a8 + -1;
                          local_71 = *(int *)local_1a8 != 0;
                          UNLOCK();
                          if ((bool)local_71) goto LAB_1005ee572;
                        }
                        QArrayData::deallocate(local_1a8,2,8);
                      }
LAB_1005ee572:
                      FUN_100013180(&local_1a0);
                      if (*(int *)local_198 != -1) {
                        if (*(int *)local_198 != 0) {
                          LOCK();
                          *(int *)local_198 = *(int *)local_198 + -1;
                          local_71 = *(int *)local_198 != 0;
                          UNLOCK();
                          if ((bool)local_71) goto LAB_1005ee5b4;
                        }
                        QArrayData::deallocate(local_198,2,8);
                      }
LAB_1005ee5b4:
                      if (*(int *)local_190 != -1) {
                        if (*(int *)local_190 != 0) {
                          LOCK();
                          *(int *)local_190 = *(int *)local_190 + -1;
                          local_71 = *(int *)local_190 != 0;
                          UNLOCK();
                          if ((bool)local_71) goto LAB_1005ee607;
                        }
                        QArrayData::deallocate(local_190,2,8);
                      }
LAB_1005ee607:
                      if (cVar7 != '\0') goto LAB_1005ecd12;
                      QFileInfo::absoluteFilePath();
                      QString::toUtf8();
                      FUN_1008e3970("","vdisk",0,
                                    "Error: can\'t set parentFileNameHint for VMDK \'%s\'",
                                    local_1b0 + *(long *)(local_1b0 + 0x10));
                      if (*(int *)local_1b0 != -1) {
                        if (*(int *)local_1b0 != 0) {
                          LOCK();
                          *(int *)local_1b0 = *(int *)local_1b0 + -1;
                          local_71 = *(int *)local_1b0 != 0;
                          UNLOCK();
                          if ((bool)local_71) goto LAB_1005ee6ae;
                        }
                        QArrayData::deallocate(local_1b0,1,8);
                      }
LAB_1005ee6ae:
                      uVar25 = 0x80021025;
                      if (*(int *)local_1b8 != -1) {
                        if (*(int *)local_1b8 != 0) {
                          LOCK();
                          *(int *)local_1b8 = *(int *)local_1b8 + -1;
                          local_71 = *(int *)local_1b8 != 0;
                          UNLOCK();
                          if ((bool)local_71) goto LAB_1005ee7f6;
                        }
                        QArrayData::deallocate(local_1b8,2,8);
                      }
                    }
                  }
                  goto LAB_1005ee7f6;
                }
              }
              uVar25 = 0x80000002;
              FUN_1008e3970("","vdisk",0,"Error: memory problems!");
            }
            else {
              if (*(long *)(param_1 + 0x48) != 1) {
                FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                              "m_SnapshotsNew.size() == 1","VMwareDiskDescriptor.cpp",0x970,
                              "CreateImage");
              }
              plVar17 = *(long **)(*(long *)(param_1 + 0x38) + 0x30);
              uVar25 = uVar14;
              if (plVar17 != (long *)0x0) {
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
              }
LAB_1005ecd12:
              if ((plVar17 == (long *)0x0) || (lVar15 = plVar17[2], lVar15 == 0)) {
                FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","VMDK.isValid()",
                              "VMwareDiskDescriptor.cpp",0xd4,"IsVMDKEmbedded");
                lVar15 = plVar17[2];
              }
              local_248 = plVar17;
              if (*(int *)(lVar15 + 0x240) != 0x5b) {
                local_1c0 = *(uint **)(uVar14 + 0x20);
                if (*local_1c0 != 0xffffffff) {
                  if (*local_1c0 == 0) {
                    QListData::detach((int)&local_1c0);
                    uVar10 = local_1c0[2];
                    if (uVar10 != local_1c0[3]) {
                      puVar18 = (undefined8 *)
                                (*(long *)(uVar14 + 0x20) + 0x10 +
                                (long)*(int *)(*(long *)(uVar14 + 0x20) + 8) * 8);
                      puVar20 = local_1c0 + (long)(int)uVar10 * 2 + 4;
                      lVar15 = (long)(int)local_1c0[3] * 8 + (long)(int)uVar10 * -8;
                      do {
                        piVar19 = (int *)*puVar18;
                        *(int **)puVar20 = piVar19;
                        if (1 < *piVar19 + 1U) {
                          LOCK();
                          *piVar19 = *piVar19 + 1;
                          local_71 = *piVar19 != 0;
                          UNLOCK();
                        }
                        puVar20 = puVar20 + 2;
                        puVar18 = puVar18 + 1;
                        lVar15 = lVar15 + -8;
                      } while (lVar15 != 0);
                    }
                  }
                  else {
                    LOCK();
                    *local_1c0 = *local_1c0 + 1;
                    local_71 = *local_1c0 != 0;
                    UNLOCK();
                  }
                }
                if (1 < *local_1c0) {
                  FUN_100022c80(&local_1c0,local_1c0[1]);
                }
                puVar20 = local_1c0;
                uVar10 = local_1c0[2];
                QString::fromUtf8_helper((char *)&local_80,0xae54ab);
                QString::operator=((QString *)(puVar20 + (long)(int)uVar10 * 2 + 8),&local_80);
                if (*(int *)local_80.field0_0x0 != -1) {
                  if (*(int *)local_80.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
                    local_71 = *(int *)local_80.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_71) goto LAB_1005ed45a;
                  }
                  QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
                }
LAB_1005ed45a:
                FUN_10046b9a0(&local_1c0,3);
                uVar23 = 0;
                if (*(long *)(plVar17[2] + 0x200) != 0) {
                  uVar23 = *(undefined8 *)(*(long *)(plVar17[2] + 0x200) + 0x10);
                }
                local_1c8 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
                QFileInfo::QFileInfo(local_1d8,pQVar2);
                QFileInfo::fileName();
                cVar7 = FUN_1006ad450(uVar23,&local_1c8,&local_1d0,&local_1c0);
                if (*(int *)local_1d0 != -1) {
                  if (*(int *)local_1d0 != 0) {
                    LOCK();
                    *(int *)local_1d0 = *(int *)local_1d0 + -1;
                    local_71 = *(int *)local_1d0 != 0;
                    UNLOCK();
                    if ((bool)local_71) goto LAB_1005ed51b;
                  }
                  QArrayData::deallocate(local_1d0,2,8);
                }
LAB_1005ed51b:
                QFileInfo::~QFileInfo(local_1d8);
                if (*(int *)local_1c8 != -1) {
                  if (*(int *)local_1c8 != 0) {
                    LOCK();
                    *(int *)local_1c8 = *(int *)local_1c8 + -1;
                    local_71 = *(int *)local_1c8 != 0;
                    UNLOCK();
                    if ((bool)local_71) goto LAB_1005ed55d;
                  }
                  QArrayData::deallocate(local_1c8,2,8);
                }
LAB_1005ed55d:
                if (cVar7 == '\0') {
                  QString::toUtf8();
                  pQVar26 = local_1e0 + *(long *)(local_1e0 + 0x10);
                  QFileInfo::absoluteFilePath();
                  QString::toUtf8();
                  FUN_1008e3970("","vdisk",0,"Error: can\'t insert new extent \'%s\' to VMDK \'%s\'"
                                ,pQVar26,local_1e8 + *(long *)(local_1e8 + 0x10));
                  if (*(int *)local_1e8 != -1) {
                    if (*(int *)local_1e8 != 0) {
                      LOCK();
                      *(int *)local_1e8 = *(int *)local_1e8 + -1;
                      local_71 = *(int *)local_1e8 != 0;
                      UNLOCK();
                      if ((bool)local_71) goto LAB_1005ed837;
                    }
                    QArrayData::deallocate(local_1e8,1,8);
                  }
LAB_1005ed837:
                  if (*(int *)local_1f0 != -1) {
                    if (*(int *)local_1f0 != 0) {
                      LOCK();
                      *(int *)local_1f0 = *(int *)local_1f0 + -1;
                      local_71 = *(int *)local_1f0 != 0;
                      UNLOCK();
                      if ((bool)local_71) goto LAB_1005ed86d;
                    }
                    QArrayData::deallocate(local_1f0,2,8);
                  }
LAB_1005ed86d:
                  uVar25 = 0x80021025;
                  bVar5 = true;
                  if (*(int *)local_1e0 != -1) {
                    if (*(int *)local_1e0 != 0) {
                      LOCK();
                      *(int *)local_1e0 = *(int *)local_1e0 + -1;
                      local_71 = *(int *)local_1e0 != 0;
                      UNLOCK();
                      if ((bool)local_71) goto LAB_1005ed8ae;
                    }
                    QArrayData::deallocate(local_1e0,1,8);
                  }
                }
                else {
                  bVar5 = false;
                  if (*(int *)(lVar12 + 8) == 0) {
                    uVar23 = 0;
                    if (*(long *)(plVar17[2] + 0x200) != 0) {
                      uVar23 = *(undefined8 *)(*(long *)(plVar17[2] + 0x200) + 0x10);
                    }
                    local_1f8 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                    local_200 = (QArrayData *)QString::fromAscii_helper("ddb.longContentID",0x11);
                    local_208 = PTR_shared_null_100ba2188;
                    FUN_10000c490(&local_208,&local_a0);
                    cVar7 = FUN_1006ad450(uVar23,&local_1f8,&local_200,&local_208);
                    FUN_100013180(&local_208);
                    if (*(int *)local_200 != -1) {
                      if (*(int *)local_200 != 0) {
                        LOCK();
                        *(int *)local_200 = *(int *)local_200 + -1;
                        local_71 = *(int *)local_200 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005ed64d;
                      }
                      QArrayData::deallocate(local_200,2,8);
                    }
LAB_1005ed64d:
                    if (*(int *)local_1f8 != -1) {
                      if (*(int *)local_1f8 != 0) {
                        LOCK();
                        *(int *)local_1f8 = *(int *)local_1f8 + -1;
                        local_71 = *(int *)local_1f8 != 0;
                        UNLOCK();
                        if ((bool)local_71) goto LAB_1005ed683;
                      }
                      QArrayData::deallocate(local_1f8,2,8);
                    }
LAB_1005ed683:
                    bVar5 = false;
                    if (cVar7 == '\0') {
                      QFileInfo::absoluteFilePath();
                      QString::toUtf8();
                      FUN_1008e3970("","vdisk",0,
                                    "Error: can\'t set \'ddb.longContentID\' for VMDK \'%s\'",
                                    local_210 + *(long *)(local_210 + 0x10));
                      if (*(int *)local_210 != -1) {
                        if (*(int *)local_210 != 0) {
                          LOCK();
                          *(int *)local_210 = *(int *)local_210 + -1;
                          local_71 = *(int *)local_210 != 0;
                          UNLOCK();
                          if ((bool)local_71) goto LAB_1005ed72e;
                        }
                        QArrayData::deallocate(local_210,1,8);
                      }
LAB_1005ed72e:
                      uVar25 = 0x80021025;
                      bVar5 = true;
                      if (*(int *)local_218 != -1) {
                        if (*(int *)local_218 != 0) {
                          LOCK();
                          *(int *)local_218 = *(int *)local_218 + -1;
                          local_71 = *(int *)local_218 != 0;
                          UNLOCK();
                          if ((bool)local_71) goto LAB_1005ed8ae;
                        }
                        QArrayData::deallocate(local_218,2,8);
                      }
                    }
                  }
                }
LAB_1005ed8ae:
                FUN_100013180(&local_1c0);
                if (bVar5) goto LAB_1005ee7f6;
              }
              if (*(int *)(lVar12 + 8) == 0) {
                local_70 = *(undefined8 *)(param_3 + 0x18);
                local_68 = *(undefined8 *)(param_3 + 0x20);
                if (plVar17 != (long *)0x0) {
                  LOCK();
                  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                  UNLOCK();
                }
                local_60 = local_70;
                local_58 = local_68;
                local_50 = local_70;
                local_48 = local_68;
                local_40 = plVar17;
                FUN_1005f2de0(param_1 + 0x38,&local_50);
                if (local_40 != (long *)0x0) {
                  LOCK();
                  plVar1 = local_40 + 1;
                  lVar12 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar12 == 1) {
                    (**(code **)(*local_40 + 0x10))();
                  }
                }
                if (plVar17 != (long *)0x0) {
                  plVar1 = plVar17 + 1;
                  LOCK();
                  plVar27 = plVar17 + 1;
                  lVar12 = *plVar27;
                  *(int *)plVar27 = (int)*plVar27 + -1;
                  UNLOCK();
                  if ((int)lVar12 == 1) {
                    (**(code **)(*plVar17 + 0x10))();
                  }
                  LOCK();
                  lVar12 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar12 == 1) {
                    (**(code **)(*plVar17 + 0x10))();
                  }
                  goto LAB_1005edce1;
                }
              }
              else {
LAB_1005edce1:
                if (plVar17 != (long *)0x0) {
                  LOCK();
                  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                  UNLOCK();
                }
              }
              plVar1 = (long *)plVar22[1];
              plVar22[1] = (long)plVar17;
              if (plVar1 != (long *)0x0) {
                LOCK();
                plVar17 = plVar1 + 1;
                lVar12 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)(*plVar1 + 0x10))();
                }
              }
              QString::operator=((QString *)(plVar22 + 2),pQVar2);
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
              plVar22 = *(long **)(param_3 + 0x28);
              *(long **)(param_3 + 0x28) = plVar13;
              uVar25 = 0;
              if (plVar22 != (long *)0x0) {
                LOCK();
                plVar1 = plVar22 + 1;
                lVar12 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)(*plVar22 + 0x10))();
                }
              }
            }
LAB_1005ee7f6:
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_71 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_71) goto LAB_1005ee82c;
              }
              QArrayData::deallocate(local_a0,2,8);
            }
LAB_1005ee82c:
            if (local_248 != (long *)0x0) {
              LOCK();
              plVar22 = local_248 + 1;
              lVar12 = *plVar22;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)(*local_248 + 0x10))();
              }
            }
          }
          goto LAB_1005ecf1f;
        }
        FUN_1008e3970("","vdisk",0,"Error: storage idx \'%d\' is wrong");
        uVar25 = 0x80021025;
      }
      LOCK();
      plVar13 = plVar13 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)(*local_228 + 0x10))();
      }
    }
  }
LAB_1005eca9f:
  QMutex::unlock();
LAB_1005ecaaf:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar25 & 0xffffffff;
}

