
/* CVmProfileHelper::check_vm_custom_profile(CHostHardwareInfo const&, CVmConfiguration const&,
   CVmConfiguration const&, bool) */

undefined4
CVmProfileHelper::check_vm_custom_profile
          (CHostHardwareInfo *param_1,CVmConfiguration *param_2,CVmConfiguration *param_3,
          bool param_4)

{
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  int *piVar15;
  undefined **ppuVar16;
  Data *pDVar17;
  bool bVar18;
  QVariant local_268 [16];
  QArrayData *local_258;
  char local_249;
  long local_248;
  QVariant local_240 [16];
  QString local_230;
  int *local_228;
  int *local_220;
  int *local_218;
  uint local_210;
  CVmConfiguration local_208 [248];
  _func_void_Node_ptr *local_110;
  _func_void_Node_ptr *local_108;
  int *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  int *local_c8;
  int *local_c0;
  int *local_b8;
  uint local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  QMapNodeBase *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  int *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar6 = CVmCommonOptions::getOsVersion();
  if (10 < iVar6 - 0x806U) {
    return 0;
  }
  if (iVar6 != 0x8ff && 0xf < iVar6 - 0x801U) {
    return 0;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getProfile();
  iVar6 = CVmProfile::getType();
  if (iVar6 == 4) {
    lVar10 = CVmConfiguration::getVmHardwareList();
    local_68 = *(Data **)(lVar10 + 0x1d0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 == 0) {
        QListData::detach((int)&local_68);
        lVar12 = (long)*(int *)(local_68 + 8);
        lVar10 = *(long *)(lVar10 + 0x1d0);
        if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_68 + lVar12 * 8) &&
           (lVar14 = *(int *)(local_68 + 0xc) - lVar12,
           lVar14 != 0 && lVar12 <= *(int *)(local_68 + 0xc))) {
          _memcpy(local_68 + lVar12 * 8 + 0x10,
                  (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar14 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
    }
    local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
    local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
    if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
      do {
        local_50 = 1;
        iVar7 = CVmDevice::getConnected();
        if (iVar7 != 0) {
          if (*(int *)local_68 == -1) {
            return 1;
          }
          pDVar17 = local_68;
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            UNLOCK();
            if (*(int *)local_68 != 0) {
              return 1;
            }
            local_31 = 0;
            pDVar17 = local_68;
          }
          goto LAB_10001eb95;
        }
        local_60 = local_60 + 8;
      } while (local_60 != local_58);
    }
    local_50 = 1;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10001e87f;
      }
      QListData::dispose(local_68);
    }
LAB_10001e87f:
    lVar10 = CVmConfiguration::getVmHardwareList();
    local_88 = *(Data **)(lVar10 + 0x1d8);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 == 0) {
        QListData::detach((int)&local_88);
        lVar12 = (long)*(int *)(local_88 + 8);
        lVar10 = *(long *)(lVar10 + 0x1d8);
        if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_88 + lVar12 * 8) &&
           (lVar14 = *(int *)(local_88 + 0xc) - lVar12,
           lVar14 != 0 && lVar12 <= *(int *)(local_88 + 0xc))) {
          _memcpy(local_88 + lVar12 * 8 + 0x10,
                  (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar14 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
    }
    local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
    local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
    if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
      do {
        local_70 = 1;
        cVar4 = CVmSoundDevice::isVolumeSync();
        if (cVar4 != '\0') {
          if (*(int *)local_88 == -1) {
            return 1;
          }
          pDVar17 = local_88;
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) {
              return 1;
            }
          }
LAB_10001eb95:
          QListData::dispose(pDVar17);
          return 1;
        }
        local_80 = local_80 + 8;
      } while (local_80 != local_78);
    }
    local_70 = 1;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10001e9af;
      }
      QListData::dispose(local_88);
    }
  }
LAB_10001e9af:
  FUN_100016e30(&local_90,param_1,param_2);
  FUN_100021e30(&local_a0,&local_90);
  local_98 = local_a0;
  if (*local_a0 != -1) {
    if (*local_a0 == 0) {
      QListData::detach((int)&local_98);
      iVar7 = local_98[2];
      if (iVar7 != local_98[3]) {
        local_a0 = local_a0 + (long)local_a0[2] * 2 + 4;
        piVar13 = local_98 + (long)iVar7 * 2 + 4;
        lVar10 = (long)local_98[3] * 8 + (long)iVar7 * -8;
        do {
          piVar15 = *(int **)local_a0;
          *(int **)piVar13 = piVar15;
          if (1 < *piVar15 + 1U) {
            LOCK();
            *piVar15 = *piVar15 + 1;
            local_31 = *piVar15 != 0;
            UNLOCK();
          }
          piVar13 = piVar13 + 2;
          local_a0 = local_a0 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_a0 = *local_a0 + 1;
      local_31 = *local_a0 != 0;
      UNLOCK();
    }
  }
  FUN_100013180(&local_a0);
  uVar8 = 1;
  if (param_4) {
    local_a8 = (int *)PTR_shared_null_100ba2188;
    FUN_100016080(param_2 + 0x10,param_3);
    if (local_a8[3] == local_a8[2]) {
      uVar8 = 0xffffffff;
      bVar18 = true;
    }
    else {
      if (iVar6 == 4) {
        local_c8 = local_a8;
        if (*local_a8 != -1) {
          if (*local_a8 == 0) {
            QListData::detach((int)&local_c8);
            iVar7 = local_c8[2];
            if (iVar7 != local_c8[3]) {
              piVar13 = local_a8 + (long)local_a8[2] * 2 + 4;
              piVar15 = local_c8 + (long)iVar7 * 2 + 4;
              lVar10 = (long)local_c8[3] * 8 + (long)iVar7 * -8;
              do {
                piVar2 = *(int **)piVar13;
                *(int **)piVar15 = piVar2;
                if (1 < *piVar2 + 1U) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  local_31 = *piVar2 != 0;
                  UNLOCK();
                }
                piVar15 = piVar15 + 2;
                piVar13 = piVar13 + 2;
                lVar10 = lVar10 + -8;
              } while (lVar10 != 0);
            }
          }
          else {
            LOCK();
            *local_a8 = *local_a8 + 1;
            local_31 = *local_a8 != 0;
            UNLOCK();
          }
        }
        local_c0 = local_c8 + (long)local_c8[2] * 2 + 4;
        local_b8 = local_c8 + (long)local_c8[3] * 2 + 4;
        local_b0 = 1;
        if (local_c8[2] == local_c8[3]) {
          bVar3 = false;
        }
        else {
          bVar3 = false;
          do {
            piVar13 = local_c0;
            if (local_b0 == 0) {
LAB_10001eeb8:
              local_c0 = local_c0 + 2;
              local_b0 = 1;
            }
            else {
              local_d0 = (QArrayData *)QString::fromAscii_helper("Hardware.NetworkAdapter[",0x18);
              cVar4 = QString::startsWith(piVar13,&local_d0,1);
              if (cVar4 == '\0') {
                bVar18 = false;
LAB_10001ec9c:
                local_e8 = (QArrayData *)QString::fromAscii_helper("Hardware.Sound[",0xf);
                cVar4 = QString::startsWith(piVar13,&local_e8,1);
                if (cVar4 == '\0') {
                  cVar5 = '\0';
                }
                else {
                  local_f0 = (QArrayData *)QString::fromAscii_helper("].VolumeSync",0xc);
                  cVar4 = QString::endsWith(piVar13,&local_f0,1);
                  cVar5 = '\x01';
                  if (cVar4 == '\0') {
                    local_f8 = (QArrayData *)QString::fromAscii_helper("]",1);
                    cVar5 = QString::endsWith(piVar13,&local_f8,1);
                    if (*(int *)local_f8 != -1) {
                      if (*(int *)local_f8 != 0) {
                        LOCK();
                        *(int *)local_f8 = *(int *)local_f8 + -1;
                        local_31 = *(int *)local_f8 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10001ed66;
                      }
                      QArrayData::deallocate(local_f8,2,8);
                    }
                  }
LAB_10001ed66:
                  if (*(int *)local_f0 != -1) {
                    if (*(int *)local_f0 != 0) {
                      LOCK();
                      *(int *)local_f0 = *(int *)local_f0 + -1;
                      local_31 = *(int *)local_f0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10001eda0;
                    }
                    QArrayData::deallocate(local_f0,2,8);
                  }
                }
LAB_10001eda0:
                if (*(int *)local_e8 != -1) {
                  if (*(int *)local_e8 != 0) {
                    LOCK();
                    *(int *)local_e8 = *(int *)local_e8 + -1;
                    local_31 = *(int *)local_e8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10001edd6;
                  }
                  QArrayData::deallocate(local_e8,2,8);
                }
LAB_10001edd6:
                if (bVar18) {
LAB_10001eddb:
                  if (*(int *)local_e0 != -1) {
                    if (*(int *)local_e0 != 0) {
                      LOCK();
                      *(int *)local_e0 = *(int *)local_e0 + -1;
                      local_31 = *(int *)local_e0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10001ee11;
                    }
                    QArrayData::deallocate(local_e0,2,8);
                  }
                  goto LAB_10001ee11;
                }
              }
              else {
                local_d8 = (QArrayData *)QString::fromAscii_helper("].Connected",0xb);
                cVar4 = QString::endsWith(piVar13,&local_d8,1);
                cVar5 = '\x01';
                if (cVar4 == '\0') {
                  local_e0 = (QArrayData *)QString::fromAscii_helper("]",1);
                  cVar4 = QString::endsWith(piVar13,&local_e0,1);
                  bVar18 = true;
                  cVar5 = '\x01';
                  if (cVar4 == '\0') goto LAB_10001ec9c;
                  goto LAB_10001eddb;
                }
LAB_10001ee11:
                if (*(int *)local_d8 != -1) {
                  if (*(int *)local_d8 != 0) {
                    LOCK();
                    *(int *)local_d8 = *(int *)local_d8 + -1;
                    local_31 = *(int *)local_d8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10001ee47;
                  }
                  QArrayData::deallocate(local_d8,2,8);
                }
              }
LAB_10001ee47:
              if (*(int *)local_d0 != -1) {
                if (*(int *)local_d0 != 0) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + -1;
                  local_31 = *(int *)local_d0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10001ee7d;
                }
                QArrayData::deallocate(local_d0,2,8);
              }
LAB_10001ee7d:
              if (cVar5 == '\0') goto LAB_10001eeb8;
              local_c0 = local_c0 + 2;
              uVar9 = local_b0 ^ 1;
              bVar3 = true;
              bVar18 = local_b0 == 1;
              local_b0 = uVar9;
              if (bVar18) break;
            }
          } while (local_c0 != local_b8);
        }
        FUN_100013180(&local_c8);
      }
      else {
        bVar3 = false;
      }
      FUN_100021ed0(&local_108,&local_98);
      FUN_100021ed0(&local_110,&local_a8);
      uVar11 = FUN_100021f90(&local_108,&local_110);
      FUN_1000221d0(&local_100,uVar11);
      if (local_98 != local_100) {
        local_48 = local_100;
        if (*local_100 != -1) {
          if (*local_100 == 0) {
            QListData::detach((int)&local_48);
            iVar7 = local_48[2];
            if (iVar7 != local_48[3]) {
              local_100 = local_100 + (long)local_100[2] * 2 + 4;
              piVar13 = local_48 + (long)iVar7 * 2 + 4;
              lVar10 = (long)local_48[3] * 8 + (long)iVar7 * -8;
              do {
                piVar15 = *(int **)local_100;
                *(int **)piVar13 = piVar15;
                if (1 < *piVar15 + 1U) {
                  LOCK();
                  *piVar15 = *piVar15 + 1;
                  local_31 = *piVar15 != 0;
                  UNLOCK();
                }
                piVar13 = piVar13 + 2;
                local_100 = local_100 + 2;
                lVar10 = lVar10 + -8;
              } while (lVar10 != 0);
            }
          }
          else {
            LOCK();
            *local_100 = *local_100 + 1;
            local_31 = *local_100 != 0;
            UNLOCK();
          }
        }
        piVar13 = local_48;
        local_48 = local_98;
        local_98 = piVar13;
        FUN_100013180(&local_48);
      }
      FUN_100013180(&local_100);
      if (*(int *)(local_110 + 0x10) != -1) {
        if (*(int *)(local_110 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_110 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10001f028;
        }
        QHashData::free_helper(local_110);
      }
LAB_10001f028:
      if (*(int *)(local_108 + 0x10) != -1) {
        if (*(int *)(local_108 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_108 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10001f05d;
        }
        QHashData::free_helper(local_108);
      }
LAB_10001f05d:
      bVar18 = !bVar3 && local_98[3] == local_98[2];
      uVar8 = 1;
      if (!bVar3 && local_98[3] == local_98[2]) {
        uVar8 = 0xffffffff;
      }
    }
    FUN_100013180(&local_a8);
    if (bVar18) goto LAB_10001f431;
  }
  CVmConfiguration::CVmConfiguration(local_208,param_2);
  local_228 = local_98;
  if (*local_98 != -1) {
    if (*local_98 == 0) {
      QListData::detach((int)&local_228);
      iVar7 = local_228[2];
      if (iVar7 != local_228[3]) {
        piVar13 = local_98 + (long)local_98[2] * 2 + 4;
        piVar15 = local_228 + (long)iVar7 * 2 + 4;
        lVar10 = (long)local_228[3] * 8 + (long)iVar7 * -8;
        do {
          piVar2 = *(int **)piVar13;
          *(int **)piVar15 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar15 = piVar15 + 2;
          piVar13 = piVar13 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_98 = *local_98 + 1;
      local_31 = *local_98 != 0;
      UNLOCK();
    }
  }
  local_220 = local_228 + (long)local_228[2] * 2 + 4;
  local_218 = local_228 + (long)local_228[3] * 2 + 4;
  local_210 = 1;
  cVar4 = '\x14';
  if (local_228[2] != local_228[3]) {
    do {
      local_230.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_220;
      if (1 < *(int *)local_230.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + 1;
        local_31 = *(int *)local_230.field0_0x0 != 0;
        UNLOCK();
      }
      cVar4 = '\x17';
      if (local_210 != 0) {
        local_40 = PTR_shared_null_100ba2188;
        lVar10 = *(long *)(local_90 + 0x10);
        lVar12 = 0;
        if (*(long *)(local_90 + 0x10) == 0) {
LAB_10001f249:
          lVar14 = 0;
        }
        else {
          do {
            while (lVar14 = lVar10, cVar4 = operator<((QString *)(lVar14 + 0x18),&local_230),
                  cVar4 == '\0') {
              lVar10 = *(long *)(lVar14 + 8);
              lVar12 = lVar14;
              if (*(long *)(lVar14 + 8) == 0) goto LAB_10001f238;
            }
            lVar10 = *(long *)(lVar14 + 0x10);
          } while (*(long *)(lVar14 + 0x10) != 0);
          lVar14 = lVar12;
          if (lVar12 == 0) goto LAB_10001f249;
LAB_10001f238:
          cVar4 = operator<(&local_230,(QString *)(lVar14 + 0x18));
          if (cVar4 != '\0') goto LAB_10001f249;
        }
        ppuVar16 = (undefined **)(lVar14 + 0x20);
        if (lVar14 == 0) {
          ppuVar16 = &local_40;
        }
        FUN_100022be0(&local_248,ppuVar16);
        FUN_100022290(&local_40);
        QVariant::QVariant(local_240,
                           *(QVariant **)
                            (local_248 + 0x10 + ((long)*(int *)(local_248 + 8) + (long)iVar6) * 8));
        FUN_100022290(&local_248);
        local_249 = '\0';
        local_258 = (QArrayData *)local_230.field0_0x0;
        if (1 < *(int *)local_230.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + 1;
          local_31 = *(int *)local_230.field0_0x0 != 0;
          UNLOCK();
        }
        QVariant::QVariant(local_268,local_240);
        CVmConfiguration::setPropertyValue(local_208,&local_258,local_268,&local_249);
        QVariant::~QVariant(local_268);
        if (*(int *)local_258 != -1) {
          if (*(int *)local_258 != 0) {
            LOCK();
            *(int *)local_258 = *(int *)local_258 + -1;
            local_31 = *(int *)local_258 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10001f334;
          }
          QArrayData::deallocate(local_258,2,8);
        }
LAB_10001f334:
        cVar4 = local_249;
        if (local_249 != '\0') {
          uVar8 = 1;
        }
        QVariant::~QVariant(local_240);
        if (cVar4 == '\0') {
          local_210 = 0;
          cVar4 = '\x17';
        }
      }
      if (*(int *)local_230.field0_0x0 != -1) {
        if (*(int *)local_230.field0_0x0 != 0) {
          LOCK();
          *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
          local_31 = *(int *)local_230.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10001f3c0;
        }
        QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
      }
LAB_10001f3c0:
      if (cVar4 != '\x17') goto LAB_10001f404;
      local_220 = local_220 + 2;
      uVar9 = local_210 ^ 1;
    } while ((local_210 != 1) && (local_210 = uVar9, local_220 != local_218));
    cVar4 = '\x14';
    local_210 = uVar9;
  }
LAB_10001f404:
  FUN_100013180(&local_228);
  CVmConfiguration::~CVmConfiguration(local_208);
  if (cVar4 == '\x14') {
    uVar8 = 0;
  }
LAB_10001f431:
  FUN_100013180(&local_98);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    if (*(long *)(local_90 + 0x10) != 0) {
      FUN_100022940();
      QMapDataBase::freeTree(local_90,(int)*(undefined8 *)(local_90 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_90);
  }
  return uVar8;
}

