
bool FUN_1007a7d30(long param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  uint uVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  sockaddr *psVar17;
  char *pcVar18;
  long *plVar19;
  size_t sVar20;
  int *piVar21;
  long lVar22;
  int iVar23;
  undefined8 uVar24;
  QArrayData *pQVar25;
  Data *pDVar26;
  Data *pDVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  undefined8 in_stack_fffffffffffffbd8;
  QArrayData *local_3a8;
  QArrayData *local_398;
  QArrayData *local_388;
  Data *local_380;
  Data *local_378;
  Data *local_370;
  undefined4 local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QArrayData *local_350;
  QArrayData *local_348;
  QArrayData *local_340;
  QArrayData *local_338;
  QArrayData *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  int local_304;
  undefined4 local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  socklen_t local_2e8;
  int local_2e4;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  undefined8 local_2a0;
  long local_298;
  undefined8 uStack_290;
  QArrayData *local_280;
  QArrayData *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  int local_264;
  undefined4 local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  Data *local_220;
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
  addrinfo local_1b8;
  undefined8 local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QString local_168;
  Data *local_160;
  Data *local_158;
  addrinfo *local_150;
  Data *local_148;
  bool local_139;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
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
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
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
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_150 = (addrinfo *)0x0;
  local_158 = (Data *)PTR_shared_null_100ba2188;
  local_160 = (Data *)PTR_shared_null_100ba2188;
  local_168.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x40);
  if (1 < *(int *)local_168.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + 1;
    local_139 = *(int *)local_168.field0_0x0 != 0;
    UNLOCK();
  }
  local_178 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_170,&local_178,*(undefined4 *)(param_1 + 0x48),0,10,0x20);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_139 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_139) goto LAB_1007a7e7d;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_1007a7e7d:
  cVar11 = operator==(&local_168,(QString *)&DAT_1011ccbb0);
  cVar12 = operator==(&local_168,(QString *)&DAT_1011ccba8);
  local_180 = 0;
  if (param_3 != 0) {
    FUN_10078f010(&local_180);
  }
  if (*(char *)(param_1 + 0x380) == '\0') {
    local_1b8.ai_addr = (sockaddr *)0x0;
    local_1b8.ai_next = (addrinfo *)0x0;
    local_1b8.ai_addrlen = 0;
    local_1b8._20_4_ = 0;
    local_1b8.ai_canonname = (char *)0x0;
    local_1b8.ai_flags = 0x400;
    local_1b8.ai_family = 0;
    local_1b8.ai_socktype = 1;
    local_1b8.ai_protocol = 0;
    bVar10 = false;
    pQVar25 = (QArrayData *)0x0;
    if (cVar11 == '\0' && cVar12 == '\0') {
      local_1c8 = (QArrayData *)local_168.field0_0x0;
      if (1 < *(int *)local_168.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + 1;
        local_139 = *(int *)local_168.field0_0x0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar25 = local_1c0 + *(long *)(local_1c0 + 0x10);
      bVar10 = true;
    }
    local_1d8 = local_170;
    if (1 < *(int *)local_170 + 1U) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + 1;
      local_139 = *(int *)local_170 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    iVar23 = _getaddrinfo((char *)pQVar25,(char *)(local_1d0 + *(long *)(local_1d0 + 0x10)),
                          &local_1b8,&local_150);
    if (*(int *)local_1d0 != -1) {
      if (*(int *)local_1d0 != 0) {
        LOCK();
        *(int *)local_1d0 = *(int *)local_1d0 + -1;
        local_139 = *(int *)local_1d0 != 0;
        UNLOCK();
        if (local_139) goto LAB_1007a812c;
      }
      QArrayData::deallocate(local_1d0,1,8);
    }
LAB_1007a812c:
    if (*(int *)local_1d8 != -1) {
      if (*(int *)local_1d8 != 0) {
        LOCK();
        *(int *)local_1d8 = *(int *)local_1d8 + -1;
        local_139 = *(int *)local_1d8 != 0;
        UNLOCK();
        if (local_139) goto LAB_1007a8168;
      }
      QArrayData::deallocate(local_1d8,2,8);
    }
LAB_1007a8168:
    if (bVar10) {
      if (*(int *)local_1c0 != -1) {
        if (*(int *)local_1c0 != 0) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + -1;
          local_139 = *(int *)local_1c0 != 0;
          UNLOCK();
          if (local_139) goto LAB_1007a81b0;
        }
        QArrayData::deallocate(local_1c0,1,8);
      }
LAB_1007a81b0:
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_139 = *(int *)local_1c8 != 0;
          UNLOCK();
          if (local_139) goto LAB_1007a81ec;
        }
        QArrayData::deallocate(local_1c8,2,8);
      }
    }
LAB_1007a81ec:
    if (iVar23 == 0) {
      psVar17 = (sockaddr *)0x0;
LAB_1007a82e1:
      FUN_1007c6410(&local_220,local_150,1);
      if (local_158 != local_220) {
        local_148 = local_220;
        if (*(int *)local_220 != -1) {
          if (*(int *)local_220 == 0) {
            QListData::detach((int)&local_148);
            lVar22 = (long)*(int *)(local_148 + 8);
            if ((local_220 + (long)*(int *)(local_220 + 8) * 8 != local_148 + lVar22 * 8) &&
               (lVar30 = *(int *)(local_148 + 0xc) - lVar22,
               lVar30 != 0 && lVar22 <= *(int *)(local_148 + 0xc))) {
              _memcpy(local_148 + lVar22 * 8 + 0x10,
                      local_220 + (long)*(int *)(local_220 + 8) * 8 + 0x10,lVar30 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_220 = *(int *)local_220 + 1;
            local_139 = *(int *)local_220 != 0;
            UNLOCK();
          }
        }
        pDVar27 = local_148;
        pDVar26 = local_158;
        local_148 = local_158;
        local_158 = pDVar27;
        if (*(int *)pDVar26 != -1) {
          if (*(int *)pDVar26 != 0) {
            LOCK();
            *(int *)pDVar26 = *(int *)pDVar26 + -1;
            local_139 = *(int *)pDVar26 != 0;
            UNLOCK();
            if (local_139) goto LAB_1007a85ca;
          }
          QListData::dispose(pDVar26);
        }
      }
LAB_1007a85ca:
      if (*(int *)local_220 != -1) {
        if (*(int *)local_220 != 0) {
          LOCK();
          *(int *)local_220 = *(int *)local_220 + -1;
          local_139 = *(int *)local_220 != 0;
          UNLOCK();
          if (local_139) goto LAB_1007a85fc;
        }
        QListData::dispose(local_220);
      }
LAB_1007a85fc:
      if (*(int *)(local_158 + 8) < *(int *)(local_158 + 0xc)) {
        iVar23 = 0;
LAB_1007a8623:
        plVar19 = (long *)FUN_1007b7280(&local_158,iVar23);
        lVar22 = *plVar19;
        if (*(char *)(param_1 + 0x380) == '\0') {
          uVar14 = _socket(*(int *)(lVar22 + 4),*(int *)(lVar22 + 8),*(int *)(lVar22 + 0xc));
        }
        else {
          uVar14 = _socket(1,1,0);
        }
        if ((int)uVar14 < 0) {
          local_238 = *(undefined4 *)(lVar22 + 4);
          local_234 = *(undefined4 *)(lVar22 + 8);
          local_230 = *(undefined4 *)(lVar22 + 0xc);
          local_22c = FUN_1007c5500();
          local_228 = 0x868;
          FUN_1007b7330(&local_160,&local_238);
          goto LAB_1007a896d;
        }
        uVar15 = _fcntl(uVar14,3,0);
        if ((int)uVar15 < 0) {
          local_248 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_248 + 1U) {
            LOCK();
            *(int *)local_248 = *(int *)local_248 + 1;
            local_139 = *(int *)local_248 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          pQVar25 = local_240;
          lVar22 = *(long *)(local_240 + 0x10);
          uVar28 = FUN_1007c5600(&local_138,0x100);
          FUN_1008e3970("","IOCommunication",0,"%sCan\'t get flags for socket (native error: %s)",
                        pQVar25 + lVar22,uVar28);
          if (*(int *)local_240 != -1) {
            if (*(int *)local_240 != 0) {
              LOCK();
              *(int *)local_240 = *(int *)local_240 + -1;
              local_139 = *(int *)local_240 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a93fd;
            }
            QArrayData::deallocate(local_240,1,8);
          }
LAB_1007a93fd:
          if (*(int *)local_248 == -1) {
            bVar10 = false;
            goto LAB_1007a9cd1;
          }
          if (*(int *)local_248 != 0) {
            LOCK();
            *(int *)local_248 = *(int *)local_248 + -1;
            local_139 = *(int *)local_248 != 0;
            UNLOCK();
            if (local_139) {
              bVar10 = false;
              goto LAB_1007a9cd1;
            }
          }
          QArrayData::deallocate(local_248,2,8);
          bVar10 = false;
          goto LAB_1007a9cd1;
        }
        iVar16 = _fcntl(uVar14,4,(ulong)(uVar15 | 4));
        if (iVar16 < 0) {
          local_258 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_258 + 1U) {
            LOCK();
            *(int *)local_258 = *(int *)local_258 + 1;
            local_139 = *(int *)local_258 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          pQVar25 = local_250;
          lVar22 = *(long *)(local_250 + 0x10);
          uVar28 = FUN_1007c5600(&local_138,0x100);
          FUN_1008e3970("","IOCommunication",0,"%sCan\'t set flags for socket (native error: %s)",
                        pQVar25 + lVar22,uVar28);
          if (*(int *)local_250 != -1) {
            if (*(int *)local_250 != 0) {
              LOCK();
              *(int *)local_250 = *(int *)local_250 + -1;
              local_139 = *(int *)local_250 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a94d2;
            }
            QArrayData::deallocate(local_250,1,8);
          }
LAB_1007a94d2:
          if (*(int *)local_258 == -1) {
            bVar10 = false;
            goto LAB_1007a9cd1;
          }
          if (*(int *)local_258 != 0) {
            LOCK();
            *(int *)local_258 = *(int *)local_258 + -1;
            local_139 = *(int *)local_258 != 0;
            UNLOCK();
            if (local_139) {
              bVar10 = false;
              goto LAB_1007a9cd1;
            }
          }
          QArrayData::deallocate(local_258,2,8);
          bVar10 = false;
          goto LAB_1007a9cd1;
        }
        if (*(char *)(param_1 + 0x380) == '\0') {
          iVar16 = _connect(uVar14,*(sockaddr **)(lVar22 + 0x20),*(socklen_t *)(lVar22 + 0x10));
        }
        else {
          sVar20 = _strlen(psVar17->sa_data);
          iVar16 = _connect(uVar14,psVar17,(int)sVar20 + 2);
        }
        bVar10 = true;
        if (-1 < iVar16) goto LAB_1007a8a7d;
        piVar21 = ___error();
        if (*piVar21 == 0x24) {
          do {
            uVar13 = (undefined4)((ulong)in_stack_fffffffffffffbd8 >> 0x20);
            uVar15 = *(uint *)(param_1 + 0x2e8);
            uVar9 = uVar15;
            if ((int)uVar15 <= (int)uVar14) {
              uVar9 = uVar14;
            }
            iVar16 = *(int *)(param_1 + 0x2f0);
            if (iVar16 <= (int)uVar9) {
              local_280 = *(QArrayData **)(param_1 + 0x18);
              if (1 < *(int *)local_280 + 1U) {
                LOCK();
                *(int *)local_280 = *(int *)local_280 + 1;
                local_139 = *(int *)local_280 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              FUN_1008e3970("","IOCommunication",0,
                            "%sOut of resources! Descriptor \'%d\' exceeds max possible \'%d\'.",
                            local_278 + *(long *)(local_278 + 0x10),uVar9 + 1,
                            CONCAT44(uVar13,*(undefined4 *)(param_1 + 0x2f0)));
              if (*(int *)local_278 != -1) {
                if (*(int *)local_278 != 0) {
                  LOCK();
                  *(int *)local_278 = *(int *)local_278 + -1;
                  local_139 = *(int *)local_278 != 0;
                  UNLOCK();
                  if (local_139) goto LAB_1007a9054;
                }
                QArrayData::deallocate(local_278,1,8);
              }
LAB_1007a9054:
              if (*(int *)local_280 == -1) {
                bVar10 = false;
                goto LAB_1007a9cd1;
              }
              if (*(int *)local_280 != 0) {
                LOCK();
                *(int *)local_280 = *(int *)local_280 + -1;
                local_139 = *(int *)local_280 != 0;
                UNLOCK();
                if (local_139) {
                  bVar10 = false;
                  goto LAB_1007a9cd1;
                }
              }
              QArrayData::deallocate(local_280,2,8);
              bVar10 = false;
              goto LAB_1007a9cd1;
            }
            uVar28 = 0;
            if (*(long *)(param_1 + 0x300) != 0) {
              uVar28 = *(undefined8 *)(*(long *)(param_1 + 0x300) + 0x10);
            }
            ___bzero(uVar28,(long)((int)(iVar16 + 7 + ((uint)(iVar16 + 7 >> 0x1f) >> 0x1d)) >> 3));
            uVar28 = 0;
            if (*(long *)(param_1 + 0x2f8) != 0) {
              uVar28 = *(undefined8 *)(*(long *)(param_1 + 0x2f8) + 0x10);
            }
            ___bzero(uVar28,(long)((int)(*(int *)(param_1 + 0x2f0) + 7 +
                                        ((uint)(*(int *)(param_1 + 0x2f0) + 7 >> 0x1f) >> 0x1d)) >>
                                  3));
            puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 0x300) + 0x10) +
                             ((ulong)(long)(int)uVar14 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar14 & 0x1f);
            lVar30 = *(long *)(param_1 + 0x2f8);
            uVar29 = 1 << ((byte)uVar15 & 0x1f);
            puVar1 = (uint *)(*(long *)(lVar30 + 0x10) + ((ulong)(long)(int)uVar15 >> 5) * 4);
            *puVar1 = *puVar1 | uVar29;
            local_298 = 0;
            uStack_290 = 0;
            plVar19 = (long *)0x0;
            if (param_3 != 0) {
              local_2a0 = 0;
              FUN_10078f010(&local_2a0);
              iVar16 = FUN_10078f030(&local_180,&local_2a0);
              iVar16 = param_3 - iVar16;
              if (iVar16 < 1) {
                local_2b0 = *(QArrayData **)(param_1 + 0x18);
                if (1 < *(int *)local_2b0 + 1U) {
                  LOCK();
                  *(int *)local_2b0 = *(int *)local_2b0 + 1;
                  local_139 = *(int *)local_2b0 != 0;
                  UNLOCK();
                }
                QString::toLocal8Bit();
                FUN_1008e3970("","IOCommunication",0,"%sConnection timeout expired!",
                              local_2a8 + *(long *)(local_2a8 + 0x10));
                if (*(int *)local_2a8 != -1) {
                  if (*(int *)local_2a8 != 0) {
                    LOCK();
                    *(int *)local_2a8 = *(int *)local_2a8 + -1;
                    local_139 = *(int *)local_2a8 != 0;
                    UNLOCK();
                    if (local_139) goto LAB_1007a931c;
                  }
                  QArrayData::deallocate(local_2a8,1,8);
                }
LAB_1007a931c:
                if (*(int *)local_2b0 == -1) {
LAB_1007a9c18:
                  bVar10 = false;
                }
                else {
                  if (*(int *)local_2b0 != 0) {
                    LOCK();
                    *(int *)local_2b0 = *(int *)local_2b0 + -1;
                    local_139 = *(int *)local_2b0 != 0;
                    UNLOCK();
                    if (local_139) goto LAB_1007a9c18;
                  }
                  QArrayData::deallocate(local_2b0,2,8);
                  bVar10 = false;
                }
                goto LAB_1007a9cd1;
              }
              local_298 = (long)(iVar16 / 1000);
              uStack_290 = CONCAT44(uStack_290._4_4_,(iVar16 % 1000) * 1000);
              lVar30 = *(long *)(param_1 + 0x2f8);
              plVar19 = &local_298;
            }
            uVar28 = 0;
            if (lVar30 != 0) {
              uVar28 = *(undefined8 *)(lVar30 + 0x10);
            }
            uVar24 = 0;
            if (*(long *)(param_1 + 0x300) != 0) {
              uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x300) + 0x10);
            }
            iVar16 = _select_DARWIN_EXTSN(uVar9 + 1,uVar28,uVar24,0,plVar19);
            if (iVar16 == 0) {
              local_2c0 = *(QArrayData **)(param_1 + 0x18);
              if (1 < *(int *)local_2c0 + 1U) {
                LOCK();
                *(int *)local_2c0 = *(int *)local_2c0 + 1;
                local_139 = *(int *)local_2c0 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              FUN_1008e3970("","IOCommunication",0,"%sConnection timeout (%d msecs) expired",
                            local_2b8 + *(long *)(local_2b8 + 0x10),param_3);
              if (*(int *)local_2b8 != -1) {
                if (*(int *)local_2b8 != 0) {
                  LOCK();
                  *(int *)local_2b8 = *(int *)local_2b8 + -1;
                  local_139 = *(int *)local_2b8 != 0;
                  UNLOCK();
                  if (local_139) goto LAB_1007a914c;
                }
                QArrayData::deallocate(local_2b8,1,8);
              }
LAB_1007a914c:
              if (*(int *)local_2c0 != -1) {
                if (*(int *)local_2c0 != 0) {
                  LOCK();
                  *(int *)local_2c0 = *(int *)local_2c0 + -1;
                  local_139 = *(int *)local_2c0 != 0;
                  UNLOCK();
                  if (local_139) goto LAB_1007a9188;
                }
                QArrayData::deallocate(local_2c0,2,8);
              }
LAB_1007a9188:
              *(undefined4 *)(param_1 + 0xa4) = 1;
              bVar10 = false;
              goto LAB_1007a9cd1;
            }
            if (-1 < iVar16) goto LAB_1007a899f;
            piVar21 = ___error();
            if (*piVar21 != 4) {
              local_2d0 = *(QArrayData **)(param_1 + 0x18);
              if (1 < *(int *)local_2d0 + 1U) {
                LOCK();
                *(int *)local_2d0 = *(int *)local_2d0 + 1;
                local_139 = *(int *)local_2d0 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              pQVar25 = local_2c8;
              lVar22 = *(long *)(local_2c8 + 0x10);
              uVar28 = FUN_1007c5600(&local_138,0x100);
              FUN_1008e3970("","IOCommunication",0,"%sCan\'t connect to socket (native error: %s)",
                            pQVar25 + lVar22,uVar28);
              if (*(int *)local_2c8 != -1) {
                if (*(int *)local_2c8 != 0) {
                  LOCK();
                  *(int *)local_2c8 = *(int *)local_2c8 + -1;
                  local_139 = *(int *)local_2c8 != 0;
                  UNLOCK();
                  if (local_139) goto LAB_1007a925c;
                }
                QArrayData::deallocate(local_2c8,1,8);
              }
LAB_1007a925c:
              if (*(int *)local_2d0 == -1) {
                bVar10 = false;
                goto LAB_1007a9cd1;
              }
              if (*(int *)local_2d0 != 0) {
                LOCK();
                *(int *)local_2d0 = *(int *)local_2d0 + -1;
                local_139 = *(int *)local_2d0 != 0;
                UNLOCK();
                if (local_139) {
                  bVar10 = false;
                  goto LAB_1007a9cd1;
                }
              }
              QArrayData::deallocate(local_2d0,2,8);
              bVar10 = false;
              goto LAB_1007a9cd1;
            }
          } while( true );
        }
        local_270 = *(undefined4 *)(lVar22 + 4);
        local_26c = *(undefined4 *)(lVar22 + 8);
        local_268 = *(undefined4 *)(lVar22 + 0xc);
        piVar21 = ___error();
        local_264 = *piVar21;
        local_260 = 0x892;
        FUN_1007b7330(&local_160,&local_270);
        _close(uVar14);
        uVar14 = 0xffffffff;
LAB_1007a896d:
        iVar23 = iVar23 + 1;
        lVar22 = 0;
        bVar10 = false;
        if (*(int *)(local_158 + 0xc) - *(int *)(local_158 + 8) <= iVar23) goto LAB_1007a8a7d;
        goto LAB_1007a8623;
      }
      uVar14 = 0xffffffff;
      lVar22 = 0;
      bVar10 = false;
LAB_1007a8a7d:
      uVar13 = (undefined4)((ulong)in_stack_fffffffffffffbd8 >> 0x20);
      if (*(int *)(local_160 + 0xc) != *(int *)(local_160 + 8)) {
        if (bVar10) {
          local_320 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_320 + 1U) {
            LOCK();
            *(int *)local_320 = *(int *)local_320 + 1;
            local_139 = *(int *)local_320 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          in_stack_fffffffffffffbd8 = CONCAT44(uVar13,*(undefined4 *)(lVar22 + 8));
          FUN_1008e3970("","IOCommunication",0,
                        "%sSuccessfully connected to socket ai_family = %d, ai_socktype = %d, ai_protocol = %d"
                        ,local_318 + *(long *)(local_318 + 0x10),*(undefined4 *)(lVar22 + 4),
                        in_stack_fffffffffffffbd8,*(undefined4 *)(lVar22 + 0xc));
          if (*(int *)local_318 != -1) {
            if (*(int *)local_318 != 0) {
              LOCK();
              *(int *)local_318 = *(int *)local_318 + -1;
              local_139 = *(int *)local_318 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a8b5a;
            }
            QArrayData::deallocate(local_318,1,8);
          }
LAB_1007a8b5a:
          if (*(int *)local_320 != -1) {
            if (*(int *)local_320 != 0) {
              LOCK();
              *(int *)local_320 = *(int *)local_320 + -1;
              local_139 = *(int *)local_320 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a8b9d;
            }
            QArrayData::deallocate(local_320,2,8);
          }
LAB_1007a8b9d:
          local_330 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_330 + 1U) {
            LOCK();
            *(int *)local_330 = *(int *)local_330 + 1;
            local_139 = *(int *)local_330 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sBut there were some troubles:",
                        local_328 + *(long *)(local_328 + 0x10));
          if (*(int *)local_328 != -1) {
            if (*(int *)local_328 != 0) {
              LOCK();
              *(int *)local_328 = *(int *)local_328 + -1;
              local_139 = *(int *)local_328 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a8c34;
            }
            QArrayData::deallocate(local_328,1,8);
          }
LAB_1007a8c34:
          if (*(int *)local_330 != -1) {
            if (*(int *)local_330 != 0) {
              LOCK();
              *(int *)local_330 = *(int *)local_330 + -1;
              local_139 = *(int *)local_330 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a8c70;
            }
            QArrayData::deallocate(local_330,2,8);
          }
LAB_1007a8c70:
          local_340 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_340 + 1U) {
            LOCK();
            *(int *)local_340 = *(int *)local_340 + 1;
            local_139 = *(int *)local_340 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sWARNINGS BEGIN",
                        local_338 + *(long *)(local_338 + 0x10));
          if (*(int *)local_338 != -1) {
            if (*(int *)local_338 != 0) {
              LOCK();
              *(int *)local_338 = *(int *)local_338 + -1;
              local_139 = *(int *)local_338 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a8d07;
            }
            QArrayData::deallocate(local_338,1,8);
          }
LAB_1007a8d07:
          if (*(int *)local_340 == -1) {
            bVar8 = true;
          }
          else {
            if (*(int *)local_340 != 0) {
              LOCK();
              *(int *)local_340 = *(int *)local_340 + -1;
              local_139 = *(int *)local_340 != 0;
              UNLOCK();
              if (local_139) {
                bVar8 = true;
                goto LAB_1007a9519;
              }
            }
            bVar8 = true;
            QArrayData::deallocate(local_340,2,8);
          }
        }
        else {
          bVar8 = true;
          if (*(char *)(param_1 + 0x3c0) != '\0') {
            iVar23 = FUN_1008e38f0(param_1 + 0x3b8);
            bVar8 = iVar23 != 0;
            if (iVar23 == 0) {
              bVar8 = false;
              goto LAB_1007a9519;
            }
          }
          local_350 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_350 + 1U) {
            LOCK();
            *(int *)local_350 = *(int *)local_350 + 1;
            local_139 = *(int *)local_350 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sCan\'t connect to socket:",
                        local_348 + *(long *)(local_348 + 0x10));
          if (*(int *)local_348 != -1) {
            if (*(int *)local_348 != 0) {
              LOCK();
              *(int *)local_348 = *(int *)local_348 + -1;
              local_139 = *(int *)local_348 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a8e36;
            }
            QArrayData::deallocate(local_348,1,8);
          }
LAB_1007a8e36:
          if (*(int *)local_350 != -1) {
            if (*(int *)local_350 != 0) {
              LOCK();
              *(int *)local_350 = *(int *)local_350 + -1;
              local_139 = *(int *)local_350 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a8e72;
            }
            QArrayData::deallocate(local_350,2,8);
          }
LAB_1007a8e72:
          local_360 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_360 + 1U) {
            LOCK();
            *(int *)local_360 = *(int *)local_360 + 1;
            local_139 = *(int *)local_360 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sERRORS BEGIN",
                        local_358 + *(long *)(local_358 + 0x10));
          if (*(int *)local_358 != -1) {
            if (*(int *)local_358 != 0) {
              LOCK();
              *(int *)local_358 = *(int *)local_358 + -1;
              local_139 = *(int *)local_358 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a8f09;
            }
            QArrayData::deallocate(local_358,1,8);
          }
LAB_1007a8f09:
          if (*(int *)local_360 != -1) {
            if (*(int *)local_360 != 0) {
              LOCK();
              *(int *)local_360 = *(int *)local_360 + -1;
              local_139 = *(int *)local_360 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a9519;
            }
            QArrayData::deallocate(local_360,2,8);
          }
        }
LAB_1007a9519:
        FUN_1007b7f00(&local_380,&local_160);
        local_378 = local_380 + (long)*(int *)(local_380 + 8) * 8 + 0x10;
        local_370 = local_380 + (long)*(int *)(local_380 + 0xc) * 8 + 0x10;
        if (*(int *)(local_380 + 8) != *(int *)(local_380 + 0xc)) {
          do {
            uVar13 = (undefined4)((ulong)in_stack_fffffffffffffbd8 >> 0x20);
            local_368 = 1;
            if (bVar8) {
              puVar7 = *(undefined4 **)local_378;
              uVar2 = *puVar7;
              uVar3 = puVar7[1];
              uVar4 = puVar7[2];
              uVar5 = puVar7[3];
              uVar6 = puVar7[4];
              pQVar25 = *(QArrayData **)(param_1 + 0x18);
              if (1 < *(int *)pQVar25 + 1U) {
                LOCK();
                *(int *)pQVar25 = *(int *)pQVar25 + 1;
                local_139 = *(int *)pQVar25 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              lVar22 = *(long *)(local_388 + 0x10);
              uVar28 = FUN_1007c5510(uVar5,&local_138,0x100);
              in_stack_fffffffffffffbd8 = CONCAT44(uVar13,uVar3);
              FUN_1008e3970("","IOCommunication",0,
                            "%sError for socket ai_family = %d, ai_socktype = %d, ai_protocol = %d in code line #%d, native error: %s"
                            ,local_388 + lVar22,uVar2,in_stack_fffffffffffffbd8,uVar4,uVar6,uVar28);
              if (*(int *)local_388 != -1) {
                if (*(int *)local_388 != 0) {
                  LOCK();
                  *(int *)local_388 = *(int *)local_388 + -1;
                  local_139 = *(int *)local_388 != 0;
                  UNLOCK();
                  if (local_139) goto LAB_1007a969d;
                }
                QArrayData::deallocate(local_388,1,8);
              }
LAB_1007a969d:
              if (*(int *)pQVar25 != -1) {
                if (*(int *)pQVar25 != 0) {
                  LOCK();
                  *(int *)pQVar25 = *(int *)pQVar25 + -1;
                  local_139 = *(int *)pQVar25 != 0;
                  UNLOCK();
                  if (local_139) goto LAB_1007a96f0;
                }
                QArrayData::deallocate(pQVar25,2,8);
              }
            }
LAB_1007a96f0:
            local_378 = local_378 + 8;
          } while (local_378 != local_370);
        }
        local_368 = 1;
        if (*(int *)local_380 != -1) {
          if (*(int *)local_380 != 0) {
            LOCK();
            *(int *)local_380 = *(int *)local_380 + -1;
            local_139 = *(int *)local_380 != 0;
            UNLOCK();
            if (local_139) goto LAB_1007a97f6;
          }
          iVar23 = *(int *)(local_380 + 0xc);
          if (iVar23 != *(int *)(local_380 + 8)) {
            lVar22 = (long)*(int *)(local_380 + 8) * 8 + (long)iVar23 * -8;
            pDVar26 = local_380 + (long)iVar23 * 8 + 8;
            do {
              if (*(void **)pDVar26 != (void *)0x0) {
                operator_delete(*(void **)pDVar26);
              }
              pDVar26 = pDVar26 + -8;
              lVar22 = lVar22 + 8;
            } while (lVar22 != 0);
          }
          QListData::dispose(local_380);
        }
LAB_1007a97f6:
        if (bVar10) {
          pQVar25 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)pQVar25 + 1U) {
            LOCK();
            *(int *)pQVar25 = *(int *)pQVar25 + 1;
            local_139 = *(int *)pQVar25 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sWARNINGS END",
                        local_398 + *(long *)(local_398 + 0x10));
          if (*(int *)local_398 != -1) {
            if (*(int *)local_398 != 0) {
              LOCK();
              *(int *)local_398 = *(int *)local_398 + -1;
              local_139 = *(int *)local_398 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a98a6;
            }
            QArrayData::deallocate(local_398,1,8);
          }
LAB_1007a98a6:
          if (*(int *)pQVar25 != -1) {
            if (*(int *)pQVar25 != 0) {
              LOCK();
              *(int *)pQVar25 = *(int *)pQVar25 + -1;
              local_139 = *(int *)pQVar25 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a9cd1;
            }
            QArrayData::deallocate(pQVar25,2,8);
          }
        }
        else if (bVar8) {
          pQVar25 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)pQVar25 + 1U) {
            LOCK();
            *(int *)pQVar25 = *(int *)pQVar25 + 1;
            local_139 = *(int *)pQVar25 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sERRORS END",
                        local_3a8 + *(long *)(local_3a8 + 0x10));
          if (*(int *)local_3a8 != -1) {
            if (*(int *)local_3a8 != 0) {
              LOCK();
              *(int *)local_3a8 = *(int *)local_3a8 + -1;
              local_139 = *(int *)local_3a8 != 0;
              UNLOCK();
              if (local_139) goto LAB_1007a999a;
            }
            QArrayData::deallocate(local_3a8,1,8);
          }
LAB_1007a999a:
          if (*(int *)pQVar25 == -1) {
            bVar10 = false;
          }
          else {
            if (*(int *)pQVar25 != 0) {
              LOCK();
              *(int *)pQVar25 = *(int *)pQVar25 + -1;
              local_139 = *(int *)pQVar25 != 0;
              UNLOCK();
              if (local_139) {
                bVar10 = false;
                goto LAB_1007a9cd1;
              }
            }
            QArrayData::deallocate(pQVar25,2,8);
            bVar10 = false;
          }
        }
        else {
          bVar10 = false;
        }
      }
    }
    else {
      uVar13 = FUN_1007c5500();
      if (iVar23 == 0xb) {
        pcVar18 = (char *)FUN_1007c5510(uVar13,&local_138,0x100);
      }
      else {
        pcVar18 = _gai_strerror(iVar23);
        if (iVar23 == 8) {
          *(undefined4 *)(param_1 + 0xa4) = 7;
        }
      }
      local_1e8 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_1e8 + 1U) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + 1;
        local_139 = *(int *)local_1e8 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar25 = local_1e0 + *(long *)(local_1e0 + 0x10);
      local_1f8 = (QArrayData *)local_168.field0_0x0;
      if (1 < *(int *)local_168.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + 1;
        local_139 = *(int *)local_168.field0_0x0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,
                    "%sCan\'t do getaddrinfo for remote host name \'%s\', (native error: %s)",
                    pQVar25,local_1f0 + *(long *)(local_1f0 + 0x10),pcVar18);
      if (*(int *)local_1f0 != -1) {
        if (*(int *)local_1f0 != 0) {
          LOCK();
          *(int *)local_1f0 = *(int *)local_1f0 + -1;
          local_139 = *(int *)local_1f0 != 0;
          UNLOCK();
          if (local_139) goto LAB_1007a849f;
        }
        QArrayData::deallocate(local_1f0,1,8);
      }
LAB_1007a849f:
      if (*(int *)local_1f8 != -1) {
        if (*(int *)local_1f8 != 0) {
          LOCK();
          *(int *)local_1f8 = *(int *)local_1f8 + -1;
          local_139 = *(int *)local_1f8 != 0;
          UNLOCK();
          if (local_139) goto LAB_1007a84db;
        }
        QArrayData::deallocate(local_1f8,2,8);
      }
LAB_1007a84db:
      if (*(int *)local_1e0 != -1) {
        if (*(int *)local_1e0 != 0) {
          LOCK();
          *(int *)local_1e0 = *(int *)local_1e0 + -1;
          local_139 = *(int *)local_1e0 != 0;
          UNLOCK();
          if (local_139) goto LAB_1007a8517;
        }
        QArrayData::deallocate(local_1e0,1,8);
      }
LAB_1007a8517:
      if (*(int *)local_1e8 != -1) {
        if (*(int *)local_1e8 != 0) {
          LOCK();
          *(int *)local_1e8 = *(int *)local_1e8 + -1;
          local_139 = *(int *)local_1e8 != 0;
          UNLOCK();
          if (local_139) goto LAB_1007a8553;
        }
        QArrayData::deallocate(local_1e8,2,8);
      }
LAB_1007a8553:
      uVar14 = 0xffffffff;
      psVar17 = (sockaddr *)0x0;
      bVar10 = false;
    }
  }
  else {
    local_150 = _malloc(0x30);
    if (local_150 == (addrinfo *)0x0) {
      local_208 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_208 + 1U) {
        LOCK();
        *(int *)local_208 = *(int *)local_208 + 1;
        local_139 = *(int *)local_208 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sFailed to allocate memory",
                    local_200 + *(long *)(local_200 + 0x10));
      if (*(int *)local_200 != -1) {
        if (*(int *)local_200 != 0) {
          LOCK();
          *(int *)local_200 = *(int *)local_200 + -1;
          local_139 = *(int *)local_200 != 0;
          UNLOCK();
          if (local_139) goto LAB_1007a82b4;
        }
        QArrayData::deallocate(local_200,1,8);
      }
LAB_1007a82b4:
      uVar14 = 0xffffffff;
      psVar17 = (sockaddr *)0x0;
      bVar10 = false;
      if (*(int *)local_208 != -1) {
        if (*(int *)local_208 != 0) {
          LOCK();
          *(int *)local_208 = *(int *)local_208 + -1;
          local_139 = *(int *)local_208 != 0;
          UNLOCK();
          if (local_139) {
LAB_1007a8f6d:
            psVar17 = (sockaddr *)0x0;
            uVar14 = 0xffffffff;
            bVar10 = false;
            goto LAB_1007a9cd1;
          }
        }
        psVar17 = (sockaddr *)0x0;
        QArrayData::deallocate(local_208,2,8);
        bVar10 = false;
      }
    }
    else {
      local_150->ai_next = (addrinfo *)0x0;
      local_150->ai_addr = (sockaddr *)0x0;
      local_150->ai_canonname = (char *)0x0;
      *(undefined8 *)&local_150->ai_addrlen = 0;
      local_150->ai_socktype = 0;
      local_150->ai_protocol = 0;
      local_150->ai_flags = 0;
      local_150->ai_family = 0;
      local_150->ai_family = 1;
      local_150->ai_socktype = 1;
      psVar17 = (sockaddr *)FUN_1008e2de0(&local_168);
      if (psVar17 != (sockaddr *)0x0) goto LAB_1007a82e1;
      local_218 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_218 + 1U) {
        LOCK();
        *(int *)local_218 = *(int *)local_218 + 1;
        local_139 = *(int *)local_218 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sFailed to allocate sockaddr_un",
                    local_210 + *(long *)(local_210 + 0x10));
      if (*(int *)local_210 != -1) {
        if (*(int *)local_210 != 0) {
          LOCK();
          *(int *)local_210 = *(int *)local_210 + -1;
          local_139 = *(int *)local_210 != 0;
          UNLOCK();
          if (local_139) goto LAB_1007a7fe0;
        }
        QArrayData::deallocate(local_210,1,8);
      }
LAB_1007a7fe0:
      uVar14 = 0xffffffff;
      psVar17 = (sockaddr *)0x0;
      bVar10 = false;
      if (*(int *)local_218 != -1) {
        if (*(int *)local_218 != 0) {
          LOCK();
          *(int *)local_218 = *(int *)local_218 + -1;
          local_139 = *(int *)local_218 != 0;
          UNLOCK();
          if (local_139) goto LAB_1007a8f6d;
        }
        psVar17 = (sockaddr *)0x0;
        QArrayData::deallocate(local_218,2,8);
        bVar10 = false;
      }
    }
  }
LAB_1007a9cd1:
  if (local_150 != (addrinfo *)0x0) {
    _freeaddrinfo(local_150);
    local_150 = (addrinfo *)0x0;
  }
  if ((psVar17 != (sockaddr *)0x0) && (*(char *)(param_1 + 0x380) != '\0')) {
    _free(psVar17);
  }
  uVar15 = uVar14;
  if ((uVar14 != 0xffffffff) && (bVar10 == false)) {
    _close(uVar14);
    uVar15 = 0xffffffff;
    if (DAT_1011ccc18 != (code *)0x0) {
      (*DAT_1011ccc18)(uVar14 & 0xff,0x31,(*(uint *)(param_1 + 0x30) & 0xf) << 6 | 3);
    }
  }
  *param_2 = uVar15;
  lVar22 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_139 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_139) goto LAB_1007a9dac;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1007a9dac:
  if (*(int *)local_168.field0_0x0 != -1) {
    if (*(int *)local_168.field0_0x0 != 0) {
      LOCK();
      *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
      local_139 = *(int *)local_168.field0_0x0 != 0;
      UNLOCK();
      if (local_139) goto LAB_1007a9de8;
    }
    QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
  }
LAB_1007a9de8:
  pDVar26 = local_160;
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_139 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_139) goto LAB_1007a9e5f;
    }
    iVar23 = *(int *)(local_160 + 0xc);
    if (iVar23 != *(int *)(local_160 + 8)) {
      lVar30 = (long)*(int *)(local_160 + 8) * 8 + (long)iVar23 * -8;
      pDVar27 = local_160 + (long)iVar23 * 8 + 8;
      do {
        if (*(void **)pDVar27 != (void *)0x0) {
          operator_delete(*(void **)pDVar27);
        }
        pDVar27 = pDVar27 + -8;
        lVar30 = lVar30 + 8;
      } while (lVar30 != 0);
    }
    QListData::dispose(pDVar26);
  }
LAB_1007a9e5f:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_139 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_139) goto LAB_1007a9e91;
    }
    QListData::dispose(local_158);
  }
LAB_1007a9e91:
  if (lVar22 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar10;
LAB_1007a899f:
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x2f8) + 0x10) + ((ulong)(long)(int)uVar15 >> 5) * 4)
      & uVar29) != 0) {
    if (DAT_1011b55f8 < 2) {
      bVar10 = false;
      goto LAB_1007a9cd1;
    }
    local_2e0 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_2e0 + 1U) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + 1;
      local_139 = *(int *)local_2e0 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",2,"%sStop in progress for connection",
                  local_2d8 + *(long *)(local_2d8 + 0x10));
    if (*(int *)local_2d8 != -1) {
      if (*(int *)local_2d8 != 0) {
        LOCK();
        *(int *)local_2d8 = *(int *)local_2d8 + -1;
        local_139 = *(int *)local_2d8 != 0;
        UNLOCK();
        if (local_139) goto LAB_1007aa03e;
      }
      QArrayData::deallocate(local_2d8,1,8);
    }
LAB_1007aa03e:
    if (*(int *)local_2e0 == -1) {
      bVar10 = false;
      goto LAB_1007a9cd1;
    }
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_139 = *(int *)local_2e0 != 0;
      UNLOCK();
      if (local_139) {
        bVar10 = false;
        goto LAB_1007a9cd1;
      }
    }
    QArrayData::deallocate(local_2e0,2,8);
    bVar10 = false;
    goto LAB_1007a9cd1;
  }
  local_2e4 = 0;
  local_2e8 = 4;
  iVar16 = _getsockopt(uVar14,0xffff,0x1007,&local_2e4,&local_2e8);
  bVar10 = true;
  if (iVar16 < 0) {
    local_2f8 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_2f8 + 1U) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + 1;
      local_139 = *(int *)local_2f8 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    pQVar25 = local_2f0;
    lVar22 = *(long *)(local_2f0 + 0x10);
    uVar28 = FUN_1007c5600(&local_138,0x100);
    FUN_1008e3970("","IOCommunication",0,"%sCan\'t get socket options for socket (native error: %s)"
                  ,pQVar25 + lVar22,uVar28);
    if (*(int *)local_2f0 != -1) {
      if (*(int *)local_2f0 != 0) {
        LOCK();
        *(int *)local_2f0 = *(int *)local_2f0 + -1;
        local_139 = *(int *)local_2f0 != 0;
        UNLOCK();
        if (local_139) goto LAB_1007a9f83;
      }
      QArrayData::deallocate(local_2f0,1,8);
    }
LAB_1007a9f83:
    if (*(int *)local_2f8 == -1) {
      bVar10 = false;
      goto LAB_1007a9cd1;
    }
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_139 = *(int *)local_2f8 != 0;
      UNLOCK();
      if (local_139) {
        bVar10 = false;
        goto LAB_1007a9cd1;
      }
    }
    QArrayData::deallocate(local_2f8,2,8);
    bVar10 = false;
    goto LAB_1007a9cd1;
  }
  if (local_2e4 == 0) goto LAB_1007a8a7d;
  local_310 = *(undefined4 *)(lVar22 + 4);
  local_30c = *(undefined4 *)(lVar22 + 8);
  local_308 = *(undefined4 *)(lVar22 + 0xc);
  local_304 = local_2e4;
  local_300 = 0x8f0;
  FUN_1007b7330(&local_160,&local_310);
  _close(uVar14);
  uVar14 = 0xffffffff;
  goto LAB_1007a896d;
}

