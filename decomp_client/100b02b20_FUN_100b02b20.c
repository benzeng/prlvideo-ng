
void FUN_100b02b20(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  CHwOsDistrInfo *pCVar3;
  int *piVar4;
  ulong uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  _func_void_Node_ptr *p_Var9;
  QArrayData *pQVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  CHwOsDistrInfo *this;
  CHwOsInfo *this_00;
  long lVar16;
  _func_void_Node_ptr *p_Var17;
  long lVar18;
  long lVar19;
  int *piVar20;
  QString *pQVar21;
  _func_void_Node_ptr *p_Var22;
  _func_void_Node_ptr *p_Var23;
  uint uVar24;
  _func_void_Node_ptr *p_Var25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uStack_250;
  undefined8 uStack_240;
  QArrayData *local_220;
  int *local_218;
  QString *local_210;
  QString *local_208;
  undefined4 local_200;
  int *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QString local_1b0;
  QArrayData *local_1a8;
  Data *local_1a0;
  Data *local_198;
  Data *local_190;
  undefined4 local_188;
  Data *local_180;
  Data *local_178;
  Data *local_170;
  undefined4 local_168;
  _func_void_Node_ptr *local_160;
  undefined1 local_158 [8];
  QArrayData *local_150;
  undefined4 local_144;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  int local_100 [4];
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  QString local_98;
  QArrayData *local_90;
  undefined4 local_84;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_38 [7];
  undefined1 local_31;
  
  local_160 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  plVar2 = *(long **)(param_1[3] + 0x150);
  local_180 = (Data *)*plVar2;
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 == 0) {
      QListData::detach((int)&local_180);
      lVar18 = (long)*(int *)(local_180 + 8);
      lVar16 = *plVar2;
      if (((Data *)(lVar16 + (long)*(int *)(lVar16 + 8) * 8) != local_180 + lVar18 * 8) &&
         (lVar19 = *(int *)(local_180 + 0xc) - lVar18,
         lVar19 != 0 && lVar18 <= *(int *)(local_180 + 0xc))) {
        _memcpy(local_180 + lVar18 * 8 + 0x10,
                (void *)(lVar16 + 0x10 + (long)*(int *)(lVar16 + 8) * 8),lVar19 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + 1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
    }
  }
  puVar8 = PTR_shared_null_1021e15e8;
  puVar7 = PTR_shared_null_1021e1288;
  local_178 = local_180 + (long)*(int *)(local_180 + 8) * 8 + 0x10;
  local_170 = local_180 + (long)*(int *)(local_180 + 0xc) * 8 + 0x10;
  if (local_178 != local_170) {
    auVar26._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar26._0_8_ = PTR_shared_null_1021e1288;
    auVar26._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    auVar27._8_4_ = (int)PTR_shared_null_1021e15e8;
    auVar27._0_8_ = PTR_shared_null_1021e15e8;
    auVar27._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    do {
      local_168 = 1;
      lVar16 = *(long *)local_178;
      local_1a0 = *(Data **)(lVar16 + 0x98);
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 == 0) {
          QListData::detach((int)&local_1a0);
          lVar18 = (long)*(int *)(local_1a0 + 8);
          lVar16 = *(long *)(lVar16 + 0x98);
          if (((Data *)(lVar16 + (long)*(int *)(lVar16 + 8) * 8) != local_1a0 + lVar18 * 8) &&
             (lVar19 = *(int *)(local_1a0 + 0xc) - lVar18,
             lVar19 != 0 && lVar18 <= *(int *)(local_1a0 + 0xc))) {
            _memcpy(local_1a0 + lVar18 * 8 + 0x10,
                    (void *)(lVar16 + 0x10 + (long)*(int *)(lVar16 + 8) * 8),lVar19 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + 1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
        }
      }
      local_198 = local_1a0 + (long)*(int *)(local_1a0 + 8) * 8 + 0x10;
      local_190 = local_1a0 + (long)*(int *)(local_1a0 + 0xc) * 8 + 0x10;
      if (*(int *)(local_1a0 + 8) != *(int *)(local_1a0 + 0xc)) {
        do {
          local_188 = 1;
          pCVar3 = *(CHwOsDistrInfo **)local_198;
          if (pCVar3 != (CHwOsDistrInfo *)0x0) {
            CHwHddPartition::getSystemName();
            iVar14 = *(int *)(local_1a8 + 4);
            if (*(int *)local_1a8 != -1) {
              if (*(int *)local_1a8 != 0) {
                LOCK();
                *(int *)local_1a8 = *(int *)local_1a8 + -1;
                local_31 = *(int *)local_1a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100b02d64;
              }
              QArrayData::deallocate(local_1a8,2,8);
            }
LAB_100b02d64:
            if (iVar14 != 0) {
              CHwHddPartition::getSystemName();
              lVar16 = *(long *)(*param_1 + 0x10);
              lVar18 = 0;
              if (*(long *)(*param_1 + 0x10) == 0) {
LAB_100b02dd8:
                lVar19 = 0;
              }
              else {
                do {
                  while (lVar19 = lVar16, cVar11 = operator<((QString *)(lVar19 + 0x18),&local_1b0),
                        cVar11 == '\0') {
                    lVar16 = *(long *)(lVar19 + 8);
                    lVar18 = lVar19;
                    if (*(long *)(lVar19 + 8) == 0) goto LAB_100b02dc8;
                  }
                  lVar16 = *(long *)(lVar19 + 0x10);
                } while (*(long *)(lVar19 + 0x10) != 0);
                lVar19 = lVar18;
                if (lVar18 == 0) goto LAB_100b02dd8;
LAB_100b02dc8:
                cVar11 = operator<(&local_1b0,(QString *)(lVar19 + 0x18));
                if (cVar11 != '\0') goto LAB_100b02dd8;
              }
              if (*(int *)local_1b0.field0_0x0 != -1) {
                if (*(int *)local_1b0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
                  local_31 = *(int *)local_1b0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100b02e10;
                }
                QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
              }
LAB_100b02e10:
              if (lVar19 == 0) {
                uVar12 = CHwHddPartition::getType();
                cVar11 = FUN_100cd0010(uVar12);
                if (cVar11 == '\0') {
                  uVar12 = CHwHddPartition::getType();
                  cVar11 = FUN_100ccffc0(uVar12);
                  bVar6 = true;
                  if (cVar11 != '\0') {
                    uVar12 = CHwHddPartition::getType();
                    cVar11 = FUN_100ccffa0(uVar12);
                    if (cVar11 == '\0') goto LAB_100b02faa;
                  }
                }
                else {
LAB_100b02faa:
                  CHwHddPartition::getSystemName();
                  local_48 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
                  local_50 = (QArrayData *)QString::fromAscii_helper("",0);
                  QString::replace(&local_40,&local_48,&local_50,1);
                  if (*(int *)local_50 != -1) {
                    if (*(int *)local_50 != 0) {
                      LOCK();
                      *(int *)local_50 = *(int *)local_50 + -1;
                      local_31 = *(int *)local_50 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b03023;
                    }
                    QArrayData::deallocate(local_50,2,8);
                  }
LAB_100b03023:
                  if (*(int *)local_48 != -1) {
                    if (*(int *)local_48 != 0) {
                      LOCK();
                      *(int *)local_48 = *(int *)local_48 + -1;
                      local_31 = *(int *)local_48 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b03053;
                    }
                    QArrayData::deallocate(local_48,2,8);
                  }
LAB_100b03053:
                  local_58 = (QArrayData *)QString::fromAscii_helper("rdisk",5);
                  local_60 = (QArrayData *)QString::fromAscii_helper("disk",4);
                  QString::replace(&local_40,&local_58,&local_60,1);
                  if (*(int *)local_60 != -1) {
                    if (*(int *)local_60 != 0) {
                      LOCK();
                      *(int *)local_60 = *(int *)local_60 + -1;
                      local_31 = *(int *)local_60 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b030c3;
                    }
                    QArrayData::deallocate(local_60,2,8);
                  }
LAB_100b030c3:
                  if (*(int *)local_58 != -1) {
                    if (*(int *)local_58 != 0) {
                      LOCK();
                      *(int *)local_58 = *(int *)local_58 + -1;
                      local_31 = *(int *)local_58 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b030f3;
                    }
                    QArrayData::deallocate(local_58,2,8);
                  }
LAB_100b030f3:
                  FUN_100da7de0(&local_68,&local_40,0);
                  iVar14 = *(int *)(local_68.field0_0x0 + 4);
                  if (iVar14 == 0) {
                    cVar11 = FUN_100d80630(1);
                    bVar6 = true;
                    if (cVar11 == '\0') goto LAB_100b03123;
                  }
                  else {
LAB_100b03123:
                    QString::toUtf8();
                    pQVar10 = local_70;
                    lVar16 = *(long *)(local_70 + 0x10);
                    QString::toUtf8();
                    FUN_100df99c0("","pvsHostInfo",0,"Collect Os Info: (%s) at (%s)",
                                  pQVar10 + lVar16,local_78 + *(long *)(local_78 + 0x10));
                    if (*(int *)local_78 != -1) {
                      if (*(int *)local_78 != 0) {
                        LOCK();
                        *(int *)local_78 = *(int *)local_78 + -1;
                        local_31 = *(int *)local_78 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100b031a4;
                      }
                      QArrayData::deallocate(local_78,1,8);
                    }
LAB_100b031a4:
                    if (*(int *)local_70 != -1) {
                      if (*(int *)local_70 != 0) {
                        LOCK();
                        *(int *)local_70 = *(int *)local_70 + -1;
                        local_31 = *(int *)local_70 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100b031d4;
                      }
                      QArrayData::deallocate(local_70,1,8);
                    }
LAB_100b031d4:
                    if (iVar14 != 0) goto LAB_100b032f6;
                    cVar11 = CHwHardDisk::isRemovable();
                    if (cVar11 == '\0') {
                      cVar11 = CHwHardDisk::isExternal();
                      if (cVar11 == '\0') {
                        if (2 < DAT_10230ffd0) {
                          QString::toUtf8();
                          FUN_100df99c0("","pvsHostInfo",3,"Mounting \'%s\'",
                                        local_80 + *(long *)(local_80 + 0x10));
                          if (*(int *)local_80 != -1) {
                            if (*(int *)local_80 != 0) {
                              LOCK();
                              *(int *)local_80 = *(int *)local_80 + -1;
                              local_31 = *(int *)local_80 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_100b0327d;
                            }
                            QArrayData::deallocate(local_80,1,8);
                          }
                        }
LAB_100b0327d:
                        local_84 = 0x20;
                        iVar13 = FUN_100dd70d0(&local_40,&local_84,3);
                        if (iVar13 == 0) {
                          QString::toUtf8();
                          FUN_100df99c0("","pvsHostInfo",0,"Failed to mount volume %s",
                                        local_90 + *(long *)(local_90 + 0x10));
                          bVar6 = true;
                          if (*(int *)local_90 != -1) {
                            if (*(int *)local_90 != 0) {
                              LOCK();
                              *(int *)local_90 = *(int *)local_90 + -1;
                              local_31 = *(int *)local_90 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_100b038a1;
                            }
                            QArrayData::deallocate(local_90,1,8);
                          }
                        }
                        else {
                          FUN_100da7de0(&local_98,&local_40,0);
                          QString::operator=(&local_68,&local_98);
                          if (*(int *)local_98.field0_0x0 != -1) {
                            if (*(int *)local_98.field0_0x0 != 0) {
                              LOCK();
                              *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
                              local_31 = *(int *)local_98.field0_0x0 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_100b032f6;
                            }
                            QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
                          }
LAB_100b032f6:
                          if (*(int *)(local_68.field0_0x0 + 4) != 0) {
                            uVar12 = CHwHddPartition::getType();
                            cVar11 = FUN_100cd0010(uVar12);
                            if (cVar11 != '\0') {
                              local_100[0] = 0xff;
                              local_100[1] = 0;
                              local_100[2] = 0;
                              uStack_240 = auVar26._8_8_;
                              local_f0 = puVar7;
                              uStack_e8 = uStack_240;
                              uStack_250 = auVar27._8_8_;
                              local_e0 = puVar8;
                              uStack_d8 = uStack_250;
                              local_d0 = 0;
                              local_c8 = PTR_shared_null_1021e1288;
                              local_c0 = 0;
                              local_bc = 0;
                              local_b8 = 0;
                              local_a0 = 0;
                              local_a8 = 0;
                              local_b0 = 0;
                              QString::toUtf8();
                              iVar13 = FUN_100d50af0(local_108 + *(long *)(local_108 + 0x10),"",
                                                     local_100);
                              uVar24 = local_100[0] - 0x701;
                              if (*(int *)local_108 != -1) {
                                if (*(int *)local_108 != 0) {
                                  LOCK();
                                  *(int *)local_108 = *(int *)local_108 + -1;
                                  local_31 = *(int *)local_108 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_100b03420;
                                }
                                QArrayData::deallocate(local_108,1,8);
                              }
LAB_100b03420:
                              if (iVar13 == 0 && uVar24 < 3) {
                                CHwHddPartition::getSystemName();
                                QString::toUtf8();
                                FUN_100df99c0("","pvsHostInfo",0,"Device: %s, OS: Boot OS X 0x%X",
                                              local_110 + *(long *)(local_110 + 0x10),local_c0);
                                if (*(int *)local_110 != -1) {
                                  if (*(int *)local_110 != 0) {
                                    LOCK();
                                    *(int *)local_110 = *(int *)local_110 + -1;
                                    local_31 = *(int *)local_110 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100b034b3;
                                  }
                                  QArrayData::deallocate(local_110,1,8);
                                }
LAB_100b034b3:
                                if (*(int *)local_118 != -1) {
                                  if (*(int *)local_118 != 0) {
                                    LOCK();
                                    *(int *)local_118 = *(int *)local_118 + -1;
                                    local_31 = *(int *)local_118 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100b034e9;
                                  }
                                  QArrayData::deallocate(local_118,2,8);
                                }
LAB_100b034e9:
                                this = operator_new(0xa8);
                                CHwOsDistrInfo::CHwOsDistrInfo(this);
                                uVar24 = (uint)this;
                                CHwOsDistrInfo::setOsVersion(uVar24);
                                CHwOsDistrInfo::setOsArchitecture(uVar24);
                                CHwOsDistrInfo::setMajor(uVar24);
                                CHwOsDistrInfo::setMinor(uVar24);
                                CHwOsDistrInfo::setPatch(uVar24);
                                CHwHddPartition::setOsDistrInfo(pCVar3);
                              }
                              FUN_10005e410(local_100);
                            }
                            uVar12 = CHwHddPartition::getType();
                            cVar11 = FUN_100ccffc0(uVar12);
                            if (cVar11 != '\0') {
                              local_11c = 0;
                              local_120 = 0;
                              QString::toUtf8();
                              iVar13 = FUN_100d59730(local_128 + *(long *)(local_128 + 0x10),
                                                     &local_11c,&local_120);
                              if (*(int *)local_128 != -1) {
                                if (*(int *)local_128 != 0) {
                                  LOCK();
                                  *(int *)local_128 = *(int *)local_128 + -1;
                                  local_31 = *(int *)local_128 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_100b035ed;
                                }
                                QArrayData::deallocate(local_128,1,8);
                              }
LAB_100b035ed:
                              if (iVar13 == 0) {
                                CHwHddPartition::getSystemName();
                                QString::toUtf8();
                                FUN_100df99c0("","pvsHostInfo",0,
                                              "Device: %s, OS: BootCamp OS ver 0x%X",
                                              local_130 + *(long *)(local_130 + 0x10),local_11c);
                                if (*(int *)local_130 != -1) {
                                  if (*(int *)local_130 != 0) {
                                    LOCK();
                                    *(int *)local_130 = *(int *)local_130 + -1;
                                    local_31 = *(int *)local_130 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100b03681;
                                  }
                                  QArrayData::deallocate(local_130,1,8);
                                }
LAB_100b03681:
                                if (*(int *)local_138 != -1) {
                                  if (*(int *)local_138 != 0) {
                                    LOCK();
                                    *(int *)local_138 = *(int *)local_138 + -1;
                                    local_31 = *(int *)local_138 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100b036b7;
                                  }
                                  QArrayData::deallocate(local_138,2,8);
                                }
LAB_100b036b7:
                                this_00 = operator_new(0xa0);
                                CHwOsInfo::CHwOsInfo(this_00);
                                CHwOsInfo::setOsVersion((uint)this_00);
                                CHwOsInfo::setOsArchitecture((uint)this_00);
                                CHwHddPartition::setOsInfo((CHwOsInfo *)pCVar3);
                              }
                            }
                          }
                          bVar6 = true;
                          if (iVar14 == 0) {
                            if (2 < DAT_10230ffd0) {
                              QString::toUtf8();
                              FUN_100df99c0("","pvsHostInfo",3,"Unmounting: %s",
                                            local_140 + *(long *)(local_140 + 0x10));
                              if (*(int *)local_140 != -1) {
                                if (*(int *)local_140 != 0) {
                                  LOCK();
                                  *(int *)local_140 = *(int *)local_140 + -1;
                                  local_31 = *(int *)local_140 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_100b0377c;
                                }
                                QArrayData::deallocate(local_140,1,8);
                              }
                            }
LAB_100b0377c:
                            local_144 = 0;
                            iVar14 = FUN_100dd7020(&local_40,&local_144,3);
                            if ((iVar14 == 0) && (0 < DAT_10230ffd0)) {
                              QString::toUtf8();
                              FUN_100df99c0("","pvsHostInfo",1,"Unmount failed: %s",
                                            local_150 + *(long *)(local_150 + 0x10));
                              if (*(int *)local_150 != -1) {
                                if (*(int *)local_150 != 0) {
                                  LOCK();
                                  *(int *)local_150 = *(int *)local_150 + -1;
                                  local_31 = *(int *)local_150 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_100b038a1;
                                }
                                QArrayData::deallocate(local_150,1,8);
                              }
                            }
                          }
                        }
                      }
                      else {
                        bVar6 = false;
                      }
                    }
                    else {
                      bVar6 = false;
                    }
                  }
LAB_100b038a1:
                  if (*(int *)local_68.field0_0x0 != -1) {
                    if (*(int *)local_68.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
                      local_31 = *(int *)local_68.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b038d8;
                    }
                    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
                  }
LAB_100b038d8:
                  if (*(int *)local_40 != -1) {
                    if (*(int *)local_40 != 0) {
                      LOCK();
                      *(int *)local_40 = *(int *)local_40 + -1;
                      local_31 = *(int *)local_40 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b03908;
                    }
                    QArrayData::deallocate(local_40,2,8);
                  }
                }
LAB_100b03908:
                if (bVar6) {
                  if (2 < DAT_10230ffd0) {
                    CHwHddPartition::getSystemName();
                    QString::toUtf8();
                    FUN_100df99c0("","pvsHostInfo",3,"COS: disk %s have appeared",
                                  local_1d0 + *(long *)(local_1d0 + 0x10));
                    if (*(int *)local_1d0 != -1) {
                      if (*(int *)local_1d0 != 0) {
                        LOCK();
                        *(int *)local_1d0 = *(int *)local_1d0 + -1;
                        local_31 = *(int *)local_1d0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100b039a6;
                      }
                      QArrayData::deallocate(local_1d0,1,8);
                    }
LAB_100b039a6:
                    if (*(int *)local_1d8 != -1) {
                      if (*(int *)local_1d8 != 0) {
                        LOCK();
                        *(int *)local_1d8 = *(int *)local_1d8 + -1;
                        local_31 = *(int *)local_1d8 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_100b039dc;
                      }
                      QArrayData::deallocate(local_1d8,2,8);
                    }
                  }
LAB_100b039dc:
                  FUN_100b02720(param_1,pCVar3);
                  CHwHddPartition::getSystemName();
                  FUN_100062d00(&local_160,&local_1e0,local_38);
                  if (*(int *)local_1e0 != -1) {
                    if (*(int *)local_1e0 != 0) {
                      LOCK();
                      *(int *)local_1e0 = *(int *)local_1e0 + -1;
                      local_31 = *(int *)local_1e0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b03b20;
                    }
                    QArrayData::deallocate(local_1e0,2,8);
                  }
                }
                else if (2 < DAT_10230ffd0) {
                  CHwHddPartition::getSystemName();
                  QString::toUtf8();
                  FUN_100df99c0("","pvsHostInfo",3,"COS: disk %s failed to get osinfo on disk",
                                local_1e8 + *(long *)(local_1e8 + 0x10));
                  if (*(int *)local_1e8 != -1) {
                    if (*(int *)local_1e8 != 0) {
                      LOCK();
                      *(int *)local_1e8 = *(int *)local_1e8 + -1;
                      local_31 = *(int *)local_1e8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b03add;
                    }
                    QArrayData::deallocate(local_1e8,1,8);
                  }
LAB_100b03add:
                  if (*(int *)local_1f0 != -1) {
                    if (*(int *)local_1f0 != 0) {
                      LOCK();
                      *(int *)local_1f0 = *(int *)local_1f0 + -1;
                      local_31 = *(int *)local_1f0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b03b20;
                    }
                    QArrayData::deallocate(local_1f0,2,8);
                  }
                }
              }
              else {
                if (2 < DAT_10230ffd0) {
                  CHwHddPartition::getSystemName();
                  QString::toUtf8();
                  FUN_100df99c0("","pvsHostInfo",3,"COS: disk %s was already processed, skipping",
                                local_1b8 + *(long *)(local_1b8 + 0x10));
                  if (*(int *)local_1b8 != -1) {
                    if (*(int *)local_1b8 != 0) {
                      LOCK();
                      *(int *)local_1b8 = *(int *)local_1b8 + -1;
                      local_31 = *(int *)local_1b8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b02ead;
                    }
                    QArrayData::deallocate(local_1b8,1,8);
                  }
LAB_100b02ead:
                  if (*(int *)local_1c0 != -1) {
                    if (*(int *)local_1c0 != 0) {
                      LOCK();
                      *(int *)local_1c0 = *(int *)local_1c0 + -1;
                      local_31 = *(int *)local_1c0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100b02ef0;
                    }
                    QArrayData::deallocate(local_1c0,2,8);
                  }
                }
LAB_100b02ef0:
                FUN_100b029e0(param_1,pCVar3);
                CHwHddPartition::getSystemName();
                FUN_100062d00(&local_160,&local_1c8,local_158);
                if (*(int *)local_1c8 != -1) {
                  if (*(int *)local_1c8 != 0) {
                    LOCK();
                    *(int *)local_1c8 = *(int *)local_1c8 + -1;
                    local_31 = *(int *)local_1c8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100b03b20;
                  }
                  QArrayData::deallocate(local_1c8,2,8);
                }
              }
            }
          }
LAB_100b03b20:
          local_198 = local_198 + 8;
        } while (local_198 != local_190);
      }
      local_188 = 1;
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b03b75;
        }
        QListData::dispose(local_1a0);
      }
LAB_100b03b75:
      local_178 = local_178 + 8;
    } while (local_178 != local_170);
  }
  local_168 = 1;
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b03bd4;
    }
    QListData::dispose(local_180);
  }
LAB_100b03bd4:
  FUN_100b052f0(&local_1f8,param_1);
  local_218 = local_1f8;
  if (*local_1f8 != -1) {
    if (*local_1f8 == 0) {
      QListData::detach((int)&local_218);
      iVar14 = local_218[2];
      if (iVar14 != local_218[3]) {
        local_1f8 = local_1f8 + (long)local_1f8[2] * 2 + 4;
        piVar20 = local_218 + (long)iVar14 * 2 + 4;
        lVar16 = (long)local_218[3] * 8 + (long)iVar14 * -8;
        do {
          piVar4 = *(int **)local_1f8;
          *(int **)piVar20 = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_31 = *piVar4 != 0;
            UNLOCK();
          }
          piVar20 = piVar20 + 2;
          local_1f8 = local_1f8 + 2;
          lVar16 = lVar16 + -8;
        } while (lVar16 != 0);
      }
    }
    else {
      LOCK();
      *local_1f8 = *local_1f8 + 1;
      local_31 = *local_1f8 != 0;
      UNLOCK();
    }
  }
  pQVar21 = (QString *)(local_218 + (long)local_218[2] * 2 + 4);
  local_208 = (QString *)(local_218 + (long)local_218[3] * 2 + 4);
  local_210 = pQVar21;
  if (local_218[2] != local_218[3]) {
    do {
      p_Var9 = local_160;
      local_200 = 1;
      uVar24 = *(uint *)(local_160 + 0x20);
      local_210 = pQVar21;
      if (uVar24 == 0) {
LAB_100b03d30:
        if (2 < DAT_10230ffd0) {
          QString::toUtf8();
          FUN_100df99c0("","pvsHostInfo",3,"COS: disk %s disappeared",
                        local_220 + *(long *)(local_220 + 0x10));
          if (*(int *)local_220 != -1) {
            if (*(int *)local_220 != 0) {
              LOCK();
              *(int *)local_220 = *(int *)local_220 + -1;
              local_31 = *(int *)local_220 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b03db0;
            }
            QArrayData::deallocate(local_220,1,8);
          }
        }
LAB_100b03db0:
        FUN_100b05160(param_1,pQVar21);
      }
      else {
        uVar15 = qHash(pQVar21,*(uint *)(local_160 + 0x24));
        uVar5 = (ulong)uVar15 % (ulong)uVar24;
        p_Var22 = *(_func_void_Node_ptr **)(*(long *)(p_Var9 + 8) + uVar5 * 8);
        if (p_Var22 == p_Var9) goto LAB_100b03d30;
        p_Var25 = (_func_void_Node_ptr *)(*(long *)(p_Var9 + 8) + uVar5 * 8);
        do {
          p_Var23 = p_Var22;
          if (*(uint *)(p_Var22 + 8) == uVar15) {
            cVar11 = operator==(pQVar21,(QString *)(p_Var22 + 0x10));
            p_Var23 = *(_func_void_Node_ptr **)p_Var25;
            p_Var17 = p_Var23;
            if (cVar11 != '\0') break;
          }
          p_Var22 = *(_func_void_Node_ptr **)p_Var23;
          p_Var17 = p_Var9;
          p_Var25 = p_Var23;
        } while (p_Var22 != p_Var9);
        if (p_Var17 == p_Var9) goto LAB_100b03d30;
      }
      pQVar21 = local_210 + 1;
      local_210 = pQVar21;
    } while (pQVar21 != local_208);
  }
  local_200 = 1;
  FUN_100039a80(&local_218);
  FUN_100039a80(&local_1f8);
  if (*(int *)(local_160 + 0x10) != -1) {
    if (*(int *)(local_160 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_160 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QHashData::free_helper(local_160);
  }
  return;
}

