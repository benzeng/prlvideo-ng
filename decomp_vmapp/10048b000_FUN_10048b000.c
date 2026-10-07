
undefined8 * FUN_10048b000(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  QString QVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  QArrayData *pQVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  QString *pQVar19;
  QString *pQVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  QArrayData *local_350;
  QString local_348;
  int *local_340;
  int *local_338;
  int *local_330;
  uint local_328;
  QString local_320;
  int *local_318;
  int *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QString local_2b0;
  QString local_2a8;
  QArrayData *local_2a0;
  QString local_298;
  QArrayData *local_290;
  QString local_288;
  QString local_280;
  QArrayData *local_278;
  QString local_270;
  QString local_268;
  QString local_260;
  QArrayData *local_258;
  QString local_250;
  QArrayData *local_248;
  int *local_240;
  int *local_238;
  int *local_230;
  uint local_228;
  QString local_220;
  int *local_218;
  int *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  Data *local_1f0;
  Data *local_1e8;
  Data *local_1e0;
  undefined4 local_1d8;
  char local_1cc;
  char local_1cb;
  char local_1ca;
  char local_1c9;
  QArrayData *local_1c8;
  QString local_1c0;
  QString local_1b8;
  QArrayData *local_1b0;
  int *local_1a8;
  QString local_1a0;
  int *local_198;
  int *local_190;
  int *local_188;
  uint local_180;
  int *local_178;
  int *local_170;
  int *local_168;
  Data *local_160;
  Data *local_158;
  Data *local_150;
  undefined4 local_148;
  QString local_140;
  int *local_138;
  int *local_130;
  int *local_128;
  uint local_120;
  int *local_118;
  int *local_110;
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QString local_e0;
  long local_d8;
  long local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  long local_a8;
  long local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_100ba2188;
  local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  CVmConfiguration::getVmSettings();
  CVmSettings::getGlobalNetwork();
  cVar7 = CVmGlobalNetwork::isAutoApplyIpOnly();
  pQVar12 = (QArrayData *)QString::fromAscii_helper("set",3);
  local_108 = pQVar12;
  FUN_100496130(param_1,0,&local_108);
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_31 = *(int *)pQVar12 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048b0c6;
    }
    QArrayData::deallocate(pQVar12,2,8);
  }
LAB_10048b0c6:
  if (cVar7 == '\0') {
    CVmConfiguration::getVmSettings();
    CVmSettings::getGlobalNetwork();
    CVmGlobalNetwork::getSearchDomains();
    local_110 = local_118;
    if (*local_118 != -1) {
      if (*local_118 == 0) {
        QListData::detach((int)&local_110);
        iVar10 = local_110[2];
        if (iVar10 != local_110[3]) {
          local_118 = local_118 + (long)local_118[2] * 2 + 4;
          piVar16 = local_110 + (long)iVar10 * 2 + 4;
          lVar13 = (long)local_110[3] * 8 + (long)iVar10 * -8;
          do {
            piVar18 = *(int **)local_118;
            *(int **)piVar16 = piVar18;
            if (1 < *piVar18 + 1U) {
              LOCK();
              *piVar18 = *piVar18 + 1;
              local_31 = *piVar18 != 0;
              UNLOCK();
            }
            piVar16 = piVar16 + 2;
            local_118 = local_118 + 2;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      else {
        LOCK();
        *local_118 = *local_118 + 1;
        local_31 = *local_118 != 0;
        UNLOCK();
      }
    }
    FUN_100013180(&local_118);
    local_138 = local_110;
    if (*local_110 != -1) {
      if (*local_110 == 0) {
        QListData::detach((int)&local_138);
        iVar10 = local_138[2];
        if (iVar10 != local_138[3]) {
          piVar16 = local_110 + (long)local_110[2] * 2 + 4;
          piVar18 = local_138 + (long)iVar10 * 2 + 4;
          lVar13 = (long)local_138[3] * 8 + (long)iVar10 * -8;
          do {
            piVar1 = *(int **)piVar16;
            *(int **)piVar18 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            piVar18 = piVar18 + 2;
            piVar16 = piVar16 + 2;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      else {
        LOCK();
        *local_110 = *local_110 + 1;
        local_31 = *local_110 != 0;
        UNLOCK();
      }
    }
    local_130 = local_138 + (long)local_138[2] * 2 + 4;
    local_128 = local_138 + (long)local_138[3] * 2 + 4;
    local_120 = 1;
    if (local_138[2] != local_138[3]) {
      do {
        pQVar12 = *(QArrayData **)local_130;
        if (1 < *(int *)pQVar12 + 1U) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + 1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
        }
        if (local_120 != 0) {
          if (*(int *)(pQVar12 + 4) != 0) {
            if (1 < *(int *)pQVar12 + 1U) {
              LOCK();
              *(int *)pQVar12 = *(int *)pQVar12 + 1;
              local_31 = *(int *)pQVar12 != 0;
              UNLOCK();
            }
            local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar12;
            QString::fromUtf8_helper((char *)&local_f8,0xa10314);
            QString::append(&local_140);
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_31 = *(int *)local_f8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10048b335;
              }
              QArrayData::deallocate(local_f8,2,8);
            }
LAB_10048b335:
            QString::append(&local_100);
            if (*(int *)local_140.field0_0x0 != -1) {
              if (*(int *)local_140.field0_0x0 != 0) {
                LOCK();
                *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
                local_31 = *(int *)local_140.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10048b376;
              }
              QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
            }
          }
LAB_10048b376:
          local_120 = 0;
        }
        if (*(int *)pQVar12 != -1) {
          if (*(int *)pQVar12 != 0) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_31 = *(int *)pQVar12 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048b3ab;
          }
          QArrayData::deallocate(pQVar12,2,8);
        }
LAB_10048b3ab:
        local_130 = local_130 + 2;
        uVar14 = local_120 ^ 1;
        bVar21 = local_120 != 1;
        local_120 = uVar14;
      } while ((bVar21) && (local_130 != local_128));
    }
    FUN_100013180(&local_138);
    lVar13 = CVmConfiguration::getVmHardwareList();
    local_160 = *(Data **)(lVar13 + 0x1d0);
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 == 0) {
        QListData::detach((int)&local_160);
        lVar15 = (long)*(int *)(local_160 + 8);
        lVar13 = *(long *)(lVar13 + 0x1d0);
        if (((Data *)(lVar13 + (long)*(int *)(lVar13 + 8) * 8) != local_160 + lVar15 * 8) &&
           (lVar17 = *(int *)(local_160 + 0xc) - lVar15,
           lVar17 != 0 && lVar15 <= *(int *)(local_160 + 0xc))) {
          _memcpy(local_160 + lVar15 * 8 + 0x10,
                  (void *)(lVar13 + 0x10 + (long)*(int *)(lVar13 + 8) * 8),lVar17 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + 1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
      }
    }
    local_158 = local_160 + (long)*(int *)(local_160 + 8) * 8 + 0x10;
    local_150 = local_160 + (long)*(int *)(local_160 + 0xc) * 8 + 0x10;
    if (*(int *)(local_160 + 8) == *(int *)(local_160 + 0xc)) {
      bVar21 = false;
    }
    else {
      bVar21 = false;
      do {
        local_148 = 1;
        uVar2 = *(undefined8 *)local_158;
        cVar8 = CVmGenericNetworkAdapter::isAutoApply();
        if (cVar8 != '\0') {
          CVmGenericNetworkAdapter::getSearchDomains();
          local_168 = local_170;
          if (*local_170 != -1) {
            if (*local_170 == 0) {
              QListData::detach((int)&local_168);
              iVar10 = local_168[2];
              if (iVar10 != local_168[3]) {
                piVar16 = local_170 + (long)local_170[2] * 2 + 4;
                piVar18 = local_168 + (long)iVar10 * 2 + 4;
                lVar13 = (long)local_168[3] * 8 + (long)iVar10 * -8;
                do {
                  piVar1 = *(int **)piVar16;
                  *(int **)piVar18 = piVar1;
                  if (1 < *piVar1 + 1U) {
                    LOCK();
                    *piVar1 = *piVar1 + 1;
                    local_31 = *piVar1 != 0;
                    UNLOCK();
                  }
                  piVar18 = piVar18 + 2;
                  piVar16 = piVar16 + 2;
                  lVar13 = lVar13 + -8;
                } while (lVar13 != 0);
              }
            }
            else {
              LOCK();
              *local_170 = *local_170 + 1;
              local_31 = *local_170 != 0;
              UNLOCK();
            }
          }
          FUN_100013180(&local_170);
          lVar13 = CVmConfiguration::getVmHardwareList();
          lVar13 = FUN_10048eee0(lVar13 + 0x1d0,uVar2);
          bVar22 = true;
          if (lVar13 != 0) {
            CVmGenericNetworkAdapter::getSearchDomains();
            if (local_168 == local_178) {
              bVar22 = false;
            }
            else {
              iVar10 = local_168[3];
              iVar11 = local_168[2];
              bVar22 = true;
              if (iVar10 - iVar11 == local_178[3] - local_178[2]) {
                if (iVar10 == iVar11) {
                  bVar22 = false;
                }
                else {
                  pQVar19 = (QString *)(local_168 + (long)iVar11 * 2 + 4);
                  pQVar20 = (QString *)(local_178 + (long)local_178[2] * 2 + 4);
                  lVar13 = (long)iVar10 * 8 + (long)iVar11 * -8;
                  do {
                    cVar8 = operator==(pQVar19,pQVar20);
                    if (cVar8 == '\0') goto LAB_10048b66e;
                    pQVar19 = pQVar19 + 1;
                    pQVar20 = pQVar20 + 1;
                    lVar13 = lVar13 + -8;
                  } while (lVar13 != 0);
                  bVar22 = false;
                }
              }
            }
LAB_10048b66e:
            FUN_100013180(&local_178);
          }
          bVar24 = true;
          if (!bVar22) {
            bVar24 = bVar21;
          }
          bVar21 = bVar24;
          local_198 = local_168;
          if (*local_168 != -1) {
            if (*local_168 == 0) {
              QListData::detach((int)&local_198);
              iVar10 = local_198[2];
              if (iVar10 != local_198[3]) {
                piVar16 = local_168 + (long)local_168[2] * 2 + 4;
                piVar18 = local_198 + (long)iVar10 * 2 + 4;
                lVar13 = (long)local_198[3] * 8 + (long)iVar10 * -8;
                do {
                  piVar1 = *(int **)piVar16;
                  *(int **)piVar18 = piVar1;
                  if (1 < *piVar1 + 1U) {
                    LOCK();
                    *piVar1 = *piVar1 + 1;
                    local_31 = *piVar1 != 0;
                    UNLOCK();
                  }
                  piVar18 = piVar18 + 2;
                  piVar16 = piVar16 + 2;
                  lVar13 = lVar13 + -8;
                } while (lVar13 != 0);
              }
            }
            else {
              LOCK();
              *local_168 = *local_168 + 1;
              local_31 = *local_168 != 0;
              UNLOCK();
            }
          }
          local_190 = local_198 + (long)local_198[2] * 2 + 4;
          local_188 = local_198 + (long)local_198[3] * 2 + 4;
          local_180 = 1;
          if (local_198[2] != local_198[3]) {
            do {
              pQVar12 = *(QArrayData **)local_190;
              if (1 < *(int *)pQVar12 + 1U) {
                LOCK();
                *(int *)pQVar12 = *(int *)pQVar12 + 1;
                local_31 = *(int *)pQVar12 != 0;
                UNLOCK();
              }
              if (local_180 != 0) {
                if (*(int *)(pQVar12 + 4) != 0) {
                  if (1 < *(int *)pQVar12 + 1U) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + 1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                  }
                  local_1a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar12;
                  QString::fromUtf8_helper((char *)&local_f0,0xa10314);
                  QString::append(&local_1a0);
                  if (*(int *)local_f0 != -1) {
                    if (*(int *)local_f0 != 0) {
                      LOCK();
                      *(int *)local_f0 = *(int *)local_f0 + -1;
                      local_31 = *(int *)local_f0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048b7f9;
                    }
                    QArrayData::deallocate(local_f0,2,8);
                  }
LAB_10048b7f9:
                  QString::append(&local_100);
                  if (*(int *)local_1a0.field0_0x0 != -1) {
                    if (*(int *)local_1a0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
                      local_31 = *(int *)local_1a0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048b842;
                    }
                    QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
                  }
                }
LAB_10048b842:
                local_180 = 0;
              }
              if (*(int *)pQVar12 != -1) {
                if (*(int *)pQVar12 != 0) {
                  LOCK();
                  *(int *)pQVar12 = *(int *)pQVar12 + -1;
                  local_31 = *(int *)pQVar12 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10048b877;
                }
                QArrayData::deallocate(pQVar12,2,8);
              }
LAB_10048b877:
              local_190 = local_190 + 2;
              uVar14 = local_180 ^ 1;
              bVar22 = local_180 != 1;
              local_180 = uVar14;
            } while ((bVar22) && (local_190 != local_188));
          }
          FUN_100013180(&local_198);
          FUN_100013180(&local_168);
        }
        local_158 = local_158 + 8;
      } while (local_158 != local_150);
    }
    local_148 = 1;
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10048b931;
      }
      QListData::dispose(local_160);
    }
LAB_10048b931:
    if (bVar21) {
      if (0 < *(int *)(local_100.field0_0x0 + 4)) goto LAB_10048ba0f;
    }
    else {
      CVmConfiguration::getVmSettings();
      CVmSettings::getGlobalNetwork();
      CVmGlobalNetwork::getSearchDomains();
      if (local_110 == local_1a8) {
        bVar21 = false;
      }
      else {
        iVar10 = local_110[3];
        iVar11 = local_110[2];
        if (iVar10 - iVar11 == local_1a8[3] - local_1a8[2]) {
          if (iVar10 != iVar11) {
            pQVar19 = (QString *)(local_110 + (long)iVar11 * 2 + 4);
            pQVar20 = (QString *)(local_1a8 + (long)local_1a8[2] * 2 + 4);
            lVar13 = (long)iVar10 * 8 + (long)iVar11 * -8;
            do {
              cVar8 = operator==(pQVar19,pQVar20);
              if (cVar8 == '\0') goto LAB_10048b9e3;
              pQVar19 = pQVar19 + 1;
              pQVar20 = pQVar20 + 1;
              lVar13 = lVar13 + -8;
            } while (lVar13 != 0);
          }
          bVar21 = false;
        }
        else {
LAB_10048b9e3:
          bVar21 = 0 < *(int *)(local_100.field0_0x0 + 4);
        }
      }
      FUN_100013180(&local_1a8);
      if (bVar21) {
LAB_10048ba0f:
        pQVar12 = (QArrayData *)QString::fromAscii_helper("--search-domain",0xf);
        local_1b0 = pQVar12;
        FUN_10000c490(param_1,&local_1b0);
        if (*(int *)pQVar12 != -1) {
          if (*(int *)pQVar12 != 0) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_31 = *(int *)pQVar12 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048ba64;
          }
          QArrayData::deallocate(pQVar12,2,8);
        }
LAB_10048ba64:
        FUN_10000c490(param_1,&local_100);
      }
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getGlobalNetwork();
    CVmGlobalNetwork::getHostName();
    CVmConfiguration::getVmSettings();
    CVmSettings::getGlobalNetwork();
    CVmGlobalNetwork::getHostName();
    cVar8 = operator==(&local_1b8,&local_1c0);
    if (cVar8 == '\0') {
      bVar21 = *(int *)(local_1b8.field0_0x0 + 4) != 0;
    }
    else {
      bVar21 = false;
    }
    if (*(int *)local_1c0.field0_0x0 != -1) {
      if (*(int *)local_1c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
        local_31 = *(int *)local_1c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10048bb14;
      }
      QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
    }
LAB_10048bb14:
    if (bVar21) {
      pQVar12 = (QArrayData *)QString::fromAscii_helper("--hostname",10);
      local_1c8 = pQVar12;
      FUN_10000c490(param_1,&local_1c8);
      if (*(int *)pQVar12 != -1) {
        if (*(int *)pQVar12 != 0) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10048bb6d;
        }
        QArrayData::deallocate(pQVar12,2,8);
      }
LAB_10048bb6d:
      FUN_10000c490(param_1,&local_1b8);
    }
    if (*(int *)local_1b8.field0_0x0 != -1) {
      if (*(int *)local_1b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
        local_31 = *(int *)local_1b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10048bbb2;
      }
      QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
    }
LAB_10048bbb2:
    FUN_100013180(&local_110);
  }
  FUN_10048f170(param_3,&local_1c9,&local_1ca);
  FUN_10048f170(param_4,&local_1cb,&local_1cc);
  bVar21 = local_1cb != local_1c9;
  bVar22 = local_1ca != local_1cc;
  lVar13 = CVmConfiguration::getVmHardwareList();
  local_1f0 = *(Data **)(lVar13 + 0x1d0);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 == 0) {
      QListData::detach((int)&local_1f0);
      lVar15 = (long)*(int *)(local_1f0 + 8);
      lVar13 = *(long *)(lVar13 + 0x1d0);
      if (((Data *)(lVar13 + (long)*(int *)(lVar13 + 8) * 8) != local_1f0 + lVar15 * 8) &&
         (lVar17 = *(int *)(local_1f0 + 0xc) - lVar15,
         lVar17 != 0 && lVar15 <= *(int *)(local_1f0 + 0xc))) {
        _memcpy(local_1f0 + lVar15 * 8 + 0x10,
                (void *)(lVar13 + 0x10 + (long)*(int *)(lVar13 + 8) * 8),lVar17 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + 1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
    }
  }
  local_1e8 = local_1f0 + (long)*(int *)(local_1f0 + 8) * 8 + 0x10;
  local_1e0 = local_1f0 + (long)*(int *)(local_1f0 + 0xc) * 8 + 0x10;
  if (local_1e8 != local_1e0) {
    do {
      local_1d8 = 1;
      lVar13 = *(long *)local_1e8;
      lVar15 = CVmConfiguration::getVmHardwareList();
      lVar15 = FUN_10048eee0(lVar15 + 0x1d0,lVar13);
      if ((lVar13 == 0) || (lVar15 == 0)) {
        cVar8 = lVar15 == lVar13;
      }
      else {
        iVar10 = CVmDevice::getConnected();
        iVar11 = CVmDevice::getConnected();
        if (iVar10 == iVar11) {
          iVar10 = CVmDevice::getEnabled();
          iVar11 = CVmDevice::getEnabled();
          if (iVar10 == iVar11) {
            cVar8 = CVmGenericNetworkAdapter::isAutoApply();
            cVar9 = CVmGenericNetworkAdapter::isAutoApply();
            if (cVar8 == cVar9) {
              iVar10 = CVmDevice::getEmulatedType();
              iVar11 = CVmDevice::getEmulatedType();
              if (iVar10 == iVar11) {
                CVmGenericNetworkAdapter::getMacAddress();
                CVmGenericNetworkAdapter::getMacAddress();
                cVar8 = FUN_1006b7230(&local_90,&local_98);
                if (cVar8 == '\0') {
                  cVar8 = '\0';
                }
                else {
                  CVmGenericNetworkAdapter::getNetAddresses();
                  CVmGenericNetworkAdapter::getNetAddresses();
                  if (local_a0 == local_a8) {
LAB_10048beb1:
                    CVmGenericNetworkAdapter::getDefaultGateway();
                    CVmGenericNetworkAdapter::getDefaultGateway();
                    cVar8 = operator==(&local_b0,&local_b8);
                    if (cVar8 == '\0') {
                      cVar8 = '\0';
                    }
                    else {
                      CVmGenericNetworkAdapter::getDefaultGatewayIPv6();
                      CVmGenericNetworkAdapter::getDefaultGatewayIPv6();
                      cVar8 = operator==(&local_c0,&local_c8);
                      if (cVar8 == '\0') {
                        cVar8 = '\0';
                      }
                      else {
                        cVar8 = CVmGenericNetworkAdapter::isConfigureWithDhcp();
                        cVar9 = CVmGenericNetworkAdapter::isConfigureWithDhcp();
                        if (cVar8 == cVar9) {
                          cVar8 = CVmGenericNetworkAdapter::isConfigureWithDhcpIPv6();
                          cVar9 = CVmGenericNetworkAdapter::isConfigureWithDhcpIPv6();
                          if (cVar8 == cVar9) {
                            CVmGenericNetworkAdapter::getDnsIPAddresses();
                            CVmGenericNetworkAdapter::getDnsIPAddresses();
                            if (local_d0 == local_d8) {
LAB_10048c01b:
                              CVmGenericNetworkAdapter::getVirtualNetworkID();
                              CVmGenericNetworkAdapter::getVirtualNetworkID();
                              cVar8 = operator==(&local_e0,&local_e8);
                              if (*(int *)local_e8.field0_0x0 != -1) {
                                if (*(int *)local_e8.field0_0x0 != 0) {
                                  LOCK();
                                  *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
                                  local_31 = *(int *)local_e8.field0_0x0 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_10048c085;
                                }
                                QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
                              }
LAB_10048c085:
                              if (*(int *)local_e0.field0_0x0 != -1) {
                                if (*(int *)local_e0.field0_0x0 != 0) {
                                  LOCK();
                                  *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
                                  local_31 = *(int *)local_e0.field0_0x0 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_10048c0c3;
                                }
                                QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
                              }
                            }
                            else {
                              iVar10 = *(int *)(local_d0 + 0xc);
                              iVar11 = *(int *)(local_d0 + 8);
                              if (iVar10 - iVar11 ==
                                  *(int *)(local_d8 + 0xc) - *(int *)(local_d8 + 8)) {
                                if (iVar10 != iVar11) {
                                  pQVar19 = (QString *)(local_d0 + 0x10 + (long)iVar11 * 8);
                                  pQVar20 = (QString *)
                                            (local_d8 + 0x10 + (long)*(int *)(local_d8 + 8) * 8);
                                  lVar13 = (long)iVar10 * 8 + (long)iVar11 * -8;
                                  do {
                                    cVar8 = operator==(pQVar19,pQVar20);
                                    if (cVar8 == '\0') {
                                      cVar8 = '\0';
                                      goto LAB_10048c0c3;
                                    }
                                    pQVar19 = pQVar19 + 1;
                                    pQVar20 = pQVar20 + 1;
                                    lVar13 = lVar13 + -8;
                                  } while (lVar13 != 0);
                                }
                                goto LAB_10048c01b;
                              }
                              cVar8 = '\0';
                            }
LAB_10048c0c3:
                            FUN_100013180(&local_d8);
                            FUN_100013180(&local_d0);
                          }
                          else {
                            cVar8 = '\0';
                          }
                        }
                        else {
                          cVar8 = '\0';
                        }
                      }
                      if (*(int *)local_c8.field0_0x0 != -1) {
                        if (*(int *)local_c8.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
                          local_31 = *(int *)local_c8.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_10048c111;
                        }
                        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
                      }
LAB_10048c111:
                      if (*(int *)local_c0.field0_0x0 != -1) {
                        if (*(int *)local_c0.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                          local_31 = *(int *)local_c0.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_10048c147;
                        }
                        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
                      }
                    }
LAB_10048c147:
                    if (*(int *)local_b8.field0_0x0 != -1) {
                      if (*(int *)local_b8.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                        local_31 = *(int *)local_b8.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10048c17d;
                      }
                      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
                    }
LAB_10048c17d:
                    if (*(int *)local_b0.field0_0x0 != -1) {
                      if (*(int *)local_b0.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
                        local_31 = *(int *)local_b0.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10048c1c1;
                      }
                      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
                    }
                  }
                  else {
                    iVar10 = *(int *)(local_a0 + 0xc);
                    iVar11 = *(int *)(local_a0 + 8);
                    if (iVar10 - iVar11 == *(int *)(local_a8 + 0xc) - *(int *)(local_a8 + 8)) {
                      if (iVar10 != iVar11) {
                        pQVar19 = (QString *)(local_a0 + 0x10 + (long)iVar11 * 8);
                        pQVar20 = (QString *)(local_a8 + 0x10 + (long)*(int *)(local_a8 + 8) * 8);
                        lVar13 = (long)iVar10 * 8 + (long)iVar11 * -8;
                        do {
                          cVar8 = operator==(pQVar19,pQVar20);
                          if (cVar8 == '\0') goto LAB_10048bf4c;
                          pQVar19 = pQVar19 + 1;
                          pQVar20 = pQVar20 + 1;
                          lVar13 = lVar13 + -8;
                        } while (lVar13 != 0);
                      }
                      goto LAB_10048beb1;
                    }
LAB_10048bf4c:
                    cVar8 = '\0';
                  }
LAB_10048c1c1:
                  FUN_100013180(&local_a8);
                  FUN_100013180(&local_a0);
                }
                if (*(int *)local_98 != -1) {
                  if (*(int *)local_98 != 0) {
                    LOCK();
                    *(int *)local_98 = *(int *)local_98 + -1;
                    local_31 = *(int *)local_98 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048c20f;
                  }
                  QArrayData::deallocate(local_98,2,8);
                }
LAB_10048c20f:
                if (*(int *)local_90 != -1) {
                  if (*(int *)local_90 != 0) {
                    LOCK();
                    *(int *)local_90 = *(int *)local_90 + -1;
                    local_31 = *(int *)local_90 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048c250;
                  }
                  QArrayData::deallocate(local_90,2,8);
                }
              }
              else {
                cVar8 = '\0';
              }
            }
            else {
              cVar8 = '\0';
            }
          }
          else {
            cVar8 = '\0';
          }
        }
        else {
          cVar8 = '\0';
        }
      }
LAB_10048c250:
      if (cVar8 == '\0') {
LAB_10048c2b0:
        iVar10 = CVmDevice::getEnabled();
        if ((iVar10 == 1) &&
           ((iVar10 = CVmDevice::getConnected(), iVar10 == 1 &&
            (cVar8 = CVmGenericNetworkAdapter::isAutoApply(), cVar8 != '\0')))) {
          iVar10 = CVmDevice::getEmulatedType();
          CVmGenericNetworkAdapter::getMacAddress();
          cVar8 = FUN_1006b6e70(&local_1f8);
          if (cVar8 != '\0') {
            if (iVar10 == 5) {
              bVar24 = false;
            }
            else {
              cVar8 = CVmGenericNetworkAdapter::isConfigureWithDhcp();
              if (cVar8 == '\0') {
                bVar24 = false;
              }
              else {
                pQVar12 = (QArrayData *)QString::fromAscii_helper("--dhcp",6);
                local_200 = pQVar12;
                FUN_10000c490(param_1,&local_200);
                if (*(int *)pQVar12 != -1) {
                  if (*(int *)pQVar12 != 0) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + -1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048c386;
                  }
                  QArrayData::deallocate(pQVar12,2,8);
                }
LAB_10048c386:
                bVar24 = true;
                FUN_10000c490(param_1,&local_1f8);
              }
              cVar8 = CVmGenericNetworkAdapter::isConfigureWithDhcpIPv6();
              if (cVar8 != '\0') {
                pQVar12 = (QArrayData *)QString::fromAscii_helper("--dhcpv6",8);
                local_208 = pQVar12;
                FUN_10000c490(param_1,&local_208);
                if (*(int *)pQVar12 != -1) {
                  if (*(int *)pQVar12 != 0) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + -1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048c40a;
                  }
                  QArrayData::deallocate(pQVar12,2,8);
                }
LAB_10048c40a:
                FUN_10000c490(param_1,&local_1f8);
              }
            }
            cVar8 = CVmGenericNetworkAdapter::isConfigureWithDhcp();
            if ((cVar8 == '\0') ||
               (cVar8 = CVmGenericNetworkAdapter::isConfigureWithDhcpIPv6(), cVar8 == '\0')) {
              CVmGenericNetworkAdapter::getNetAddresses();
              local_210 = local_218;
              if (*local_218 != -1) {
                if (*local_218 == 0) {
                  QListData::detach((int)&local_210);
                  iVar11 = local_210[2];
                  if (iVar11 != local_210[3]) {
                    piVar16 = local_218 + (long)local_218[2] * 2 + 4;
                    piVar18 = local_210 + (long)iVar11 * 2 + 4;
                    lVar13 = (long)local_210[3] * 8 + (long)iVar11 * -8;
                    do {
                      piVar1 = *(int **)piVar16;
                      *(int **)piVar18 = piVar1;
                      if (1 < *piVar1 + 1U) {
                        LOCK();
                        *piVar1 = *piVar1 + 1;
                        local_31 = *piVar1 != 0;
                        UNLOCK();
                      }
                      piVar18 = piVar18 + 2;
                      piVar16 = piVar16 + 2;
                      lVar13 = lVar13 + -8;
                    } while (lVar13 != 0);
                  }
                }
                else {
                  LOCK();
                  *local_218 = *local_218 + 1;
                  local_31 = *local_218 != 0;
                  UNLOCK();
                }
              }
              FUN_100013180(&local_218);
              local_220.field0_0x0 =
                   (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
              local_240 = local_210;
              if (*local_210 != -1) {
                if (*local_210 == 0) {
                  QListData::detach((int)&local_240);
                  iVar11 = local_240[2];
                  if (iVar11 != local_240[3]) {
                    piVar16 = local_210 + (long)local_210[2] * 2 + 4;
                    piVar18 = local_240 + (long)iVar11 * 2 + 4;
                    lVar13 = (long)local_240[3] * 8 + (long)iVar11 * -8;
                    do {
                      piVar1 = *(int **)piVar16;
                      *(int **)piVar18 = piVar1;
                      if (1 < *piVar1 + 1U) {
                        LOCK();
                        *piVar1 = *piVar1 + 1;
                        local_31 = *piVar1 != 0;
                        UNLOCK();
                      }
                      piVar18 = piVar18 + 2;
                      piVar16 = piVar16 + 2;
                      lVar13 = lVar13 + -8;
                    } while (lVar13 != 0);
                  }
                }
                else {
                  LOCK();
                  *local_210 = *local_210 + 1;
                  local_31 = *local_210 != 0;
                  UNLOCK();
                }
              }
              local_238 = local_240 + (long)local_240[2] * 2 + 4;
              local_230 = local_240 + (long)local_240[3] * 2 + 4;
              local_228 = 1;
              if (local_240[2] == local_240[3]) {
                bVar3 = false;
                bVar4 = false;
              }
              else {
                bVar4 = false;
                bVar3 = false;
                do {
                  local_248 = *(QArrayData **)local_238;
                  if (1 < *(int *)local_248 + 1U) {
                    LOCK();
                    *(int *)local_248 = *(int *)local_248 + 1;
                    local_31 = *(int *)local_248 != 0;
                    UNLOCK();
                  }
                  if (local_228 != 0) {
                    QVar6.field0_0x0 = local_250.field0_0x0;
                    if (*(int *)(local_248 + 4) != 0) {
                      iVar11 = QString::indexOf(&local_248,0x3a,0,1);
                      if (iVar11 < 0) {
                        cVar8 = CVmGenericNetworkAdapter::isConfigureWithDhcp();
                        QVar6.field0_0x0 = local_250.field0_0x0;
                        local_250.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_248;
                        bVar5 = true;
                        bVar23 = bVar4;
                      }
                      else {
                        cVar8 = CVmGenericNetworkAdapter::isConfigureWithDhcpIPv6();
                        bVar23 = true;
                        QVar6.field0_0x0 = local_250.field0_0x0;
                        local_250.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_248;
                        bVar5 = bVar3;
                      }
                      local_248 = (QArrayData *)local_250.field0_0x0;
                      if (cVar8 == '\0') {
                        if (1 < *(int *)local_250.field0_0x0 + 1U) {
                          LOCK();
                          *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + 1;
                          local_31 = *(int *)local_250.field0_0x0 != 0;
                          UNLOCK();
                        }
                        QString::fromUtf8_helper((char *)&local_88,0xa10314);
                        QString::append(&local_250);
                        if (*(int *)local_88 != -1) {
                          if (*(int *)local_88 != 0) {
                            LOCK();
                            *(int *)local_88 = *(int *)local_88 + -1;
                            local_31 = *(int *)local_88 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_10048c7bf;
                          }
                          QArrayData::deallocate(local_88,2,8);
                        }
LAB_10048c7bf:
                        QString::append(&local_220);
                        QVar6.field0_0x0 = local_250.field0_0x0;
                        bVar3 = bVar5;
                        bVar4 = bVar23;
                        if (*(int *)local_250.field0_0x0 != -1) {
                          if (*(int *)local_250.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
                            local_31 = *(int *)local_250.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_10048c830;
                          }
                          QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
                          QVar6.field0_0x0 = local_250.field0_0x0;
                        }
                      }
                    }
LAB_10048c830:
                    local_250.field0_0x0 = QVar6.field0_0x0;
                    local_228 = 0;
                  }
                  if (*(int *)local_248 != -1) {
                    if (*(int *)local_248 != 0) {
                      LOCK();
                      *(int *)local_248 = *(int *)local_248 + -1;
                      local_31 = *(int *)local_248 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048c877;
                    }
                    QArrayData::deallocate(local_248,2,8);
                  }
LAB_10048c877:
                  local_238 = local_238 + 2;
                  uVar14 = local_228 ^ 1;
                  bVar23 = local_228 != 1;
                  local_228 = uVar14;
                } while ((bVar23) && (local_238 != local_230));
              }
              FUN_100013180(&local_240);
              if (0 < *(int *)(local_220.field0_0x0 + 4)) {
                pQVar12 = (QArrayData *)QString::fromAscii_helper("--ip",4);
                local_258 = pQVar12;
                FUN_10000c490(param_1,&local_258);
                if (*(int *)pQVar12 != -1) {
                  if (*(int *)pQVar12 != 0) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + -1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048c91d;
                  }
                  QArrayData::deallocate(pQVar12,2,8);
                }
LAB_10048c91d:
                FUN_10000c490(param_1,&local_1f8);
                FUN_10000c490(param_1,&local_220);
              }
              local_260.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
              local_268.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
              if (bVar3) {
                CVmGenericNetworkAdapter::getDefaultGateway();
                if (iVar10 == 5) {
                  local_278 = (QArrayData *)QString::fromAscii_helper("169.255.30.1/16",0xf);
                  FUN_1006d1a70(&local_278,&local_270);
                  if (*(int *)local_278 != -1) {
                    if (*(int *)local_278 != 0) {
                      LOCK();
                      *(int *)local_278 = *(int *)local_278 + -1;
                      local_31 = *(int *)local_278 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048ca6d;
                    }
                    QArrayData::deallocate(local_278,2,8);
                  }
LAB_10048ca6d:
                  if (local_1c9 == '\0') {
                    local_280.field0_0x0 = local_270.field0_0x0;
                    if (1 < *(int *)local_270.field0_0x0 + 1U) {
                      LOCK();
                      *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + 1;
                      local_31 = *(int *)local_270.field0_0x0 != 0;
                      UNLOCK();
                    }
                    QString::fromUtf8_helper((char *)&local_80,0xa10314);
                    QString::append(&local_280);
                    if (*(int *)local_80 != -1) {
                      if (*(int *)local_80 != 0) {
                        LOCK();
                        *(int *)local_80 = *(int *)local_80 + -1;
                        local_31 = *(int *)local_80 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10048caee;
                      }
                      QArrayData::deallocate(local_80,2,8);
                    }
LAB_10048caee:
                    QString::append(&local_268);
                    if (*(int *)local_280.field0_0x0 != -1) {
                      if (*(int *)local_280.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
                        local_31 = *(int *)local_280.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10048cb37;
                      }
                      QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
                    }
LAB_10048cb37:
                    QString::fromUtf8_helper((char *)&local_78,0xa320a0);
                    QString::operator=(&local_270,&local_78);
                    if (*(int *)local_78.field0_0x0 != -1) {
                      if (*(int *)local_78.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
                        local_31 = *(int *)local_78.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10048cb89;
                      }
                      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
                    }
                  }
                }
LAB_10048cb89:
                if (*(int *)(local_270.field0_0x0 + 4) < 1) {
                  QString::fromUtf8_helper((char *)&local_68,0xa377bd);
                  QString::append(&local_260);
                  if (*(int *)local_68 != -1) {
                    if (*(int *)local_68 != 0) {
                      LOCK();
                      *(int *)local_68 = *(int *)local_68 + -1;
                      local_31 = *(int *)local_68 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048cca7;
                    }
                    QArrayData::deallocate(local_68,2,8);
                  }
                }
                else {
                  local_288.field0_0x0 = local_270.field0_0x0;
                  if (1 < *(int *)local_270.field0_0x0 + 1U) {
                    LOCK();
                    *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + 1;
                    local_31 = *(int *)local_270.field0_0x0 != 0;
                    UNLOCK();
                  }
                  QString::fromUtf8_helper((char *)&local_70,0xa10314);
                  QString::append(&local_288);
                  if (*(int *)local_70 != -1) {
                    if (*(int *)local_70 != 0) {
                      LOCK();
                      *(int *)local_70 = *(int *)local_70 + -1;
                      local_31 = *(int *)local_70 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048cc07;
                    }
                    QArrayData::deallocate(local_70,2,8);
                  }
LAB_10048cc07:
                  QString::append(&local_260);
                  if (*(int *)local_288.field0_0x0 != -1) {
                    if (*(int *)local_288.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_288.field0_0x0 = *(int *)local_288.field0_0x0 + -1;
                      local_31 = *(int *)local_288.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048cca7;
                    }
                    QArrayData::deallocate((QArrayData *)local_288.field0_0x0,2,8);
                  }
                }
LAB_10048cca7:
                if (*(int *)local_270.field0_0x0 != -1) {
                  if (*(int *)local_270.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
                    local_31 = *(int *)local_270.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048ccdd;
                  }
                  QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
                }
              }
              else if ((!bVar4) && (iVar10 != 5 && !bVar24)) {
                pQVar12 = (QArrayData *)QString::fromAscii_helper("--dhcp",6);
                local_290 = pQVar12;
                FUN_10000c490(param_1,&local_290);
                if (*(int *)pQVar12 != -1) {
                  if (*(int *)pQVar12 != 0) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + -1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048c9d7;
                  }
                  QArrayData::deallocate(pQVar12,2,8);
                }
LAB_10048c9d7:
                bVar24 = true;
                FUN_10000c490(param_1,&local_1f8);
              }
LAB_10048ccdd:
              if (bVar4) {
                CVmGenericNetworkAdapter::getDefaultGatewayIPv6();
                if (iVar10 == 5) {
                  local_2a0 = (QArrayData *)QString::fromAscii_helper("fe80::ffff:1:1/64",0x11);
                  FUN_1006d1a70(&local_2a0,&local_298);
                  if (*(int *)local_2a0 != -1) {
                    if (*(int *)local_2a0 != 0) {
                      LOCK();
                      *(int *)local_2a0 = *(int *)local_2a0 + -1;
                      local_31 = *(int *)local_2a0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048cd61;
                    }
                    QArrayData::deallocate(local_2a0,2,8);
                  }
LAB_10048cd61:
                  if (local_1ca == '\0') {
                    local_2a8.field0_0x0 = local_298.field0_0x0;
                    if (1 < *(int *)local_298.field0_0x0 + 1U) {
                      LOCK();
                      *(int *)local_298.field0_0x0 = *(int *)local_298.field0_0x0 + 1;
                      local_31 = *(int *)local_298.field0_0x0 != 0;
                      UNLOCK();
                    }
                    QString::fromUtf8_helper((char *)&local_60,0xa10314);
                    QString::append(&local_2a8);
                    if (*(int *)local_60 != -1) {
                      if (*(int *)local_60 != 0) {
                        LOCK();
                        *(int *)local_60 = *(int *)local_60 + -1;
                        local_31 = *(int *)local_60 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10048cde2;
                      }
                      QArrayData::deallocate(local_60,2,8);
                    }
LAB_10048cde2:
                    QString::append(&local_268);
                    if (*(int *)local_2a8.field0_0x0 != -1) {
                      if (*(int *)local_2a8.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_2a8.field0_0x0 = *(int *)local_2a8.field0_0x0 + -1;
                        local_31 = *(int *)local_2a8.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10048ce2b;
                      }
                      QArrayData::deallocate((QArrayData *)local_2a8.field0_0x0,2,8);
                    }
LAB_10048ce2b:
                    QString::fromUtf8_helper((char *)&local_58,0xa320a0);
                    QString::operator=(&local_298,&local_58);
                    if (*(int *)local_58.field0_0x0 != -1) {
                      if (*(int *)local_58.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
                        local_31 = *(int *)local_58.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10048ce7d;
                      }
                      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
                    }
                  }
                }
LAB_10048ce7d:
                if (*(int *)(local_298.field0_0x0 + 4) < 1) {
                  QString::fromUtf8_helper((char *)&local_48,0xa377d7);
                  QString::append(&local_260);
                  if (*(int *)local_48 != -1) {
                    if (*(int *)local_48 != 0) {
                      LOCK();
                      *(int *)local_48 = *(int *)local_48 + -1;
                      local_31 = *(int *)local_48 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048cf9b;
                    }
                    QArrayData::deallocate(local_48,2,8);
                  }
                }
                else {
                  local_2b0.field0_0x0 = local_298.field0_0x0;
                  if (1 < *(int *)local_298.field0_0x0 + 1U) {
                    LOCK();
                    *(int *)local_298.field0_0x0 = *(int *)local_298.field0_0x0 + 1;
                    local_31 = *(int *)local_298.field0_0x0 != 0;
                    UNLOCK();
                  }
                  QString::fromUtf8_helper((char *)&local_50,0xa10314);
                  QString::append(&local_2b0);
                  if (*(int *)local_50 != -1) {
                    if (*(int *)local_50 != 0) {
                      LOCK();
                      *(int *)local_50 = *(int *)local_50 + -1;
                      local_31 = *(int *)local_50 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048cefb;
                    }
                    QArrayData::deallocate(local_50,2,8);
                  }
LAB_10048cefb:
                  QString::append(&local_260);
                  if (*(int *)local_2b0.field0_0x0 != -1) {
                    if (*(int *)local_2b0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_2b0.field0_0x0 = *(int *)local_2b0.field0_0x0 + -1;
                      local_31 = *(int *)local_2b0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048cf9b;
                    }
                    QArrayData::deallocate((QArrayData *)local_2b0.field0_0x0,2,8);
                  }
                }
LAB_10048cf9b:
                if (*(int *)local_298.field0_0x0 != -1) {
                  if (*(int *)local_298.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_298.field0_0x0 = *(int *)local_298.field0_0x0 + -1;
                    local_31 = *(int *)local_298.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048cfd1;
                  }
                  QArrayData::deallocate((QArrayData *)local_298.field0_0x0,2,8);
                }
              }
LAB_10048cfd1:
              if (0 < *(int *)(local_260.field0_0x0 + 4)) {
                pQVar12 = (QArrayData *)QString::fromAscii_helper("--gateway",9);
                local_2b8 = pQVar12;
                FUN_10000c490(param_1,&local_2b8);
                if (*(int *)pQVar12 != -1) {
                  if (*(int *)pQVar12 != 0) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + -1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048d033;
                  }
                  QArrayData::deallocate(pQVar12,2,8);
                }
LAB_10048d033:
                FUN_10000c490(param_1,&local_1f8);
                FUN_10000c490(param_1,&local_260);
              }
              if (*(int *)(local_268.field0_0x0 + 4) < 1) {
                if ((*(int *)(local_260.field0_0x0 + 4) == 0) &&
                   (0x10002 < *(uint *)(param_2 + 0x40))) {
                  pQVar12 = (QArrayData *)QString::fromAscii_helper("--route",7);
                  local_2d0 = pQVar12;
                  FUN_10000c490(param_1,&local_2d0);
                  if (*(int *)pQVar12 != -1) {
                    if (*(int *)pQVar12 != 0) {
                      LOCK();
                      *(int *)pQVar12 = *(int *)pQVar12 + -1;
                      local_31 = *(int *)pQVar12 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048d14e;
                    }
                    QArrayData::deallocate(pQVar12,2,8);
                  }
LAB_10048d14e:
                  FUN_10000c490(param_1,&local_1f8);
                  pQVar12 = (QArrayData *)QString::fromAscii_helper("remove",6);
                  local_2d8 = pQVar12;
                  FUN_10000c490(param_1,&local_2d8);
                  if (*(int *)pQVar12 != -1) {
                    if (*(int *)pQVar12 != 0) {
                      LOCK();
                      *(int *)pQVar12 = *(int *)pQVar12 + -1;
                      local_31 = *(int *)pQVar12 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048d22f;
                    }
                    QArrayData::deallocate(pQVar12,2,8);
                  }
                }
              }
              else {
                if (*(uint *)(param_2 + 0x40) < 0x10003) {
                  pQVar12 = (QArrayData *)QString::fromAscii_helper("--default-route",0xf);
                  local_2c0 = pQVar12;
                  FUN_10000c490(param_1,&local_2c0);
                  if (*(int *)pQVar12 != -1) {
                    if (*(int *)pQVar12 != 0) {
                      LOCK();
                      *(int *)pQVar12 = *(int *)pQVar12 + -1;
                      local_31 = *(int *)pQVar12 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048d211;
                    }
                    QArrayData::deallocate(pQVar12,2,8);
                  }
                }
                else {
                  pQVar12 = (QArrayData *)QString::fromAscii_helper("--route",7);
                  local_2c8 = pQVar12;
                  FUN_10000c490(param_1,&local_2c8);
                  if (*(int *)pQVar12 != -1) {
                    if (*(int *)pQVar12 != 0) {
                      LOCK();
                      *(int *)pQVar12 = *(int *)pQVar12 + -1;
                      local_31 = *(int *)pQVar12 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048d211;
                    }
                    QArrayData::deallocate(pQVar12,2,8);
                  }
                }
LAB_10048d211:
                FUN_10000c490(param_1,&local_1f8);
                FUN_10000c490(param_1,&local_268);
              }
LAB_10048d22f:
              if ((!bVar3 && !bVar4) && !bVar24) {
                pQVar12 = (QArrayData *)QString::fromAscii_helper("--ip",4);
                local_2e0 = pQVar12;
                FUN_10000c490(param_1,&local_2e0);
                if (*(int *)pQVar12 != -1) {
                  if (*(int *)pQVar12 != 0) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + -1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048d29d;
                  }
                  QArrayData::deallocate(pQVar12,2,8);
                }
LAB_10048d29d:
                FUN_10000c490(param_1,&local_1f8);
                pQVar12 = (QArrayData *)QString::fromAscii_helper("remove",6);
                local_2e8 = pQVar12;
                FUN_10000c490(param_1,&local_2e8);
                if (*(int *)pQVar12 != -1) {
                  if (*(int *)pQVar12 != 0) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + -1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048d301;
                  }
                  QArrayData::deallocate(pQVar12,2,8);
                }
              }
LAB_10048d301:
              if (*(int *)local_268.field0_0x0 != -1) {
                if (*(int *)local_268.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
                  local_31 = *(int *)local_268.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10048d337;
                }
                QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
              }
LAB_10048d337:
              if (*(int *)local_260.field0_0x0 != -1) {
                if (*(int *)local_260.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
                  local_31 = *(int *)local_260.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10048d36d;
                }
                QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
              }
LAB_10048d36d:
              if (*(int *)local_220.field0_0x0 != -1) {
                if (*(int *)local_220.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
                  local_31 = *(int *)local_220.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10048d3aa;
                }
                QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
              }
LAB_10048d3aa:
              FUN_100013180(&local_210);
            }
            else if (iVar10 == 5) {
              pQVar12 = (QArrayData *)QString::fromAscii_helper("--ip",4);
              local_2f0 = pQVar12;
              FUN_10000c490(param_1,&local_2f0);
              if (*(int *)pQVar12 != -1) {
                if (*(int *)pQVar12 != 0) {
                  LOCK();
                  *(int *)pQVar12 = *(int *)pQVar12 + -1;
                  local_31 = *(int *)pQVar12 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10048c498;
                }
                QArrayData::deallocate(pQVar12,2,8);
              }
LAB_10048c498:
              FUN_10000c490(param_1,&local_1f8);
              pQVar12 = (QArrayData *)QString::fromAscii_helper("remove",6);
              local_2f8 = pQVar12;
              FUN_10000c490(param_1,&local_2f8);
              if (*(int *)pQVar12 != -1) {
                if (*(int *)pQVar12 != 0) {
                  LOCK();
                  *(int *)pQVar12 = *(int *)pQVar12 + -1;
                  local_31 = *(int *)pQVar12 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10048d3b6;
                }
                QArrayData::deallocate(pQVar12,2,8);
              }
            }
            else if (0x10002 < *(uint *)(param_2 + 0x40)) {
              pQVar12 = (QArrayData *)QString::fromAscii_helper("--route",7);
              local_300 = pQVar12;
              FUN_10000c490(param_1,&local_300);
              if (*(int *)pQVar12 != -1) {
                if (*(int *)pQVar12 != 0) {
                  LOCK();
                  *(int *)pQVar12 = *(int *)pQVar12 + -1;
                  local_31 = *(int *)pQVar12 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10048d4d3;
                }
                QArrayData::deallocate(pQVar12,2,8);
              }
LAB_10048d4d3:
              FUN_10000c490(param_1,&local_1f8);
              pQVar12 = (QArrayData *)QString::fromAscii_helper("remove",6);
              local_308 = pQVar12;
              FUN_10000c490(param_1,&local_308);
              if (*(int *)pQVar12 != -1) {
                if (*(int *)pQVar12 != 0) {
                  LOCK();
                  *(int *)pQVar12 = *(int *)pQVar12 + -1;
                  local_31 = *(int *)pQVar12 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10048d3b6;
                }
                QArrayData::deallocate(pQVar12,2,8);
              }
            }
LAB_10048d3b6:
            if (cVar7 == '\0') {
              CVmGenericNetworkAdapter::getDnsIPAddresses();
              local_310 = local_318;
              if (*local_318 != -1) {
                if (*local_318 == 0) {
                  QListData::detach((int)&local_310);
                  iVar10 = local_310[2];
                  if (iVar10 != local_310[3]) {
                    piVar16 = local_318 + (long)local_318[2] * 2 + 4;
                    piVar18 = local_310 + (long)iVar10 * 2 + 4;
                    lVar13 = (long)local_310[3] * 8 + (long)iVar10 * -8;
                    do {
                      piVar1 = *(int **)piVar16;
                      *(int **)piVar18 = piVar1;
                      if (1 < *piVar1 + 1U) {
                        LOCK();
                        *piVar1 = *piVar1 + 1;
                        local_31 = *piVar1 != 0;
                        UNLOCK();
                      }
                      piVar18 = piVar18 + 2;
                      piVar16 = piVar16 + 2;
                      lVar13 = lVar13 + -8;
                    } while (lVar13 != 0);
                  }
                }
                else {
                  LOCK();
                  *local_318 = *local_318 + 1;
                  local_31 = *local_318 != 0;
                  UNLOCK();
                }
              }
              FUN_100013180(&local_318);
              local_320.field0_0x0 =
                   (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
              local_340 = local_310;
              if (*local_310 != -1) {
                if (*local_310 == 0) {
                  QListData::detach((int)&local_340);
                  iVar10 = local_340[2];
                  if (iVar10 != local_340[3]) {
                    piVar16 = local_310 + (long)local_310[2] * 2 + 4;
                    piVar18 = local_340 + (long)iVar10 * 2 + 4;
                    lVar13 = (long)local_340[3] * 8 + (long)iVar10 * -8;
                    do {
                      piVar1 = *(int **)piVar16;
                      *(int **)piVar18 = piVar1;
                      if (1 < *piVar1 + 1U) {
                        LOCK();
                        *piVar1 = *piVar1 + 1;
                        local_31 = *piVar1 != 0;
                        UNLOCK();
                      }
                      piVar18 = piVar18 + 2;
                      piVar16 = piVar16 + 2;
                      lVar13 = lVar13 + -8;
                    } while (lVar13 != 0);
                  }
                }
                else {
                  LOCK();
                  *local_310 = *local_310 + 1;
                  local_31 = *local_310 != 0;
                  UNLOCK();
                }
              }
              local_338 = local_340 + (long)local_340[2] * 2 + 4;
              local_330 = local_340 + (long)local_340[3] * 2 + 4;
              local_328 = 1;
              if (local_340[2] != local_340[3]) {
                do {
                  pQVar12 = *(QArrayData **)local_338;
                  if (1 < *(int *)pQVar12 + 1U) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + 1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                  }
                  if (local_328 != 0) {
                    if (*(int *)(pQVar12 + 4) != 0) {
                      if (1 < *(int *)pQVar12 + 1U) {
                        LOCK();
                        *(int *)pQVar12 = *(int *)pQVar12 + 1;
                        local_31 = *(int *)pQVar12 != 0;
                        UNLOCK();
                      }
                      local_348.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar12;
                      QString::fromUtf8_helper((char *)&local_40,0xa10314);
                      QString::append(&local_348);
                      if (*(int *)local_40 != -1) {
                        if (*(int *)local_40 != 0) {
                          LOCK();
                          *(int *)local_40 = *(int *)local_40 + -1;
                          local_31 = *(int *)local_40 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_10048d6d9;
                        }
                        QArrayData::deallocate(local_40,2,8);
                      }
LAB_10048d6d9:
                      QString::append(&local_320);
                      if (*(int *)local_348.field0_0x0 != -1) {
                        if (*(int *)local_348.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_348.field0_0x0 = *(int *)local_348.field0_0x0 + -1;
                          local_31 = *(int *)local_348.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_10048d722;
                        }
                        QArrayData::deallocate((QArrayData *)local_348.field0_0x0,2,8);
                      }
                    }
LAB_10048d722:
                    local_328 = 0;
                  }
                  if (*(int *)pQVar12 != -1) {
                    if (*(int *)pQVar12 != 0) {
                      LOCK();
                      *(int *)pQVar12 = *(int *)pQVar12 + -1;
                      local_31 = *(int *)pQVar12 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048d757;
                    }
                    QArrayData::deallocate(pQVar12,2,8);
                  }
LAB_10048d757:
                  local_338 = local_338 + 2;
                  uVar14 = local_328 ^ 1;
                  bVar24 = local_328 != 1;
                  local_328 = uVar14;
                } while ((bVar24) && (local_338 != local_330));
              }
              FUN_100013180(&local_340);
              if (0 < *(int *)(local_320.field0_0x0 + 4)) {
                pQVar12 = (QArrayData *)QString::fromAscii_helper("--dns",5);
                local_350 = pQVar12;
                FUN_10000c490(param_1,&local_350);
                if (*(int *)pQVar12 != -1) {
                  if (*(int *)pQVar12 != 0) {
                    LOCK();
                    *(int *)pQVar12 = *(int *)pQVar12 + -1;
                    local_31 = *(int *)pQVar12 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048d7fa;
                  }
                  QArrayData::deallocate(pQVar12,2,8);
                }
LAB_10048d7fa:
                FUN_10000c490(param_1,&local_1f8);
                FUN_10000c490(param_1,&local_320);
              }
              if (*(int *)local_320.field0_0x0 != -1) {
                if (*(int *)local_320.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_320.field0_0x0 = *(int *)local_320.field0_0x0 + -1;
                  local_31 = *(int *)local_320.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10048d84e;
                }
                QArrayData::deallocate((QArrayData *)local_320.field0_0x0,2,8);
              }
LAB_10048d84e:
              FUN_100013180(&local_310);
            }
          }
          if (*(int *)local_1f8 != -1) {
            if (*(int *)local_1f8 != 0) {
              LOCK();
              *(int *)local_1f8 = *(int *)local_1f8 + -1;
              local_31 = *(int *)local_1f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10048d890;
            }
            QArrayData::deallocate(local_1f8,2,8);
          }
        }
      }
      else {
        CVmConfiguration::getVmSettings();
        CVmSettings::getGlobalNetwork();
        cVar8 = CVmGlobalNetwork::isAutoApplyIpOnly();
        CVmConfiguration::getVmSettings();
        CVmSettings::getGlobalNetwork();
        cVar9 = CVmGlobalNetwork::isAutoApplyIpOnly();
        if ((cVar8 != cVar9) ||
           (iVar10 = CVmDevice::getEmulatedType(), iVar10 == 5 && (bVar21 || bVar22)))
        goto LAB_10048c2b0;
      }
LAB_10048d890:
      local_1e8 = local_1e8 + 8;
    } while (local_1e8 != local_1e0);
  }
  local_1d8 = 1;
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048d8ef;
    }
    QListData::dispose(local_1f0);
  }
LAB_10048d8ef:
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_100.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
  return param_1;
}

