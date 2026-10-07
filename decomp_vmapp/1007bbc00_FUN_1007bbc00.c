
void FUN_1007bbc00(long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  ushort uVar11;
  bool bVar12;
  byte bVar13;
  char cVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  sockaddr *psVar20;
  long *plVar21;
  size_t sVar22;
  ssize_t sVar23;
  int *piVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  QArrayData *pQVar28;
  Data *pDVar29;
  Data *pDVar30;
  ulong uVar31;
  bool bVar32;
  undefined8 uVar33;
  uint uVar34;
  uint *puVar35;
  ulong uVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  char *in_stack_fffffffffffff968;
  undefined4 uVar40;
  long local_640;
  int local_628;
  QArrayData *local_618;
  long *local_610;
  long *local_608;
  long *local_600;
  QArrayData *local_5f8;
  QArrayData *local_5f0;
  socklen_t local_5e4;
  QArrayData *local_5e0;
  QArrayData *local_5d8;
  QArrayData *local_5d0;
  QArrayData *local_5c8;
  QArrayData *local_5c0;
  QArrayData *local_5b8;
  QArrayData *local_5b0;
  QArrayData *local_5a8;
  QArrayData *local_5a0;
  QArrayData *local_598;
  QArrayData *local_590;
  QArrayData *local_588;
  QArrayData *local_580;
  QArrayData *local_578;
  QArrayData *local_570;
  QArrayData *local_568;
  QArrayData *local_560;
  QArrayData *local_558;
  QArrayData *local_550;
  QArrayData *local_548;
  QArrayData *local_540;
  QArrayData *local_538;
  Data *local_530;
  Data *local_528;
  Data *local_520;
  undefined4 local_518;
  QArrayData *local_510;
  QArrayData *local_508;
  QArrayData *local_500;
  QArrayData *local_4f8;
  QArrayData *local_4f0;
  QArrayData *local_4e8;
  QArrayData *local_4e0;
  QArrayData *local_4d8;
  QArrayData *local_4d0;
  QArrayData *local_4c8;
  QArrayData *local_4c0;
  ushort local_4b8;
  uint local_4ac;
  QArrayData *local_4a8;
  QArrayData *local_4a0;
  QArrayData *local_498;
  QArrayData *local_490;
  QArrayData *local_488;
  QString local_480;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  QArrayData *local_448;
  QArrayData *local_440;
  QArrayData *local_438;
  QArrayData *local_430;
  QArrayData *local_428;
  QArrayData *local_420;
  QArrayData *local_418;
  QArrayData *local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  QArrayData *local_370;
  QArrayData *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QArrayData *local_350;
  QArrayData *local_348;
  QArrayData *local_340;
  undefined4 local_334;
  QArrayData *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  undefined4 local_30c;
  int local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  Data *local_2e0;
  Data *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  ushort local_26a;
  addrinfo local_268;
  QArrayData *local_230;
  QArrayData *local_228;
  QString local_220;
  _func_void_Node_ptr *local_218;
  addrinfo *local_210;
  uint local_208 [3];
  bool local_1f9;
  sockaddr local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [64];
  undefined1 local_138 [256];
  long local_38;
  
  lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_208[0] = 0xffffffff;
  local_208[1] = 0xffffffff;
  local_210 = (addrinfo *)0x0;
  local_218 = (_func_void_Node_ptr *)PTR_shared_null_100ba2180;
  psVar20 = (sockaddr *)0x0;
  local_38 = lVar38;
  if (*(int *)(param_1 + 0x30) != 1) goto LAB_1007be903;
  local_220.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 0x28) + 0x38);
  if (1 < *(int *)local_220.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + 1;
    local_1f9 = *(int *)local_220.field0_0x0 != 0;
    UNLOCK();
  }
  local_230 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_228,&local_230,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x40),0,10,0x20);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_1f9 = *(int *)local_230 != 0;
      UNLOCK();
      if (local_1f9) goto LAB_1007bbcf6;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_1007bbcf6:
  bVar13 = operator==(&local_220,(QString *)&DAT_1011ccbb0);
  cVar14 = operator==(&local_220,(QString *)&DAT_1011ccba8);
  local_26a = 0;
  local_268.ai_addr = (sockaddr *)0x0;
  local_268.ai_next = (addrinfo *)0x0;
  local_268.ai_addrlen = 0;
  local_268._20_4_ = 0;
  local_268.ai_canonname = (char *)0x0;
  local_268.ai_socktype = 0;
  local_268.ai_protocol = 0;
  local_268._0_8_ = (ulong)bVar13 | 0x400;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    local_268.ai_socktype = 1;
    local_268.ai_protocol = 0;
    bVar32 = false;
    pQVar28 = (QArrayData *)0x0;
    if (bVar13 == 0 && cVar14 == '\0') {
      local_280 = (QArrayData *)local_220.field0_0x0;
      if (1 < *(int *)local_220.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + 1;
        local_1f9 = *(int *)local_220.field0_0x0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar28 = local_278 + *(long *)(local_278 + 0x10);
      bVar32 = true;
    }
    local_290 = local_228;
    if (1 < *(int *)local_228 + 1U) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + 1;
      local_1f9 = *(int *)local_228 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    iVar18 = _getaddrinfo((char *)pQVar28,(char *)(local_288 + *(long *)(local_288 + 0x10)),
                          &local_268,&local_210);
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_1f9 = *(int *)local_288 != 0;
        UNLOCK();
        if (local_1f9) goto LAB_1007bbfc6;
      }
      QArrayData::deallocate(local_288,1,8);
    }
LAB_1007bbfc6:
    if (*(int *)local_290 != -1) {
      if (*(int *)local_290 != 0) {
        LOCK();
        *(int *)local_290 = *(int *)local_290 + -1;
        local_1f9 = *(int *)local_290 != 0;
        UNLOCK();
        if (local_1f9) goto LAB_1007bc002;
      }
      QArrayData::deallocate(local_290,2,8);
    }
LAB_1007bc002:
    if (bVar32) {
      if (*(int *)local_278 != -1) {
        if (*(int *)local_278 != 0) {
          LOCK();
          *(int *)local_278 = *(int *)local_278 + -1;
          local_1f9 = *(int *)local_278 != 0;
          UNLOCK();
          if (local_1f9) goto LAB_1007bc043;
        }
        QArrayData::deallocate(local_278,1,8);
      }
LAB_1007bc043:
      if (*(int *)local_280 != -1) {
        if (*(int *)local_280 != 0) {
          LOCK();
          *(int *)local_280 = *(int *)local_280 + -1;
          local_1f9 = *(int *)local_280 != 0;
          UNLOCK();
          if (local_1f9) goto LAB_1007bc07f;
        }
        QArrayData::deallocate(local_280,2,8);
      }
    }
LAB_1007bc07f:
    psVar20 = (sockaddr *)0x0;
    if (iVar18 == 0) {
LAB_1007bc0b1:
      local_2d8 = (Data *)PTR_shared_null_100ba2188;
      FUN_1007c6410(&local_2e0,local_210,1);
      uVar27 = 0;
LAB_1007bc3c4:
      puVar35 = local_208;
      FUN_1007c2ac0(&local_2d8);
      FUN_1007c2c50(&local_218);
      uVar15 = (undefined4)((ulong)in_stack_fffffffffffff968 >> 0x20);
      local_26a = *(ushort *)(*(long *)(param_1 + 0x28) + 0x40);
      uVar27 = uVar27 + 1;
      if (uVar27 < 0x32) {
        uVar36 = 0;
        local_640 = 0;
        bVar32 = false;
        bVar12 = false;
        if (*(int *)(local_2e0 + 8) < *(int *)(local_2e0 + 0xc)) {
          do {
            bVar32 = bVar12;
            plVar21 = (long *)FUN_1007b7280(&local_2e0,uVar36 & 0xffffffff);
            lVar38 = *plVar21;
            if (*(char *)(param_1 + 0xe0) == '\0') {
              uVar16 = _socket(*(int *)(lVar38 + 4),*(int *)(lVar38 + 8),*(int *)(lVar38 + 0xc));
              puVar26 = local_208 + uVar36;
              *puVar35 = uVar16;
            }
            else {
              uVar16 = _socket(1,1,0);
              *puVar35 = uVar16;
              puVar26 = puVar35;
            }
            if ((int)uVar16 < 0) {
              local_304 = *(undefined4 *)(lVar38 + 8);
              local_300 = *(undefined4 *)(lVar38 + 0xc);
              local_308 = *(int *)(lVar38 + 4);
              local_2fc = FUN_1007c5500();
              local_2f8 = 0x38c;
              FUN_1007b7330(&local_2d8,&local_308);
              goto LAB_1007bcbe1;
            }
            if (*(int *)(lVar38 + 4) == 0x1e) {
              local_30c = 1;
              iVar18 = _setsockopt(uVar16,0x29,0x1b,&local_30c,4);
              if (iVar18 < 0) {
                local_320 = *(QArrayData **)(param_1 + 0x20);
                if (1 < *(int *)local_320 + 1U) {
                  LOCK();
                  *(int *)local_320 = *(int *)local_320 + 1;
                  local_1f9 = *(int *)local_320 != 0;
                  UNLOCK();
                }
                QString::toLocal8Bit();
                pQVar28 = local_318;
                lVar38 = *(long *)(local_318 + 0x10);
                uVar33 = FUN_1007c5600(local_138,0x100);
                FUN_1008e3970("","IOCommunication",0,"%sCan\'t set IPV6_V6ONLY (native error: %s)",
                              pQVar28 + lVar38,uVar33);
                if (*(int *)local_318 != -1) {
                  if (*(int *)local_318 != 0) {
                    LOCK();
                    *(int *)local_318 = *(int *)local_318 + -1;
                    local_1f9 = *(int *)local_318 != 0;
                    UNLOCK();
                    if (local_1f9) goto LAB_1007bd4e8;
                  }
                  QArrayData::deallocate(local_318,1,8);
                }
LAB_1007bd4e8:
                if (*(int *)local_320 == -1) {
                  local_628 = 7;
                  goto LAB_1007be7a5;
                }
                if (*(int *)local_320 != 0) {
                  LOCK();
                  *(int *)local_320 = *(int *)local_320 + -1;
                  local_1f9 = *(int *)local_320 != 0;
                  UNLOCK();
                  if (local_1f9) {
                    local_628 = 7;
                    goto LAB_1007be7a5;
                  }
                }
                local_628 = 7;
                QArrayData::deallocate(local_320,2,8);
                goto LAB_1007be7a5;
              }
            }
            if ((*(int *)(*(long *)(param_1 + 0x28) + 0x40) == 0) && (local_26a != 0)) {
              *(ushort *)(*(long *)(lVar38 + 0x20) + 2) = local_26a << 8 | local_26a >> 8;
            }
            cVar14 = FUN_1007c5660(uVar16);
            if (cVar14 == '\0') {
              local_330 = *(QArrayData **)(param_1 + 0x20);
              if (1 < *(int *)local_330 + 1U) {
                LOCK();
                *(int *)local_330 = *(int *)local_330 + 1;
                local_1f9 = *(int *)local_330 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              pQVar28 = local_328;
              lVar38 = *(long *)(local_328 + 0x10);
              uVar33 = FUN_1007c5600(local_138,0x100);
              FUN_1008e3970("","IOCommunication",0,
                            "%sCan\'t set descriptor flags for listening socket (native error: %s)",
                            pQVar28 + lVar38,uVar33);
              if (*(int *)local_328 != -1) {
                if (*(int *)local_328 != 0) {
                  LOCK();
                  *(int *)local_328 = *(int *)local_328 + -1;
                  local_1f9 = *(int *)local_328 != 0;
                  UNLOCK();
                  if (local_1f9) goto LAB_1007bd09a;
                }
                QArrayData::deallocate(local_328,1,8);
              }
LAB_1007bd09a:
              if (*(int *)local_330 == -1) {
                local_628 = 7;
                goto LAB_1007be7a5;
              }
              if (*(int *)local_330 != 0) {
                LOCK();
                *(int *)local_330 = *(int *)local_330 + -1;
                local_1f9 = *(int *)local_330 != 0;
                UNLOCK();
                if (local_1f9) {
                  local_628 = 7;
                  goto LAB_1007be7a5;
                }
              }
              local_628 = 7;
              QArrayData::deallocate(local_330,2,8);
              goto LAB_1007be7a5;
            }
            local_334 = 1;
            iVar18 = _setsockopt(uVar16,0xffff,4,&local_334,4);
            if (iVar18 < 0) {
              local_348 = *(QArrayData **)(param_1 + 0x20);
              if (1 < *(int *)local_348 + 1U) {
                LOCK();
                *(int *)local_348 = *(int *)local_348 + 1;
                local_1f9 = *(int *)local_348 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              pQVar28 = local_340;
              lVar38 = *(long *)(local_340 + 0x10);
              uVar33 = FUN_1007c5600(local_138,0x100);
              FUN_1008e3970("","IOCommunication",0,"%sCan\'t set socket options (native error: %s)",
                            pQVar28 + lVar38,uVar33);
              if (*(int *)local_340 != -1) {
                if (*(int *)local_340 != 0) {
                  LOCK();
                  *(int *)local_340 = *(int *)local_340 + -1;
                  local_1f9 = *(int *)local_340 != 0;
                  UNLOCK();
                  if (local_1f9) goto LAB_1007bd176;
                }
                QArrayData::deallocate(local_340,1,8);
              }
LAB_1007bd176:
              if (*(int *)local_348 == -1) {
                local_628 = 7;
                goto LAB_1007be7a5;
              }
              if (*(int *)local_348 != 0) {
                LOCK();
                *(int *)local_348 = *(int *)local_348 + -1;
                local_1f9 = *(int *)local_348 != 0;
                UNLOCK();
                if (local_1f9) {
                  local_628 = 7;
                  goto LAB_1007be7a5;
                }
              }
              local_628 = 7;
              QArrayData::deallocate(local_348,2,8);
              goto LAB_1007be7a5;
            }
            uVar17 = _fcntl(uVar16,3,0);
            if ((int)uVar17 < 0) {
              local_358 = *(QArrayData **)(param_1 + 0x20);
              if (1 < *(int *)local_358 + 1U) {
                LOCK();
                *(int *)local_358 = *(int *)local_358 + 1;
                local_1f9 = *(int *)local_358 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              pQVar28 = local_350;
              lVar38 = *(long *)(local_350 + 0x10);
              uVar33 = FUN_1007c5600(local_138,0x100);
              FUN_1008e3970("","IOCommunication",0,
                            "%sCan\'t get flags for socket (native error: %s)",pQVar28 + lVar38,
                            uVar33);
              if (*(int *)local_350 != -1) {
                if (*(int *)local_350 != 0) {
                  LOCK();
                  *(int *)local_350 = *(int *)local_350 + -1;
                  local_1f9 = *(int *)local_350 != 0;
                  UNLOCK();
                  if (local_1f9) goto LAB_1007bd252;
                }
                QArrayData::deallocate(local_350,1,8);
              }
LAB_1007bd252:
              if (*(int *)local_358 == -1) {
                local_628 = 7;
                goto LAB_1007be7a5;
              }
              if (*(int *)local_358 != 0) {
                LOCK();
                *(int *)local_358 = *(int *)local_358 + -1;
                local_1f9 = *(int *)local_358 != 0;
                UNLOCK();
                if (local_1f9) {
                  local_628 = 7;
                  goto LAB_1007be7a5;
                }
              }
              local_628 = 7;
              QArrayData::deallocate(local_358,2,8);
              goto LAB_1007be7a5;
            }
            iVar18 = _fcntl(uVar16,4,(ulong)(uVar17 | 4));
            if (iVar18 < 0) {
              local_368 = *(QArrayData **)(param_1 + 0x20);
              if (1 < *(int *)local_368 + 1U) {
                LOCK();
                *(int *)local_368 = *(int *)local_368 + 1;
                local_1f9 = *(int *)local_368 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              pQVar28 = local_360;
              lVar38 = *(long *)(local_360 + 0x10);
              uVar33 = FUN_1007c5600(local_138,0x100);
              FUN_1008e3970("","IOCommunication",0,
                            "%sCan\'t set flags for socket (native error: %s)",pQVar28 + lVar38,
                            uVar33);
              if (*(int *)local_360 != -1) {
                if (*(int *)local_360 != 0) {
                  LOCK();
                  *(int *)local_360 = *(int *)local_360 + -1;
                  local_1f9 = *(int *)local_360 != 0;
                  UNLOCK();
                  if (local_1f9) goto LAB_1007bd32e;
                }
                QArrayData::deallocate(local_360,1,8);
              }
LAB_1007bd32e:
              if (*(int *)local_368 == -1) {
                local_628 = 7;
                goto LAB_1007be7a5;
              }
              if (*(int *)local_368 != 0) {
                LOCK();
                *(int *)local_368 = *(int *)local_368 + -1;
                local_1f9 = *(int *)local_368 != 0;
                UNLOCK();
                if (local_1f9) {
                  local_628 = 7;
                  goto LAB_1007be7a5;
                }
              }
              local_628 = 7;
              QArrayData::deallocate(local_368,2,8);
              goto LAB_1007be7a5;
            }
            if (*(char *)(param_1 + 0xe0) == '\0') {
              iVar18 = _bind(uVar16,*(sockaddr **)(lVar38 + 0x20),*(socklen_t *)(lVar38 + 0x10));
LAB_1007bc79f:
              if (-1 < iVar18) goto LAB_1007bc7a7;
              if ((*(int *)(*(long *)(param_1 + 0x28) + 0x40) == 0) &&
                 (iVar18 = FUN_1007c5500(), iVar18 == 0x30)) goto LAB_1007bcc14;
              local_460 = *(undefined4 *)(lVar38 + 4);
              local_45c = *(undefined4 *)(lVar38 + 8);
              local_458 = *(undefined4 *)(lVar38 + 0xc);
              local_454 = FUN_1007c5500();
              local_450 = 0x433;
              FUN_1007b7330(&local_2d8,&local_460);
              _close(uVar16);
LAB_1007bcbcd:
              *puVar26 = 0xffffffff;
            }
            else {
              QString::toUtf8();
              _unlink((char *)(local_370 + *(long *)(local_370 + 0x10)));
              if (*(int *)local_370 != -1) {
                if (*(int *)local_370 != 0) {
                  LOCK();
                  *(int *)local_370 = *(int *)local_370 + -1;
                  local_1f9 = *(int *)local_370 != 0;
                  UNLOCK();
                  if (local_1f9) goto LAB_1007bc5ef;
                }
                QArrayData::deallocate(local_370,1,8);
              }
LAB_1007bc5ef:
              sVar22 = _strlen(psVar20->sa_data);
              iVar18 = _bind(uVar16,psVar20,(int)sVar22 + 2);
              if (iVar18 != 0) goto LAB_1007bc79f;
              local_388 = 0;
              uStack_380 = 0;
              local_398 = 0;
              uStack_390 = 0;
              local_3a8 = 0;
              uStack_3a0 = 0;
              local_3b8 = 0;
              uStack_3b0 = 0;
              local_3c8 = 0;
              uStack_3c0 = 0;
              local_3d8 = 0;
              uStack_3d0 = 0;
              local_3e8 = 0;
              uStack_3e0 = 0;
              local_3f8 = 0;
              uStack_3f0 = 0;
              local_408 = 0;
              uStack_400 = 0;
              QString::toUtf8();
              iVar18 = _stat_INODE64(local_410 + *(long *)(local_410 + 0x10),&local_408);
              if (*(int *)local_410 != -1) {
                if (*(int *)local_410 != 0) {
                  LOCK();
                  *(int *)local_410 = *(int *)local_410 + -1;
                  local_1f9 = *(int *)local_410 != 0;
                  UNLOCK();
                  if (local_1f9) goto LAB_1007bc6bf;
                }
                QArrayData::deallocate(local_410,1,8);
              }
LAB_1007bc6bf:
              uVar15 = (undefined4)((ulong)in_stack_fffffffffffff968 >> 0x20);
              if (iVar18 != 0) {
                piVar24 = ___error();
                iVar18 = *piVar24;
                local_440 = *(QArrayData **)(param_1 + 0x20);
                if (1 < *(int *)local_440 + 1U) {
                  LOCK();
                  *(int *)local_440 = *(int *)local_440 + 1;
                  local_1f9 = *(int *)local_440 != 0;
                  UNLOCK();
                }
                QString::toLocal8Bit();
                pQVar28 = local_438;
                lVar38 = *(long *)(local_438 + 0x10);
                QString::toUtf8();
                in_stack_fffffffffffff968 = (char *)CONCAT44(uVar15,iVar18);
                FUN_1008e3970("","IOCommunication",0,
                              "%sFailed to get stat on socket \'%s\' with error: %d",
                              pQVar28 + lVar38,local_448 + *(long *)(local_448 + 0x10),
                              in_stack_fffffffffffff968);
                if (*(int *)local_448 != -1) {
                  if (*(int *)local_448 != 0) {
                    LOCK();
                    *(int *)local_448 = *(int *)local_448 + -1;
                    local_1f9 = *(int *)local_448 != 0;
                    UNLOCK();
                    if (local_1f9) goto LAB_1007be058;
                  }
                  QArrayData::deallocate(local_448,1,8);
                }
LAB_1007be058:
                if (*(int *)local_438 != -1) {
                  if (*(int *)local_438 != 0) {
                    LOCK();
                    *(int *)local_438 = *(int *)local_438 + -1;
                    local_1f9 = *(int *)local_438 != 0;
                    UNLOCK();
                    if (local_1f9) goto LAB_1007be094;
                  }
                  QArrayData::deallocate(local_438,1,8);
                }
LAB_1007be094:
                if (*(int *)local_440 != -1) {
                  if (*(int *)local_440 != 0) {
                    LOCK();
                    *(int *)local_440 = *(int *)local_440 + -1;
                    local_1f9 = *(int *)local_440 != 0;
                    UNLOCK();
                    if (local_1f9) goto LAB_1007be272;
                  }
                  QArrayData::deallocate(local_440,2,8);
                }
LAB_1007be272:
                local_628 = 7;
                goto LAB_1007be7a5;
              }
              uVar11 = local_408._4_2_;
              QString::toUtf8();
              iVar18 = _chmod((char *)(local_418 + *(long *)(local_418 + 0x10)),uVar11 | 0x1ff);
              if (*(int *)local_418 != -1) {
                if (*(int *)local_418 != 0) {
                  LOCK();
                  *(int *)local_418 = *(int *)local_418 + -1;
                  local_1f9 = *(int *)local_418 != 0;
                  UNLOCK();
                  if (local_1f9) goto LAB_1007bc738;
                }
                QArrayData::deallocate(local_418,1,8);
              }
LAB_1007bc738:
              uVar15 = (undefined4)((ulong)in_stack_fffffffffffff968 >> 0x20);
              if (iVar18 != 0) {
                piVar24 = ___error();
                iVar18 = *piVar24;
                local_428 = *(QArrayData **)(param_1 + 0x20);
                if (1 < *(int *)local_428 + 1U) {
                  LOCK();
                  *(int *)local_428 = *(int *)local_428 + 1;
                  local_1f9 = *(int *)local_428 != 0;
                  UNLOCK();
                }
                QString::toLocal8Bit();
                pQVar28 = local_420;
                lVar38 = *(long *)(local_420 + 0x10);
                QString::toUtf8();
                in_stack_fffffffffffff968 = (char *)CONCAT44(uVar15,iVar18);
                FUN_1008e3970("","IOCommunication",0,
                              "%sFailed to setup permissions on socket \'%s\' with error: %d",
                              pQVar28 + lVar38,local_430 + *(long *)(local_430 + 0x10),
                              in_stack_fffffffffffff968);
                if (*(int *)local_430 != -1) {
                  if (*(int *)local_430 != 0) {
                    LOCK();
                    *(int *)local_430 = *(int *)local_430 + -1;
                    local_1f9 = *(int *)local_430 != 0;
                    UNLOCK();
                    if (local_1f9) goto LAB_1007be1fa;
                  }
                  QArrayData::deallocate(local_430,1,8);
                }
LAB_1007be1fa:
                if (*(int *)local_420 != -1) {
                  if (*(int *)local_420 != 0) {
                    LOCK();
                    *(int *)local_420 = *(int *)local_420 + -1;
                    local_1f9 = *(int *)local_420 != 0;
                    UNLOCK();
                    if (local_1f9) goto LAB_1007be236;
                  }
                  QArrayData::deallocate(local_420,1,8);
                }
LAB_1007be236:
                if (*(int *)local_428 != -1) {
                  if (*(int *)local_428 != 0) {
                    LOCK();
                    *(int *)local_428 = *(int *)local_428 + -1;
                    local_1f9 = *(int *)local_428 != 0;
                    UNLOCK();
                    if (local_1f9) goto LAB_1007be272;
                  }
                  QArrayData::deallocate(local_428,2,8);
                }
                goto LAB_1007be272;
              }
LAB_1007bc7a7:
              iVar18 = _listen(uVar16,0x80);
              if (iVar18 < 0) {
                local_478 = *(undefined4 *)(lVar38 + 4);
                local_474 = *(undefined4 *)(lVar38 + 8);
                local_470 = *(undefined4 *)(lVar38 + 0xc);
                local_46c = FUN_1007c5500();
                local_468 = 0x447;
                FUN_1007b7330(&local_2d8,&local_478);
                _close(uVar16);
                goto LAB_1007bcbcd;
              }
              local_480.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
              local_488 = (QArrayData *)PTR_shared_null_100ba20d0;
              cVar14 = FUN_1007c5d50(uVar16,&local_480,&local_26a,&local_488);
              if (cVar14 == '\0') {
                QString::operator=(&local_480,&local_220);
                local_498 = *(QArrayData **)(param_1 + 0x20);
                if (1 < *(int *)local_498 + 1U) {
                  LOCK();
                  *(int *)local_498 = *(int *)local_498 + 1;
                  local_1f9 = *(int *)local_498 != 0;
                  UNLOCK();
                }
                QString::toLocal8Bit();
                pQVar28 = local_490 + *(long *)(local_490 + 0x10);
                local_4a8 = local_488;
                if (1 < *(int *)local_488 + 1U) {
                  LOCK();
                  *(int *)local_488 = *(int *)local_488 + 1;
                  local_1f9 = *(int *)local_488 != 0;
                  UNLOCK();
                }
                QString::toLocal8Bit();
                FUN_1008e3970("","IOCommunication",0,
                              "%sGetting of numeric host name failed, error: %s",pQVar28,
                              local_4a0 + *(long *)(local_4a0 + 0x10));
                if (*(int *)local_4a0 != -1) {
                  if (*(int *)local_4a0 != 0) {
                    LOCK();
                    *(int *)local_4a0 = *(int *)local_4a0 + -1;
                    local_1f9 = *(int *)local_4a0 != 0;
                    UNLOCK();
                    if (local_1f9) goto LAB_1007bc8ed;
                  }
                  QArrayData::deallocate(local_4a0,1,8);
                }
LAB_1007bc8ed:
                if (*(int *)local_4a8 != -1) {
                  if (*(int *)local_4a8 != 0) {
                    LOCK();
                    *(int *)local_4a8 = *(int *)local_4a8 + -1;
                    local_1f9 = *(int *)local_4a8 != 0;
                    UNLOCK();
                    if (local_1f9) goto LAB_1007bc929;
                  }
                  QArrayData::deallocate(local_4a8,2,8);
                }
LAB_1007bc929:
                if (*(int *)local_490 != -1) {
                  if (*(int *)local_490 != 0) {
                    LOCK();
                    *(int *)local_490 = *(int *)local_490 + -1;
                    local_1f9 = *(int *)local_490 != 0;
                    UNLOCK();
                    if (local_1f9) goto LAB_1007bc965;
                  }
                  QArrayData::deallocate(local_490,1,8);
                }
LAB_1007bc965:
                if (*(int *)local_498 != -1) {
                  if (*(int *)local_498 != 0) {
                    LOCK();
                    *(int *)local_498 = *(int *)local_498 + -1;
                    local_1f9 = *(int *)local_498 != 0;
                    UNLOCK();
                    if (local_1f9) goto LAB_1007bc9a1;
                  }
                  QArrayData::deallocate(local_498,2,8);
                }
              }
LAB_1007bc9a1:
              local_4ac = (uint)(*(int *)(lVar38 + 4) == 0x1e);
              local_4c0 = (QArrayData *)local_480.field0_0x0;
              if (1 < *(int *)local_480.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_480.field0_0x0 = *(int *)local_480.field0_0x0 + 1;
                local_1f9 = *(int *)local_480.field0_0x0 != 0;
                UNLOCK();
              }
              local_4b8 = local_26a;
              FUN_1007c2cf0(&local_218,&local_4ac,&local_4c0);
              if (*(int *)local_4c0 != -1) {
                if (*(int *)local_4c0 != 0) {
                  LOCK();
                  *(int *)local_4c0 = *(int *)local_4c0 + -1;
                  local_1f9 = *(int *)local_4c0 != 0;
                  UNLOCK();
                  if (local_1f9) goto LAB_1007bca38;
                }
                QArrayData::deallocate(local_4c0,2,8);
              }
LAB_1007bca38:
              if (!bVar32) {
                local_640 = lVar38;
                bVar32 = true;
              }
              if (DAT_1011ccc18 != (code *)0x0) {
                (*DAT_1011ccc18)(uVar16 & 0xff,0x31,
                                 (*(uint *)(*(long *)(param_1 + 0x28) + 0x30) & 0xf) << 6);
              }
              if (*(int *)local_488 != -1) {
                if (*(int *)local_488 != 0) {
                  LOCK();
                  *(int *)local_488 = *(int *)local_488 + -1;
                  local_1f9 = *(int *)local_488 != 0;
                  UNLOCK();
                  if (local_1f9) goto LAB_1007bcac7;
                }
                QArrayData::deallocate(local_488,2,8);
              }
LAB_1007bcac7:
              if (*(int *)local_480.field0_0x0 != -1) {
                if (*(int *)local_480.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_480.field0_0x0 = *(int *)local_480.field0_0x0 + -1;
                  local_1f9 = *(int *)local_480.field0_0x0 != 0;
                  UNLOCK();
                  if (local_1f9) goto LAB_1007bcbe1;
                }
                QArrayData::deallocate((QArrayData *)local_480.field0_0x0,2,8);
              }
            }
LAB_1007bcbe1:
            uVar36 = uVar36 + 1;
            if ((1 < (long)uVar36) ||
               (puVar35 = puVar35 + 1, bVar12 = bVar32,
               (long)*(int *)(local_2e0 + 0xc) - (long)*(int *)(local_2e0 + 8) <= (long)uVar36))
            break;
          } while( true );
        }
        uVar15 = (undefined4)((ulong)in_stack_fffffffffffff968 >> 0x20);
        if (*(int *)(local_2d8 + 0xc) == *(int *)(local_2d8 + 8)) goto LAB_1007bd9f4;
        if (bVar32) {
          local_4d0 = *(QArrayData **)(param_1 + 0x20);
          if (1 < *(int *)local_4d0 + 1U) {
            LOCK();
            *(int *)local_4d0 = *(int *)local_4d0 + 1;
            local_1f9 = *(int *)local_4d0 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          in_stack_fffffffffffff968 = (char *)CONCAT44(uVar15,*(undefined4 *)(local_640 + 8));
          FUN_1008e3970("","IOCommunication",0,
                        "%sSuccessfully listening to socket ai_family = %d, ai_socktype = %d, ai_protocol = %d"
                        ,local_4c8 + *(long *)(local_4c8 + 0x10),*(undefined4 *)(local_640 + 4),
                        in_stack_fffffffffffff968,*(undefined4 *)(local_640 + 0xc));
          if (*(int *)local_4c8 != -1) {
            if (*(int *)local_4c8 != 0) {
              LOCK();
              *(int *)local_4c8 = *(int *)local_4c8 + -1;
              local_1f9 = *(int *)local_4c8 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007bcde8;
            }
            QArrayData::deallocate(local_4c8,1,8);
          }
LAB_1007bcde8:
          if (*(int *)local_4d0 != -1) {
            if (*(int *)local_4d0 != 0) {
              LOCK();
              *(int *)local_4d0 = *(int *)local_4d0 + -1;
              local_1f9 = *(int *)local_4d0 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007bce24;
            }
            QArrayData::deallocate(local_4d0,2,8);
          }
LAB_1007bce24:
          local_4e0 = *(QArrayData **)(param_1 + 0x20);
          if (1 < *(int *)local_4e0 + 1U) {
            LOCK();
            *(int *)local_4e0 = *(int *)local_4e0 + 1;
            local_1f9 = *(int *)local_4e0 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sBut there were some troubles:",
                        local_4d8 + *(long *)(local_4d8 + 0x10));
          if (*(int *)local_4d8 != -1) {
            if (*(int *)local_4d8 != 0) {
              LOCK();
              *(int *)local_4d8 = *(int *)local_4d8 + -1;
              local_1f9 = *(int *)local_4d8 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007bcebb;
            }
            QArrayData::deallocate(local_4d8,1,8);
          }
LAB_1007bcebb:
          if (*(int *)local_4e0 != -1) {
            if (*(int *)local_4e0 != 0) {
              LOCK();
              *(int *)local_4e0 = *(int *)local_4e0 + -1;
              local_1f9 = *(int *)local_4e0 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007bcef7;
            }
            QArrayData::deallocate(local_4e0,2,8);
          }
LAB_1007bcef7:
          local_4f0 = *(QArrayData **)(param_1 + 0x20);
          if (1 < *(int *)local_4f0 + 1U) {
            LOCK();
            *(int *)local_4f0 = *(int *)local_4f0 + 1;
            local_1f9 = *(int *)local_4f0 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sWARNINGS BEGIN",
                        local_4e8 + *(long *)(local_4e8 + 0x10));
          if (*(int *)local_4e8 != -1) {
            if (*(int *)local_4e8 != 0) {
              LOCK();
              *(int *)local_4e8 = *(int *)local_4e8 + -1;
              local_1f9 = *(int *)local_4e8 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007bcf8e;
            }
            QArrayData::deallocate(local_4e8,1,8);
          }
LAB_1007bcf8e:
          if (*(int *)local_4f0 != -1) {
            if (*(int *)local_4f0 != 0) {
              LOCK();
              *(int *)local_4f0 = *(int *)local_4f0 + -1;
              local_1f9 = *(int *)local_4f0 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007bd6ee;
            }
            QArrayData::deallocate(local_4f0,2,8);
          }
        }
        else {
          local_500 = *(QArrayData **)(param_1 + 0x20);
          if (1 < *(int *)local_500 + 1U) {
            LOCK();
            *(int *)local_500 = *(int *)local_500 + 1;
            local_1f9 = *(int *)local_500 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sCan\'t listen to socket:",
                        local_4f8 + *(long *)(local_4f8 + 0x10));
          if (*(int *)local_4f8 != -1) {
            if (*(int *)local_4f8 != 0) {
              LOCK();
              *(int *)local_4f8 = *(int *)local_4f8 + -1;
              local_1f9 = *(int *)local_4f8 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007bd5df;
            }
            QArrayData::deallocate(local_4f8,1,8);
          }
LAB_1007bd5df:
          if (*(int *)local_500 != -1) {
            if (*(int *)local_500 != 0) {
              LOCK();
              *(int *)local_500 = *(int *)local_500 + -1;
              local_1f9 = *(int *)local_500 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007bd61b;
            }
            QArrayData::deallocate(local_500,2,8);
          }
LAB_1007bd61b:
          local_510 = *(QArrayData **)(param_1 + 0x20);
          if (1 < *(int *)local_510 + 1U) {
            LOCK();
            *(int *)local_510 = *(int *)local_510 + 1;
            local_1f9 = *(int *)local_510 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sERRORS BEGIN",
                        local_508 + *(long *)(local_508 + 0x10));
          if (*(int *)local_508 != -1) {
            if (*(int *)local_508 != 0) {
              LOCK();
              *(int *)local_508 = *(int *)local_508 + -1;
              local_1f9 = *(int *)local_508 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007bd6b2;
            }
            QArrayData::deallocate(local_508,1,8);
          }
LAB_1007bd6b2:
          if (*(int *)local_510 != -1) {
            if (*(int *)local_510 != 0) {
              LOCK();
              *(int *)local_510 = *(int *)local_510 + -1;
              local_1f9 = *(int *)local_510 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007bd6ee;
            }
            QArrayData::deallocate(local_510,2,8);
          }
        }
LAB_1007bd6ee:
        FUN_1007b7f00(&local_530,&local_2d8);
        local_528 = local_530 + (long)*(int *)(local_530 + 8) * 8 + 0x10;
        local_520 = local_530 + (long)*(int *)(local_530 + 0xc) * 8 + 0x10;
        if (*(int *)(local_530 + 8) != *(int *)(local_530 + 0xc)) goto LAB_1007bd73a;
        goto LAB_1007bd899;
      }
      local_2f0 = *(QArrayData **)(param_1 + 0x20);
      if (1 < *(int *)local_2f0 + 1U) {
        LOCK();
        *(int *)local_2f0 = *(int *)local_2f0 + 1;
        local_1f9 = *(int *)local_2f0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      in_stack_fffffffffffff968 =
           (char *)CONCAT44(uVar15,*(int *)(local_2e0 + 0xc) - *(int *)(local_2e0 + 8));
      FUN_1008e3970("","IOCommunication",0,
                    "%sServer tried \'%d\' times to bind, but could not find unique free port for \'%d\' addresses. Will stop everything."
                    ,local_2e8 + *(long *)(local_2e8 + 0x10),uVar27,in_stack_fffffffffffff968);
      if (*(int *)local_2e8 != -1) {
        if (*(int *)local_2e8 != 0) {
          LOCK();
          *(int *)local_2e8 = *(int *)local_2e8 + -1;
          local_1f9 = *(int *)local_2e8 != 0;
          UNLOCK();
          if (local_1f9) goto LAB_1007bd404;
        }
        QArrayData::deallocate(local_2e8,1,8);
      }
LAB_1007bd404:
      if (*(int *)local_2f0 == -1) {
LAB_1007bdf25:
        local_628 = 7;
      }
      else {
        if (*(int *)local_2f0 != 0) {
          LOCK();
          *(int *)local_2f0 = *(int *)local_2f0 + -1;
          local_1f9 = *(int *)local_2f0 != 0;
          UNLOCK();
          if (local_1f9) goto LAB_1007bdf25;
        }
        local_628 = 7;
        QArrayData::deallocate(local_2f0,2,8);
      }
      goto LAB_1007be7a5;
    }
    uVar15 = FUN_1007c5500();
    if (iVar18 == 0xb) {
      in_stack_fffffffffffff968 = (char *)FUN_1007c5510(uVar15,local_138,0x100);
    }
    else {
      in_stack_fffffffffffff968 = _gai_strerror(iVar18);
    }
    local_2a0 = *(QArrayData **)(param_1 + 0x20);
    if (1 < *(int *)local_2a0 + 1U) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + 1;
      local_1f9 = *(int *)local_2a0 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    pQVar28 = local_298 + *(long *)(local_298 + 0x10);
    local_2b0 = (QArrayData *)local_220.field0_0x0;
    if (1 < *(int *)local_220.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + 1;
      local_1f9 = *(int *)local_220.field0_0x0 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,
                  "%sCan\'t do getaddrinfo for remote host name \'%s\', (native error: %s)",pQVar28,
                  local_2a8 + *(long *)(local_2a8 + 0x10),in_stack_fffffffffffff968);
    if (*(int *)local_2a8 != -1) {
      if (*(int *)local_2a8 != 0) {
        LOCK();
        *(int *)local_2a8 = *(int *)local_2a8 + -1;
        local_1f9 = *(int *)local_2a8 != 0;
        UNLOCK();
        if (local_1f9) goto LAB_1007bc2e7;
      }
      QArrayData::deallocate(local_2a8,1,8);
    }
LAB_1007bc2e7:
    if (*(int *)local_2b0 != -1) {
      if (*(int *)local_2b0 != 0) {
        LOCK();
        *(int *)local_2b0 = *(int *)local_2b0 + -1;
        local_1f9 = *(int *)local_2b0 != 0;
        UNLOCK();
        if (local_1f9) goto LAB_1007bc323;
      }
      QArrayData::deallocate(local_2b0,2,8);
    }
LAB_1007bc323:
    if (*(int *)local_298 != -1) {
      if (*(int *)local_298 != 0) {
        LOCK();
        *(int *)local_298 = *(int *)local_298 + -1;
        local_1f9 = *(int *)local_298 != 0;
        UNLOCK();
        if (local_1f9) goto LAB_1007bc35f;
      }
      QArrayData::deallocate(local_298,1,8);
    }
LAB_1007bc35f:
    local_628 = 7;
    psVar20 = (sockaddr *)0x0;
    if (*(int *)local_2a0 != -1) {
      if (*(int *)local_2a0 != 0) {
        LOCK();
        *(int *)local_2a0 = *(int *)local_2a0 + -1;
        local_1f9 = *(int *)local_2a0 != 0;
        UNLOCK();
        psVar20 = (sockaddr *)0x0;
        if (local_1f9) goto LAB_1007be87c;
      }
      psVar20 = (sockaddr *)0x0;
      QArrayData::deallocate(local_2a0,2,8);
    }
  }
  else {
    local_210 = _malloc(0x30);
    if (local_210 == (addrinfo *)0x0) {
      local_2c0 = *(QArrayData **)(param_1 + 0x20);
      if (1 < *(int *)local_2c0 + 1U) {
        LOCK();
        *(int *)local_2c0 = *(int *)local_2c0 + 1;
        local_1f9 = *(int *)local_2c0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sFailed to allocate memory",
                    local_2b8 + *(long *)(local_2b8 + 0x10));
      if (*(int *)local_2b8 != -1) {
        if (*(int *)local_2b8 != 0) {
          LOCK();
          *(int *)local_2b8 = *(int *)local_2b8 + -1;
          local_1f9 = *(int *)local_2b8 != 0;
          UNLOCK();
          if (local_1f9) goto LAB_1007bc19d;
        }
        QArrayData::deallocate(local_2b8,1,8);
      }
LAB_1007bc19d:
      local_628 = 7;
      psVar20 = (sockaddr *)0x0;
      if (*(int *)local_2c0 != -1) {
        if (*(int *)local_2c0 != 0) {
          LOCK();
          *(int *)local_2c0 = *(int *)local_2c0 + -1;
          local_1f9 = *(int *)local_2c0 != 0;
          UNLOCK();
          psVar20 = (sockaddr *)0x0;
          if (local_1f9) goto LAB_1007be87c;
        }
        psVar20 = (sockaddr *)0x0;
        QArrayData::deallocate(local_2c0,2,8);
      }
    }
    else {
      local_210->ai_next = (addrinfo *)0x0;
      local_210->ai_addr = (sockaddr *)0x0;
      local_210->ai_canonname = (char *)0x0;
      *(undefined8 *)&local_210->ai_addrlen = 0;
      local_210->ai_socktype = 0;
      local_210->ai_protocol = 0;
      local_210->ai_flags = 0;
      local_210->ai_family = 0;
      local_210->ai_family = 1;
      local_210->ai_socktype = 1;
      psVar20 = (sockaddr *)FUN_1008e2de0(&local_220);
      if (psVar20 != (sockaddr *)0x0) goto LAB_1007bc0b1;
      local_2d0 = *(QArrayData **)(param_1 + 0x20);
      if (1 < *(int *)local_2d0 + 1U) {
        LOCK();
        *(int *)local_2d0 = *(int *)local_2d0 + 1;
        local_1f9 = *(int *)local_2d0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sFailed to allocate sockaddr_un",
                    local_2c8 + *(long *)(local_2c8 + 0x10));
      if (*(int *)local_2c8 != -1) {
        if (*(int *)local_2c8 != 0) {
          LOCK();
          *(int *)local_2c8 = *(int *)local_2c8 + -1;
          local_1f9 = *(int *)local_2c8 != 0;
          UNLOCK();
          if (local_1f9) goto LAB_1007bbe70;
        }
        QArrayData::deallocate(local_2c8,1,8);
      }
LAB_1007bbe70:
      local_628 = 7;
      psVar20 = (sockaddr *)0x0;
      if (*(int *)local_2d0 != -1) {
        if (*(int *)local_2d0 != 0) {
          LOCK();
          *(int *)local_2d0 = *(int *)local_2d0 + -1;
          local_1f9 = *(int *)local_2d0 != 0;
          UNLOCK();
          psVar20 = (sockaddr *)0x0;
          if (local_1f9) goto LAB_1007be87c;
        }
        psVar20 = (sockaddr *)0x0;
        QArrayData::deallocate(local_2d0,2,8);
      }
    }
  }
  goto LAB_1007be87c;
LAB_1007bcc14:
  if (-1 < (int)uVar36) {
    lVar38 = -1;
    do {
      if (0 < (int)local_208[lVar38 + 1]) {
        _close(local_208[lVar38 + 1]);
        local_208[lVar38 + 1] = 0xffffffff;
      }
      lVar38 = lVar38 + 1;
    } while (lVar38 < (int)uVar36);
  }
  goto LAB_1007bc3c4;
LAB_1007bf5a2:
  local_5c0 = *(QArrayData **)(param_1 + 0x20);
  if (1 < *(int *)local_5c0 + 1U) {
    LOCK();
    *(int *)local_5c0 = *(int *)local_5c0 + 1;
    local_1f9 = *(int *)local_5c0 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  pQVar28 = local_5b8;
  lVar38 = *(long *)(local_5b8 + 0x10);
  uVar33 = FUN_1007c5600(local_138,0x100);
  FUN_1008e3970("","IOCommunication",0,"%sCan\'t accept client socket (native error: %s)",
                pQVar28 + lVar38,uVar33);
  if (*(int *)local_5b8 != -1) {
    if (*(int *)local_5b8 != 0) {
      LOCK();
      *(int *)local_5b8 = *(int *)local_5b8 + -1;
      local_1f9 = *(int *)local_5b8 != 0;
      UNLOCK();
      if (local_1f9) goto LAB_1007bf65d;
    }
    QArrayData::deallocate(local_5b8,1,8);
  }
LAB_1007bf65d:
  lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int *)local_5c0 != -1) {
    if (*(int *)local_5c0 != 0) {
      LOCK();
      *(int *)local_5c0 = *(int *)local_5c0 + -1;
      local_1f9 = *(int *)local_5c0 != 0;
      UNLOCK();
      if (local_1f9) goto LAB_1007bf347;
    }
    QArrayData::deallocate(local_5c0,2,8);
  }
  goto LAB_1007bf347;
LAB_1007bd73a:
  do {
    uVar40 = (undefined4)((ulong)in_stack_fffffffffffff968 >> 0x20);
    local_518 = 1;
    puVar10 = *(undefined4 **)local_528;
    uVar15 = *puVar10;
    uVar4 = puVar10[1];
    uVar5 = puVar10[2];
    uVar6 = puVar10[3];
    uVar7 = puVar10[4];
    local_540 = *(QArrayData **)(param_1 + 0x20);
    if (1 < *(int *)local_540 + 1U) {
      LOCK();
      *(int *)local_540 = *(int *)local_540 + 1;
      local_1f9 = *(int *)local_540 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    pQVar28 = local_538;
    lVar38 = *(long *)(local_538 + 0x10);
    uVar33 = FUN_1007c5510(uVar6,local_138,0x100);
    in_stack_fffffffffffff968 = (char *)CONCAT44(uVar40,uVar4);
    FUN_1008e3970("","IOCommunication",0,
                  "%sError for socket ai_family = %d, ai_socktype = %d, ai_protocol = %d in code line #%d, native error: %s"
                  ,pQVar28 + lVar38,uVar15,in_stack_fffffffffffff968,uVar5,uVar7,uVar33);
    if (*(int *)local_538 != -1) {
      if (*(int *)local_538 != 0) {
        LOCK();
        *(int *)local_538 = *(int *)local_538 + -1;
        local_1f9 = *(int *)local_538 != 0;
        UNLOCK();
        if (local_1f9) goto LAB_1007bd834;
      }
      QArrayData::deallocate(local_538,1,8);
    }
LAB_1007bd834:
    if (*(int *)local_540 != -1) {
      if (*(int *)local_540 != 0) {
        LOCK();
        *(int *)local_540 = *(int *)local_540 + -1;
        local_1f9 = *(int *)local_540 != 0;
        UNLOCK();
        if (local_1f9) goto LAB_1007bd870;
      }
      QArrayData::deallocate(local_540,2,8);
    }
LAB_1007bd870:
    local_528 = local_528 + 8;
  } while (local_528 != local_520);
LAB_1007bd899:
  local_518 = 1;
  if (*(int *)local_530 != -1) {
    if (*(int *)local_530 != 0) {
      LOCK();
      *(int *)local_530 = *(int *)local_530 + -1;
      local_1f9 = *(int *)local_530 != 0;
      UNLOCK();
      if (local_1f9) goto LAB_1007bd908;
    }
    iVar18 = *(int *)(local_530 + 0xc);
    if (iVar18 != *(int *)(local_530 + 8)) {
      lVar38 = (long)*(int *)(local_530 + 8) * 8 + (long)iVar18 * -8;
      pDVar29 = local_530 + (long)iVar18 * 8 + 8;
      do {
        if (*(void **)pDVar29 != (void *)0x0) {
          operator_delete(*(void **)pDVar29);
        }
        pDVar29 = pDVar29 + -8;
        lVar38 = lVar38 + 8;
      } while (lVar38 != 0);
    }
    QListData::dispose(local_530);
  }
LAB_1007bd908:
  if (bVar32) {
    local_550 = *(QArrayData **)(param_1 + 0x20);
    if (1 < *(int *)local_550 + 1U) {
      LOCK();
      *(int *)local_550 = *(int *)local_550 + 1;
      local_1f9 = *(int *)local_550 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sWARNINGS END",local_548 + *(long *)(local_548 + 0x10));
    if (*(int *)local_548 != -1) {
      if (*(int *)local_548 != 0) {
        LOCK();
        *(int *)local_548 = *(int *)local_548 + -1;
        local_1f9 = *(int *)local_548 != 0;
        UNLOCK();
        if (local_1f9) goto LAB_1007bd9b8;
      }
      QArrayData::deallocate(local_548,1,8);
    }
LAB_1007bd9b8:
    if (*(int *)local_550 != -1) {
      if (*(int *)local_550 != 0) {
        LOCK();
        *(int *)local_550 = *(int *)local_550 + -1;
        local_1f9 = *(int *)local_550 != 0;
        UNLOCK();
        if (local_1f9) goto LAB_1007bd9f4;
      }
      QArrayData::deallocate(local_550,2,8);
    }
LAB_1007bd9f4:
    if (bVar32) {
      local_628 = 7;
      iVar18 = _pipe((int)(int *)(param_1 + 0x6c));
      if (iVar18 < 0) {
        local_570 = *(QArrayData **)(param_1 + 0x20);
        if (1 < *(int *)local_570 + 1U) {
          LOCK();
          *(int *)local_570 = *(int *)local_570 + 1;
          local_1f9 = *(int *)local_570 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        pQVar28 = local_568;
        lVar38 = *(long *)(local_568 + 0x10);
        uVar33 = FUN_1007c5600(local_138,0x100);
        FUN_1008e3970("","IOCommunication",0,"%sCan\'t create event pipes (native error: %s)",
                      pQVar28 + lVar38,uVar33);
        if (*(int *)local_568 != -1) {
          if (*(int *)local_568 != 0) {
            LOCK();
            *(int *)local_568 = *(int *)local_568 + -1;
            local_1f9 = *(int *)local_568 != 0;
            UNLOCK();
            if (local_1f9) goto LAB_1007bde10;
          }
          QArrayData::deallocate(local_568,1,8);
        }
LAB_1007bde10:
        if (*(int *)local_570 != -1) {
          if (*(int *)local_570 != 0) {
            LOCK();
            *(int *)local_570 = *(int *)local_570 + -1;
            local_1f9 = *(int *)local_570 != 0;
            UNLOCK();
            if (local_1f9) goto LAB_1007be7a5;
          }
          QArrayData::deallocate(local_570,2,8);
          local_628 = 7;
        }
      }
      else {
        iVar18 = _pipe((int)(int *)(param_1 + 0x74));
        if (iVar18 < 0) {
          local_580 = *(QArrayData **)(param_1 + 0x20);
          if (1 < *(int *)local_580 + 1U) {
            LOCK();
            *(int *)local_580 = *(int *)local_580 + 1;
            local_1f9 = *(int *)local_580 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          pQVar28 = local_578;
          lVar38 = *(long *)(local_578 + 0x10);
          uVar33 = FUN_1007c5600(local_138,0x100);
          FUN_1008e3970("","IOCommunication",0,"%sCan\'t create event pipes (native error: %s)",
                        pQVar28 + lVar38,uVar33);
          if (*(int *)local_578 != -1) {
            if (*(int *)local_578 != 0) {
              LOCK();
              *(int *)local_578 = *(int *)local_578 + -1;
              local_1f9 = *(int *)local_578 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007be33c;
            }
            QArrayData::deallocate(local_578,1,8);
          }
LAB_1007be33c:
          if (*(int *)local_580 != -1) {
            if (*(int *)local_580 != 0) {
              LOCK();
              *(int *)local_580 = *(int *)local_580 + -1;
              local_1f9 = *(int *)local_580 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007be7a5;
            }
            QArrayData::deallocate(local_580,2,8);
            local_628 = 7;
          }
        }
        else {
          uVar33 = 0;
          iVar18 = _fcntl(*(int *)(param_1 + 0x6c),4,4);
          if (-1 < iVar18) {
            iVar18 = _fcntl(*(int *)(param_1 + 0x70),4,4);
            uVar33 = 1;
            if (-1 < iVar18) {
              iVar18 = _fcntl(*(int *)(param_1 + 0x74),4,4);
              uVar33 = 2;
              if (-1 < iVar18) {
                local_628 = 0;
                iVar18 = _fcntl(*(int *)(param_1 + 0x78),4,4);
                uVar33 = 3;
                if (-1 < iVar18) goto LAB_1007be7a5;
              }
            }
          }
          local_590 = *(QArrayData **)(param_1 + 0x20);
          if (1 < *(int *)local_590 + 1U) {
            LOCK();
            *(int *)local_590 = *(int *)local_590 + 1;
            local_1f9 = *(int *)local_590 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          pQVar28 = local_588;
          lVar38 = *(long *)(local_588 + 0x10);
          in_stack_fffffffffffff968 = (char *)FUN_1007c5600(local_138,0x100);
          FUN_1008e3970("","IOCommunication",0,
                        "%sCan\'t set O_NONBLOCK for event pipe #%d (native error: %s)",
                        pQVar28 + lVar38,uVar33,in_stack_fffffffffffff968);
          if (*(int *)local_588 != -1) {
            if (*(int *)local_588 != 0) {
              LOCK();
              *(int *)local_588 = *(int *)local_588 + -1;
              local_1f9 = *(int *)local_588 != 0;
              UNLOCK();
              if (local_1f9) goto LAB_1007bdb96;
            }
            QArrayData::deallocate(local_588,1,8);
          }
LAB_1007bdb96:
          if (*(int *)local_590 == -1) {
            local_628 = 7;
          }
          else {
            if (*(int *)local_590 != 0) {
              LOCK();
              *(int *)local_590 = *(int *)local_590 + -1;
              local_1f9 = *(int *)local_590 != 0;
              UNLOCK();
              if (local_1f9) {
                local_628 = 7;
                goto LAB_1007be7a5;
              }
            }
            QArrayData::deallocate(local_590,2,8);
            local_628 = 7;
          }
        }
      }
    }
    else {
      local_628 = 7;
    }
  }
  else {
    local_560 = *(QArrayData **)(param_1 + 0x20);
    if (1 < *(int *)local_560 + 1U) {
      LOCK();
      *(int *)local_560 = *(int *)local_560 + 1;
      local_1f9 = *(int *)local_560 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sERRORS END",local_558 + *(long *)(local_558 + 0x10));
    if (*(int *)local_558 != -1) {
      if (*(int *)local_558 != 0) {
        LOCK();
        *(int *)local_558 = *(int *)local_558 + -1;
        local_1f9 = *(int *)local_558 != 0;
        UNLOCK();
        if (local_1f9) goto LAB_1007bdc83;
      }
      QArrayData::deallocate(local_558,1,8);
    }
LAB_1007bdc83:
    if (*(int *)local_560 == -1) {
      local_628 = 7;
    }
    else {
      if (*(int *)local_560 != 0) {
        LOCK();
        *(int *)local_560 = *(int *)local_560 + -1;
        local_1f9 = *(int *)local_560 != 0;
        UNLOCK();
        if (local_1f9) {
          local_628 = 7;
          goto LAB_1007be7a5;
        }
      }
      local_628 = 7;
      QArrayData::deallocate(local_560,2,8);
    }
  }
LAB_1007be7a5:
  lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_1f9 = *(int *)local_2e0 != 0;
      UNLOCK();
      if (local_1f9) goto LAB_1007be7e9;
    }
    QListData::dispose(local_2e0);
  }
LAB_1007be7e9:
  pDVar29 = local_2d8;
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_1f9 = *(int *)local_2d8 != 0;
      UNLOCK();
      if (local_1f9) goto LAB_1007be87c;
    }
    iVar18 = *(int *)(local_2d8 + 0xc);
    if (iVar18 != *(int *)(local_2d8 + 8)) {
      lVar39 = (long)*(int *)(local_2d8 + 8) * 8 + (long)iVar18 * -8;
      pDVar30 = local_2d8 + (long)iVar18 * 8 + 8;
      do {
        if (*(void **)pDVar30 != (void *)0x0) {
          operator_delete(*(void **)pDVar30);
        }
        pDVar30 = pDVar30 + -8;
        lVar39 = lVar39 + 8;
      } while (lVar39 != 0);
    }
    QListData::dispose(pDVar29);
  }
LAB_1007be87c:
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_1f9 = *(int *)local_228 != 0;
      UNLOCK();
      if (local_1f9) goto LAB_1007be8b8;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_1007be8b8:
  if (*(int *)local_220.field0_0x0 != -1) {
    if (*(int *)local_220.field0_0x0 != 0) {
      LOCK();
      *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
      local_1f9 = *(int *)local_220.field0_0x0 != 0;
      UNLOCK();
      if (local_1f9) goto LAB_1007be8f4;
    }
    QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
  }
LAB_1007be8f4:
  if (local_628 == 0) {
LAB_1007be903:
    QMutex::lock();
    if (*(int *)(param_1 + 0x30) == 1) {
      FUN_1007c2790(param_1 + 0xd8,&local_218);
    }
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(undefined4 *)(param_1 + 0x68) = 3;
    QWaitCondition::wakeOne();
    QMutex::unlock();
    FUN_1007d5240(*(undefined8 *)(param_1 + 0x28),1);
    plVar21 = (long *)(param_1 + 0xd0);
LAB_1007be9e0:
    uVar16 = local_208[1];
    uVar27 = local_208[0];
    uVar15 = (undefined4)((ulong)in_stack_fffffffffffff968 >> 0x20);
    if (*(int *)(param_1 + 0x30) == 0) {
      QMutex::lock();
      iVar18 = 0;
      bVar32 = true;
      if (*(int *)(param_1 + 0x68) != 1) {
        if (*(int *)(*(long *)(param_1 + 0x98) + 8) < *(int *)(*(long *)(param_1 + 0x98) + 0xc)) {
          QMutex::unlock();
          iVar18 = -1;
          FUN_1007c0bd0(param_1);
          bVar32 = false;
        }
        else {
          iVar19 = *(int *)(*plVar21 + 8);
          iVar9 = *(int *)(*plVar21 + 0xc);
          if (iVar9 == iVar19) {
            QWaitCondition::wait((QMutex *)(param_1 + 200),param_1 + 0x58);
            if (*(int *)(param_1 + 0x68) != 1) {
              if (*(int *)(*(long *)(param_1 + 0x98) + 0xc) <=
                  *(int *)(*(long *)(param_1 + 0x98) + 8)) {
                iVar19 = *(int *)(*plVar21 + 8);
                iVar9 = *(int *)(*plVar21 + 0xc);
                goto LAB_1007bf0f2;
              }
              QMutex::unlock();
              iVar18 = -1;
              FUN_1007c0bd0(param_1);
              bVar32 = false;
            }
          }
          else {
LAB_1007bf0f2:
            iVar18 = -1;
            bVar32 = true;
            if (iVar9 != iVar19) {
              FUN_1007c4b90(&local_608,plVar21);
              QMutex::unlock();
              plVar1 = local_608;
              local_610 = local_608;
              if (local_608 != (long *)0x0) {
                LOCK();
                *(int *)(local_608 + 1) = (int)local_608[1] + 1;
                UNLOCK();
              }
              FUN_1007ba300(param_1,0xffffffff,&local_610,0);
              if (local_610 != (long *)0x0) {
                LOCK();
                plVar2 = local_610 + 1;
                lVar38 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar38 == 1) {
                  (**(code **)(*local_610 + 0x10))();
                }
              }
              iVar18 = -0x4d;
              if (plVar1 == (long *)0x0) {
                bVar32 = false;
              }
              else {
                LOCK();
                plVar2 = plVar1 + 1;
                lVar38 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar38 == 1) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                  bVar32 = false;
                }
                else {
                  bVar32 = false;
                }
              }
            }
          }
        }
      }
      if (bVar32) {
        QMutex::unlock();
      }
      if (iVar18 != 0) goto LAB_1007be9e0;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 1) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar17 = *(uint *)(param_1 + 0x6c);
      uVar8 = *(uint *)(param_1 + 0x74);
      uVar36 = (ulong)(int)local_208[0];
      uVar34 = 0xffffffff;
      if (-2 < (long)uVar36) {
        uVar34 = local_208[0];
      }
      uVar31 = (ulong)(int)local_208[1];
      if ((int)uVar34 <= (int)local_208[1]) {
        uVar34 = local_208[1];
      }
      uVar25 = uVar8;
      if ((int)uVar8 <= (int)uVar17) {
        uVar25 = uVar17;
      }
      if ((int)uVar25 <= (int)uVar34) {
        uVar25 = uVar34;
      }
      iVar18 = *(int *)(param_1 + 0x7c);
      if (iVar18 <= (int)uVar25) {
        local_5a0 = *(QArrayData **)(param_1 + 0x20);
        if (1 < *(int *)local_5a0 + 1U) {
          LOCK();
          *(int *)local_5a0 = *(int *)local_5a0 + 1;
          local_1f9 = *(int *)local_5a0 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
        FUN_1008e3970("","IOCommunication",0,
                      "%sOut of resources! Descriptor \'%d\' exceeds max possible \'%d\'.",
                      local_598 + *(long *)(local_598 + 0x10),uVar25 + 1,
                      CONCAT44(uVar15,*(undefined4 *)(param_1 + 0x7c)));
        if (*(int *)local_598 != -1) {
          if (*(int *)local_598 != 0) {
            LOCK();
            *(int *)local_598 = *(int *)local_598 + -1;
            local_1f9 = *(int *)local_598 != 0;
            UNLOCK();
            if (local_1f9) goto LAB_1007bf2d0;
          }
          QArrayData::deallocate(local_598,1,8);
        }
LAB_1007bf2d0:
        if (*(int *)local_5a0 == -1) goto LAB_1007bf347;
        if (*(int *)local_5a0 != 0) {
          LOCK();
          *(int *)local_5a0 = *(int *)local_5a0 + -1;
          local_1f9 = *(int *)local_5a0 != 0;
          UNLOCK();
          if (local_1f9) goto LAB_1007bf347;
        }
        QArrayData::deallocate(local_5a0,2,8);
        goto LAB_1007bf347;
      }
      uVar33 = 0;
      if (*(long *)(param_1 + 0x80) != 0) {
        uVar33 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x10);
      }
      ___bzero(uVar33,(long)((int)(iVar18 + 7 + ((uint)(iVar18 + 7 >> 0x1f) >> 0x1d)) >> 3));
      lVar38 = *(long *)(param_1 + 0x80);
      lVar39 = *(long *)(lVar38 + 0x10);
      uVar34 = 1 << ((byte)uVar17 & 0x1f);
      puVar35 = (uint *)(lVar39 + ((ulong)(long)(int)uVar17 >> 5) * 4);
      *puVar35 = *puVar35 | uVar34;
      uVar37 = 1 << ((byte)uVar8 & 0x1f);
      puVar35 = (uint *)(lVar39 + ((ulong)(long)(int)uVar8 >> 5) * 4);
      *puVar35 = *puVar35 | uVar37;
      if (0 < (int)uVar27) {
        puVar35 = (uint *)(lVar39 + (uVar36 >> 5) * 4);
        *puVar35 = *puVar35 | 1 << ((byte)uVar27 & 0x1f);
      }
      if (0 < (int)uVar16) {
        puVar35 = (uint *)(lVar39 + (uVar31 >> 5) * 4);
        *puVar35 = *puVar35 | 1 << ((byte)uVar16 & 0x1f);
      }
      if (lVar38 == 0) {
        lVar39 = 0;
      }
      iVar18 = _select_1050(uVar25 + 1,lVar39,0,0,0);
      if (iVar18 == 0) {
        local_5b0 = *(QArrayData **)(param_1 + 0x20);
        if (1 < *(int *)local_5b0 + 1U) {
          LOCK();
          *(int *)local_5b0 = *(int *)local_5b0 + 1;
          local_1f9 = *(int *)local_5b0 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sTimeout? Try again.");
        if (*(int *)local_5a8 != -1) {
          if (*(int *)local_5a8 != 0) {
            LOCK();
            *(int *)local_5a8 = *(int *)local_5a8 + -1;
            local_1f9 = *(int *)local_5a8 != 0;
            UNLOCK();
            if (local_1f9) goto LAB_1007beffd;
          }
          QArrayData::deallocate(local_5a8,1,8);
        }
LAB_1007beffd:
        if (*(int *)local_5b0 == -1) goto LAB_1007be9e0;
        if (*(int *)local_5b0 != 0) {
          LOCK();
          *(int *)local_5b0 = *(int *)local_5b0 + -1;
          local_1f9 = *(int *)local_5b0 != 0;
          UNLOCK();
          if (local_1f9) goto LAB_1007be9e0;
        }
        QArrayData::deallocate(local_5b0,2,8);
        goto LAB_1007be9e0;
      }
      if (iVar18 < 0) {
        piVar24 = ___error();
        if (*piVar24 != 4) goto LAB_1007bf5a2;
        goto LAB_1007be9e0;
      }
      lVar38 = *(long *)(*(long *)(param_1 + 0x80) + 0x10);
      if ((*(uint *)(lVar38 + ((ulong)(long)(int)uVar17 >> 5) * 4) & uVar34) == 0) {
        uVar31 = 1;
        if ((*(uint *)(lVar38 + ((ulong)(long)(int)uVar8 >> 5) * 4) & uVar37) == 0) {
          do {
            uVar27 = (uint)uVar36;
            if ((uVar27 != 0xffffffff) &&
               ((*(uint *)(*(long *)(*(long *)(param_1 + 0x80) + 0x10) +
                          ((ulong)(long)(int)uVar27 >> 5) * 4) >> (uVar27 & 0x1f) & 1) != 0)) {
              local_188 = 0;
              uStack_180 = 0;
              local_198 = 0;
              uStack_190 = 0;
              local_1a8 = 0;
              uStack_1a0 = 0;
              local_1b8 = 0;
              uStack_1b0 = 0;
              local_1c8 = 0;
              uStack_1c0 = 0;
              local_1d8 = 0;
              uStack_1d0 = 0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_1f8.sa_len = '\0';
              local_1f8.sa_family = '\0';
              local_1f8.sa_data[0] = '\0';
              local_1f8.sa_data[1] = '\0';
              local_1f8.sa_data[2] = '\0';
              local_1f8.sa_data[3] = '\0';
              local_1f8.sa_data[4] = '\0';
              local_1f8.sa_data[5] = '\0';
              local_1f8.sa_data[6] = '\0';
              local_1f8.sa_data[7] = '\0';
              local_1f8.sa_data[8] = '\0';
              local_1f8.sa_data[9] = '\0';
              local_1f8.sa_data[10] = '\0';
              local_1f8.sa_data[0xb] = '\0';
              local_1f8.sa_data[0xc] = '\0';
              local_1f8.sa_data[0xd] = '\0';
              local_5e4 = 0x80;
              iVar18 = _accept(uVar27,&local_1f8,&local_5e4);
              if (iVar18 < 0) {
                piVar24 = ___error();
                if (*piVar24 != 4) {
                  local_5f8 = *(QArrayData **)(param_1 + 0x20);
                  if (1 < *(int *)local_5f8 + 1U) {
                    LOCK();
                    *(int *)local_5f8 = *(int *)local_5f8 + 1;
                    local_1f9 = *(int *)local_5f8 != 0;
                    UNLOCK();
                  }
                  QString::toLocal8Bit();
                  pQVar28 = local_5f0;
                  lVar38 = *(long *)(local_5f0 + 0x10);
                  uVar33 = FUN_1007c5600(local_138,0x100);
                  FUN_1008e3970("","IOCommunication",0,"%sAccept error (native error: %s)",
                                pQVar28 + lVar38,uVar33);
                  if (*(int *)local_5f0 != -1) {
                    if (*(int *)local_5f0 != 0) {
                      LOCK();
                      *(int *)local_5f0 = *(int *)local_5f0 + -1;
                      UNLOCK();
                      local_1f9 = *(int *)local_5f0 != 0;
                      if (*(int *)local_5f0 != 0) goto LAB_1007beec6;
                    }
                    QArrayData::deallocate(local_5f0,1,8);
                  }
LAB_1007beec6:
                  if (*(int *)local_5f8 != -1) {
                    if (*(int *)local_5f8 != 0) {
                      LOCK();
                      *(int *)local_5f8 = *(int *)local_5f8 + -1;
                      UNLOCK();
                      local_1f9 = *(int *)local_5f8 != 0;
                      if (*(int *)local_5f8 != 0) goto LAB_1007bef10;
                    }
                    QArrayData::deallocate(local_5f8,2,8);
                  }
                }
              }
              else {
                if (DAT_1011ccc18 != (code *)0x0) {
                  (*DAT_1011ccc18)(uVar36 & 0xff,0x31,
                                   CONCAT44(iVar18,(*(uint *)(*(long *)(param_1 + 0x28) + 0x30) &
                                                   0xf) << 6) | 1);
                }
                local_600 = (long *)0x0;
                FUN_1007ba300(param_1,iVar18,&local_600,0);
                if (local_600 != (long *)0x0) {
                  LOCK();
                  plVar1 = local_600 + 1;
                  lVar38 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar38 == 1) {
                    (**(code **)(*local_600 + 0x10))();
                  }
                }
              }
            }
LAB_1007bef10:
            if (1 < uVar31) goto LAB_1007be9e0;
            uVar36 = (ulong)local_208[uVar31];
            uVar31 = uVar31 + 1;
          } while( true );
        }
        do {
          do {
            sVar23 = _read(uVar8,local_178,0x40);
          } while (-1 < (int)sVar23);
          piVar24 = ___error();
          if (*piVar24 == 0x23) goto LAB_1007becc4;
          piVar24 = ___error();
        } while (*piVar24 == 4);
        piVar24 = ___error();
        iVar18 = *piVar24;
        local_5e0 = *(QArrayData **)(param_1 + 0x20);
        if (1 < *(int *)local_5e0 + 1U) {
          LOCK();
          *(int *)local_5e0 = *(int *)local_5e0 + 1;
          local_1f9 = *(int *)local_5e0 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        pQVar28 = local_5d8;
        lVar38 = *(long *)(local_5d8 + 0x10);
        uVar33 = FUN_1007c5600(local_138,0x100);
        FUN_1008e3970("","IOCommunication",0,"%sRead from cleaning pipe failed (native error: %s)",
                      pQVar28 + lVar38,uVar33);
        if (*(int *)local_5d8 != -1) {
          if (*(int *)local_5d8 != 0) {
            LOCK();
            *(int *)local_5d8 = *(int *)local_5d8 + -1;
            local_1f9 = *(int *)local_5d8 != 0;
            UNLOCK();
            if (local_1f9) goto LAB_1007bec7f;
          }
          QArrayData::deallocate(local_5d8,1,8);
        }
LAB_1007bec7f:
        if (*(int *)local_5e0 != -1) {
          if (*(int *)local_5e0 != 0) {
            LOCK();
            *(int *)local_5e0 = *(int *)local_5e0 + -1;
            local_1f9 = *(int *)local_5e0 != 0;
            UNLOCK();
            if (local_1f9) goto LAB_1007becbb;
          }
          QArrayData::deallocate(local_5e0,2,8);
        }
LAB_1007becbb:
        if (iVar18 != 0) goto LAB_1007bf32e;
LAB_1007becc4:
        FUN_1007c0bd0(param_1);
        goto LAB_1007be9e0;
      }
      if (1 < DAT_1011b55f8) {
        local_5d0 = *(QArrayData **)(param_1 + 0x20);
        lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
        if (1 < *(int *)local_5d0 + 1U) {
          LOCK();
          *(int *)local_5d0 = *(int *)local_5d0 + 1;
          local_1f9 = *(int *)local_5d0 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",2,"%sStop in progress for server",
                      local_5c8 + *(long *)(local_5c8 + 0x10));
        if (*(int *)local_5c8 != -1) {
          if (*(int *)local_5c8 != 0) {
            LOCK();
            *(int *)local_5c8 = *(int *)local_5c8 + -1;
            local_1f9 = *(int *)local_5c8 != 0;
            UNLOCK();
            if (local_1f9) goto LAB_1007bf779;
          }
          QArrayData::deallocate(local_5c8,1,8);
        }
LAB_1007bf779:
        if (*(int *)local_5d0 == -1) goto LAB_1007bf347;
        if (*(int *)local_5d0 != 0) {
          LOCK();
          *(int *)local_5d0 = *(int *)local_5d0 + -1;
          local_1f9 = *(int *)local_5d0 != 0;
          UNLOCK();
          if (local_1f9) goto LAB_1007bf347;
        }
        QArrayData::deallocate(local_5d0,2,8);
        goto LAB_1007bf347;
      }
    }
LAB_1007bf32e:
    lVar38 = *(long *)PTR____stack_chk_guard_100ba2320;
    goto LAB_1007bf347;
  }
  if (local_628 == 7) {
LAB_1007bf347:
    iVar18 = *(int *)(param_1 + 0x40);
    QMutex::lock();
    *(int *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x68) = 1;
    QMutex::unlock();
    FUN_1007d5240(*(undefined8 *)(param_1 + 0x28),0);
    if (iVar18 == 1) {
      FUN_1007c0d50(param_1);
    }
    QMutex::lock();
    if (*(int *)(param_1 + 0x30) == 1) {
      if (local_210 != (addrinfo *)0x0) {
        _freeaddrinfo(local_210);
        local_210 = (addrinfo *)0x0;
      }
      if ((psVar20 != (sockaddr *)0x0) && (*(char *)(param_1 + 0xe0) != '\0')) {
        _free(psVar20);
      }
      uVar27 = local_208[0];
      if (local_208[0] != 0xffffffff) {
        _close(local_208[0]);
        if (DAT_1011ccc18 != (code *)0x0) {
          (*DAT_1011ccc18)(uVar27 & 0xff,0x31,
                           (*(uint *)(*(long *)(param_1 + 0x28) + 0x30) & 0xf) << 6 | 2);
        }
        local_208[0] = 0xffffffff;
      }
      uVar27 = local_208[1];
      if (local_208[1] != 0xffffffff) {
        _close(local_208[1]);
        if (DAT_1011ccc18 != (code *)0x0) {
          (*DAT_1011ccc18)(uVar27 & 0xff,0x31,
                           (*(uint *)(*(long *)(param_1 + 0x28) + 0x30) & 0xf) << 6 | 2);
        }
        local_208[1] = 0xffffffff;
      }
      if ((*(char *)(param_1 + 0xe0) != '\0') && (*(long *)(param_1 + 0x28) != 0)) {
        QString::toUtf8();
        _unlink((char *)(local_618 + *(long *)(local_618 + 0x10)));
        if (*(int *)local_618 != -1) {
          if (*(int *)local_618 != 0) {
            LOCK();
            *(int *)local_618 = *(int *)local_618 + -1;
            local_1f9 = *(int *)local_618 != 0;
            UNLOCK();
            if (local_1f9) goto LAB_1007bf4dc;
          }
          QArrayData::deallocate(local_618,1,8);
        }
      }
LAB_1007bf4dc:
      if (*(int *)(param_1 + 0x6c) != -1) {
        _close(*(int *)(param_1 + 0x6c));
        *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x70) != -1) {
        _close(*(int *)(param_1 + 0x70));
        *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x74) != -1) {
        _close(*(int *)(param_1 + 0x74));
        *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x78) != -1) {
        _close(*(int *)(param_1 + 0x78));
        *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
      }
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    QWaitCondition::wakeOne();
    QMutex::unlock();
  }
  if (*(int *)(local_218 + 0x10) != -1) {
    if (*(int *)(local_218 + 0x10) != 0) {
      LOCK();
      pcVar3 = local_218 + 0x10;
      *(int *)pcVar3 = *(int *)pcVar3 + -1;
      local_1f9 = *(int *)pcVar3 != 0;
      UNLOCK();
      if (local_1f9) goto LAB_1007bf586;
    }
    QHashData::free_helper(local_218);
  }
LAB_1007bf586:
  if (lVar38 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

