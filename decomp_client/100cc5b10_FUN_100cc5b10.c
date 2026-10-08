
void FUN_100cc5b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  char *pcVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  size_t sVar8;
  CVmHardDisk *pCVar9;
  long lVar10;
  QString QVar11;
  Data *pDVar12;
  CVmOpticalDisk *pCVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  Data *pDVar18;
  long *plVar19;
  uint uVar20;
  QArrayData *pQVar21;
  ulong uVar22;
  bool bVar23;
  QString local_1e8;
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
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QTypedArrayData<unsigned_short> *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  Data *local_e8;
  QArrayData *local_e0;
  Data *local_d8;
  Data *local_d0;
  Data *local_c8;
  undefined4 local_c0;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  undefined4 local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  undefined4 local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  uVar22 = 0;
  do {
    local_120 = (QArrayData *)QString::fromAscii_helper("IDE devices",0xb);
    pcVar2 = (&PTR_s_Disk_0_0_enabled_102259490)[uVar22 * 0x12];
    sVar8 = _strlen(pcVar2);
    local_128 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar8);
    FUN_100ccd670(param_2,&local_120,&local_128,10,(&DAT_102259498)[uVar22 * 0x24]);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc5bf4;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_100cc5bf4:
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc5c30;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_100cc5c30:
    local_130 = (QArrayData *)QString::fromAscii_helper("IDE devices",0xb);
    pcVar2 = (&PTR_s_Disk_0_0_connected_102259500)[uVar22 * 0x12];
    sVar8 = _strlen(pcVar2);
    local_138 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar8);
    FUN_100ccd670(param_2,&local_130,&local_138,10,(&DAT_102259508)[uVar22 * 0x24]);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc5ccd;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_100cc5ccd:
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc5d03;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_100cc5d03:
    local_140 = (QArrayData *)QString::fromAscii_helper("IDE devices",0xb);
    pcVar2 = (&PTR_s_Disk_0_0_1022594a0)[uVar22 * 0x12];
    sVar8 = _strlen(pcVar2);
    local_148 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar8);
    iVar5 = FUN_100ccd670(param_2,&local_140,&local_148,10,(&DAT_1022594a8)[uVar22 * 0x24]);
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc5da7;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_100cc5da7:
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc5ddd;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_100cc5ddd:
    local_150 = (QArrayData *)QString::fromAscii_helper("IDE devices",0xb);
    pcVar2 = (&PTR_s_Disk_0_0_media_1022594f0)[uVar22 * 0x12];
    sVar8 = _strlen(pcVar2);
    local_158 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar8);
    iVar6 = FUN_100ccd670(param_2,&local_150,&local_158,10,(&DAT_1022594f8)[uVar22 * 0x24]);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_31 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc5e7a;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_100cc5e7a:
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc5eb0;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_100cc5eb0:
    local_168 = (QArrayData *)QString::fromAscii_helper("IDE devices",0xb);
    pcVar2 = (&PTR_s_Disk_0_0_image_1022594e0)[uVar22 * 0x12];
    sVar8 = _strlen(pcVar2);
    local_170 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar8);
    pcVar2 = (&PTR_s_disk0_hdd_1022594e8)[uVar22 * 0x12];
    sVar8 = _strlen(pcVar2);
    local_178 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar8);
    FUN_100ccd600(&local_160,param_2,&local_168,&local_170,&local_178);
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc5f70;
      }
      QArrayData::deallocate(local_178,2,8);
    }
LAB_100cc5f70:
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc5fa6;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_100cc5fa6:
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc5fdc;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_100cc5fdc:
    local_180 = (QArrayData *)QString::fromAscii_helper("IDE devices",0xb);
    pcVar2 = (&PTR_s_Disk_0_0_passthrough_mode_102259510)[uVar22 * 0x12];
    sVar8 = _strlen(pcVar2);
    local_188 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar8);
    FUN_100ccd670(param_2,&local_180,&local_188,10,(&DAT_102259518)[uVar22 * 0x24]);
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc6083;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_100cc6083:
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc60b9;
      }
      QArrayData::deallocate(local_180,2,8);
    }
LAB_100cc60b9:
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        local_1e8.field0_0x0 = operator_new(0x158);
        CVmHardDisk::CVmHardDisk((CVmHardDisk *)local_1e8.field0_0x0);
        CVmConfiguration::getVmHardwareList();
        CVmDevice::setIndex((uint)local_1e8.field0_0x0);
      }
      else {
        local_1e8.field0_0x0 = operator_new(0xf0);
        CVmOpticalDisk::CVmOpticalDisk((CVmOpticalDisk *)local_1e8.field0_0x0);
        CVmConfiguration::getVmHardwareList();
        CVmDevice::setIndex((uint)local_1e8.field0_0x0);
      }
      uVar20 = (uint)local_1e8.field0_0x0;
      CVmClusteredDevice::setStackIndex(uVar20);
      CVmDevice::setEnabled(uVar20);
      CVmDevice::setConnected(uVar20);
      CVmClusteredDevice::setPassthrough(uVar20);
      if (iVar5 == 1) {
        if (iVar6 == 0) {
          CVmDevice::setEmulatedType(uVar20);
        }
        else {
          CVmDevice::setEmulatedType(uVar20);
        }
        iVar5 = CVmDevice::getEmulatedType();
        if (iVar5 == 0) {
          local_f0 = (QArrayData *)QString::fromAscii_helper(";",1);
          QString::split(&local_e8,&local_160,&local_f0,0,1);
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cc64f5;
            }
            QArrayData::deallocate(local_f0,2,8);
          }
LAB_100cc64f5:
          uVar14 = *(uint *)(local_e8 + 8);
          if (*(uint *)(local_e8 + 0xc) != uVar14) {
            if (1 < *(uint *)local_e8) {
              FUN_100036c40(&local_e8,*(uint *)(local_e8 + 4));
              uVar14 = *(uint *)(local_e8 + 8);
            }
            lVar10 = *(long *)(local_e8 + (long)(int)uVar14 * 8 + 0x10);
            iVar5 = QString::compare_helper
                              (*(long *)(lVar10 + 0x10) + lVar10,*(undefined4 *)(lVar10 + 4),
                               "Boot Camp",0xffffffff,1);
            if (iVar5 == 0) {
              uVar14 = *(uint *)(local_e8 + 8);
              if ((int)(*(uint *)(local_e8 + 0xc) - uVar14) < 2) {
                local_f8 = (QArrayData *)QString::fromAscii_helper("",0);
              }
              else {
                if (1 < *(uint *)local_e8) {
                  FUN_100036c40(&local_e8,*(uint *)(local_e8 + 4));
                  uVar14 = *(uint *)(local_e8 + 8);
                }
                local_f8 = *(QArrayData **)(local_e8 + (long)(int)uVar14 * 8 + 0x18);
                if (1 < *(int *)local_f8 + 1U) {
                  LOCK();
                  *(int *)local_f8 = *(int *)local_f8 + 1;
                  local_31 = *(int *)local_f8 != 0;
                  UNLOCK();
                }
              }
              plVar19 = *(long **)(param_4 + 0x150);
              local_b8 = (Data *)*plVar19;
              if (*(int *)local_b8 != -1) {
                if (*(int *)local_b8 == 0) {
                  QListData::detach((int)&local_b8);
                  lVar16 = (long)*(int *)(local_b8 + 8);
                  lVar10 = *plVar19;
                  if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_b8 + lVar16 * 8)
                     && (lVar15 = *(int *)(local_b8 + 0xc) - lVar16,
                        lVar15 != 0 && lVar16 <= *(int *)(local_b8 + 0xc))) {
                    _memcpy(local_b8 + lVar16 * 8 + 0x10,
                            (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar15 * 8);
                  }
                }
                else {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + 1;
                  local_31 = *(int *)local_b8 != 0;
                  UNLOCK();
                }
              }
              local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
              local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
              local_a0 = 1;
              lVar10 = 0;
              if (*(int *)(local_b8 + 8) != *(int *)(local_b8 + 0xc)) {
                lVar16 = 0;
                do {
                  local_a0 = 1;
                  lVar10 = *(long *)local_b0;
                  local_d8 = *(Data **)(lVar10 + 0x98);
                  if (*(int *)local_d8 != -1) {
                    if (*(int *)local_d8 == 0) {
                      QListData::detach((int)&local_d8);
                      lVar15 = (long)*(int *)(local_d8 + 8);
                      lVar10 = *(long *)(lVar10 + 0x98);
                      if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) !=
                           local_d8 + lVar15 * 8) &&
                         (lVar17 = *(int *)(local_d8 + 0xc) - lVar15,
                         lVar17 != 0 && lVar15 <= *(int *)(local_d8 + 0xc))) {
                        _memcpy(local_d8 + lVar15 * 8 + 0x10,
                                (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar17 * 8)
                        ;
                      }
                    }
                    else {
                      LOCK();
                      *(int *)local_d8 = *(int *)local_d8 + 1;
                      local_31 = *(int *)local_d8 != 0;
                      UNLOCK();
                    }
                  }
                  local_d0 = local_d8 + (long)*(int *)(local_d8 + 8) * 8 + 0x10;
                  local_c8 = local_d8 + (long)*(int *)(local_d8 + 0xc) * 8 + 0x10;
                  local_c0 = 1;
                  iVar5 = 8;
                  lVar10 = lVar16;
                  if (*(int *)(local_d8 + 8) != *(int *)(local_d8 + 0xc)) {
                    do {
                      local_c0 = 1;
                      lVar15 = *(long *)local_d0;
                      uVar7 = CHwHddPartition::getType();
                      cVar4 = FUN_100ccffc0(uVar7);
                      if (cVar4 != '\0') {
                        if (lVar16 == 0) {
                          lVar16 = lVar15;
                        }
                        iVar5 = 0xe;
                        lVar10 = lVar16;
                        if (*(int *)(local_f8 + 4) == 0) break;
                        CHwHddPartition::getName();
                        iVar6 = QString::indexOf(&local_e0,&local_f8,0,1);
                        if (*(int *)local_e0 != -1) {
                          if (*(int *)local_e0 != 0) {
                            LOCK();
                            *(int *)local_e0 = *(int *)local_e0 + -1;
                            local_31 = *(int *)local_e0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_100cc6a0a;
                          }
                          QArrayData::deallocate(local_e0,2,8);
                        }
LAB_100cc6a0a:
                        lVar10 = lVar15;
                        if (iVar6 != -1) break;
                      }
                      local_d0 = local_d0 + 8;
                      local_c0 = 1;
                      iVar5 = 8;
                      lVar10 = lVar16;
                    } while (local_d0 != local_c8);
                  }
                  if (*(int *)local_d8 != -1) {
                    if (*(int *)local_d8 != 0) {
                      LOCK();
                      *(int *)local_d8 = *(int *)local_d8 + -1;
                      local_31 = *(int *)local_d8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100cc6a76;
                    }
                    QListData::dispose(local_d8);
                  }
LAB_100cc6a76:
                  if (iVar5 != 8) break;
                  local_b0 = local_b0 + 8;
                  local_a0 = 1;
                  lVar16 = lVar10;
                } while (local_b0 != local_a8);
              }
              if (*(int *)local_b8 != -1) {
                if (*(int *)local_b8 != 0) {
                  LOCK();
                  *(int *)local_b8 = *(int *)local_b8 + -1;
                  local_31 = *(int *)local_b8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cc6ad1;
                }
                QListData::dispose(local_b8);
              }
LAB_100cc6ad1:
              if (*(int *)local_f8 != -1) {
                if (*(int *)local_f8 != 0) {
                  LOCK();
                  *(int *)local_f8 = *(int *)local_f8 + -1;
                  local_31 = *(int *)local_f8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cc6b07;
                }
                QArrayData::deallocate(local_f8,2,8);
              }
LAB_100cc6b07:
              if (lVar10 == 0) {
                CVmDevice::setEnabled(uVar20);
                CVmDevice::setConnected(uVar20);
              }
              else {
                plVar19 = *(long **)(param_4 + 0x150);
                local_98 = (Data *)*plVar19;
                if (*(int *)local_98 != -1) {
                  if (*(int *)local_98 == 0) {
                    QListData::detach((int)&local_98);
                    lVar15 = (long)*(int *)(local_98 + 8);
                    lVar16 = *plVar19;
                    if (((Data *)(lVar16 + (long)*(int *)(lVar16 + 8) * 8) != local_98 + lVar15 * 8)
                       && (lVar17 = *(int *)(local_98 + 0xc) - lVar15,
                          lVar17 != 0 && lVar15 <= *(int *)(local_98 + 0xc))) {
                      _memcpy(local_98 + lVar15 * 8 + 0x10,
                              (void *)(lVar16 + 0x10 + (long)*(int *)(lVar16 + 8) * 8),lVar17 * 8);
                    }
                  }
                  else {
                    LOCK();
                    *(int *)local_98 = *(int *)local_98 + 1;
                    local_31 = *(int *)local_98 != 0;
                    UNLOCK();
                  }
                }
                local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
                local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
                bVar23 = *(int *)(local_98 + 8) == *(int *)(local_98 + 0xc);
                while (local_80 = 1, !bVar23) {
                  lVar16 = *(long *)(*(long *)local_90 + 0x98);
                  iVar5 = *(int *)(lVar16 + 8);
                  plVar19 = (long *)(lVar16 + 0x10 + (long)iVar5 * 8);
                  iVar6 = *(int *)(lVar16 + 0xc);
                  if (iVar5 == iVar6) {
LAB_100cc6c50:
                    if (plVar19 != (long *)(lVar16 + 0x10 + (long)iVar6 * 8)) break;
                  }
                  else {
                    lVar15 = (long)iVar6 * 8 + (long)iVar5 * -8;
                    do {
                      if (*plVar19 == lVar10) goto LAB_100cc6c50;
                      plVar19 = plVar19 + 1;
                      lVar15 = lVar15 + -8;
                    } while (lVar15 != 0);
                  }
                  local_90 = local_90 + 8;
                  bVar23 = local_90 == local_88;
                }
                if (*(int *)local_98 != -1) {
                  if (*(int *)local_98 != 0) {
                    LOCK();
                    *(int *)local_98 = *(int *)local_98 + -1;
                    local_31 = *(int *)local_98 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100cc6c7f;
                  }
                  QListData::dispose(local_98);
                }
LAB_100cc6c7f:
                CHwHardDisk::getDeviceName();
                CVmDevice::setUserFriendlyName(local_1e8);
                if (*(int *)local_100 != -1) {
                  if (*(int *)local_100 != 0) {
                    LOCK();
                    *(int *)local_100 = *(int *)local_100 + -1;
                    local_31 = *(int *)local_100 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100cc6cd7;
                  }
                  QArrayData::deallocate(local_100,2,8);
                }
LAB_100cc6cd7:
                CHwHardDisk::getDeviceId();
                CVmDevice::setSystemName(local_1e8);
                if (*(int *)local_108 != -1) {
                  if (*(int *)local_108 != 0) {
                    LOCK();
                    *(int *)local_108 = *(int *)local_108 + -1;
                    local_31 = *(int *)local_108 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100cc6d2f;
                  }
                  QArrayData::deallocate(local_108,2,8);
                }
LAB_100cc6d2f:
                CVmDevice::setEmulatedType(uVar20);
                QVar11.field0_0x0 = operator_new(0xb0);
                CVmHddPartition::CVmHddPartition((CVmHddPartition *)QVar11.field0_0x0);
                local_110 = QVar11.field0_0x0;
                CHwHddPartition::getSystemName();
                CVmHddPartition::setSystemName(QVar11);
                if (*(int *)local_118 != -1) {
                  if (*(int *)local_118 != 0) {
                    LOCK();
                    *(int *)local_118 = *(int *)local_118 + -1;
                    local_31 = *(int *)local_118 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100cc6db0;
                  }
                  QArrayData::deallocate(local_118,2,8);
                }
LAB_100cc6db0:
                FUN_1001297e0(local_1e8.field0_0x0 + 0xf0,&local_110);
                CVmConfiguration::getVmSettings();
                CVmSettings::getVmTools();
                bVar23 = (bool)CVmTools::getVmSharedProfile();
                CVmSharedProfile::setEnabled(bVar23);
              }
            }
          }
          pDVar12 = local_e8;
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_31 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cc6e90;
            }
            iVar5 = *(int *)(local_e8 + 0xc);
            if (iVar5 != *(int *)(local_e8 + 8)) {
              lVar10 = (long)*(int *)(local_e8 + 8) * 8 + (long)iVar5 * -8;
              pDVar18 = local_e8 + (long)iVar5 * 8 + 8;
              do {
                pQVar21 = *(QArrayData **)pDVar18;
                if (*(int *)pQVar21 == 0) {
LAB_100cc6e60:
                  QArrayData::deallocate(pQVar21,2,8);
                }
                else if (*(int *)pQVar21 != -1) {
                  LOCK();
                  *(int *)pQVar21 = *(int *)pQVar21 + -1;
                  local_31 = *(int *)pQVar21 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar21 = *(QArrayData **)pDVar18;
                    goto LAB_100cc6e60;
                  }
                }
                pDVar18 = pDVar18 + -8;
                lVar10 = lVar10 + 8;
              } while (lVar10 != 0);
            }
            QListData::dispose(pDVar12);
          }
        }
        else {
          local_190 = local_160;
          if (1 < *(int *)local_160 + 1U) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + 1;
            local_31 = *(int *)local_160 != 0;
            UNLOCK();
          }
          CVmDevice::setSystemName(local_1e8);
          if (*(int *)local_190 != -1) {
            if (*(int *)local_190 != 0) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + -1;
              local_31 = *(int *)local_190 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cc6259;
            }
            QArrayData::deallocate(local_190,2,8);
          }
LAB_100cc6259:
          local_198 = local_160;
          if (1 < *(int *)local_160 + 1U) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + 1;
            local_31 = *(int *)local_160 != 0;
            UNLOCK();
          }
          CVmDevice::setUserFriendlyName(local_1e8);
          if (*(int *)local_198 != -1) {
            if (*(int *)local_198 != 0) {
              LOCK();
              *(int *)local_198 = *(int *)local_198 + -1;
              local_31 = *(int *)local_198 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cc6e90;
            }
            QArrayData::deallocate(local_198,2,8);
          }
        }
LAB_100cc6e90:
        pCVar9 = (CVmHardDisk *)CVmConfiguration::getVmHardwareList();
        CVmHardware::addHardDisk(pCVar9);
      }
      else {
        if (iVar6 == 0) {
          CVmDevice::setEmulatedType(uVar20);
        }
        else {
          CVmDevice::setEmulatedType(uVar20);
        }
        local_1a0 = (QArrayData *)QString::fromAscii_helper("default",7);
        iVar5 = QString::indexOf(&local_160,&local_1a0,0,0);
        if (*(int *)local_1a0 != -1) {
          if (*(int *)local_1a0 != 0) {
            LOCK();
            *(int *)local_1a0 = *(int *)local_1a0 + -1;
            local_31 = *(int *)local_1a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cc6346;
          }
          QArrayData::deallocate(local_1a0,2,8);
        }
LAB_100cc6346:
        if (iVar5 == -1) {
          local_1c8 = local_160;
          if (1 < *(int *)local_160 + 1U) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + 1;
            local_31 = *(int *)local_160 != 0;
            UNLOCK();
          }
          CVmDevice::setUserFriendlyName(local_1e8);
          if (*(int *)local_1c8 != -1) {
            if (*(int *)local_1c8 != 0) {
              LOCK();
              *(int *)local_1c8 = *(int *)local_1c8 + -1;
              local_31 = *(int *)local_1c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cc661e;
            }
            QArrayData::deallocate(local_1c8,2,8);
          }
LAB_100cc661e:
          local_1d0 = local_160;
          if (1 < *(int *)local_160 + 1U) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + 1;
            local_31 = *(int *)local_160 != 0;
            UNLOCK();
          }
          CVmDevice::setSystemName(local_1e8);
          if (*(int *)local_1d0 != -1) {
            if (*(int *)local_1d0 != 0) {
              LOCK();
              *(int *)local_1d0 = *(int *)local_1d0 + -1;
              local_31 = *(int *)local_1d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cc67c0;
            }
            QArrayData::deallocate(local_1d0,2,8);
          }
        }
        else {
          plVar19 = *(long **)(param_4 + 0x148);
          puVar3 = (uint *)*plVar19;
          uVar14 = puVar3[2];
          if (puVar3[3] == uVar14) {
            FUN_100df99c0("","ConfigConverter",0,
                          "Default CDROM device not found at host hardware info object");
            CVmDevice::setConnected(uVar20);
            CVmDevice::setEnabled(uVar20);
            local_1b8 = local_160;
            if (1 < *(int *)local_160 + 1U) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + 1;
              local_31 = *(int *)local_160 != 0;
              UNLOCK();
            }
            CVmDevice::setSystemName(local_1e8);
            if (*(int *)local_1b8 != -1) {
              if (*(int *)local_1b8 != 0) {
                LOCK();
                *(int *)local_1b8 = *(int *)local_1b8 + -1;
                local_31 = *(int *)local_1b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cc6410;
              }
              QArrayData::deallocate(local_1b8,2,8);
            }
LAB_100cc6410:
            local_1c0 = local_160;
            if (1 < *(int *)local_160 + 1U) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + 1;
              local_31 = *(int *)local_160 != 0;
              UNLOCK();
            }
            CVmDevice::setUserFriendlyName(local_1e8);
            if (*(int *)local_1c0 != -1) {
              if (*(int *)local_1c0 != 0) {
                LOCK();
                *(int *)local_1c0 = *(int *)local_1c0 + -1;
                local_31 = *(int *)local_1c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cc67c0;
              }
              QArrayData::deallocate(local_1c0,2,8);
            }
          }
          else {
            if (1 < *puVar3) {
              pDVar12 = (Data *)QListData::detach((int)plVar19);
              lVar10 = *plVar19;
              lVar16 = (long)*(int *)(lVar10 + 8);
              puVar1 = (uint *)(lVar10 + 0x10 + lVar16 * 8);
              if ((puVar3 + (long)(int)uVar14 * 2 + 4 != puVar1) &&
                 (lVar15 = *(int *)(lVar10 + 0xc) - lVar16,
                 lVar15 != 0 && lVar16 <= *(int *)(lVar10 + 0xc))) {
                _memcpy(puVar1,puVar3 + (long)(int)uVar14 * 2 + 4,lVar15 * 8);
              }
              if (*(int *)pDVar12 != -1) {
                if (*(int *)pDVar12 != 0) {
                  LOCK();
                  *(int *)pDVar12 = *(int *)pDVar12 + -1;
                  local_31 = *(int *)pDVar12 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cc66f1;
                }
                QListData::dispose(pDVar12);
              }
            }
LAB_100cc66f1:
            plVar19 = *(long **)(*plVar19 + 0x10 + (long)*(int *)(*plVar19 + 8) * 8);
            (**(code **)(*plVar19 + 0xb8))(&local_1a8,plVar19);
            CVmDevice::setSystemName(local_1e8);
            if (*(int *)local_1a8 != -1) {
              if (*(int *)local_1a8 != 0) {
                LOCK();
                *(int *)local_1a8 = *(int *)local_1a8 + -1;
                local_31 = *(int *)local_1a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cc675c;
              }
              QArrayData::deallocate(local_1a8,2,8);
            }
LAB_100cc675c:
            (**(code **)(*plVar19 + 0xa8))(&local_1b0,plVar19);
            CVmDevice::setUserFriendlyName(local_1e8);
            if (*(int *)local_1b0 != -1) {
              if (*(int *)local_1b0 != 0) {
                LOCK();
                *(int *)local_1b0 = *(int *)local_1b0 + -1;
                local_31 = *(int *)local_1b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cc67c0;
              }
              QArrayData::deallocate(local_1b0,2,8);
            }
          }
        }
LAB_100cc67c0:
        pCVar13 = (CVmOpticalDisk *)CVmConfiguration::getVmHardwareList();
        CVmHardware::addOpticalDisk(pCVar13);
      }
    }
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc6ee1;
      }
      QArrayData::deallocate(local_160,2,8);
    }
LAB_100cc6ee1:
    uVar22 = uVar22 + 1;
  } while (uVar22 < 4);
  lVar10 = CVmConfiguration::getVmHardwareList();
  if (*(int *)(*(long *)(lVar10 + 0x1a8) + 0xc) != *(int *)(*(long *)(lVar10 + 0x1a8) + 8)) {
    lVar10 = CVmConfiguration::getVmHardwareList();
    puVar3 = *(uint **)(lVar10 + 0x1a8);
    plVar19 = (long *)(lVar10 + 0x1a8);
    if (1 < *puVar3) {
      uVar20 = puVar3[2];
      pDVar12 = (Data *)QListData::detach((int)plVar19);
      lVar10 = *plVar19;
      lVar16 = (long)*(int *)(lVar10 + 8);
      if ((puVar3 + (long)(int)uVar20 * 2 != (uint *)(lVar10 + lVar16 * 8)) &&
         (lVar15 = *(int *)(lVar10 + 0xc) - lVar16, lVar15 != 0 && lVar16 <= *(int *)(lVar10 + 0xc))
         ) {
        _memcpy((void *)(lVar10 + 0x10 + lVar16 * 8),puVar3 + (long)(int)uVar20 * 2 + 4,lVar15 * 8);
      }
      if (*(int *)pDVar12 != -1) {
        if (*(int *)pDVar12 != 0) {
          LOCK();
          *(int *)pDVar12 = *(int *)pDVar12 + -1;
          local_31 = *(int *)pDVar12 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc71f9;
        }
        QListData::dispose(pDVar12);
      }
    }
LAB_100cc71f9:
    CVmDevice::setEnabled((uint)*(undefined8 *)(*plVar19 + 0x10 + (long)*(int *)(*plVar19 + 8) * 8))
    ;
    return;
  }
  QVar11.field0_0x0 = operator_new(0xf0);
  CVmOpticalDisk::CVmOpticalDisk((CVmOpticalDisk *)QVar11.field0_0x0);
  iVar5 = 0;
  uVar20 = (uint)QVar11.field0_0x0;
  CVmDevice::setIndex(uVar20);
  lVar10 = CVmConfiguration::getVmHardwareList();
  do {
    local_78 = *(Data **)(lVar10 + 0x1b0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 == 0) {
        QListData::detach((int)&local_78);
        lVar15 = (long)*(int *)(local_78 + 8);
        lVar16 = *(long *)(lVar10 + 0x1b0);
        if (((Data *)(lVar16 + (long)*(int *)(lVar16 + 8) * 8) != local_78 + lVar15 * 8) &&
           (lVar17 = *(int *)(local_78 + 0xc) - lVar15,
           lVar17 != 0 && lVar15 <= *(int *)(local_78 + 0xc))) {
          _memcpy(local_78 + lVar15 * 8 + 0x10,
                  (void *)(lVar16 + 0x10 + (long)*(int *)(lVar16 + 8) * 8),lVar17 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
    }
    local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
    local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
    local_60 = 1;
    if (*(int *)(local_78 + 8) == *(int *)(local_78 + 0xc)) {
      bVar23 = false;
    }
    else {
      do {
        local_60 = 1;
        iVar6 = CVmClusteredDevice::getInterfaceType();
        if (iVar6 == 0) {
          iVar6 = CVmClusteredDevice::getStackIndex();
          bVar23 = true;
          if (iVar6 == iVar5) goto LAB_100cc702d;
        }
        local_70 = local_70 + 8;
        local_60 = 1;
      } while (local_70 != local_68);
      bVar23 = false;
    }
LAB_100cc702d:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc704f;
      }
      QListData::dispose(local_78);
    }
LAB_100cc704f:
    if (!bVar23) {
      local_58 = *(Data **)(lVar10 + 0x1a8);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 == 0) {
          QListData::detach((int)&local_58);
          lVar15 = (long)*(int *)(local_58 + 8);
          lVar16 = *(long *)(lVar10 + 0x1a8);
          if (((Data *)(lVar16 + (long)*(int *)(lVar16 + 8) * 8) != local_58 + lVar15 * 8) &&
             (lVar17 = *(int *)(local_58 + 0xc) - lVar15,
             lVar17 != 0 && lVar15 <= *(int *)(local_58 + 0xc))) {
            _memcpy(local_58 + lVar15 * 8 + 0x10,
                    (void *)(lVar16 + 0x10 + (long)*(int *)(lVar16 + 8) * 8),lVar17 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + 1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
        }
      }
      local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
      local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
      local_40 = 1;
      if (*(int *)(local_58 + 8) == *(int *)(local_58 + 0xc)) {
        bVar23 = false;
      }
      else {
        do {
          local_40 = 1;
          iVar6 = CVmClusteredDevice::getInterfaceType();
          if (iVar6 == 0) {
            iVar6 = CVmClusteredDevice::getStackIndex();
            bVar23 = true;
            if (iVar6 == iVar5) goto LAB_100cc712d;
          }
          local_50 = local_50 + 8;
          local_40 = 1;
        } while (local_50 != local_48);
        bVar23 = false;
      }
LAB_100cc712d:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc714f;
        }
        QListData::dispose(local_58);
      }
LAB_100cc714f:
      if (!bVar23) break;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  CVmClusteredDevice::setStackIndex(uVar20);
  plVar19 = *(long **)(param_4 + 0x148);
  puVar3 = (uint *)*plVar19;
  uVar14 = puVar3[2];
  if (puVar3[3] == uVar14) goto LAB_100cc749b;
  if (1 < *puVar3) {
    pDVar12 = (Data *)QListData::detach((int)plVar19);
    lVar10 = *plVar19;
    lVar16 = (long)*(int *)(lVar10 + 8);
    if ((puVar3 + (long)(int)uVar14 * 2 != (uint *)(lVar10 + lVar16 * 8)) &&
       (lVar15 = *(int *)(lVar10 + 0xc) - lVar16, lVar15 != 0 && lVar16 <= *(int *)(lVar10 + 0xc)))
    {
      _memcpy((void *)(lVar10 + 0x10 + lVar16 * 8),puVar3 + (long)(int)uVar14 * 2 + 4,lVar15 * 8);
    }
    if (*(int *)pDVar12 != -1) {
      if (*(int *)pDVar12 != 0) {
        LOCK();
        *(int *)pDVar12 = *(int *)pDVar12 + -1;
        local_31 = *(int *)pDVar12 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc73d2;
      }
      QListData::dispose(pDVar12);
    }
  }
LAB_100cc73d2:
  plVar19 = *(long **)(*plVar19 + 0x10 + (long)*(int *)(*plVar19 + 8) * 8);
  (**(code **)(*plVar19 + 0xb8))(&local_1d8,plVar19);
  CVmDevice::setSystemName(QVar11);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_31 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc743c;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_100cc743c:
  (**(code **)(*plVar19 + 0xa8))(&local_1e0,plVar19);
  CVmDevice::setUserFriendlyName(QVar11);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_31 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc749b;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_100cc749b:
  CVmDevice::setEnabled(uVar20);
  CVmDevice::setConnected(uVar20);
  CVmClusteredDevice::setPassthrough(uVar20);
  pCVar13 = (CVmOpticalDisk *)CVmConfiguration::getVmHardwareList();
  CVmHardware::addOpticalDisk(pCVar13);
  return;
}

