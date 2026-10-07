
undefined8 FUN_1005f01b0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  QArrayData *pQVar11;
  QString QVar12;
  char *pcVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  QArrayData *pQVar17;
  bool bVar18;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar20;
  undefined8 uVar19;
  undefined8 *local_160;
  long *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QString local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QString local_108;
  QString local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
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
  QString local_40;
  undefined1 local_31;
  
  QVar12.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  uVar16 = 0x80021020;
  local_140 = (long *)0x0;
  if (*param_3 != 0) {
    lVar6 = *(long *)(*param_3 + 0x10);
    local_140 = (long *)0x0;
    if (lVar6 != 0) {
      local_140 = (long *)0x0;
      lVar6 = ___dynamic_cast(lVar6,&PTR_vtable_10111e110,&PTR_vtable_10111e2f0,0);
      if (lVar6 != 0) {
        QMutex::lock();
        uVar20 = (undefined4)((ulong)in_stack_fffffffffffffe88 >> 0x20);
        puVar1 = (undefined8 *)(param_1 + 0x38);
        if (*(long *)(param_1 + 0x48) == 0) {
          lVar7 = param_1 + 0x50;
          cVar3 = FUN_1007ea210(lVar7);
          uVar20 = (undefined4)((ulong)in_stack_fffffffffffffe88 >> 0x20);
          if (cVar3 == '\0') {
            if (*(long *)(param_1 + 0x48) != 0) goto LAB_1005f02f4;
            if (*(long **)(param_1 + 0x28) != (long *)0x0) {
              plVar9 = *(long **)(param_1 + 0x28);
              plVar15 = (long *)(param_1 + 0x28);
              do {
                while( true ) {
                  plVar14 = plVar9;
                  iVar5 = FUN_1007ea6f0(plVar14 + 4,lVar7);
                  uVar20 = (undefined4)((ulong)in_stack_fffffffffffffe88 >> 0x20);
                  if (-1 < iVar5) break;
                  plVar9 = (long *)plVar14[1];
                  if ((long *)plVar14[1] == (long *)0x0) goto LAB_1005f0b1b;
                }
                plVar15 = plVar14;
                plVar9 = (long *)*plVar14;
              } while ((long *)*plVar14 != (long *)0x0);
LAB_1005f0b1b:
              if ((plVar15 != (long *)(param_1 + 0x28)) &&
                 (iVar5 = FUN_1007ea6f0(lVar7,plVar15 + 4), -1 < iVar5)) {
                local_140 = (long *)plVar15[6];
                local_160 = (undefined8 *)(param_1 + 0x20);
                if (local_140 != (long *)0x0) {
                  LOCK();
                  *(int *)(local_140 + 1) = (int)local_140[1] + 1;
                  UNLOCK();
                }
                goto LAB_1005f03a8;
              }
            }
            FUN_1007d6a70(&local_50,lVar7);
            QString::toLocal8Bit();
            FUN_1008e3970("","vdisk",0,"Error: can\'t find snapshot by inner swap child uid %s",
                          local_48 + *(long *)(local_48 + 0x10));
            if (*(int *)local_48 != -1) {
              if (*(int *)local_48 != 0) {
                LOCK();
                *(int *)local_48 = *(int *)local_48 + -1;
                local_31 = *(int *)local_48 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005f0bcf;
              }
              QArrayData::deallocate(local_48,1,8);
            }
LAB_1005f0bcf:
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005f0c08;
              }
              QArrayData::deallocate(local_50,2,8);
            }
LAB_1005f0c08:
            uVar16 = 0x80021025;
            local_140 = (long *)0x0;
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0",
                          "VMwareDiskDescriptor.cpp",CONCAT44(uVar20,0xa23),"RemoveImage");
          }
          else {
            lVar7 = 0;
            if (*(long *)(lVar6 + 8) != 0) {
              lVar7 = *(long *)(*(long *)(lVar6 + 8) + 0x10);
            }
            if (*(long **)(param_1 + 0x28) != (long *)0x0) {
              local_160 = (undefined8 *)(param_1 + 0x20);
              plVar9 = *(long **)(param_1 + 0x28);
              plVar15 = (long *)(param_1 + 0x28);
              do {
                while( true ) {
                  plVar14 = plVar9;
                  iVar5 = FUN_1007ea6f0(plVar14 + 4,lVar7 + 0x218);
                  uVar20 = (undefined4)((ulong)in_stack_fffffffffffffe88 >> 0x20);
                  if (-1 < iVar5) break;
                  plVar9 = (long *)plVar14[1];
                  if ((long *)plVar14[1] == (long *)0x0) goto LAB_1005f04be;
                }
                plVar15 = plVar14;
                plVar9 = (long *)*plVar14;
              } while ((long *)*plVar14 != (long *)0x0);
LAB_1005f04be:
              if ((plVar15 != (long *)(param_1 + 0x28)) &&
                 (iVar5 = FUN_1007ea6f0(lVar7 + 0x218,plVar15 + 4), -1 < iVar5)) {
                local_140 = (long *)plVar15[6];
                if (local_140 != (long *)0x0) {
                  LOCK();
                  *(int *)(local_140 + 1) = (int)local_140[1] + 1;
                  UNLOCK();
                }
                QString::operator=(&local_40,(QString *)(lVar6 + 0x10));
LAB_1005f0510:
                uVar16 = 0;
                if (*(long *)(local_140[2] + 0x200) != 0) {
                  uVar16 = *(undefined8 *)(*(long *)(local_140[2] + 0x200) + 0x10);
                }
                local_a8 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
                cVar3 = FUN_1006af990(uVar16,&local_a8,&local_40);
                if (*(int *)local_a8 != -1) {
                  if (*(int *)local_a8 != 0) {
                    LOCK();
                    *(int *)local_a8 = *(int *)local_a8 + -1;
                    local_31 = *(int *)local_a8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1005f0590;
                  }
                  QArrayData::deallocate(local_a8,2,8);
                }
LAB_1005f0590:
                if (cVar3 == '\0') {
                  QString::toUtf8();
                  pQVar11 = local_b0 + *(long *)(local_b0 + 0x10);
                  QFileInfo::absoluteFilePath();
                  QString::toUtf8();
                  FUN_1008e3970("","vdisk",0,"Error: can\'t find extent \'%s\' in VMDK \'%s\'",
                                pQVar11,local_b8 + *(long *)(local_b8 + 0x10));
                  if (*(int *)local_b8 != -1) {
                    if (*(int *)local_b8 != 0) {
                      LOCK();
                      *(int *)local_b8 = *(int *)local_b8 + -1;
                      local_31 = *(int *)local_b8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1005f0a99;
                    }
                    QArrayData::deallocate(local_b8,1,8);
                  }
LAB_1005f0a99:
                  if (*(int *)local_c0 != -1) {
                    if (*(int *)local_c0 != 0) {
                      LOCK();
                      *(int *)local_c0 = *(int *)local_c0 + -1;
                      local_31 = *(int *)local_c0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1005f0acf;
                    }
                    QArrayData::deallocate(local_c0,2,8);
                  }
LAB_1005f0acf:
                  uVar16 = 0x80021025;
                  if (*(int *)local_b0 != -1) {
                    if (*(int *)local_b0 != 0) {
                      LOCK();
                      *(int *)local_b0 = *(int *)local_b0 + -1;
                      local_31 = *(int *)local_b0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1005f1370;
                    }
                    QArrayData::deallocate(local_b0,1,8);
                  }
                  goto LAB_1005f1370;
                }
                local_c8 = PTR_shared_null_100ba2188;
                uVar16 = 0;
                if (*(long *)(local_140[2] + 0x200) != 0) {
                  uVar16 = *(undefined8 *)(*(long *)(local_140[2] + 0x200) + 0x10);
                }
                local_d0 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
                cVar3 = FUN_1006afe20(uVar16,&local_d0,&local_c8);
                if (*(int *)local_d0 != -1) {
                  if (*(int *)local_d0 != 0) {
                    LOCK();
                    *(int *)local_d0 = *(int *)local_d0 + -1;
                    local_31 = *(int *)local_d0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1005f0629;
                  }
                  QArrayData::deallocate(local_d0,2,8);
                }
LAB_1005f0629:
                if (cVar3 == '\0') {
                  QFileInfo::absoluteFilePath();
                  QString::toUtf8();
                  FUN_1008e3970("","vdisk",0,"Error: can\'t find EXTENTS block for VMDK \'%s\'",
                                local_d8 + *(long *)(local_d8 + 0x10));
                  if (*(int *)local_d8 != -1) {
                    if (*(int *)local_d8 != 0) {
                      LOCK();
                      *(int *)local_d8 = *(int *)local_d8 + -1;
                      local_31 = *(int *)local_d8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1005f0cee;
                    }
                    QArrayData::deallocate(local_d8,1,8);
                  }
LAB_1005f0cee:
                  uVar16 = 0x80021025;
                  if (*(int *)local_e0 != -1) {
                    if (*(int *)local_e0 != 0) {
                      LOCK();
                      *(int *)local_e0 = *(int *)local_e0 + -1;
                      local_31 = *(int *)local_e0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1005f135d;
                    }
                    QArrayData::deallocate(local_e0,2,8);
                  }
                }
                else {
                  uVar16 = 0;
                  if (*(int *)(local_c8 + 0xc) == *(int *)(local_c8 + 8)) {
                    if (local_140 == (long *)0x0) {
                      DAT_00000244 = 1;
LAB_1005f0d63:
                      uVar19 = CONCAT44(uVar20,0xd4);
                      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                                    "VMDK.isValid()","VMwareDiskDescriptor.cpp",uVar19,
                                    "IsVMDKEmbedded");
                      uVar20 = (undefined4)((ulong)uVar19 >> 0x20);
                      lVar6 = local_140[2];
                    }
                    else {
                      lVar6 = local_140[2];
                      *(undefined1 *)(lVar6 + 0x244) = 1;
                      if (lVar6 == 0) goto LAB_1005f0d63;
                    }
                    if (*(int *)(lVar6 + 0x240) != 0x5b) {
                      QFileInfo::absoluteFilePath();
                      cVar3 = QFile::remove(&local_e8);
                      if (*(int *)local_e8.field0_0x0 != -1) {
                        if (*(int *)local_e8.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
                          local_31 = *(int *)local_e8.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1005f0e0d;
                        }
                        QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
                      }
LAB_1005f0e0d:
                      QFileInfo::absoluteFilePath();
                      QString::toUtf8();
                      pcVar13 = "FAILURE";
                      if (cVar3 != '\0') {
                        pcVar13 = "SUCCESS";
                      }
                      FUN_1008e3970("","vdisk",0,"[VMDK] Info: vmdk was removed #3 \'%s\': %s",
                                    local_f0 + *(long *)(local_f0 + 0x10),pcVar13);
                      if (*(int *)local_f0 != -1) {
                        if (*(int *)local_f0 != 0) {
                          LOCK();
                          *(int *)local_f0 = *(int *)local_f0 + -1;
                          local_31 = *(int *)local_f0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1005f0ead;
                        }
                        QArrayData::deallocate(local_f0,1,8);
                      }
LAB_1005f0ead:
                      if (*(int *)local_f8 != -1) {
                        if (*(int *)local_f8 != 0) {
                          LOCK();
                          *(int *)local_f8 = *(int *)local_f8 + -1;
                          local_31 = *(int *)local_f8 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1005f0ee3;
                        }
                        QArrayData::deallocate(local_f8,2,8);
                      }
                    }
LAB_1005f0ee3:
                    if (*(long *)(param_1 + 0x48) != 0) {
                      if ((*(long *)(param_1 + 0x68) == 0) ||
                         (lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 0x10), lVar6 == 0)) {
                        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                                      "VMDK.isValid()","VMwareDiskDescriptor.cpp",
                                      CONCAT44(uVar20,0xd4),"IsVMDKEmbedded");
                        lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
                      }
                      if (*(int *)(lVar6 + 0x240) != 0x5b) {
                        QFileInfo::absolutePath();
                        uVar4 = QDir::separator();
                        local_110 = local_118;
                        if (1 < *(uint *)local_118 + 1) {
                          LOCK();
                          *(uint *)local_118 = *(uint *)local_118 + 1;
                          local_31 = *(uint *)local_118 != 0;
                          UNLOCK();
                        }
                        uVar10 = *(uint *)(local_118 + 4);
                        if ((1 < *(uint *)local_118) ||
                           ((*(uint *)(local_118 + 8) & 0x7fffffff) < uVar10 + 2)) {
                          QString::reallocData((uint)&local_110,SUB41(uVar10 + 2,0));
                          uVar10 = *(uint *)(local_110 + 4);
                        }
                        *(uint *)(local_110 + 4) = uVar10 + 1;
                        *(undefined2 *)
                         (local_110 + (long)(int)uVar10 * 2 + *(long *)(local_110 + 0x10)) = uVar4;
                        *(undefined2 *)
                         (local_110 +
                         (long)(int)*(uint *)(local_110 + 4) * 2 + *(long *)(local_110 + 0x10)) = 0;
                        FUN_1005e7700(&local_120,param_1 + 0x78,*(int *)(param_1 + 0x80) + 1);
                        local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_110;
                        if (1 < *(uint *)local_110 + 1) {
                          LOCK();
                          *(uint *)local_110 = *(uint *)local_110 + 1;
                          local_31 = *(uint *)local_110 != 0;
                          UNLOCK();
                        }
                        QString::append(&local_108);
                        QDir::fromNativeSeparators(&local_100);
                        if (*(int *)local_108.field0_0x0 != -1) {
                          if (*(int *)local_108.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
                            local_31 = *(int *)local_108.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1005f10a2;
                          }
                          QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
                        }
LAB_1005f10a2:
                        if (*(int *)local_120 != -1) {
                          if (*(int *)local_120 != 0) {
                            LOCK();
                            *(int *)local_120 = *(int *)local_120 + -1;
                            local_31 = *(int *)local_120 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1005f10d8;
                          }
                          QArrayData::deallocate(local_120,2,8);
                        }
LAB_1005f10d8:
                        if (*(int *)local_110 != -1) {
                          if (*(int *)local_110 != 0) {
                            LOCK();
                            *(int *)local_110 = *(int *)local_110 + -1;
                            local_31 = *(int *)local_110 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1005f110e;
                          }
                          QArrayData::deallocate(local_110,2,8);
                        }
LAB_1005f110e:
                        if (*(int *)local_118 != -1) {
                          if (*(int *)local_118 != 0) {
                            LOCK();
                            *(int *)local_118 = *(int *)local_118 + -1;
                            local_31 = *(int *)local_118 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1005f1144;
                          }
                          QArrayData::deallocate(local_118,2,8);
                        }
LAB_1005f1144:
                        QFileInfo::absoluteFilePath();
                        cVar3 = QFile::rename(&local_100,&local_128);
                        QString::toUtf8();
                        lVar6 = *(long *)(local_130 + 0x10);
                        QString::toUtf8();
                        pcVar13 = "FAILURE";
                        if (cVar3 != '\0') {
                          pcVar13 = "SUCCESS";
                        }
                        FUN_1008e3970("","vdisk",0,
                                      "[VMDK] Info: vmdk was renamed #3 \'%s\' to \'%s\': %s",
                                      local_130 + lVar6,local_138 + *(long *)(local_138 + 0x10),
                                      pcVar13);
                        if (*(int *)local_138 != -1) {
                          if (*(int *)local_138 != 0) {
                            LOCK();
                            *(int *)local_138 = *(int *)local_138 + -1;
                            local_31 = *(int *)local_138 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1005f1235;
                          }
                          QArrayData::deallocate(local_138,1,8);
                        }
LAB_1005f1235:
                        if (*(int *)local_130 != -1) {
                          if (*(int *)local_130 != 0) {
                            LOCK();
                            *(int *)local_130 = *(int *)local_130 + -1;
                            local_31 = *(int *)local_130 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1005f1272;
                          }
                          QArrayData::deallocate(local_130,1,8);
                        }
LAB_1005f1272:
                        if (*(int *)local_128.field0_0x0 != -1) {
                          if (*(int *)local_128.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                            local_31 = *(int *)local_128.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1005f12a8;
                          }
                          QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
                        }
LAB_1005f12a8:
                        if (*(int *)local_100.field0_0x0 != -1) {
                          if (*(int *)local_100.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
                            local_31 = *(int *)local_100.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1005f12de;
                          }
                          QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
                        }
                      }
                    }
LAB_1005f12de:
                    if (local_160 == puVar1) {
                      plVar9 = plVar15;
                      plVar14 = (long *)plVar15[1];
                      if ((long *)plVar15[1] == (long *)0x0) {
                        do {
                          plVar8 = (long *)plVar9[2];
                          bVar18 = (long *)*plVar8 != plVar9;
                          plVar9 = plVar8;
                        } while (bVar18);
                      }
                      else {
                        do {
                          plVar8 = plVar14;
                          plVar14 = (long *)*plVar8;
                        } while ((long *)*plVar8 != (long *)0x0);
                      }
                      if ((long *)*puVar1 == plVar15) {
                        *puVar1 = plVar8;
                      }
                      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
                      FUN_1000e86c0(*(undefined8 *)(param_1 + 0x40),plVar15);
                      plVar9 = (long *)plVar15[6];
                      if (plVar9 != (long *)0x0) {
                        LOCK();
                        plVar14 = plVar9 + 1;
                        lVar6 = *plVar14;
                        *(int *)plVar14 = (int)*plVar14 + -1;
                        UNLOCK();
                        if ((int)lVar6 == 1) {
                          (**(code **)(*plVar9 + 0x10))();
                        }
                      }
                      operator_delete(plVar15);
                    }
                  }
                }
LAB_1005f135d:
                FUN_100013180(&local_c8);
                goto LAB_1005f1370;
              }
            }
            lVar7 = 0;
            if (*(long *)(lVar6 + 8) != 0) {
              lVar7 = *(long *)(*(long *)(lVar6 + 8) + 0x10);
            }
            FUN_1007d6a70(&local_a0,lVar7 + 0x218);
            QString::toLocal8Bit();
            FUN_1008e3970("","vdisk",0,"Error: can\'t find VMDK by uid \'%s\'",
                          local_98 + *(long *)(local_98 + 0x10));
            if (*(int *)local_98 != -1) {
              if (*(int *)local_98 != 0) {
                LOCK();
                *(int *)local_98 = *(int *)local_98 + -1;
                local_31 = *(int *)local_98 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005f0706;
              }
              QArrayData::deallocate(local_98,1,8);
            }
LAB_1005f0706:
            uVar16 = 0x80021025;
            if (*(int *)local_a0 == -1) {
LAB_1005f0734:
              local_140 = (long *)0x0;
            }
            else {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005f0734;
              }
              local_140 = (long *)0x0;
              QArrayData::deallocate(local_a0,2,8);
            }
          }
        }
        else {
LAB_1005f02f4:
          if (*(long *)(lVar6 + 8) == *(long *)(param_1 + 0x68)) {
            plVar15 = (long *)*puVar1;
            local_140 = (long *)plVar15[6];
            local_160 = puVar1;
            if (local_140 != (long *)0x0) {
              LOCK();
              *(int *)(local_140 + 1) = (int)local_140[1] + 1;
              UNLOCK();
            }
LAB_1005f03a8:
            uVar16 = 0;
            if (*(long *)(local_140[2] + 0x200) != 0) {
              uVar16 = *(undefined8 *)(*(long *)(local_140[2] + 0x200) + 0x10);
            }
            local_58 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
            lVar7 = FUN_1006b0130(uVar16,&local_58,0);
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_31 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005f041b;
              }
              QArrayData::deallocate(local_58,2,8);
            }
LAB_1005f041b:
            if (lVar7 == 0) {
              QFileInfo::absoluteFilePath();
              QString::toUtf8();
              FUN_1008e3970("","vdisk",0,"Error: can\'t find extent by idx \'%d\' in VMDK \'%s\'",0,
                            local_60 + *(long *)(local_60 + 0x10));
              if (*(int *)local_60 != -1) {
                if (*(int *)local_60 != 0) {
                  LOCK();
                  *(int *)local_60 = *(int *)local_60 + -1;
                  local_31 = *(int *)local_60 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005f07cd;
                }
                QArrayData::deallocate(local_60,1,8);
              }
LAB_1005f07cd:
              uVar16 = 0x80021025;
              if (*(int *)local_68 != -1) {
                if (*(int *)local_68 != 0) {
                  LOCK();
                  *(int *)local_68 = *(int *)local_68 + -1;
                  local_31 = *(int *)local_68 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005f1370;
                }
                QArrayData::deallocate(local_68,2,8);
              }
            }
            else {
              lVar2 = *(long *)(*(long *)(*(long *)(lVar6 + 8) + 0x10) + 0x200);
              uVar16 = 0;
              if (lVar2 != 0) {
                uVar16 = *(undefined8 *)(lVar2 + 0x10);
              }
              local_70 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
              cVar3 = FUN_1006afc70(uVar16,&local_70,lVar6 + 0x10,(QString *)(lVar7 + 0x18));
              if (*(int *)local_70 != -1) {
                if (*(int *)local_70 != 0) {
                  LOCK();
                  *(int *)local_70 = *(int *)local_70 + -1;
                  local_31 = *(int *)local_70 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005f04a4;
                }
                QArrayData::deallocate(local_70,2,8);
              }
LAB_1005f04a4:
              if (cVar3 != '\0') {
                QString::operator=(&local_40,(QString *)(lVar7 + 0x18));
                goto LAB_1005f0510;
              }
              QString::toUtf8();
              pQVar17 = local_78 + *(long *)(local_78 + 0x10);
              QString::toUtf8();
              pQVar11 = local_80 + *(long *)(local_80 + 0x10);
              QFileInfo::absoluteFilePath();
              QString::toUtf8();
              FUN_1008e3970("","vdisk",0,
                            "Error: can\'t rename extent from \'%s\' to \'%s\' in VMDK \'%s\'",
                            pQVar17,pQVar11,local_88 + *(long *)(local_88 + 0x10));
              if (*(int *)local_88 != -1) {
                if (*(int *)local_88 != 0) {
                  LOCK();
                  *(int *)local_88 = *(int *)local_88 + -1;
                  local_31 = *(int *)local_88 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005f08cd;
                }
                QArrayData::deallocate(local_88,1,8);
              }
LAB_1005f08cd:
              if (*(int *)local_90 != -1) {
                if (*(int *)local_90 != 0) {
                  LOCK();
                  *(int *)local_90 = *(int *)local_90 + -1;
                  local_31 = *(int *)local_90 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005f0903;
                }
                QArrayData::deallocate(local_90,2,8);
              }
LAB_1005f0903:
              if (*(int *)local_80 != -1) {
                if (*(int *)local_80 != 0) {
                  LOCK();
                  *(int *)local_80 = *(int *)local_80 + -1;
                  local_31 = *(int *)local_80 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005f0933;
                }
                QArrayData::deallocate(local_80,1,8);
              }
LAB_1005f0933:
              uVar16 = 0x80021025;
              if (*(int *)local_78 != -1) {
                if (*(int *)local_78 != 0) {
                  LOCK();
                  *(int *)local_78 = *(int *)local_78 + -1;
                  local_31 = *(int *)local_78 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005f1370;
                }
                QArrayData::deallocate(local_78,1,8);
              }
            }
          }
          else {
            FUN_1008e3970("","vdisk",0,
                          "Error: can\'t remove image, VMDK must be equal to current snapshot");
            uVar16 = 0x80021025;
            local_140 = (long *)0x0;
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0",
                          "VMwareDiskDescriptor.cpp",CONCAT44(uVar20,0xa14),"RemoveImage");
          }
        }
LAB_1005f1370:
        QMutex::unlock();
        QVar12.field0_0x0 = local_40.field0_0x0;
      }
    }
  }
  if (*(int *)QVar12.field0_0x0 != -1) {
    if (*(int *)QVar12.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar12.field0_0x0 = *(int *)QVar12.field0_0x0 + -1;
      local_31 = *(int *)QVar12.field0_0x0 != 0;
      UNLOCK();
      QVar12.field0_0x0 = local_40.field0_0x0;
      if ((bool)local_31) goto LAB_1005f13ba;
    }
    QArrayData::deallocate((QArrayData *)QVar12.field0_0x0,2,8);
  }
LAB_1005f13ba:
  if (local_140 != (long *)0x0) {
    LOCK();
    plVar15 = local_140 + 1;
    lVar6 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_140 + 0x10))(local_140);
    }
  }
  return uVar16;
}

