
undefined8 FUN_1000f1020(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  void *pvVar13;
  QArrayData *pQVar14;
  CHostHardwareInfo *this;
  long *plVar15;
  QString QVar16;
  undefined8 uVar17;
  CVmEvent *this_00;
  long *plVar18;
  CVmEventParameter *pCVar19;
  long lVar20;
  QString *pQVar21;
  CVmEventParameter *pCVar22;
  int *piVar23;
  int *piVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  bool bVar28;
  long local_518;
  long *local_510;
  QArrayData *local_508;
  QArrayData *local_500;
  QArrayData *local_4f8;
  QArrayData *local_4f0;
  QArrayData *local_4e8;
  QArrayData *local_4e0;
  QArrayData *local_4d8;
  CVmEvent local_4d0 [8];
  undefined1 local_4c8 [216];
  QEvent local_3f0 [32];
  long *local_3d0;
  QArrayData *local_3c8;
  QArrayData *local_3c0;
  QString local_3b8;
  long *local_3b0;
  QArrayData *local_3a8;
  QArrayData *local_3a0;
  long *local_398;
  int *local_390;
  int *local_388;
  QArrayData *local_380;
  QArrayData *local_378;
  int *local_370;
  int *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QArrayData *local_350;
  QArrayData *local_348;
  QTypedArrayData<unsigned_short> *local_340;
  int *local_338;
  int *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  int *local_300;
  int *local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  int *local_2e0;
  int *local_2d8;
  QString local_2d0;
  long *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QArrayData *local_288;
  CVmEvent local_280 [8];
  undefined1 local_278 [216];
  QEvent local_1a0 [32];
  QArrayData *local_180;
  int *local_178;
  int *local_170;
  int *local_168;
  int *local_160;
  uint local_158;
  QArrayData *local_150;
  int *local_148;
  int *local_140;
  int *local_138;
  int *local_130;
  uint local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  QString local_108;
  QArrayData *local_100;
  long *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QString local_b0;
  long *local_a8;
  QArrayData *local_a0;
  long *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  long *local_80;
  undefined1 local_78 [8];
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_10011a560(&local_80,param_1);
  iVar10 = *(int *)(local_80[2] + 0x10);
  if (iVar10 < 0x416) {
    if (0x40c < iVar10) {
      if (iVar10 != 0x40d) {
        if (iVar10 != 0x414) goto LAB_1000f22ff;
        if (local_80 == (long *)0x0) {
LAB_1000f1780:
          lVar20 = 0;
          FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmGuestCmd",
                        "CVmGuestFakeImp.cpp",0xfc,"ProcessCommand");
        }
        else {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
          lVar20 = local_80[2];
          LOCK();
          plVar15 = local_80 + 1;
          lVar4 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*local_80 + 0x10))();
          }
          if (lVar20 == 0) goto LAB_1000f1780;
        }
        FUN_10012e460(&local_2d0,lVar20);
        QMutex::lock();
        plVar15 = DAT_1011b7590;
        uVar12 = *(uint *)(DAT_1011b7590 + 4);
        plVar18 = plVar15;
        if (uVar12 != 0) {
          uVar9 = qHash(&local_2d0,*(uint *)((long)DAT_1011b7590 + 0x24));
          uVar3 = (ulong)uVar9 % (ulong)uVar12;
          plVar25 = *(long **)(plVar15[1] + uVar3 * 8);
          if (plVar25 != plVar15) {
            plVar27 = (long *)(plVar15[1] + uVar3 * 8);
            do {
              plVar26 = plVar25;
              plVar18 = plVar15;
              if (*(uint *)(plVar25 + 1) == uVar9) {
                cVar7 = operator==(&local_2d0,(QString *)(plVar25 + 2));
                plVar15 = (long *)*plVar27;
                plVar26 = plVar15;
                plVar18 = DAT_1011b7590;
                if (cVar7 != '\0') break;
              }
              plVar15 = plVar18;
              plVar25 = (long *)*plVar26;
              plVar18 = plVar15;
              plVar27 = plVar26;
            } while (plVar25 != plVar15);
          }
        }
        QMutex::unlock();
        if (*(int *)local_2d0.field0_0x0 != -1) {
          if (*(int *)local_2d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_2d0.field0_0x0 = *(int *)local_2d0.field0_0x0 + -1;
            local_49 = *(int *)local_2d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f21f4;
          }
          QArrayData::deallocate((QArrayData *)local_2d0.field0_0x0,2,8);
        }
LAB_1000f21f4:
        puVar5 = PTR_shared_null_100ba2188;
        if (plVar15 == plVar18) goto LAB_1000f22ff;
        local_2e0 = (int *)PTR_shared_null_100ba2188;
        local_2e8 = (QArrayData *)QString::fromAscii_helper("192.168.1.254",0xd);
        FUN_10000c490(&local_2e0,&local_2e8);
        pQVar14 = (QArrayData *)QString::fromAscii_helper("10.30.8.254",0xb);
        local_2f0 = pQVar14;
        FUN_10000c490(&local_2e0,&local_2f0);
        local_2d8 = local_2e0;
        if (*local_2e0 != -1) {
          if (*local_2e0 == 0) {
            QListData::detach((int)&local_2d8);
            iVar10 = local_2d8[2];
            if (iVar10 != local_2d8[3]) {
              piVar23 = local_2e0 + (long)local_2e0[2] * 2 + 4;
              piVar24 = local_2d8 + (long)iVar10 * 2 + 4;
              lVar20 = (long)local_2d8[3] * 8 + (long)iVar10 * -8;
              do {
                piVar1 = *(int **)piVar23;
                *(int **)piVar24 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_49 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar24 = piVar24 + 2;
                piVar23 = piVar23 + 2;
                lVar20 = lVar20 + -8;
                pQVar14 = local_2f0;
              } while (lVar20 != 0);
            }
          }
          else {
            LOCK();
            *local_2e0 = *local_2e0 + 1;
            local_49 = *local_2e0 != 0;
            UNLOCK();
          }
        }
        if (*(int *)pQVar14 != -1) {
          if (*(int *)pQVar14 != 0) {
            LOCK();
            *(int *)pQVar14 = *(int *)pQVar14 + -1;
            local_49 = *(int *)pQVar14 != 0;
            UNLOCK();
            pQVar14 = local_2f0;
            if ((bool)local_49) goto LAB_1000f237d;
          }
          QArrayData::deallocate(pQVar14,2,8);
        }
LAB_1000f237d:
        if (*(int *)local_2e8 != -1) {
          if (*(int *)local_2e8 != 0) {
            LOCK();
            *(int *)local_2e8 = *(int *)local_2e8 + -1;
            local_49 = *(int *)local_2e8 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f23ac;
          }
          QArrayData::deallocate(local_2e8,2,8);
        }
LAB_1000f23ac:
        FUN_100013180(&local_2e0);
        local_300 = (int *)puVar5;
        local_308 = (QArrayData *)QString::fromAscii_helper("sw.ru",5);
        FUN_10000c490(&local_300,&local_308);
        pQVar14 = (QArrayData *)QString::fromAscii_helper("parallels.com",0xd);
        local_310 = pQVar14;
        FUN_10000c490(&local_300,&local_310);
        local_2f8 = local_300;
        if (*local_300 != -1) {
          if (*local_300 == 0) {
            QListData::detach((int)&local_2f8);
            iVar10 = local_2f8[2];
            if (iVar10 != local_2f8[3]) {
              piVar23 = local_300 + (long)local_300[2] * 2 + 4;
              piVar24 = local_2f8 + (long)iVar10 * 2 + 4;
              lVar20 = (long)local_2f8[3] * 8 + (long)iVar10 * -8;
              do {
                piVar1 = *(int **)piVar23;
                *(int **)piVar24 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_49 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar24 = piVar24 + 2;
                piVar23 = piVar23 + 2;
                lVar20 = lVar20 + -8;
                pQVar14 = local_310;
              } while (lVar20 != 0);
            }
          }
          else {
            LOCK();
            *local_300 = *local_300 + 1;
            local_49 = *local_300 != 0;
            UNLOCK();
          }
        }
        if (*(int *)pQVar14 != -1) {
          if (*(int *)pQVar14 != 0) {
            LOCK();
            *(int *)pQVar14 = *(int *)pQVar14 + -1;
            local_49 = *(int *)pQVar14 != 0;
            UNLOCK();
            pQVar14 = local_310;
            if ((bool)local_49) goto LAB_1000f24e1;
          }
          QArrayData::deallocate(pQVar14,2,8);
        }
LAB_1000f24e1:
        if (*(int *)local_308 != -1) {
          if (*(int *)local_308 != 0) {
            LOCK();
            *(int *)local_308 = *(int *)local_308 + -1;
            local_49 = *(int *)local_308 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f2510;
          }
          QArrayData::deallocate(local_308,2,8);
        }
LAB_1000f2510:
        FUN_100013180(&local_300);
        this = operator_new(0x1c8);
        CHostHardwareInfo::CHostHardwareInfo(this);
        plVar15 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        bVar28 = plVar15 == (long *)0x0;
        if (bVar28) {
          (**(code **)(*(long *)this + 0x88))(this);
          plVar15 = (long *)0x0;
        }
        else {
          *(undefined4 *)(plVar15 + 1) = 1;
          plVar15[2] = (long)this;
          *plVar15 = (long)&PTR_FUN_100bfbb80;
        }
        CHostHardwareInfoBase::getNetworkSettings();
        QVar16.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)CHwNetworkSettings::getGlobalNetwork();
        local_318 = (QArrayData *)QString::fromAscii_helper("test hostname",0xd);
        CHwGlobalNetwork::setHostName(QVar16);
        if (*(int *)local_318 != -1) {
          if (*(int *)local_318 != 0) {
            LOCK();
            *(int *)local_318 = *(int *)local_318 + -1;
            local_49 = *(int *)local_318 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f25f0;
          }
          QArrayData::deallocate(local_318,2,8);
        }
LAB_1000f25f0:
        CHostHardwareInfoBase::getNetworkSettings();
        QVar16.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)CHwNetworkSettings::getGlobalNetwork();
        local_320 = (QArrayData *)QString::fromAscii_helper("10.30.254.1",0xb);
        CHwGlobalNetwork::setDefaultGateway(QVar16);
        if (*(int *)local_320 != -1) {
          if (*(int *)local_320 != 0) {
            LOCK();
            *(int *)local_320 = *(int *)local_320 + -1;
            local_49 = *(int *)local_320 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f2668;
          }
          QArrayData::deallocate(local_320,2,8);
        }
LAB_1000f2668:
        CHostHardwareInfoBase::getNetworkSettings();
        QVar16.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)CHwNetworkSettings::getGlobalNetwork();
        local_328 = (QArrayData *)
                    QString::fromAscii_helper("2001:0db8:1234:00d0:0c50:0070:090a:0002",0x27);
        CHwGlobalNetwork::setDefaultGatewayIPv6(QVar16);
        if (*(int *)local_328 != -1) {
          if (*(int *)local_328 != 0) {
            LOCK();
            *(int *)local_328 = *(int *)local_328 + -1;
            local_49 = *(int *)local_328 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f26e0;
          }
          QArrayData::deallocate(local_328,2,8);
        }
LAB_1000f26e0:
        CHostHardwareInfoBase::getNetworkSettings();
        uVar17 = CHwNetworkSettings::getGlobalNetwork();
        local_330 = local_2d8;
        if (*local_2d8 != -1) {
          if (*local_2d8 == 0) {
            QListData::detach((int)&local_330);
            iVar10 = local_330[2];
            if (iVar10 != local_330[3]) {
              piVar23 = local_2d8 + (long)local_2d8[2] * 2 + 4;
              piVar24 = local_330 + (long)iVar10 * 2 + 4;
              lVar20 = (long)local_330[3] * 8 + (long)iVar10 * -8;
              do {
                piVar1 = *(int **)piVar23;
                *(int **)piVar24 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_49 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar24 = piVar24 + 2;
                piVar23 = piVar23 + 2;
                lVar20 = lVar20 + -8;
              } while (lVar20 != 0);
            }
          }
          else {
            LOCK();
            *local_2d8 = *local_2d8 + 1;
            local_49 = *local_2d8 != 0;
            UNLOCK();
          }
        }
        CHwGlobalNetwork::setDnsIPAddresses(uVar17,&local_330);
        FUN_100013180(&local_330);
        CHostHardwareInfoBase::getNetworkSettings();
        uVar17 = CHwNetworkSettings::getGlobalNetwork();
        local_338 = local_2f8;
        if (*local_2f8 != -1) {
          if (*local_2f8 == 0) {
            QListData::detach((int)&local_338);
            iVar10 = local_338[2];
            if (iVar10 != local_338[3]) {
              piVar23 = local_2f8 + (long)local_2f8[2] * 2 + 4;
              piVar24 = local_338 + (long)iVar10 * 2 + 4;
              lVar20 = (long)local_338[3] * 8 + (long)iVar10 * -8;
              do {
                piVar1 = *(int **)piVar23;
                *(int **)piVar24 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_49 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar24 = piVar24 + 2;
                piVar23 = piVar23 + 2;
                lVar20 = lVar20 + -8;
              } while (lVar20 != 0);
            }
          }
          else {
            LOCK();
            *local_2f8 = *local_2f8 + 1;
            local_49 = *local_2f8 != 0;
            UNLOCK();
          }
        }
        CHwGlobalNetwork::setSearchDomains(uVar17,&local_338);
        FUN_100013180(&local_338);
        QVar16.field0_0x0 = operator_new(0x120);
        CHwNetAdapter::CHwNetAdapter((CHwNetAdapter *)QVar16.field0_0x0);
        pcVar2 = *(code **)(*(long *)QVar16.field0_0x0 + 0xa0);
        local_340 = QVar16.field0_0x0;
        local_348 = (QArrayData *)QString::fromAscii_helper("eth0",4);
        (*pcVar2)(QVar16.field0_0x0,&local_348);
        if (*(int *)local_348 != -1) {
          if (*(int *)local_348 != 0) {
            LOCK();
            *(int *)local_348 = *(int *)local_348 + -1;
            local_49 = *(int *)local_348 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f28e0;
          }
          QArrayData::deallocate(local_348,2,8);
        }
LAB_1000f28e0:
        local_350 = (QArrayData *)QString::fromAscii_helper("001731EE6FBC",0xc);
        CHwNetAdapter::setMacAddress(QVar16);
        if (*(int *)local_350 != -1) {
          if (*(int *)local_350 != 0) {
            LOCK();
            *(int *)local_350 = *(int *)local_350 + -1;
            local_49 = *(int *)local_350 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f293d;
          }
          QArrayData::deallocate(local_350,2,8);
        }
LAB_1000f293d:
        CHwNetAdapter::setVLANTag((ushort)QVar16.field0_0x0);
        local_358 = (QArrayData *)QString::fromAscii_helper("10.30.254.1",0xb);
        CHwNetAdapter::setDefaultGateway(QVar16);
        if (*(int *)local_358 != -1) {
          if (*(int *)local_358 != 0) {
            LOCK();
            *(int *)local_358 = *(int *)local_358 + -1;
            local_49 = *(int *)local_358 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f29a7;
          }
          QArrayData::deallocate(local_358,2,8);
        }
LAB_1000f29a7:
        local_360 = (QArrayData *)
                    QString::fromAscii_helper("2001:0db8:1234:00d0:0c50:0070:090a:0002",0x27);
        CHwNetAdapter::setDefaultGatewayIPv6(QVar16);
        if (*(int *)local_360 != -1) {
          if (*(int *)local_360 != 0) {
            LOCK();
            *(int *)local_360 = *(int *)local_360 + -1;
            local_49 = *(int *)local_360 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f2a04;
          }
          QArrayData::deallocate(local_360,2,8);
        }
LAB_1000f2a04:
        CHwNetAdapter::setConfigureWithDhcp(SUB81(QVar16.field0_0x0,0));
        CHwNetAdapter::setConfigureWithDhcpIPv6(SUB81(QVar16.field0_0x0,0));
        local_370 = (int *)puVar5;
        local_378 = (QArrayData *)QString::fromAscii_helper("192.168.1.1/255.255.255.0",0x19);
        FUN_10000c490(&local_370,&local_378);
        local_380 = (QArrayData *)QString::fromAscii_helper("10.30.8.245/255.255.255.0",0x19);
        FUN_10000c490(&local_370,&local_380);
        local_368 = local_370;
        if (*local_370 != -1) {
          if (*local_370 == 0) {
            QListData::detach((int)&local_368);
            iVar10 = local_368[2];
            if (iVar10 != local_368[3]) {
              piVar23 = local_370 + (long)local_370[2] * 2 + 4;
              piVar24 = local_368 + (long)iVar10 * 2 + 4;
              lVar20 = (long)local_368[3] * 8 + (long)iVar10 * -8;
              do {
                piVar1 = *(int **)piVar23;
                *(int **)piVar24 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_49 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar24 = piVar24 + 2;
                piVar23 = piVar23 + 2;
                lVar20 = lVar20 + -8;
              } while (lVar20 != 0);
            }
          }
          else {
            LOCK();
            *local_370 = *local_370 + 1;
            local_49 = *local_370 != 0;
            UNLOCK();
          }
        }
        CHwNetAdapter::setNetAddresses(QVar16.field0_0x0,&local_368);
        FUN_100013180(&local_368);
        if (*(int *)local_380 != -1) {
          if (*(int *)local_380 != 0) {
            LOCK();
            *(int *)local_380 = *(int *)local_380 + -1;
            local_49 = *(int *)local_380 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f2b4c;
          }
          QArrayData::deallocate(local_380,2,8);
        }
LAB_1000f2b4c:
        if (*(int *)local_378 != -1) {
          if (*(int *)local_378 != 0) {
            LOCK();
            *(int *)local_378 = *(int *)local_378 + -1;
            local_49 = *(int *)local_378 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f2b7b;
          }
          QArrayData::deallocate(local_378,2,8);
        }
LAB_1000f2b7b:
        FUN_100013180(&local_370);
        pQVar6 = local_340;
        local_388 = local_2d8;
        if (*local_2d8 != -1) {
          if (*local_2d8 == 0) {
            QListData::detach((int)&local_388);
            iVar10 = local_388[2];
            if (iVar10 != local_388[3]) {
              piVar23 = local_2d8 + (long)local_2d8[2] * 2 + 4;
              piVar24 = local_388 + (long)iVar10 * 2 + 4;
              lVar20 = (long)local_388[3] * 8 + (long)iVar10 * -8;
              do {
                piVar1 = *(int **)piVar23;
                *(int **)piVar24 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_49 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar24 = piVar24 + 2;
                piVar23 = piVar23 + 2;
                lVar20 = lVar20 + -8;
              } while (lVar20 != 0);
            }
          }
          else {
            LOCK();
            *local_2d8 = *local_2d8 + 1;
            local_49 = *local_2d8 != 0;
            UNLOCK();
          }
        }
        CHwNetAdapter::setDnsIPAddresses(pQVar6,&local_388);
        FUN_100013180(&local_388);
        pQVar6 = local_340;
        local_390 = local_2f8;
        if (*local_2f8 != -1) {
          if (*local_2f8 == 0) {
            QListData::detach((int)&local_390);
            iVar10 = local_390[2];
            if (iVar10 != local_390[3]) {
              piVar23 = local_2f8 + (long)local_2f8[2] * 2 + 4;
              piVar24 = local_390 + (long)iVar10 * 2 + 4;
              lVar20 = (long)local_390[3] * 8 + (long)iVar10 * -8;
              do {
                piVar1 = *(int **)piVar23;
                *(int **)piVar24 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_49 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar24 = piVar24 + 2;
                piVar23 = piVar23 + 2;
                lVar20 = lVar20 + -8;
              } while (lVar20 != 0);
            }
          }
          else {
            LOCK();
            *local_2f8 = *local_2f8 + 1;
            local_49 = *local_2f8 != 0;
            UNLOCK();
          }
        }
        CHwNetAdapter::setSearchDomains(pQVar6,&local_390);
        FUN_100013180(&local_390);
        FUN_1000f55b0(*(undefined8 *)(plVar15[2] + 0x168),&local_340);
        FUN_100119090(&local_398,param_1,0);
        if (local_398 == (long *)0x0) {
LAB_1000f2d42:
          lVar20 = 0;
          FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pResponseCmd",
                        "CVmGuestFakeImp.cpp",0x119,"ProcessCommand");
        }
        else {
          LOCK();
          *(int *)(local_398 + 1) = (int)local_398[1] + 1;
          UNLOCK();
          lVar20 = local_398[2];
          LOCK();
          plVar18 = local_398 + 1;
          lVar4 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*local_398 + 0x10))();
          }
          if (lVar20 == 0) goto LAB_1000f2d42;
        }
        uVar8 = false;
        if (!bVar28) {
          uVar8 = (undefined1)plVar15[2];
        }
        CBaseNode::toString(SUB81(&local_3a0,0),(bool)uVar8);
        FUN_100128660(lVar20);
        if (*(int *)local_3a0 != -1) {
          if (*(int *)local_3a0 != 0) {
            LOCK();
            *(int *)local_3a0 = *(int *)local_3a0 + -1;
            local_49 = *(int *)local_3a0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f2de6;
          }
          QArrayData::deallocate(local_3a0,2,8);
        }
LAB_1000f2de6:
        uVar17 = DAT_1011c3650;
        FUN_10011cf50(&local_3b0);
        cVar7 = '\0';
        if (local_3b0 != (long *)0x0) {
          cVar7 = (char)local_3b0[2];
        }
        CBaseNode::toString(SUB81(&local_3a8,0),(bool)(cVar7 + '\b'));
        FUN_100063e20(uVar17,&local_3a8,0x1389,param_1,0);
        if (*(int *)local_3a8 != -1) {
          if (*(int *)local_3a8 != 0) {
            LOCK();
            *(int *)local_3a8 = *(int *)local_3a8 + -1;
            local_49 = *(int *)local_3a8 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f2e88;
          }
          QArrayData::deallocate(local_3a8,2,8);
        }
LAB_1000f2e88:
        if (local_3b0 != (long *)0x0) {
          LOCK();
          plVar18 = local_3b0 + 1;
          lVar20 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*local_3b0 + 0x10))();
          }
        }
        if (local_398 != (long *)0x0) {
          LOCK();
          plVar18 = local_398 + 1;
          lVar20 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*local_398 + 0x10))();
          }
        }
        if (!bVar28) {
          LOCK();
          plVar18 = plVar15 + 1;
          lVar20 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
        FUN_100013180(&local_2f8);
        uVar8 = 1;
        FUN_100013180(&local_2d8);
        goto LAB_1000f3c56;
      }
      if (local_80 == (long *)0x0) {
LAB_1000f1340:
        lVar20 = 0;
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pLoginInGuestCmd",
                      "CVmGuestFakeImp.cpp",0x8f,"ProcessCommand");
      }
      else {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
        lVar20 = local_80[2];
        LOCK();
        plVar15 = local_80 + 1;
        lVar4 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*local_80 + 0x10))();
        }
        if (lVar20 == 0) goto LAB_1000f1340;
      }
      FUN_10012e110(&local_88,lVar20);
      iVar10 = QString::compare_helper
                         (local_88 + *(long *)(local_88 + 0x10),*(undefined4 *)(local_88 + 4),
                          "e5d1d397-b03e-4e98-a117-b19c4bd583b4",0xffffffff,1);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_49 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1000f13e7;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1000f13e7:
      if (iVar10 != 0) goto LAB_1000f22ff;
      QMutex::lock();
      FUN_1007d6bd0(local_48);
      FUN_1007d6a70(&local_90,local_48);
      FUN_100022e50(&DAT_1011b7590,&local_90,local_78);
      QMutex::unlock();
      FUN_100119090(&local_98,param_1,0);
      if (local_98 == (long *)0x0) {
LAB_1000f1482:
        lVar20 = 0;
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pResponseCmd",
                      "CVmGuestFakeImp.cpp",0x96,"ProcessCommand");
      }
      else {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
        lVar20 = local_98[2];
        LOCK();
        plVar15 = local_98 + 1;
        lVar4 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*local_98 + 0x10))();
        }
        if (lVar20 == 0) goto LAB_1000f1482;
      }
      FUN_100128660(lVar20);
      uVar17 = DAT_1011c3650;
      FUN_10011cf50(&local_a8);
      cVar7 = '\0';
      if (local_a8 != (long *)0x0) {
        cVar7 = (char)local_a8[2];
      }
      CBaseNode::toString(SUB81(&local_a0,0),(bool)(cVar7 + '\b'));
      FUN_100063e20(uVar17,&local_a0,0x1389,param_1,0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_49 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1000f1573;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1000f1573:
      if (local_a8 != (long *)0x0) {
        LOCK();
        plVar15 = local_a8 + 1;
        lVar20 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)(*local_a8 + 0x10))();
        }
      }
      if (local_98 != (long *)0x0) {
        LOCK();
        plVar15 = local_98 + 1;
        lVar20 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
      uVar8 = 1;
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_49 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1000f3c56;
        }
        QArrayData::deallocate(local_90,2,8);
      }
      goto LAB_1000f3c56;
    }
    if (iVar10 != 0x403) {
      if (iVar10 != 0x404) goto LAB_1000f22ff;
      if (local_80 == (long *)0x0) {
LAB_1000f1642:
        lVar20 = 0;
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmGuestRunAppCmd",
                      "CVmGuestFakeImp.cpp",0xb4,"ProcessCommand");
      }
      else {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
        lVar20 = local_80[2];
        LOCK();
        plVar15 = local_80 + 1;
        lVar4 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*local_80 + 0x10))();
        }
        if (lVar20 == 0) goto LAB_1000f1642;
      }
      FUN_10012e460(&local_c0,lVar20);
      QMutex::lock();
      plVar15 = DAT_1011b7590;
      uVar12 = *(uint *)(DAT_1011b7590 + 4);
      plVar18 = plVar15;
      if (uVar12 != 0) {
        uVar9 = qHash(&local_c0,*(uint *)((long)DAT_1011b7590 + 0x24));
        uVar3 = (ulong)uVar9 % (ulong)uVar12;
        plVar25 = *(long **)(plVar15[1] + uVar3 * 8);
        if (plVar25 != plVar15) {
          plVar27 = (long *)(plVar15[1] + uVar3 * 8);
          do {
            plVar26 = plVar25;
            plVar18 = plVar15;
            if (*(uint *)(plVar25 + 1) == uVar9) {
              cVar7 = operator==(&local_c0,(QString *)(plVar25 + 2));
              plVar15 = (long *)*plVar27;
              plVar26 = plVar15;
              plVar18 = DAT_1011b7590;
              if (cVar7 != '\0') break;
            }
            plVar15 = plVar18;
            plVar25 = (long *)*plVar26;
            plVar27 = plVar26;
            plVar18 = plVar15;
          } while (plVar25 != plVar15);
        }
      }
      QMutex::unlock();
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_49 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1000f1f68;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
LAB_1000f1f68:
      if (plVar15 == plVar18) goto LAB_1000f22ff;
      FUN_10012e9e0(&local_c8,lVar20);
      iVar10 = QString::compare_helper
                         (local_c8 + *(long *)(local_c8 + 0x10),*(undefined4 *)(local_c8 + 4),
                          "exists_app_name",0xffffffff,1);
      bVar28 = true;
      if (iVar10 != 0) {
        FUN_10012e9e0(&local_d0,lVar20);
        iVar10 = QString::compare_helper
                           (local_d0 + *(long *)(local_d0 + 0x10),*(undefined4 *)(local_d0 + 4),
                            "args_and_envs_print_app",0xffffffff,1);
        bVar28 = iVar10 == 0;
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_49 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f2023;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
      }
LAB_1000f2023:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_49 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1000f205c;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1000f205c:
      plVar15 = (long *)0x0;
      iVar10 = 0;
      if (!bVar28) {
        FUN_10012e9e0(&local_d8,lVar20);
        iVar10 = QString::compare_helper
                           (local_d8 + *(long *)(local_d8 + 0x10),*(undefined4 *)(local_d8 + 4),
                            "non_exists_app_name",0xffffffff,1);
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_49 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f20e2;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_1000f20e2:
        if (iVar10 == 0) {
          this_00 = operator_new(0x100);
          CVmEvent::CVmEvent(this_00);
          plVar18 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
          if (plVar18 == (long *)0x0) {
            plVar15 = (long *)0x0;
            (**(code **)(*(long *)this_00 + 8))();
            bVar28 = true;
            plVar18 = (long *)0x0;
            iVar10 = 0;
          }
          else {
            *(undefined4 *)(plVar18 + 1) = 1;
            plVar18[2] = (long)this_00;
            *plVar18 = (long)&PTR_FUN_10110ce08;
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
            LOCK();
            plVar15 = plVar18 + 1;
            lVar4 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)(*plVar18 + 0x10))();
            }
            iVar10 = 0;
            if (plVar18 == (long *)0x0) {
              bVar28 = true;
              plVar15 = (long *)0x0;
            }
            else {
              iVar10 = (int)plVar18[2];
              bVar28 = false;
              plVar15 = plVar18;
            }
          }
          CVmEventBase::setEventCode(iVar10);
          pCVar22 = (CVmEventParameter *)0x0;
          if (!bVar28) {
            pCVar22 = (CVmEventParameter *)plVar18[2];
          }
          pCVar19 = operator_new(0xd0);
          FUN_10012e9e0(&local_e0,lVar20);
          local_e8 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
          CVmEventParameter::CVmEventParameter(pCVar19,1,&local_e0,&local_e8);
          CVmEvent::addEventParameter(pCVar22);
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_49 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1000f3062;
            }
            QArrayData::deallocate(local_e8,2,8);
          }
LAB_1000f3062:
          iVar10 = -0x7ffcbffd;
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_49 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1000f30a1;
            }
            QArrayData::deallocate(local_e0,2,8);
          }
        }
        else {
          FUN_10012e9e0(&local_f0,lVar20);
          iVar11 = QString::compare_helper
                             (local_f0 + *(long *)(local_f0 + 0x10),*(undefined4 *)(local_f0 + 4),
                              "test_file_descriptors_app",0xffffffff,1);
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_49 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1000f215f;
            }
            QArrayData::deallocate(local_f0,2,8);
          }
LAB_1000f215f:
          iVar10 = -0x7ffffff8;
          plVar15 = (long *)0x0;
          if (iVar11 == 0) {
            pvVar13 = operator_new(0x18);
            uVar8 = 1;
            FUN_1000f0a60(pvVar13,param_1,lVar20);
            goto LAB_1000f3c56;
          }
        }
      }
LAB_1000f30a1:
      FUN_100119090(&local_f8,param_1,iVar10);
      if (local_f8 == (long *)0x0) {
LAB_1000f30fd:
        local_518 = 0;
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pResponseCmd",
                      "CVmGuestFakeImp.cpp",0xcd,"ProcessCommand");
      }
      else {
        LOCK();
        *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
        UNLOCK();
        local_518 = local_f8[2];
        LOCK();
        plVar18 = local_f8 + 1;
        lVar4 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*local_f8 + 0x10))();
        }
        if (local_518 == 0) goto LAB_1000f30fd;
      }
      if ((plVar15 != (long *)0x0) && (plVar15[2] != 0)) {
        CBaseNode::toString(false,(bool)((char)plVar15[2] + '\b'));
        FUN_100125480(local_518);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_49 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f31b3;
          }
          QArrayData::deallocate(local_100,2,8);
        }
      }
LAB_1000f31b3:
      uVar12 = FUN_10011d660(lVar20);
      if ((-1 < iVar10) && ((uVar12 & 0x4000) == 0)) {
        local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        FUN_10012e9e0(&local_118,lVar20);
        iVar10 = QString::compare_helper
                           (local_118 + *(long *)(local_118 + 0x10),*(undefined4 *)(local_118 + 4),
                            "exists_app_name",0xffffffff,1);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_49 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f3259;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_1000f3259:
        if (iVar10 == 0) {
          QString::fromUtf8_helper((char *)&local_70,0x9f526c);
          QString::operator=(&local_108,&local_70);
          if (*(int *)local_70.field0_0x0 != -1) {
            if (*(int *)local_70.field0_0x0 != 0) {
              LOCK();
              *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
              local_49 = *(int *)local_70.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1000f33cd;
            }
            QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
          }
LAB_1000f33cd:
          QString::fromUtf8_helper((char *)&local_68,0x9f5279);
          QString::operator=(&local_110,&local_68);
          if (*(int *)local_68.field0_0x0 != -1) {
            if (*(int *)local_68.field0_0x0 != 0) {
              LOCK();
              *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
              local_49 = *(int *)local_68.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1000f379d;
            }
            QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
          }
        }
        else {
          FUN_10012e9e0(&local_120,lVar20);
          iVar10 = QString::compare_helper
                             (local_120 + *(long *)(local_120 + 0x10),*(undefined4 *)(local_120 + 4)
                              ,"args_and_envs_print_app",0xffffffff,1);
          if (*(int *)local_120 != -1) {
            if (*(int *)local_120 != 0) {
              LOCK();
              *(int *)local_120 = *(int *)local_120 + -1;
              local_49 = *(int *)local_120 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1000f32d0;
            }
            QArrayData::deallocate(local_120,2,8);
          }
LAB_1000f32d0:
          if (iVar10 == 0) {
            FUN_10012eaa0(&local_148,lVar20);
            local_140 = local_148;
            if (*local_148 != -1) {
              if (*local_148 == 0) {
                QListData::detach((int)&local_140);
                iVar10 = local_140[2];
                if (iVar10 != local_140[3]) {
                  local_148 = local_148 + (long)local_148[2] * 2 + 4;
                  piVar23 = local_140 + (long)iVar10 * 2 + 4;
                  lVar20 = (long)local_140[3] * 8 + (long)iVar10 * -8;
                  do {
                    piVar24 = *(int **)local_148;
                    *(int **)piVar23 = piVar24;
                    if (1 < *piVar24 + 1U) {
                      LOCK();
                      *piVar24 = *piVar24 + 1;
                      local_49 = *piVar24 != 0;
                      UNLOCK();
                    }
                    piVar23 = piVar23 + 2;
                    local_148 = local_148 + 2;
                    lVar20 = lVar20 + -8;
                  } while (lVar20 != 0);
                }
              }
              else {
                LOCK();
                *local_148 = *local_148 + 1;
                local_49 = *local_148 != 0;
                UNLOCK();
              }
            }
            local_138 = local_140 + (long)local_140[2] * 2 + 4;
            local_130 = local_140 + (long)local_140[3] * 2 + 4;
            local_128 = 1;
            FUN_100013180(&local_148);
            if (local_128 != 0) {
              do {
                if (local_138 == local_130) break;
                local_150 = *(QArrayData **)local_138;
                if (1 < *(int *)local_150 + 1U) {
                  LOCK();
                  *(int *)local_150 = *(int *)local_150 + 1;
                  local_49 = *(int *)local_150 != 0;
                  UNLOCK();
                }
                if (local_128 != 0) {
                  pQVar21 = (QString *)QString::append(&local_108);
                  QString::fromUtf8_helper((char *)&local_60,0x9e7f1b);
                  QString::append(pQVar21);
                  if (*(int *)local_60 != -1) {
                    if (*(int *)local_60 != 0) {
                      LOCK();
                      *(int *)local_60 = *(int *)local_60 + -1;
                      local_49 = *(int *)local_60 != 0;
                      UNLOCK();
                      if ((bool)local_49) goto LAB_1000f3524;
                    }
                    QArrayData::deallocate(local_60,2,8);
                  }
LAB_1000f3524:
                  local_128 = 0;
                }
                if (*(int *)local_150 != -1) {
                  if (*(int *)local_150 != 0) {
                    LOCK();
                    *(int *)local_150 = *(int *)local_150 + -1;
                    local_49 = *(int *)local_150 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_1000f3564;
                  }
                  QArrayData::deallocate(local_150,2,8);
                }
LAB_1000f3564:
                local_138 = local_138 + 2;
                uVar9 = local_128 ^ 1;
                bVar28 = local_128 != 1;
                local_128 = uVar9;
              } while (bVar28);
            }
            FUN_100013180(&local_140);
            FUN_10012eb60(&local_178);
            local_170 = local_178;
            if (*local_178 != -1) {
              if (*local_178 == 0) {
                QListData::detach((int)&local_170);
                iVar10 = local_170[2];
                if (iVar10 != local_170[3]) {
                  local_178 = local_178 + (long)local_178[2] * 2 + 4;
                  piVar23 = local_170 + (long)iVar10 * 2 + 4;
                  lVar20 = (long)local_170[3] * 8 + (long)iVar10 * -8;
                  do {
                    piVar24 = *(int **)local_178;
                    *(int **)piVar23 = piVar24;
                    if (1 < *piVar24 + 1U) {
                      LOCK();
                      *piVar24 = *piVar24 + 1;
                      local_49 = *piVar24 != 0;
                      UNLOCK();
                    }
                    piVar23 = piVar23 + 2;
                    local_178 = local_178 + 2;
                    lVar20 = lVar20 + -8;
                  } while (lVar20 != 0);
                }
              }
              else {
                LOCK();
                *local_178 = *local_178 + 1;
                local_49 = *local_178 != 0;
                UNLOCK();
              }
            }
            local_168 = local_170 + (long)local_170[2] * 2 + 4;
            local_160 = local_170 + (long)local_170[3] * 2 + 4;
            local_158 = 1;
            FUN_100013180(&local_178);
            if (local_158 != 0) {
              do {
                if (local_168 == local_160) break;
                local_180 = *(QArrayData **)local_168;
                if (1 < *(int *)local_180 + 1U) {
                  LOCK();
                  *(int *)local_180 = *(int *)local_180 + 1;
                  local_49 = *(int *)local_180 != 0;
                  UNLOCK();
                }
                if (local_158 != 0) {
                  pQVar21 = (QString *)QString::append(&local_110);
                  QString::fromUtf8_helper((char *)&local_58,0x9e7f1b);
                  QString::append(pQVar21);
                  if (*(int *)local_58 != -1) {
                    if (*(int *)local_58 != 0) {
                      LOCK();
                      *(int *)local_58 = *(int *)local_58 + -1;
                      local_49 = *(int *)local_58 != 0;
                      UNLOCK();
                      if ((bool)local_49) goto LAB_1000f3725;
                    }
                    QArrayData::deallocate(local_58,2,8);
                  }
LAB_1000f3725:
                  local_158 = 0;
                }
                if (*(int *)local_180 != -1) {
                  if (*(int *)local_180 != 0) {
                    LOCK();
                    *(int *)local_180 = *(int *)local_180 + -1;
                    local_49 = *(int *)local_180 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_1000f3765;
                  }
                  QArrayData::deallocate(local_180,2,8);
                }
LAB_1000f3765:
                local_168 = local_168 + 2;
                uVar9 = local_158 ^ 1;
                bVar28 = local_158 != 1;
                local_158 = uVar9;
              } while (bVar28);
            }
            FUN_100013180(&local_170);
          }
        }
LAB_1000f379d:
        CVmEvent::CVmEvent(local_280);
        pCVar22 = operator_new(0xd0);
        QString::number((int)&local_288,0);
        local_290 = (QArrayData *)QString::fromAscii_helper("vm_exec_app_ret_code",0x14);
        CVmEventParameter::CVmEventParameter(pCVar22,0,&local_288,&local_290);
        CVmEvent::addEventParameter((CVmEventParameter *)local_280);
        if (*(int *)local_290 != -1) {
          if (*(int *)local_290 != 0) {
            LOCK();
            *(int *)local_290 = *(int *)local_290 + -1;
            local_49 = *(int *)local_290 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f3846;
          }
          QArrayData::deallocate(local_290,2,8);
        }
LAB_1000f3846:
        if (*(int *)local_288 != -1) {
          if (*(int *)local_288 != 0) {
            LOCK();
            *(int *)local_288 = *(int *)local_288 + -1;
            local_49 = *(int *)local_288 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f387c;
          }
          QArrayData::deallocate(local_288,2,8);
        }
LAB_1000f387c:
        if ((uVar12 == 0) || ((uVar12 & 0x800) != 0)) {
          pCVar22 = operator_new(0xd0);
          local_298 = (QArrayData *)local_108.field0_0x0;
          if (1 < *(int *)local_108.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + 1;
            local_49 = *(int *)local_108.field0_0x0 != 0;
            UNLOCK();
          }
          local_2a0 = (QArrayData *)QString::fromAscii_helper("vm_exec_stdout",0xe);
          CVmEventParameter::CVmEventParameter(pCVar22,1,&local_298,&local_2a0);
          CVmEvent::addEventParameter((CVmEventParameter *)local_280);
          if (*(int *)local_2a0 != -1) {
            if (*(int *)local_2a0 != 0) {
              LOCK();
              *(int *)local_2a0 = *(int *)local_2a0 + -1;
              local_49 = *(int *)local_2a0 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1000f393b;
            }
            QArrayData::deallocate(local_2a0,2,8);
          }
LAB_1000f393b:
          if (*(int *)local_298 != -1) {
            if (*(int *)local_298 != 0) {
              LOCK();
              *(int *)local_298 = *(int *)local_298 + -1;
              local_49 = *(int *)local_298 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1000f3971;
            }
            QArrayData::deallocate(local_298,2,8);
          }
        }
LAB_1000f3971:
        if ((uVar12 == 0) || ((uVar12 & 0x1000) != 0)) {
          pCVar22 = operator_new(0xd0);
          local_2a8 = (QArrayData *)local_110.field0_0x0;
          if (1 < *(int *)local_110.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + 1;
            local_49 = *(int *)local_110.field0_0x0 != 0;
            UNLOCK();
          }
          local_2b0 = (QArrayData *)QString::fromAscii_helper("vm_exec_stderr",0xe);
          CVmEventParameter::CVmEventParameter(pCVar22,1,&local_2a8,&local_2b0);
          CVmEvent::addEventParameter((CVmEventParameter *)local_280);
          if (*(int *)local_2b0 != -1) {
            if (*(int *)local_2b0 != 0) {
              LOCK();
              *(int *)local_2b0 = *(int *)local_2b0 + -1;
              local_49 = *(int *)local_2b0 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1000f3a2f;
            }
            QArrayData::deallocate(local_2b0,2,8);
          }
LAB_1000f3a2f:
          if (*(int *)local_2a8 != -1) {
            if (*(int *)local_2a8 != 0) {
              LOCK();
              *(int *)local_2a8 = *(int *)local_2a8 + -1;
              local_49 = *(int *)local_2a8 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1000f3a65;
            }
            QArrayData::deallocate(local_2a8,2,8);
          }
        }
LAB_1000f3a65:
        CBaseNode::toString(SUB81(&local_2b8,0),SUB81(local_278,0));
        FUN_100128660(local_518);
        if (*(int *)local_2b8 != -1) {
          if (*(int *)local_2b8 != 0) {
            LOCK();
            *(int *)local_2b8 = *(int *)local_2b8 + -1;
            local_49 = *(int *)local_2b8 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f3ac5;
          }
          QArrayData::deallocate(local_2b8,2,8);
        }
LAB_1000f3ac5:
        QEvent::~QEvent(local_1a0);
        CVmEventBase::~CVmEventBase((CVmEventBase *)local_280);
        if (*(int *)local_110.field0_0x0 != -1) {
          if (*(int *)local_110.field0_0x0 != 0) {
            LOCK();
            *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
            local_49 = *(int *)local_110.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f3b13;
          }
          QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
        }
LAB_1000f3b13:
        if (*(int *)local_108.field0_0x0 != -1) {
          if (*(int *)local_108.field0_0x0 != 0) {
            LOCK();
            *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
            local_49 = *(int *)local_108.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f3b49;
          }
          QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
        }
      }
LAB_1000f3b49:
      uVar17 = DAT_1011c3650;
      FUN_10011cf50(&local_2c8);
      cVar7 = '\0';
      if (local_2c8 != (long *)0x0) {
        cVar7 = (char)local_2c8[2];
      }
      CBaseNode::toString(SUB81(&local_2c0,0),(bool)(cVar7 + '\b'));
      FUN_100063e20(uVar17,&local_2c0,0x1389,param_1,0);
      if (*(int *)local_2c0 != -1) {
        if (*(int *)local_2c0 != 0) {
          LOCK();
          *(int *)local_2c0 = *(int *)local_2c0 + -1;
          local_49 = *(int *)local_2c0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1000f3beb;
        }
        QArrayData::deallocate(local_2c0,2,8);
      }
LAB_1000f3beb:
      if (local_2c8 != (long *)0x0) {
        LOCK();
        plVar18 = local_2c8 + 1;
        lVar20 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)(*local_2c8 + 0x10))();
        }
      }
      if (local_f8 != (long *)0x0) {
        LOCK();
        plVar18 = local_f8 + 1;
        lVar20 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)(*local_f8 + 0x10))();
        }
      }
      uVar8 = 1;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar18 = plVar15 + 1;
        lVar20 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      goto LAB_1000f3c56;
    }
    if (local_80 == (long *)0x0) {
LAB_1000f10ba:
      lVar20 = 0;
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmGuestCmd",
                    "CVmGuestFakeImp.cpp",0xa6,"ProcessCommand");
    }
    else {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      lVar20 = local_80[2];
      LOCK();
      plVar15 = local_80 + 1;
      lVar4 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_80 + 0x10))();
      }
      if (lVar20 == 0) goto LAB_1000f10ba;
    }
    FUN_10012e460(&local_b0,lVar20);
    QMutex::lock();
    plVar18 = DAT_1011b7590;
    uVar12 = *(uint *)(DAT_1011b7590 + 4);
    plVar15 = plVar18;
    if (uVar12 != 0) {
      uVar9 = qHash(&local_b0,*(uint *)((long)DAT_1011b7590 + 0x24));
      uVar3 = (ulong)uVar9 % (ulong)uVar12;
      plVar25 = *(long **)(plVar18[1] + uVar3 * 8);
      if (plVar25 != plVar18) {
        plVar27 = (long *)(plVar18[1] + uVar3 * 8);
        do {
          plVar15 = plVar25;
          if (*(uint *)(plVar25 + 1) == uVar9) {
            cVar7 = operator==(&local_b0,(QString *)(plVar25 + 2));
            plVar15 = (long *)*plVar27;
            plVar18 = DAT_1011b7590;
            if (cVar7 != '\0') break;
          }
          plVar25 = (long *)*plVar15;
          plVar27 = plVar15;
          plVar15 = plVar18;
        } while (plVar25 != plVar18);
      }
    }
    QMutex::unlock();
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_49 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1000f1e6a;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_1000f1e6a:
    if (plVar15 != plVar18) {
      FUN_10012e460(&local_b8,lVar20);
      QMutex::lock();
      FUN_1000230e0(&DAT_1011b7590,&local_b8);
      QMutex::unlock();
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_49 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1000f1ee6;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1000f1ee6:
      uVar8 = 1;
      FUN_10006b4e0(param_2,param_1,0);
      goto LAB_1000f3c56;
    }
  }
  else if (iVar10 == 0x416) {
    if (local_80 == (long *)0x0) {
LAB_1000f11ff:
      lVar20 = 0;
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmGuestSetUserPasswdCmd",
                    "CVmGuestFakeImp.cpp",0x129,"ProcessCommand");
    }
    else {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      lVar20 = local_80[2];
      LOCK();
      plVar15 = local_80 + 1;
      lVar4 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_80 + 0x10))();
      }
      if (lVar20 == 0) goto LAB_1000f11ff;
    }
    FUN_10012e460(&local_3b8,lVar20);
    QMutex::lock();
    plVar15 = DAT_1011b7590;
    uVar12 = *(uint *)(DAT_1011b7590 + 4);
    plVar18 = plVar15;
    if (uVar12 != 0) {
      uVar9 = qHash(&local_3b8,*(uint *)((long)DAT_1011b7590 + 0x24));
      uVar3 = (ulong)uVar9 % (ulong)uVar12;
      plVar25 = *(long **)(plVar15[1] + uVar3 * 8);
      if (plVar25 != plVar15) {
        plVar27 = (long *)(plVar15[1] + uVar3 * 8);
        do {
          plVar26 = plVar25;
          plVar18 = plVar15;
          if (*(uint *)(plVar25 + 1) == uVar9) {
            cVar7 = operator==(&local_3b8,(QString *)(plVar25 + 2));
            plVar15 = (long *)*plVar27;
            plVar26 = plVar15;
            plVar18 = DAT_1011b7590;
            if (cVar7 != '\0') break;
          }
          plVar15 = plVar18;
          plVar25 = (long *)*plVar26;
          plVar18 = plVar15;
          plVar27 = plVar26;
        } while (plVar25 != plVar15);
      }
    }
    QMutex::unlock();
    if (*(int *)local_3b8.field0_0x0 != -1) {
      if (*(int *)local_3b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_3b8.field0_0x0 = *(int *)local_3b8.field0_0x0 + -1;
        local_49 = *(int *)local_3b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1000f18d4;
      }
      QArrayData::deallocate((QArrayData *)local_3b8.field0_0x0,2,8);
    }
LAB_1000f18d4:
    if (plVar15 != plVar18) {
      FUN_10012ef20(&local_3c0,lVar20);
      iVar10 = QString::compare_helper
                         (local_3c0 + *(long *)(local_3c0 + 0x10),*(undefined4 *)(local_3c0 + 4),
                          "valid_user",0xffffffff,1);
      if (*(int *)local_3c0 != -1) {
        if (*(int *)local_3c0 != 0) {
          LOCK();
          *(int *)local_3c0 = *(int *)local_3c0 + -1;
          local_49 = *(int *)local_3c0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1000f194c;
        }
        QArrayData::deallocate(local_3c0,2,8);
      }
LAB_1000f194c:
      if (iVar10 == 0) {
        uVar8 = 1;
        FUN_10006b4e0(param_2,param_1,0);
        goto LAB_1000f3c56;
      }
      FUN_10012ef20(&local_3c8,lVar20);
      iVar10 = QString::compare_helper
                         (local_3c8 + *(long *)(local_3c8 + 0x10),*(undefined4 *)(local_3c8 + 4),
                          "unknown_user",0xffffffff,1);
      if (*(int *)local_3c8 != -1) {
        if (*(int *)local_3c8 != 0) {
          LOCK();
          *(int *)local_3c8 = *(int *)local_3c8 + -1;
          local_49 = *(int *)local_3c8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1000f19c3;
        }
        QArrayData::deallocate(local_3c8,2,8);
      }
LAB_1000f19c3:
      if (iVar10 == 0) {
        FUN_100119090(&local_3d0,param_1,0x80034004);
        if (local_3d0 == (long *)0x0) {
LAB_1000f1a19:
          lVar20 = 0;
          FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pResponseCmd",
                        "CVmGuestFakeImp.cpp",0x137,"ProcessCommand");
        }
        else {
          LOCK();
          *(int *)(local_3d0 + 1) = (int)local_3d0[1] + 1;
          UNLOCK();
          lVar20 = local_3d0[2];
          LOCK();
          plVar15 = local_3d0 + 1;
          lVar4 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*local_3d0 + 0x10))();
          }
          if (lVar20 == 0) goto LAB_1000f1a19;
        }
        CVmEvent::CVmEvent(local_4d0);
        CVmEventBase::setEventCode((int)local_4d0);
        pCVar22 = operator_new(0xd0);
        local_4e0 = (QArrayData *)QString::fromAscii_helper("%1",2);
        QString::arg(&local_4d8,&local_4e0,0x515,0,10,0x20);
        local_4e8 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
        CVmEventParameter::CVmEventParameter(pCVar22,0,&local_4d8,&local_4e8);
        CVmEvent::addEventParameter((CVmEventParameter *)local_4d0);
        if (*(int *)local_4e8 != -1) {
          if (*(int *)local_4e8 != 0) {
            LOCK();
            *(int *)local_4e8 = *(int *)local_4e8 + -1;
            local_49 = *(int *)local_4e8 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f1b45;
          }
          QArrayData::deallocate(local_4e8,2,8);
        }
LAB_1000f1b45:
        if (*(int *)local_4d8 != -1) {
          if (*(int *)local_4d8 != 0) {
            LOCK();
            *(int *)local_4d8 = *(int *)local_4d8 + -1;
            local_49 = *(int *)local_4d8 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f1b7d;
          }
          QArrayData::deallocate(local_4d8,2,8);
        }
LAB_1000f1b7d:
        if (*(int *)local_4e0 != -1) {
          if (*(int *)local_4e0 != 0) {
            LOCK();
            *(int *)local_4e0 = *(int *)local_4e0 + -1;
            local_49 = *(int *)local_4e0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f1bb3;
          }
          QArrayData::deallocate(local_4e0,2,8);
        }
LAB_1000f1bb3:
        pCVar22 = operator_new(0xd0);
        local_4f0 = (QArrayData *)
                    QString::fromAscii_helper
                              ("Some mapping between account names and security IDs was not done.",
                               0x41);
        local_4f8 = (QArrayData *)QString::fromAscii_helper("vm_message_param_1",0x12);
        CVmEventParameter::CVmEventParameter(pCVar22,1,&local_4f0,&local_4f8);
        CVmEvent::addEventParameter((CVmEventParameter *)local_4d0);
        if (*(int *)local_4f8 != -1) {
          if (*(int *)local_4f8 != 0) {
            LOCK();
            *(int *)local_4f8 = *(int *)local_4f8 + -1;
            local_49 = *(int *)local_4f8 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f1c58;
          }
          QArrayData::deallocate(local_4f8,2,8);
        }
LAB_1000f1c58:
        if (*(int *)local_4f0 != -1) {
          if (*(int *)local_4f0 != 0) {
            LOCK();
            *(int *)local_4f0 = *(int *)local_4f0 + -1;
            local_49 = *(int *)local_4f0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f1c8e;
          }
          QArrayData::deallocate(local_4f0,2,8);
        }
LAB_1000f1c8e:
        CBaseNode::toString(false,SUB81(local_4c8,0));
        FUN_100125480(lVar20);
        if (*(int *)local_500 != -1) {
          if (*(int *)local_500 != 0) {
            LOCK();
            *(int *)local_500 = *(int *)local_500 + -1;
            local_49 = *(int *)local_500 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f1cea;
          }
          QArrayData::deallocate(local_500,2,8);
        }
LAB_1000f1cea:
        uVar17 = DAT_1011c3650;
        FUN_10011cf50(&local_510);
        cVar7 = '\0';
        if (local_510 != (long *)0x0) {
          cVar7 = (char)local_510[2];
        }
        CBaseNode::toString(SUB81(&local_508,0),(bool)(cVar7 + '\b'));
        FUN_100063e20(uVar17,&local_508,0x1389,param_1,0);
        if (*(int *)local_508 != -1) {
          if (*(int *)local_508 != 0) {
            LOCK();
            *(int *)local_508 = *(int *)local_508 + -1;
            local_49 = *(int *)local_508 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1000f1d88;
          }
          QArrayData::deallocate(local_508,2,8);
        }
LAB_1000f1d88:
        if (local_510 != (long *)0x0) {
          LOCK();
          plVar15 = local_510 + 1;
          lVar20 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*local_510 + 0x10))();
          }
        }
        QEvent::~QEvent(local_3f0);
        CVmEventBase::~CVmEventBase((CVmEventBase *)local_4d0);
        uVar8 = 1;
        if (local_3d0 != (long *)0x0) {
          LOCK();
          plVar15 = local_3d0 + 1;
          lVar20 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)(*local_3d0 + 0x10))();
          }
        }
        goto LAB_1000f3c56;
      }
    }
  }
LAB_1000f22ff:
  iVar10 = *(int *)(*(long *)(*param_1 + 0x10) + 0x40);
  if (iVar10 == 0x30e0d) {
    uVar8 = FUN_1000f0750(param_1);
  }
  else if (iVar10 == 0x30e08) {
    uVar8 = FUN_1000f0050(param_1,param_3);
  }
  else {
    uVar8 = 0;
  }
LAB_1000f3c56:
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar15 = local_80 + 1;
    lVar20 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),uVar8);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

