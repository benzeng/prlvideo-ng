
int FUN_1005de420(uint param_1,long *param_2,long *param_3,undefined4 *param_4,uint *param_5)

{
  long *plVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  size_t sVar15;
  QArrayData *pQVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined4 *puVar21;
  long *plVar22;
  QString *pQVar23;
  uint uVar24;
  long *plVar25;
  undefined8 uVar26;
  QArrayData *pQVar27;
  long lVar28;
  bool bVar29;
  undefined8 in_stack_fffffffffffffb58;
  undefined8 in_stack_fffffffffffffb60;
  undefined4 uVar30;
  long local_428;
  long local_408;
  uint local_400;
  long local_3f8;
  ulong local_3e0;
  int local_3c4;
  QArrayData *local_3a0;
  QString local_398;
  QArrayData *local_390;
  QArrayData *local_388;
  QArrayData *local_380;
  QArrayData *local_378;
  QArrayData *local_370;
  long *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  long local_350;
  undefined1 local_348 [24];
  long *local_330;
  long local_328;
  long *local_320;
  long local_318;
  int local_30c;
  undefined1 local_308 [8];
  uint local_300;
  QArrayData *local_2f8;
  long *local_2e8;
  QString local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QString local_290;
  QArrayData *local_288;
  QString local_280;
  QString local_278;
  QFileInfo local_270 [8];
  QString local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  undefined *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
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
  QRegExp local_138 [15];
  char local_129;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined1 local_d9;
  QArrayData *local_d8;
  undefined1 local_c9;
  undefined4 local_c8 [2];
  QArrayData *local_c0;
  QArrayData *local_b8;
  long local_b0;
  long local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  long local_38;
  
  uVar10 = (undefined4)((ulong)in_stack_fffffffffffffb58 >> 0x20);
  uVar30 = (undefined4)((ulong)in_stack_fffffffffffffb60 >> 0x20);
  lVar28 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_d9 = 0;
  local_38 = lVar28;
  if ((*param_2 == 0) || (lVar14 = *(long *)(*param_2 + 0x10), lVar14 == 0)) {
    uVar30 = 1;
    uVar26 = CONCAT44(uVar10,0x344);
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","RootVMDK.isValid()",
                  "VMwareDiskDescriptor.cpp",uVar26,"ValidateSnapshotsTree");
    uVar10 = (undefined4)((ulong)uVar26 >> 0x20);
    lVar14 = *(long *)(*param_2 + 0x10);
  }
  uVar26 = 0;
  if (*(long *)(lVar14 + 0x200) != 0) {
    uVar26 = *(undefined8 *)(*(long *)(lVar14 + 0x200) + 0x10);
  }
  local_e8 = (QArrayData *)QString::fromAscii_helper("DDB",3);
  local_f0 = (QArrayData *)QString::fromAscii_helper("ddb.uuid",8);
  lVar14 = FUN_1006aff80(uVar26,&local_e8,&local_f0);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_c9 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_c9) goto LAB_1005de557;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1005de557:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_c9 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_c9) goto LAB_1005de593;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1005de593:
  if (lVar14 == 0) {
    FUN_1007ea830(&local_48);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uVar26 = 0;
    _snprintf((char *)&local_88,0x40,
              "%02x %02x %02x %02x %02x %02x %02x %02x-%02x %02x %02x %02x %02x %02x %02x %02x",
              (ulong)(local_48 & 0xff),(ulong)(local_48 >> 8 & 0xff),
              ((ulong)local_48 & 0xff0000) >> 0x10,CONCAT44(uVar10,local_48 >> 0x18),
              CONCAT44(uVar30,uStack_44) & 0xffffffff000000ff,uStack_44 >> 8 & 0xff,
              uStack_44 >> 0x10 & 0xff,uStack_44 >> 0x18,local_40 & 0xff,local_40 >> 8 & 0xff,
              (uint)(CONCAT44(uStack_3c,local_40) >> 0x10) & 0xff,local_40 >> 0x18,uStack_3c & 0xff,
              uStack_3c >> 8 & 0xff,uStack_3c >> 0x10 & 0xff,uStack_3c >> 0x18);
    lVar28 = *(long *)(*(long *)(*param_2 + 0x10) + 0x200);
    if (lVar28 != 0) {
      uVar26 = *(undefined8 *)(lVar28 + 0x10);
    }
    local_160 = (QArrayData *)QString::fromAscii_helper("DDB",3);
    local_168 = (QArrayData *)QString::fromAscii_helper("ddb.uuid",8);
    local_170 = PTR_shared_null_100ba2188;
    sVar15 = _strlen((char *)&local_88);
    pQVar16 = (QArrayData *)QString::fromAscii_helper((char *)&local_88,(int)sVar15);
    local_178 = pQVar16;
    FUN_10000c490(&local_170,&local_178);
    cVar5 = FUN_1006ad450(uVar26,&local_160,&local_168,&local_170);
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 != 0) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + -1;
        local_c9 = *(int *)pQVar16 != 0;
        UNLOCK();
        if ((bool)local_c9) goto LAB_1005de9b8;
      }
      QArrayData::deallocate(pQVar16,2,8);
    }
LAB_1005de9b8:
    FUN_100013180(&local_170);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_c9 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_c9) goto LAB_1005dea03;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_1005dea03:
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_c9 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_c9) goto LAB_1005dea46;
      }
      QArrayData::deallocate(local_160,2,8);
    }
LAB_1005dea46:
    if (cVar5 == '\0') {
      QFileInfo::absoluteFilePath();
      QString::toUtf8();
      lVar28 = *(long *)PTR____stack_chk_guard_100ba2320;
      FUN_1008e3970("","vdisk",0,"Error: can\'t set ddb.uuid for VMDK \'%s\'",
                    local_180 + *(long *)(local_180 + 0x10));
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_c9 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_c9) goto LAB_1005debf1;
        }
        QArrayData::deallocate(local_180,1,8);
      }
LAB_1005debf1:
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_c9 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_c9) goto LAB_1005dec2d;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_1005dec2d:
      local_3c4 = -0x7ffdefdb;
      goto LAB_1005e1289;
    }
    local_3c4 = -0x7ffdefdb;
    bVar3 = true;
    lVar28 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1005deea6:
    FUN_1007d6c60(&local_98,&local_48);
    *(undefined8 *)(param_4 + 0x10) = local_90;
    *(undefined8 *)(param_4 + 0xe) = local_98;
    lVar14 = *(long *)(*(long *)(*param_2 + 0x10) + 0x200);
    uVar26 = 0;
    if (lVar14 != 0) {
      uVar26 = *(undefined8 *)(lVar14 + 0x10);
    }
    local_190 = (QArrayData *)QString::fromAscii_helper("DDB",3);
    local_198 = (QArrayData *)QString::fromAscii_helper("ddb.geometry.cylinders",0x16);
    lVar14 = FUN_1006aff80(uVar26,&local_190,&local_198);
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_c9 = *(int *)local_198 != 0;
        UNLOCK();
        if ((bool)local_c9) goto LAB_1005def66;
      }
      QArrayData::deallocate(local_198,2,8);
    }
LAB_1005def66:
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_c9 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_c9) goto LAB_1005defa2;
      }
      QArrayData::deallocate(local_190,2,8);
    }
LAB_1005defa2:
    if (lVar14 == 0) {
LAB_1005e1003:
      QFileInfo::absoluteFilePath();
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,
                    "Error: can\'t find ddb.geometry.cylinders in root VMDK \'%s\', incorrect format!"
                    ,local_1a0 + *(long *)(local_1a0 + 0x10));
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_c9 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_c9) goto LAB_1005e108d;
        }
        QArrayData::deallocate(local_1a0,1,8);
      }
LAB_1005e108d:
      local_3c4 = -0x7ffdd000;
      if (*(int *)local_1a8 == -1) goto LAB_1005e1289;
      local_1e8 = local_1a8;
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        iVar9 = *(int *)local_1a8;
        UNLOCK();
        goto joined_r0x0001005e126c;
      }
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x20);
      if (*(int *)(lVar14 + 0xc) - *(int *)(lVar14 + 8) != 1) goto LAB_1005e1003;
      uVar10 = QString::toUInt((bool *)(lVar14 + 0x10 + (long)*(int *)(lVar14 + 8) * 8),
                               (int)&local_d9);
      *param_4 = uVar10;
      param_4[7] = 0x200;
      *(undefined8 *)(param_4 + 8) = 0x200;
      lVar14 = *(long *)(*(long *)(*param_2 + 0x10) + 0x200);
      uVar26 = 0;
      if (lVar14 != 0) {
        uVar26 = *(undefined8 *)(lVar14 + 0x10);
      }
      local_1b0 = (QArrayData *)QString::fromAscii_helper("DDB",3);
      local_1b8 = (QArrayData *)QString::fromAscii_helper("ddb.geometry.heads",0x12);
      lVar14 = FUN_1006aff80(uVar26,&local_1b0,&local_1b8);
      if (*(int *)local_1b8 != -1) {
        if (*(int *)local_1b8 != 0) {
          LOCK();
          *(int *)local_1b8 = *(int *)local_1b8 + -1;
          local_c9 = *(int *)local_1b8 != 0;
          UNLOCK();
          if ((bool)local_c9) goto LAB_1005df089;
        }
        QArrayData::deallocate(local_1b8,2,8);
      }
LAB_1005df089:
      if (*(int *)local_1b0 != -1) {
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          local_c9 = *(int *)local_1b0 != 0;
          UNLOCK();
          if ((bool)local_c9) goto LAB_1005df0c5;
        }
        QArrayData::deallocate(local_1b0,2,8);
      }
LAB_1005df0c5:
      if (lVar14 != 0) {
        lVar14 = *(long *)(lVar14 + 0x20);
        if (*(int *)(lVar14 + 0xc) - *(int *)(lVar14 + 8) == 1) {
          uVar10 = QString::toUInt((bool *)(lVar14 + 0x10 + (long)*(int *)(lVar14 + 8) * 8),
                                   (int)&local_d9);
          param_4[2] = uVar10;
          lVar14 = *(long *)(*(long *)(*param_2 + 0x10) + 0x200);
          uVar26 = 0;
          if (lVar14 != 0) {
            uVar26 = *(undefined8 *)(lVar14 + 0x10);
          }
          local_1d0 = (QArrayData *)QString::fromAscii_helper("DDB",3);
          local_1d8 = (QArrayData *)QString::fromAscii_helper("ddb.geometry.sectors",0x14);
          lVar14 = FUN_1006aff80(uVar26,&local_1d0,&local_1d8);
          if (*(int *)local_1d8 != -1) {
            if (*(int *)local_1d8 != 0) {
              LOCK();
              *(int *)local_1d8 = *(int *)local_1d8 + -1;
              local_c9 = *(int *)local_1d8 != 0;
              UNLOCK();
              if ((bool)local_c9) goto LAB_1005df19c;
            }
            QArrayData::deallocate(local_1d8,2,8);
          }
LAB_1005df19c:
          if (*(int *)local_1d0 != -1) {
            if (*(int *)local_1d0 != 0) {
              LOCK();
              *(int *)local_1d0 = *(int *)local_1d0 + -1;
              local_c9 = *(int *)local_1d0 != 0;
              UNLOCK();
              if ((bool)local_c9) goto LAB_1005df1d8;
            }
            QArrayData::deallocate(local_1d0,2,8);
          }
LAB_1005df1d8:
          if (lVar14 != 0) {
            lVar14 = *(long *)(lVar14 + 0x20);
            if (*(int *)(lVar14 + 0xc) - *(int *)(lVar14 + 8) == 1) {
              uVar10 = QString::toUInt((bool *)(lVar14 + 0x10 + (long)*(int *)(lVar14 + 8) * 8),
                                       (int)&local_d9);
              param_4[1] = uVar10;
              FUN_10057e490();
              *param_5 = 0;
              plVar17 = param_3 + 1;
              if ((long *)*param_3 == plVar17) {
                uVar24 = 0;
                local_428 = 0;
              }
              else {
                uVar24 = 0;
                iVar9 = 0;
                local_428 = 0;
                plVar22 = (long *)*param_3;
                do {
                  QFileInfo::absoluteFilePath();
                  QFileInfo::absolutePath();
                  lVar28 = 0;
                  if (plVar22[6] != 0) {
                    lVar28 = *(long *)(plVar22[6] + 0x10);
                  }
                  cVar5 = FUN_1007ea210(lVar28 + 0x228);
                  lVar28 = plVar22[6];
                  if (cVar5 == '\0') {
                    lVar14 = 0;
                    if (lVar28 != 0) {
                      lVar14 = *(long *)(lVar28 + 0x10);
                    }
                    if ((long *)*plVar17 != (long *)0x0) {
                      plVar19 = (long *)*plVar17;
                      plVar18 = plVar17;
                      do {
                        while (plVar25 = plVar19, iVar8 = FUN_1007ea6f0(plVar25 + 4,lVar14 + 0x228),
                              iVar8 < 0) {
                          plVar1 = plVar25 + 1;
                          plVar25 = plVar18;
                          plVar19 = (long *)*plVar1;
                          if ((long *)*plVar1 == (long *)0x0) goto LAB_1005df3ab;
                        }
                        plVar19 = (long *)*plVar25;
                        plVar18 = plVar25;
                      } while ((long *)*plVar25 != (long *)0x0);
LAB_1005df3ab:
                      if ((plVar25 != plVar17) &&
                         (iVar8 = FUN_1007ea6f0(lVar14 + 0x228,plVar25 + 4), -1 < iVar8)) {
                        iVar8 = *(int *)(*(long *)(plVar25[6] + 0x10) + 0x210);
                        iVar13 = *(int *)(*(long *)(plVar22[6] + 0x10) + 0x214);
                        if (iVar8 == iVar13) goto LAB_1005df3f2;
                        QFileInfo::absoluteFilePath();
                        QString::toUtf8();
                        FUN_1008e3970("","vdisk",0,
                                      "Error: CID \'%x\' and parent CID \'%x\' differs, snapshot \'%s\' was changed in the middle of states path"
                                      ,iVar8,iVar13,local_210 + *(long *)(local_210 + 0x10));
                        if (*(int *)local_210 != -1) {
                          if (*(int *)local_210 != 0) {
                            LOCK();
                            *(int *)local_210 = *(int *)local_210 + -1;
                            local_c9 = *(int *)local_210 != 0;
                            UNLOCK();
                            if ((bool)local_c9) goto LAB_1005df792;
                          }
                          QArrayData::deallocate(local_210,1,8);
                        }
LAB_1005df792:
                        bVar29 = true;
                        if (*(int *)local_218 == -1) {
                          local_3c4 = -0x7ffdeffa;
                        }
                        else {
                          if (*(int *)local_218 != 0) {
                            LOCK();
                            *(int *)local_218 = *(int *)local_218 + -1;
                            local_c9 = *(int *)local_218 != 0;
                            UNLOCK();
                            if ((bool)local_c9) {
                              local_3c4 = -0x7ffdeffa;
                              goto LAB_1005e0ee8;
                            }
                          }
                          local_3c4 = -0x7ffdeffa;
                          QArrayData::deallocate(local_218,2,8);
                        }
                        goto LAB_1005e0ee8;
                      }
                    }
                    lVar28 = 0;
                    if (plVar22[6] != 0) {
                      lVar28 = *(long *)(plVar22[6] + 0x10);
                    }
                    FUN_1007d6a70(&local_208,lVar28 + 0x228);
                    QString::toLocal8Bit();
                    FUN_1008e3970("","vdisk",0,"Error: can\'t find parent VMDK by uid \'%s\'",
                                  local_200 + *(long *)(local_200 + 0x10));
                    if (*(int *)local_200 != -1) {
                      if (*(int *)local_200 != 0) {
                        LOCK();
                        *(int *)local_200 = *(int *)local_200 + -1;
                        local_c9 = *(int *)local_200 != 0;
                        UNLOCK();
                        if ((bool)local_c9) goto LAB_1005df4bd;
                      }
                      QArrayData::deallocate(local_200,1,8);
                    }
LAB_1005df4bd:
                    bVar29 = true;
                    if (*(int *)local_208 == -1) {
                      local_3c4 = -0x7ffdeffa;
                    }
                    else {
                      if (*(int *)local_208 != 0) {
                        LOCK();
                        *(int *)local_208 = *(int *)local_208 + -1;
                        local_c9 = *(int *)local_208 != 0;
                        UNLOCK();
                        if ((bool)local_c9) {
                          local_3c4 = -0x7ffdeffa;
                          goto LAB_1005e0ee8;
                        }
                      }
                      local_3c4 = -0x7ffdeffa;
                      QArrayData::deallocate(local_208,2,8);
                    }
                  }
                  else {
                    if (lVar28 != *param_2) {
                      FUN_1008e3970("","vdisk",0,"Error: wrong root VMDK");
                      local_3c4 = -0x7ffdeffa;
                      bVar29 = true;
                      goto LAB_1005e0ee8;
                    }
LAB_1005df3f2:
                    uVar12 = *param_5;
                    uVar11 = FUN_1005db030(&local_1f0,0);
                    if (uVar11 < uVar12) {
                      uVar12 = *param_5;
                    }
                    else {
                      uVar12 = FUN_1005db030(&local_1f0,0);
                    }
                    *param_5 = uVar12;
                    local_220 = PTR_shared_null_100ba2188;
                    lVar28 = *(long *)(*(long *)(plVar22[6] + 0x10) + 0x200);
                    uVar26 = 0;
                    if (lVar28 != 0) {
                      uVar26 = *(undefined8 *)(lVar28 + 0x10);
                    }
                    local_228 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
                    cVar5 = FUN_1006afe20(uVar26,&local_228,&local_220);
                    bVar29 = true;
                    if (cVar5 != '\0') {
                      bVar29 = *(int *)(local_220 + 0xc) == *(int *)(local_220 + 8);
                    }
                    if (*(int *)local_228 != -1) {
                      if (*(int *)local_228 != 0) {
                        LOCK();
                        *(int *)local_228 = *(int *)local_228 + -1;
                        local_c9 = *(int *)local_228 != 0;
                        UNLOCK();
                        if ((bool)local_c9) goto LAB_1005df5c1;
                      }
                      QArrayData::deallocate(local_228,2,8);
                    }
LAB_1005df5c1:
                    if (bVar29) {
                      QString::toUtf8();
                      FUN_1008e3970("","vdisk",0,
                                    "Error: can\'t get EXTENTS image names of VMDK \'%s\'",
                                    local_230 + *(long *)(local_230 + 0x10));
                      bVar29 = true;
                      if (*(int *)local_230 == -1) {
                        local_3c4 = -0x7ffdd000;
                      }
                      else {
                        if (*(int *)local_230 != 0) {
                          LOCK();
                          *(int *)local_230 = *(int *)local_230 + -1;
                          local_c9 = *(int *)local_230 != 0;
                          UNLOCK();
                          if ((bool)local_c9) {
                            local_3c4 = -0x7ffdd000;
                            goto LAB_1005e0edc;
                          }
                        }
                        local_3c4 = -0x7ffdd000;
                        QArrayData::deallocate(local_230,1,8);
                      }
                    }
                    else {
                      if (iVar9 == 0) {
                        iVar8 = *(int *)(local_220 + 8);
                        iVar13 = *(int *)(local_220 + 0xc);
                      }
                      else {
                        iVar8 = *(int *)(local_220 + 8);
                        iVar13 = *(int *)(local_220 + 0xc);
                        if (*(ulong *)(param_4 + 0x18) != (ulong)(uint)(iVar13 - iVar8)) {
                          QString::toUtf8();
                          FUN_1008e3970("","vdisk",0,
                                        "Error: extents size is different for next VMDK \'%s\'",
                                        local_238 + *(long *)(local_238 + 0x10));
                          bVar29 = true;
                          if (*(int *)local_238 == -1) {
                            local_3c4 = -0x7ffdd000;
                          }
                          else {
                            if (*(int *)local_238 != 0) {
                              LOCK();
                              *(int *)local_238 = *(int *)local_238 + -1;
                              local_c9 = *(int *)local_238 != 0;
                              UNLOCK();
                              if ((bool)local_c9) {
                                local_3c4 = -0x7ffdd000;
                                goto LAB_1005e0edc;
                              }
                            }
                            local_3c4 = -0x7ffdd000;
                            QArrayData::deallocate(local_238,1,8);
                          }
                          goto LAB_1005e0edc;
                        }
                      }
                      local_3e0 = 0;
                      local_3f8 = 1;
                      local_408 = 0;
                      if (iVar13 != iVar8) {
                        do {
                          lVar28 = *(long *)(*(long *)(plVar22[6] + 0x10) + 0x200);
                          uVar26 = 0;
                          if (lVar28 != 0) {
                            uVar26 = *(undefined8 *)(lVar28 + 0x10);
                          }
                          local_240 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
                          lVar28 = FUN_1006b0130(uVar26,&local_240,local_3e0);
                          if (*(int *)local_240 != -1) {
                            if (*(int *)local_240 != 0) {
                              LOCK();
                              *(int *)local_240 = *(int *)local_240 + -1;
                              local_c9 = *(int *)local_240 != 0;
                              UNLOCK();
                              if ((bool)local_c9) goto LAB_1005dfda6;
                            }
                            QArrayData::deallocate(local_240,2,8);
                          }
LAB_1005dfda6:
                          if (lVar28 == 0) {
LAB_1005e0bad:
                            QString::toUtf8();
                            FUN_1008e3970("","vdisk",0,
                                          "Error: can\'t get extent #%d for VMDK \'%s\', or values size is wrong!"
                                          ,local_3e0,local_248 + *(long *)(local_248 + 0x10));
                            bVar29 = true;
                            if (*(int *)local_248 == -1) {
                              local_3c4 = -0x7ffdd000;
                              goto LAB_1005e0edc;
                            }
                            if (*(int *)local_248 != 0) {
                              LOCK();
                              *(int *)local_248 = *(int *)local_248 + -1;
                              local_c9 = *(int *)local_248 != 0;
                              UNLOCK();
                              if ((bool)local_c9) {
                                local_3c4 = -0x7ffdd000;
                                goto LAB_1005e0edc;
                              }
                            }
                            local_3c4 = -0x7ffdd000;
                            QArrayData::deallocate(local_248,1,8);
                            goto LAB_1005e0edc;
                          }
                          lVar14 = *(long *)(lVar28 + 0x20);
                          if (*(int *)(lVar14 + 0xc) - *(int *)(lVar14 + 8) < 3) goto LAB_1005e0bad;
                          lVar14 = *(long *)(lVar14 + 0x20 + (long)*(int *)(lVar14 + 8) * 8);
                          iVar8 = QString::compare_helper
                                            (*(long *)(lVar14 + 0x10) + lVar14,
                                             *(undefined4 *)(lVar14 + 4),"SPARSE",0xffffffff,1);
                          if (iVar8 == 0) {
                            iVar8 = *(int *)(*(long *)(plVar22[6] + 0x10) + 0x240);
                            uVar26 = 0x5a;
                            if ((iVar8 != 0x5a) && (uVar26 = 0x5c, iVar8 != 0x5c))
                            goto LAB_1005dfe1c;
LAB_1005e0c66:
                            local_258 = *(QArrayData **)
                                         (*(long *)(lVar28 + 0x20) + 0x20 +
                                         (long)*(int *)(*(long *)(lVar28 + 0x20) + 8) * 8);
                            if (1 < *(int *)local_258 + 1U) {
                              LOCK();
                              *(int *)local_258 = *(int *)local_258 + 1;
                              local_c9 = *(int *)local_258 != 0;
                              UNLOCK();
                            }
                            QString::toLocal8Bit();
                            pQVar16 = local_250;
                            lVar28 = *(long *)(local_250 + 0x10);
                            QString::toUtf8();
                            FUN_1008e3970("","vdisk",0,
                                          "Error: inconsistent VMDK type \'%d\' and image type \'%s\' of VMDK \'%s\'"
                                          ,uVar26,pQVar16 + lVar28,
                                          local_260 + *(long *)(local_260 + 0x10));
                            if (*(int *)local_260 != -1) {
                              if (*(int *)local_260 != 0) {
                                LOCK();
                                *(int *)local_260 = *(int *)local_260 + -1;
                                local_c9 = *(int *)local_260 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e0d34;
                              }
                              QArrayData::deallocate(local_260,1,8);
                            }
LAB_1005e0d34:
                            if (*(int *)local_250 != -1) {
                              if (*(int *)local_250 != 0) {
                                LOCK();
                                *(int *)local_250 = *(int *)local_250 + -1;
                                local_c9 = *(int *)local_250 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e0d77;
                              }
                              QArrayData::deallocate(local_250,1,8);
                            }
LAB_1005e0d77:
                            bVar29 = true;
                            if (*(int *)local_258 == -1) {
                              local_3c4 = -0x7ffdd000;
                              goto LAB_1005e0edc;
                            }
                            if (*(int *)local_258 != 0) {
                              local_3c4 = -0x7ffdd000;
                              LOCK();
                              *(int *)local_258 = *(int *)local_258 + -1;
                              local_c9 = *(int *)local_258 != 0;
                              UNLOCK();
                              if ((bool)local_c9) goto LAB_1005e0edc;
                            }
                            local_3c4 = -0x7ffdd000;
                            QArrayData::deallocate(local_258,2,8);
                            goto LAB_1005e0edc;
                          }
LAB_1005dfe1c:
                          lVar14 = *(long *)(*(long *)(lVar28 + 0x20) + 0x20 +
                                            (long)*(int *)(*(long *)(lVar28 + 0x20) + 8) * 8);
                          iVar8 = QString::compare_helper
                                            (*(long *)(lVar14 + 0x10) + lVar14,
                                             *(undefined4 *)(lVar14 + 4),"FLAT",0xffffffff,1);
                          if (iVar8 == 0) {
                            iVar8 = *(int *)(*(long *)(plVar22[6] + 0x10) + 0x240);
                            uVar26 = 0x5b;
                            if ((iVar8 == 0x5b) || (uVar26 = 0x5d, iVar8 == 0x5d))
                            goto LAB_1005e0c66;
                          }
                          lVar14 = QString::toLongLong((bool *)(*(long *)(lVar28 + 0x20) + 0x18 +
                                                               (long)*(int *)(*(long *)(lVar28 + 
                                                  0x20) + 8) * 8),(int)&local_d9);
                          local_268.field0_0x0 =
                               (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
                          pQVar23 = (QString *)(lVar28 + 0x18);
                          QFileInfo::QFileInfo(local_270,pQVar23);
                          cVar5 = QFileInfo::isRelative();
                          QFileInfo::~QFileInfo(local_270);
                          if (cVar5 == '\0') {
                            QString::operator=(&local_268,pQVar23);
                          }
                          else {
                            uVar7 = QDir::separator();
                            local_288 = local_1f8;
                            if (1 < *(uint *)local_1f8 + 1) {
                              LOCK();
                              *(uint *)local_1f8 = *(uint *)local_1f8 + 1;
                              local_c9 = *(uint *)local_1f8 != 0;
                              UNLOCK();
                            }
                            uVar12 = *(uint *)(local_1f8 + 4);
                            if ((1 < *(uint *)local_1f8) ||
                               ((*(uint *)(local_1f8 + 8) & 0x7fffffff) < uVar12 + 2)) {
                              QString::reallocData((uint)&local_288,SUB41(uVar12 + 2,0));
                              uVar12 = *(uint *)(local_288 + 4);
                            }
                            *(uint *)(local_288 + 4) = uVar12 + 1;
                            *(undefined2 *)
                             (local_288 + (long)(int)uVar12 * 2 + *(long *)(local_288 + 0x10)) =
                                 uVar7;
                            *(undefined2 *)
                             (local_288 +
                             (long)(int)*(uint *)(local_288 + 4) * 2 + *(long *)(local_288 + 0x10))
                                 = 0;
                            if (1 < *(uint *)local_288 + 1) {
                              LOCK();
                              *(uint *)local_288 = *(uint *)local_288 + 1;
                              local_c9 = *(uint *)local_288 != 0;
                              UNLOCK();
                            }
                            local_280.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_288;
                            QString::append(&local_280);
                            QDir::fromNativeSeparators(&local_278);
                            QString::operator=(&local_268,&local_278);
                            if (*(int *)local_278.field0_0x0 != -1) {
                              if (*(int *)local_278.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + -1;
                                local_c9 = *(int *)local_278.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e0004;
                              }
                              QArrayData::deallocate((QArrayData *)local_278.field0_0x0,2,8);
                            }
LAB_1005e0004:
                            if (*(int *)local_280.field0_0x0 != -1) {
                              if (*(int *)local_280.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
                                local_c9 = *(int *)local_280.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e0040;
                              }
                              QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
                            }
LAB_1005e0040:
                            if (*(int *)local_288 != -1) {
                              if (*(int *)local_288 != 0) {
                                LOCK();
                                *(int *)local_288 = *(int *)local_288 + -1;
                                local_c9 = *(int *)local_288 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e0091;
                              }
                              QArrayData::deallocate(local_288,2,8);
                            }
                          }
LAB_1005e0091:
                          iVar8 = (int)local_3e0;
                          if ((param_1 & 2) == 0) {
LAB_1005e0429:
                            if (*(ulong *)(param_4 + 0x18) <= local_3e0) {
                              local_2e8 = (long *)0x0;
                              plVar18 = operator_new(0x10,(nothrow_t *)PTR_nothrow_100ba21c8);
                              plVar19 = (long *)0x0;
                              if (plVar18 != (long *)0x0) {
                                *plVar18 = (long)&PTR_FUN_10111e318;
                                *(int *)(plVar18 + 1) = iVar8;
                                plVar19 = plVar18;
                              }
                              plVar18 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
                              if (plVar18 == (long *)0x0) {
                                bVar29 = true;
                                if (plVar19 == (long *)0x0) {
                                  plVar18 = (long *)0x0;
                                }
                                else {
                                  (**(code **)(*plVar19 + 8))(plVar19);
                                  plVar18 = (long *)0x0;
                                }
                              }
                              else {
                                *(undefined4 *)(plVar18 + 1) = 1;
                                plVar18[2] = (long)plVar19;
                                *plVar18 = (long)&PTR_FUN_10111e1a8;
                                LOCK();
                                *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                                UNLOCK();
                                bVar29 = false;
                              }
                              plVar19 = plVar18;
                              if (local_2e8 != (long *)0x0) {
                                LOCK();
                                plVar25 = local_2e8 + 1;
                                lVar28 = *plVar25;
                                *(int *)plVar25 = (int)*plVar25 + -1;
                                UNLOCK();
                                if ((int)lVar28 == 1) {
                                  lVar28 = *local_2e8;
                                  local_2e8 = plVar18;
                                  (**(code **)(lVar28 + 0x10))();
                                  plVar19 = local_2e8;
                                }
                              }
                              local_2e8 = plVar19;
                              if (!bVar29) {
                                LOCK();
                                plVar19 = plVar18 + 1;
                                lVar28 = *plVar19;
                                *(int *)plVar19 = (int)*plVar19 + -1;
                                UNLOCK();
                                if ((int)lVar28 == 1) {
                                  (**(code **)(*plVar18 + 0x10))(plVar18);
                                }
                              }
                              if ((local_2e8 == (long *)0x0) || (local_2e8[2] == 0)) {
                                FUN_1008e3970("","vdisk",0,"Error: memory problems");
                                local_3c4 = -0x7ffffffe;
                                bVar29 = true;
                              }
                              else {
                                iVar13 = *(int *)(*(long *)(plVar22[6] + 0x10) + 0x240);
                                local_400 = 0x80;
                                if ((iVar13 != 0x5a) && (iVar13 != 0x5c)) {
                                  local_2f8 = (QArrayData *)PTR_shared_null_100ba20d0;
                                  local_30c = 0;
                                  plVar19 = (long *)FUN_100684400(&local_268,1,
                                                                  *(undefined4 *)
                                                                   (*(long *)(plVar22[6] + 0x10) +
                                                                   0x240),&local_30c,0);
                                  bVar4 = true;
                                  if (plVar19 == (long *)0x0) {
                                    local_400 = 0;
                                    local_3c4 = local_30c;
                                  }
                                  else {
                                    local_400 = 0;
                                    if (local_30c < 0) {
                                      local_3c4 = -0x7ffdefcd;
                                      (**(code **)(*plVar19 + 0x20))(plVar19);
                                    }
                                    else {
                                      iVar13 = (**(code **)(*plVar19 + 0x38))(plVar19,local_308);
                                      if (iVar13 < 0) {
                                        local_3c4 = -0x7ffdefcd;
                                        (**(code **)(*plVar19 + 0x20))(plVar19);
                                      }
                                      else {
                                        (**(code **)(*plVar19 + 0x20))(plVar19);
                                        local_400 = local_300;
                                        bVar4 = false;
                                      }
                                    }
                                  }
                                  if (*(int *)local_2f8 != -1) {
                                    if (*(int *)local_2f8 != 0) {
                                      LOCK();
                                      *(int *)local_2f8 = *(int *)local_2f8 + -1;
                                      local_c9 = *(int *)local_2f8 != 0;
                                      UNLOCK();
                                      if ((bool)local_c9) goto LAB_1005dface;
                                    }
                                    QArrayData::deallocate(local_2f8,2,8);
                                  }
LAB_1005dface:
                                  bVar29 = true;
                                  if (bVar4) goto LAB_1005e063a;
                                }
                                uVar12 = local_400;
                                if ((uVar24 != 0) && (uVar12 = uVar24, local_400 <= uVar24)) {
                                  uVar12 = local_400;
                                }
                                uVar24 = uVar12;
                                local_350 = 0;
                                local_360 = (QArrayData *)&local_360;
                                local_358 = (QArrayData *)&local_360;
                                FUN_1005b6ac0(local_348,local_408,local_408 + lVar14,0,local_3e0,
                                              &local_2e8,(QArrayData *)&local_360);
                                if (local_350 != 0) {
                                  lVar28 = *(long *)local_358;
                                  *(long *)(lVar28 + 8) = *(long *)(local_360 + 8);
                                  **(long **)(local_360 + 8) = lVar28;
                                  local_350 = 0;
                                  pQVar16 = local_358;
                                  while (pQVar16 != (QArrayData *)&local_360) {
                                    pQVar27 = *(QArrayData **)(pQVar16 + 8);
                                    FUN_10057e590(pQVar16 + 0x10);
                                    operator_delete(pQVar16);
                                    pQVar16 = pQVar27;
                                  }
                                }
                                bVar29 = false;
                                FUN_1005d5450(param_4 + 0x14,local_348);
                                if (local_318 != 0) {
                                  lVar28 = *local_320;
                                  *(undefined8 *)(lVar28 + 8) = *(undefined8 *)(local_328 + 8);
                                  **(long **)(local_328 + 8) = lVar28;
                                  local_318 = 0;
                                  plVar19 = local_320;
                                  if (local_320 != &local_328) {
                                    do {
                                      plVar18 = (long *)plVar19[1];
                                      FUN_10057e590(plVar19 + 2);
                                      operator_delete(plVar19);
                                      plVar19 = plVar18;
                                    } while (plVar18 != &local_328);
                                  }
                                }
                                if (local_330 != (long *)0x0) {
                                  LOCK();
                                  plVar19 = local_330 + 1;
                                  lVar28 = *plVar19;
                                  *(int *)plVar19 = (int)*plVar19 + -1;
                                  UNLOCK();
                                  if ((int)lVar28 == 1) {
                                    (**(code **)(*local_330 + 0x10))();
                                  }
                                }
                              }
LAB_1005e063a:
                              if (local_2e8 != (long *)0x0) {
                                LOCK();
                                plVar19 = local_2e8 + 1;
                                lVar28 = *plVar19;
                                *(int *)plVar19 = (int)*plVar19 + -1;
                                UNLOCK();
                                if ((int)lVar28 == 1) {
                                  (**(code **)(*local_2e8 + 0x10))();
                                }
                              }
                              bVar4 = true;
                              if (bVar29) goto LAB_1005e09ee;
                            }
                            lVar28 = *(long *)(param_4 + 0x16);
                            lVar20 = local_3f8;
                            if (iVar8 != 0) {
                              do {
                                lVar28 = *(long *)(lVar28 + 8);
                                lVar20 = lVar20 + -1;
                              } while (1 < lVar20);
                            }
                            local_368 = (long *)0x0;
                            plVar18 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
                            plVar19 = (long *)0x0;
                            if (plVar18 != (long *)0x0) {
                              *plVar18 = (long)&PTR_FUN_10111e338;
                              lVar20 = plVar22[6];
                              plVar18[1] = lVar20;
                              if (lVar20 != 0) {
                                LOCK();
                                *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
                                UNLOCK();
                              }
                              pQVar2 = pQVar23->field0_0x0;
                              plVar18[2] = (long)pQVar2;
                              plVar19 = plVar18;
                              if (1 < *(int *)pQVar2 + 1U) {
                                LOCK();
                                *(int *)pQVar2 = *(int *)pQVar2 + 1;
                                local_c9 = *(int *)pQVar2 != 0;
                                UNLOCK();
                              }
                            }
                            plVar18 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
                            if (plVar18 == (long *)0x0) {
                              bVar29 = true;
                              if (plVar19 == (long *)0x0) {
                                plVar18 = (long *)0x0;
                              }
                              else {
                                (**(code **)(*plVar19 + 8))(plVar19);
                                plVar18 = (long *)0x0;
                              }
                            }
                            else {
                              *(undefined4 *)(plVar18 + 1) = 1;
                              plVar18[2] = (long)plVar19;
                              *plVar18 = (long)&PTR_FUN_10111e208;
                              LOCK();
                              *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                              UNLOCK();
                              bVar29 = false;
                            }
                            plVar19 = plVar18;
                            if (local_368 != (long *)0x0) {
                              LOCK();
                              plVar25 = local_368 + 1;
                              lVar20 = *plVar25;
                              *(int *)plVar25 = (int)*plVar25 + -1;
                              UNLOCK();
                              if ((int)lVar20 == 1) {
                                lVar20 = *local_368;
                                local_368 = plVar18;
                                (**(code **)(lVar20 + 0x10))();
                                plVar19 = local_368;
                              }
                            }
                            local_368 = plVar19;
                            if (!bVar29) {
                              LOCK();
                              plVar19 = plVar18 + 1;
                              lVar20 = *plVar19;
                              *(int *)plVar19 = (int)*plVar19 + -1;
                              UNLOCK();
                              if ((int)lVar20 == 1) {
                                (**(code **)(*plVar18 + 0x10))(plVar18);
                              }
                            }
                            if ((local_368 == (long *)0x0) || (local_368[2] == 0)) {
                              FUN_1008e3970("","vdisk",0,"Error: memory problems");
                              local_3c4 = -0x7ffffffe;
                              bVar4 = true;
                            }
                            else {
                              puVar21 = (undefined4 *)&DAT_00000240;
                              lVar20 = 0;
                              if (plVar22[6] != 0) {
                                lVar20 = *(long *)(plVar22[6] + 0x10);
                                puVar21 = (undefined4 *)(lVar20 + 0x240);
                              }
                              FUN_1005b6860(local_c8,*puVar21,pQVar23,&local_268,lVar20 + 0x218,
                                            &local_368);
                              plVar19 = operator_new(0x40);
                              *(undefined4 *)(plVar19 + 2) = local_c8[0];
                              plVar19[3] = (long)local_c0;
                              if (1 < *(int *)local_c0 + 1U) {
                                LOCK();
                                *(int *)local_c0 = *(int *)local_c0 + 1;
                                local_c9 = *(int *)local_c0 != 0;
                                UNLOCK();
                              }
                              *(undefined4 *)(plVar19 + 2) = local_c8[0];
                              plVar19[4] = (long)local_b8;
                              if (1 < *(int *)local_b8 + 1U) {
                                LOCK();
                                *(int *)local_b8 = *(int *)local_b8 + 1;
                                local_c9 = *(int *)local_b8 != 0;
                                UNLOCK();
                              }
                              plVar19[6] = local_a8;
                              plVar19[5] = local_b0;
                              plVar19[7] = (long)local_a0;
                              if (local_a0 != (long *)0x0) {
                                LOCK();
                                *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                                UNLOCK();
                              }
                              plVar19[1] = lVar28 + 0x30;
                              lVar20 = *(long *)(lVar28 + 0x30);
                              *plVar19 = lVar20;
                              *(long **)(lVar20 + 8) = plVar19;
                              *(long **)(lVar28 + 0x30) = plVar19;
                              *(long *)(lVar28 + 0x40) = *(long *)(lVar28 + 0x40) + 1;
                              bVar4 = false;
                              if (local_a0 != (long *)0x0) {
                                LOCK();
                                plVar19 = local_a0 + 1;
                                lVar28 = *plVar19;
                                *(int *)plVar19 = (int)*plVar19 + -1;
                                UNLOCK();
                                if ((int)lVar28 == 1) {
                                  (**(code **)(*local_a0 + 0x10))();
                                }
                              }
                              if (*(int *)local_b8 != -1) {
                                if (*(int *)local_b8 != 0) {
                                  LOCK();
                                  *(int *)local_b8 = *(int *)local_b8 + -1;
                                  local_c9 = *(int *)local_b8 != 0;
                                  UNLOCK();
                                  if ((bool)local_c9) goto LAB_1005e0941;
                                }
                                QArrayData::deallocate(local_b8,2,8);
                              }
LAB_1005e0941:
                              if (*(int *)local_c0 != -1) {
                                if (*(int *)local_c0 != 0) {
                                  LOCK();
                                  *(int *)local_c0 = *(int *)local_c0 + -1;
                                  local_c9 = *(int *)local_c0 != 0;
                                  UNLOCK();
                                  if ((bool)local_c9) goto LAB_1005e09ae;
                                }
                                QArrayData::deallocate(local_c0,2,8);
                              }
                            }
LAB_1005e09ae:
                            local_408 = local_408 + lVar14;
                            if (local_368 != (long *)0x0) {
                              LOCK();
                              plVar19 = local_368 + 1;
                              lVar28 = *plVar19;
                              *(int *)plVar19 = (int)*plVar19 + -1;
                              UNLOCK();
                              if ((int)lVar28 == 1) {
                                (**(code **)(*local_368 + 0x10))();
                              }
                            }
                          }
                          else {
                            if ((plVar22[6] == 0) ||
                               (lVar28 = *(long *)(plVar22[6] + 0x10), lVar28 == 0)) {
                              FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                                            "VMDK.isValid()","VMwareDiskDescriptor.cpp",0xd4,
                                            "IsVMDKEmbedded");
                              lVar28 = *(long *)(plVar22[6] + 0x10);
                            }
                            if (*(int *)(lVar28 + 0x240) != 0x5b) goto LAB_1005e0429;
                            QFileInfo::absoluteFilePath();
                            cVar5 = operator==(&local_290,&local_268);
                            if (*(int *)local_290.field0_0x0 != -1) {
                              if (*(int *)local_290.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_290.field0_0x0 = *(int *)local_290.field0_0x0 + -1;
                                local_c9 = *(int *)local_290.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e0174;
                              }
                              QArrayData::deallocate((QArrayData *)local_290.field0_0x0,2,8);
                            }
LAB_1005e0174:
                            if (cVar5 != '\0') goto LAB_1005e0429;
                            QFileInfo::absoluteFilePath();
                            QString::toUtf8();
                            pQVar16 = local_298;
                            lVar28 = *(long *)(local_298 + 0x10);
                            QString::toUtf8();
                            FUN_1008e3970("","vdisk",0,
                                          "Warning: embedded descriptor of VMDK \'%s\' has wrong extent name \'%s\'. Was VMDK file simply renamed? Ok, we will fix this extent and open image correctly regardless this trouble!"
                                          ,pQVar16 + lVar28,local_2a8 + *(long *)(local_2a8 + 0x10))
                            ;
                            if (*(int *)local_2a8 != -1) {
                              if (*(int *)local_2a8 != 0) {
                                LOCK();
                                *(int *)local_2a8 = *(int *)local_2a8 + -1;
                                local_c9 = *(int *)local_2a8 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e0241;
                              }
                              QArrayData::deallocate(local_2a8,1,8);
                            }
LAB_1005e0241:
                            if (*(int *)local_298 != -1) {
                              if (*(int *)local_298 != 0) {
                                LOCK();
                                *(int *)local_298 = *(int *)local_298 + -1;
                                local_c9 = *(int *)local_298 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e027d;
                              }
                              QArrayData::deallocate(local_298,1,8);
                            }
LAB_1005e027d:
                            if (*(int *)local_2a0 != -1) {
                              if (*(int *)local_2a0 != 0) {
                                LOCK();
                                *(int *)local_2a0 = *(int *)local_2a0 + -1;
                                local_c9 = *(int *)local_2a0 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e02b9;
                              }
                              QArrayData::deallocate(local_2a0,2,8);
                            }
LAB_1005e02b9:
                            lVar28 = *(long *)(*(long *)(plVar22[6] + 0x10) + 0x200);
                            uVar26 = 0;
                            if (lVar28 != 0) {
                              uVar26 = *(undefined8 *)(lVar28 + 0x10);
                            }
                            local_2b0 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
                            QFileInfo::fileName();
                            cVar5 = FUN_1006afc70(uVar26,&local_2b0,pQVar23,&local_2b8);
                            if (*(int *)local_2b8 != -1) {
                              if (*(int *)local_2b8 != 0) {
                                LOCK();
                                *(int *)local_2b8 = *(int *)local_2b8 + -1;
                                local_c9 = *(int *)local_2b8 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e0370;
                              }
                              QArrayData::deallocate(local_2b8,2,8);
                            }
LAB_1005e0370:
                            if (*(int *)local_2b0 != -1) {
                              if (*(int *)local_2b0 != 0) {
                                LOCK();
                                *(int *)local_2b0 = *(int *)local_2b0 + -1;
                                local_c9 = *(int *)local_2b0 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e03ac;
                              }
                              QArrayData::deallocate(local_2b0,2,8);
                            }
LAB_1005e03ac:
                            if (cVar5 != '\0') {
                              QFileInfo::absoluteFilePath();
                              QString::operator=(&local_268,&local_2e0);
                              if (*(int *)local_2e0.field0_0x0 != -1) {
                                if (*(int *)local_2e0.field0_0x0 != 0) {
                                  LOCK();
                                  *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + -1;
                                  local_c9 = *(int *)local_2e0.field0_0x0 != 0;
                                  UNLOCK();
                                  if ((bool)local_c9) goto LAB_1005e0429;
                                }
                                QArrayData::deallocate((QArrayData *)local_2e0.field0_0x0,2,8);
                              }
                              goto LAB_1005e0429;
                            }
                            QFileInfo::fileName();
                            QString::toUtf8();
                            pQVar27 = local_2c0 + *(long *)(local_2c0 + 0x10);
                            QString::toUtf8();
                            pQVar16 = local_2d0;
                            lVar28 = *(long *)(local_2d0 + 0x10);
                            QString::toUtf8();
                            FUN_1008e3970("","vdisk",0,
                                          "Error: can\'t set key \'%s\' for extent \'%s\' in VMDK \'%s\'"
                                          ,pQVar27,pQVar16 + lVar28,
                                          local_2d8 + *(long *)(local_2d8 + 0x10));
                            if (*(int *)local_2d8 != -1) {
                              if (*(int *)local_2d8 != 0) {
                                LOCK();
                                *(int *)local_2d8 = *(int *)local_2d8 + -1;
                                local_c9 = *(int *)local_2d8 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005df97d;
                              }
                              QArrayData::deallocate(local_2d8,1,8);
                            }
LAB_1005df97d:
                            if (*(int *)local_2d0 != -1) {
                              if (*(int *)local_2d0 != 0) {
                                LOCK();
                                *(int *)local_2d0 = *(int *)local_2d0 + -1;
                                local_c9 = *(int *)local_2d0 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005df9c0;
                              }
                              QArrayData::deallocate(local_2d0,1,8);
                            }
LAB_1005df9c0:
                            if (*(int *)local_2c0 != -1) {
                              if (*(int *)local_2c0 != 0) {
                                LOCK();
                                *(int *)local_2c0 = *(int *)local_2c0 + -1;
                                local_c9 = *(int *)local_2c0 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005df9fc;
                              }
                              QArrayData::deallocate(local_2c0,1,8);
                            }
LAB_1005df9fc:
                            bVar4 = true;
                            if (*(int *)local_2c8 == -1) {
                              local_3c4 = -0x7ffdefdb;
                            }
                            else {
                              if (*(int *)local_2c8 != 0) {
                                LOCK();
                                *(int *)local_2c8 = *(int *)local_2c8 + -1;
                                local_c9 = *(int *)local_2c8 != 0;
                                UNLOCK();
                                if ((bool)local_c9) {
                                  local_3c4 = -0x7ffdefdb;
                                  goto LAB_1005e09ee;
                                }
                              }
                              local_3c4 = -0x7ffdefdb;
                              QArrayData::deallocate(local_2c8,2,8);
                            }
                          }
LAB_1005e09ee:
                          if (*(int *)local_268.field0_0x0 != -1) {
                            if (*(int *)local_268.field0_0x0 != 0) {
                              LOCK();
                              *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
                              local_c9 = *(int *)local_268.field0_0x0 != 0;
                              UNLOCK();
                              if ((bool)local_c9) goto LAB_1005e0a2a;
                            }
                            QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
                          }
LAB_1005e0a2a:
                          bVar29 = true;
                          if (bVar4) goto LAB_1005e0edc;
                          local_3e0 = (ulong)(iVar8 + 1U);
                          local_3f8 = local_3f8 + 1;
                        } while (iVar8 + 1U <
                                 (uint)(*(int *)(local_220 + 0xc) - *(int *)(local_220 + 8)));
                        if (local_408 != 0) {
                          bVar29 = false;
                          if (local_428 == 0) {
                            local_428 = local_408;
                          }
                          else if (local_428 != local_408) {
                            QString::toUtf8();
                            FUN_1008e3970("","vdisk",0,
                                          "Error: VMDK \'%s\' summary extent size \'%llu\' is not equal to disk size \'%llu\', incorrect format"
                                          ,local_378 + *(long *)(local_378 + 0x10),local_408,
                                          local_428);
                            local_3c4 = -0x7ffdd000;
                            bVar29 = true;
                            if (*(int *)local_378 != -1) {
                              if (*(int *)local_378 != 0) {
                                LOCK();
                                *(int *)local_378 = *(int *)local_378 + -1;
                                local_c9 = *(int *)local_378 != 0;
                                UNLOCK();
                                if ((bool)local_c9) goto LAB_1005e0edc;
                              }
                              QArrayData::deallocate(local_378,1,8);
                            }
                          }
                          goto LAB_1005e0edc;
                        }
                      }
                      QString::toUtf8();
                      FUN_1008e3970("","vdisk",0,
                                    "Error: VMDK \'%s\' summary extent size is zero, incorrect format"
                                    ,local_370 + *(long *)(local_370 + 0x10));
                      bVar29 = true;
                      if (*(int *)local_370 == -1) {
                        local_3c4 = -0x7ffdd000;
                      }
                      else {
                        if (*(int *)local_370 != 0) {
                          LOCK();
                          *(int *)local_370 = *(int *)local_370 + -1;
                          local_c9 = *(int *)local_370 != 0;
                          UNLOCK();
                          if ((bool)local_c9) {
                            local_3c4 = -0x7ffdd000;
                            goto LAB_1005e0edc;
                          }
                        }
                        local_3c4 = -0x7ffdd000;
                        QArrayData::deallocate(local_370,1,8);
                      }
                    }
LAB_1005e0edc:
                    FUN_100013180(&local_220);
                  }
LAB_1005e0ee8:
                  if (*(int *)local_1f8 != -1) {
                    if (*(int *)local_1f8 != 0) {
                      LOCK();
                      *(int *)local_1f8 = *(int *)local_1f8 + -1;
                      local_c9 = *(int *)local_1f8 != 0;
                      UNLOCK();
                      if ((bool)local_c9) goto LAB_1005e0f24;
                    }
                    QArrayData::deallocate(local_1f8,2,8);
                  }
LAB_1005e0f24:
                  if (*(int *)local_1f0 != -1) {
                    if (*(int *)local_1f0 != 0) {
                      LOCK();
                      *(int *)local_1f0 = *(int *)local_1f0 + -1;
                      local_c9 = *(int *)local_1f0 != 0;
                      UNLOCK();
                      if ((bool)local_c9) goto LAB_1005e0f60;
                    }
                    QArrayData::deallocate(local_1f0,2,8);
                  }
LAB_1005e0f60:
                  if (bVar29) {
                    lVar28 = *(long *)PTR____stack_chk_guard_100ba2320;
                    goto LAB_1005e1289;
                  }
                  plVar19 = (long *)plVar22[1];
                  if ((long *)plVar22[1] == (long *)0x0) {
                    do {
                      plVar18 = (long *)plVar22[2];
                      bVar29 = (long *)*plVar18 != plVar22;
                      plVar22 = plVar18;
                    } while (bVar29);
                  }
                  else {
                    do {
                      plVar18 = plVar19;
                      plVar19 = (long *)*plVar18;
                    } while ((long *)*plVar18 != (long *)0x0);
                  }
                  iVar9 = iVar9 + 1;
                  plVar22 = plVar18;
                } while (plVar18 != plVar17);
                lVar28 = *(long *)PTR____stack_chk_guard_100ba2320;
              }
              for (puVar21 = *(undefined4 **)(param_4 + 0x16); puVar21 != param_4 + 0x14;
                  puVar21 = *(undefined4 **)(puVar21 + 2)) {
                puVar21[8] = uVar24;
              }
              if ((bVar3) && (local_3c4 = FUN_1005da290(param_2), local_3c4 < 0)) {
                QFileInfo::absoluteFilePath();
                QString::toUtf8();
                FUN_1008e3970("","vdisk",0,"Error: save of root VMDK \'%s\' failed [%x]",
                              local_380 + *(long *)(local_380 + 0x10),local_3c4);
                if (*(int *)local_380 != -1) {
                  if (*(int *)local_380 != 0) {
                    LOCK();
                    *(int *)local_380 = *(int *)local_380 + -1;
                    local_c9 = *(int *)local_380 != 0;
                    UNLOCK();
                    if ((bool)local_c9) goto LAB_1005e1501;
                  }
                  QArrayData::deallocate(local_380,1,8);
                }
LAB_1005e1501:
                if (*(int *)local_388 != -1) {
                  if (*(int *)local_388 != 0) {
                    LOCK();
                    *(int *)local_388 = *(int *)local_388 + -1;
                    local_c9 = *(int *)local_388 != 0;
                    UNLOCK();
                    if ((bool)local_c9) goto LAB_1005e1289;
                  }
                  QArrayData::deallocate(local_388,2,8);
                }
                goto LAB_1005e1289;
              }
              *(long *)(param_4 + 4) = local_428;
              param_4[6] = 0;
              QFileInfo::fileName();
              local_3a0 = (QArrayData *)QString::fromAscii_helper("(-\\d{6})?\\.vmdk$",0x10);
              QRegExp::QRegExp((QRegExp *)&local_398,&local_3a0,1,0);
              local_d8 = (QArrayData *)PTR_shared_null_100ba20d0;
              pQVar23 = (QString *)QString::replace((QRegExp *)&local_390,&local_398);
              if (*(int *)local_d8 != -1) {
                if (*(int *)local_d8 != 0) {
                  LOCK();
                  *(int *)local_d8 = *(int *)local_d8 + -1;
                  local_c9 = *(int *)local_d8 != 0;
                  UNLOCK();
                  if ((bool)local_c9) goto LAB_1005e13a7;
                }
                QArrayData::deallocate(local_d8,2,8);
              }
LAB_1005e13a7:
              QString::operator=((QString *)(param_4 + 0x12),pQVar23);
              QRegExp::~QRegExp((QRegExp *)&local_398);
              if (*(int *)local_3a0 != -1) {
                if (*(int *)local_3a0 != 0) {
                  LOCK();
                  *(int *)local_3a0 = *(int *)local_3a0 + -1;
                  local_c9 = *(int *)local_3a0 != 0;
                  UNLOCK();
                  if ((bool)local_c9) goto LAB_1005e13fe;
                }
                QArrayData::deallocate(local_3a0,2,8);
              }
LAB_1005e13fe:
              local_3c4 = 0;
              if (*(int *)local_390 != -1) {
                if (*(int *)local_390 != 0) {
                  LOCK();
                  *(int *)local_390 = *(int *)local_390 + -1;
                  local_c9 = *(int *)local_390 != 0;
                  UNLOCK();
                  if ((bool)local_c9) goto LAB_1005e1289;
                }
                QArrayData::deallocate(local_390,2,8);
                local_3c4 = 0;
              }
              goto LAB_1005e1289;
            }
          }
          QFileInfo::absoluteFilePath();
          QString::toUtf8();
          FUN_1008e3970("","vdisk",0,
                        "Error: can\'t find ddb.geometry.sectors in root VMDK \'%s\', incorrect format!"
                        ,local_1e0 + *(long *)(local_1e0 + 0x10));
          if (*(int *)local_1e0 != -1) {
            if (*(int *)local_1e0 != 0) {
              LOCK();
              *(int *)local_1e0 = *(int *)local_1e0 + -1;
              local_c9 = *(int *)local_1e0 != 0;
              UNLOCK();
              if ((bool)local_c9) goto LAB_1005e1243;
            }
            QArrayData::deallocate(local_1e0,1,8);
          }
LAB_1005e1243:
          local_3c4 = -0x7ffdd000;
          if (*(int *)local_1e8 == -1) goto LAB_1005e1289;
          if (*(int *)local_1e8 != 0) {
            LOCK();
            *(int *)local_1e8 = *(int *)local_1e8 + -1;
            iVar9 = *(int *)local_1e8;
            UNLOCK();
            goto joined_r0x0001005e126c;
          }
          goto LAB_1005e1275;
        }
      }
      QFileInfo::absoluteFilePath();
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,
                    "Error: can\'t find ddb.geometry.heads in root VMDK \'%s\', incorrect format!",
                    local_1c0 + *(long *)(local_1c0 + 0x10));
      if (*(int *)local_1c0 != -1) {
        if (*(int *)local_1c0 != 0) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + -1;
          local_c9 = *(int *)local_1c0 != 0;
          UNLOCK();
          if ((bool)local_c9) goto LAB_1005e1168;
        }
        QArrayData::deallocate(local_1c0,1,8);
      }
LAB_1005e1168:
      local_3c4 = -0x7ffdd000;
      if (*(int *)local_1c8 == -1) goto LAB_1005e1289;
      local_1e8 = local_1c8;
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        iVar9 = *(int *)local_1c8;
        UNLOCK();
        goto joined_r0x0001005e126c;
      }
    }
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x20);
    if (*(int *)(lVar14 + 0xc) - *(int *)(lVar14 + 8) == 1) {
      local_108 = *(QArrayData **)(lVar14 + 0x10 + (long)*(int *)(lVar14 + 8) * 8);
      if (1 < *(int *)local_108 + 1U) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + 1;
        local_c9 = *(int *)local_108 != 0;
        UNLOCK();
      }
      local_118 = (QArrayData *)QString::fromAscii_helper("^[- 0-9a-fA-F]{47}$",0x13);
      QRegExp::QRegExp((QRegExp *)&local_110,&local_118,1,0);
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_c9 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_c9) goto LAB_1005de640;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1005de640:
      cVar5 = QRegExp::exactMatch(&local_110);
      if (cVar5 == '\0') {
        QFileInfo::absoluteFilePath();
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,
                      "Error: can\'t parse ddb.uuid in root VMDK \'%s\', incorrect format!",
                      local_120 + *(long *)(local_120 + 0x10));
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_c9 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_c9) goto LAB_1005decd0;
          }
          QArrayData::deallocate(local_120,1,8);
        }
LAB_1005decd0:
        bVar3 = true;
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_c9 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_c9) goto LAB_1005dee39;
          }
          QArrayData::deallocate(local_128,2,8);
        }
      }
      else {
        local_129 = '\x01';
        local_140 = (QArrayData *)QString::fromAscii_helper("([0-9a-fA-F]{2})",0x10);
        QRegExp::QRegExp(local_138,&local_140,1,0);
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_c9 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_c9) goto LAB_1005de6d0;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_1005de6d0:
        if (local_129 == '\0') {
LAB_1005ded53:
          QFileInfo::absoluteFilePath();
          QString::toUtf8();
          FUN_1008e3970("","vdisk",0,
                        "Error: can\'t parse ddb.uuid in root VMDK \'%s\', incorrect format!",
                        local_150 + *(long *)(local_150 + 0x10));
          if (*(int *)local_150 != -1) {
            if (*(int *)local_150 != 0) {
              LOCK();
              *(int *)local_150 = *(int *)local_150 + -1;
              local_c9 = *(int *)local_150 != 0;
              UNLOCK();
              if ((bool)local_c9) goto LAB_1005dedec;
            }
            QArrayData::deallocate(local_150,1,8);
          }
LAB_1005dedec:
          bVar3 = true;
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_c9 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_c9) goto LAB_1005dee2d;
            }
            QArrayData::deallocate(local_158,2,8);
          }
        }
        else {
          lVar14 = 0;
          iVar9 = 0;
          while (iVar8 = QRegExp::indexIn(local_138,&local_108,iVar9,0), iVar8 != -1) {
            QRegExp::cap((int)&local_148);
            uVar6 = QString::toInt((bool *)&local_148,(int)&local_129);
            *(undefined1 *)((long)&local_48 + lVar14) = uVar6;
            if (*(int *)local_148 != -1) {
              if (*(int *)local_148 != 0) {
                LOCK();
                *(int *)local_148 = *(int *)local_148 + -1;
                local_c9 = *(int *)local_148 != 0;
                UNLOCK();
                if ((bool)local_c9) goto LAB_1005de785;
              }
              QArrayData::deallocate(local_148,2,8);
            }
LAB_1005de785:
            iVar9 = QRegExp::matchedLength();
            lVar14 = lVar14 + 1;
            if ((0xf < lVar14) || (iVar9 = iVar9 + iVar8, local_129 == '\0')) break;
          }
          lVar28 = *(long *)PTR____stack_chk_guard_100ba2320;
          if (((int)lVar14 != 0x10) || (bVar3 = false, local_129 == '\0')) goto LAB_1005ded53;
        }
LAB_1005dee2d:
        QRegExp::~QRegExp(local_138);
      }
LAB_1005dee39:
      QRegExp::~QRegExp((QRegExp *)&local_110);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_c9 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_c9) goto LAB_1005dee81;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_1005dee81:
      local_3c4 = -0x7ffdd000;
      if (bVar3) goto LAB_1005e1289;
      local_3c4 = -0x7ffdd000;
      bVar3 = false;
      goto LAB_1005deea6;
    }
    QFileInfo::absoluteFilePath();
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error: can\'t parse ddb.uuid in root VMDK \'%s\', incorrect format!"
                  ,local_f8 + *(long *)(local_f8 + 0x10));
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_c9 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_c9) goto LAB_1005deb0c;
      }
      QArrayData::deallocate(local_f8,1,8);
    }
LAB_1005deb0c:
    local_3c4 = -0x7ffdd000;
    if (*(int *)local_100 == -1) goto LAB_1005e1289;
    local_1e8 = local_100;
    if (*(int *)local_100 == 0) goto LAB_1005e1275;
    LOCK();
    *(int *)local_100 = *(int *)local_100 + -1;
    iVar9 = *(int *)local_100;
    UNLOCK();
joined_r0x0001005e126c:
    local_3c4 = -0x7ffdd000;
    local_c9 = iVar9 != 0;
    if ((bool)local_c9) goto LAB_1005e1289;
  }
LAB_1005e1275:
  QArrayData::deallocate(local_1e8,2,8);
  local_3c4 = -0x7ffdd000;
LAB_1005e1289:
  if (lVar28 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_3c4;
}

