
undefined1 FUN_1003e9280(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  QStringList *pQVar14;
  size_t sVar15;
  QVariant *pQVar16;
  long lVar17;
  ulong uVar18;
  bool bVar19;
  Data_conflict local_580;
  undefined4 local_578;
  QArrayData *local_570;
  QArrayData *local_568;
  QString local_560;
  QArrayData *local_558;
  QArrayData *local_550;
  QString local_548;
  QArrayData *local_540;
  QVariant local_538;
  Data *local_528;
  Data *local_520;
  Data *local_518;
  undefined4 local_510;
  QString local_508;
  Data *local_500;
  QArrayData *local_4f8;
  QVariant local_4f0;
  QArrayData *local_4e0;
  QArrayData *local_4d8;
  QString local_4d0;
  QVariant local_4c8;
  QArrayData *local_4b8;
  QArrayData *local_4b0;
  QString local_4a8;
  QArrayData *local_4a0;
  QArrayData *local_498;
  CVmHddPartition local_490 [176];
  Data *local_3e0;
  Data *local_3d8;
  Data *local_3d0;
  uint local_3c8;
  Data_conflict local_3c0;
  undefined4 local_3b8;
  QArrayData *local_3b0;
  QArrayData *local_3a8;
  QString local_3a0;
  QArrayData *local_398;
  QArrayData *local_390;
  QString local_388;
  QArrayData *local_380;
  QVariant local_378;
  Data *local_368;
  Data *local_360;
  Data *local_358;
  undefined4 local_350;
  QString local_348;
  Data *local_340;
  QArrayData *local_338;
  CVmHardDisk local_330 [240];
  Data *local_240;
  QString local_1d8;
  Data *local_1d0;
  Data *local_1c8;
  Data *local_1c0;
  uint local_1b8;
  int local_1ac;
  QVariant local_1a8;
  QString local_198;
  ulong local_190;
  QVariant local_188;
  QString local_178;
  undefined1 local_170 [40];
  int *local_148 [4];
  QVariant local_128 [2];
  undefined1 local_110 [40];
  int *local_e8 [4];
  QVariant local_c8 [2];
  QString local_b0;
  QVariant local_a8;
  QString local_98;
  QString local_90;
  QVariant local_88;
  QString local_78;
  QArrayData *local_70;
  int local_64;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar5 = QVariant::toUInt((bool *)(param_1 + 0x38));
  MappingHelpers::getParentObjectPath(&local_78);
  uVar9 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_90.field0_0x0 = local_78.field0_0x0;
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_31 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_70,0x1df17d1);
  QString::append(&local_90);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e9336;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003e9336:
  FUN_1003e1800(&local_88,uVar9,&local_90,0);
  if (DAT_102273f28 == 0) {
    DAT_102273f28 = FUN_1003fa4f0("PRL_MASS_STORAGE_INTERFACE_TYPE",0xffffffffffffffff,1);
  }
  uVar7 = DAT_102273f28;
  uVar6 = QVariant::userType();
  if (uVar7 == uVar6) {
    piVar10 = (int *)QVariant::constData();
    iVar8 = *piVar10;
  }
  else {
    cVar3 = QVariant::convert((int)&local_88,(void *)(ulong)uVar7);
    iVar8 = 0;
    if (cVar3 != '\0') {
      iVar8 = local_64;
    }
  }
  QVariant::~QVariant(&local_88);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e93e8;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1003e93e8:
  uVar9 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_b0.field0_0x0 = local_78.field0_0x0;
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_31 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x1df16d5);
  QString::append(&local_b0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e946c;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003e946c:
  FUN_1003e1800(&local_a8,uVar9,&local_b0,0);
  QVariant::toString();
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e94d9;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1003e94d9:
  if ((iVar5 == 3) && (iVar8 == 1)) {
    uVar9 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
    uVar7 = FUN_10011d6b0(uVar9);
    uVar18 = (ulong)uVar7;
    FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
    uVar9 = CVmConfiguration::getVmHardwareList();
    iVar8 = FUN_100117d40(uVar9,uVar7,6);
    if (iVar8 != -1) {
LAB_1003e9575:
      plVar11 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
      pcVar1 = *(code **)(*plVar11 + 0x70);
      local_178.field0_0x0 = local_78.field0_0x0;
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_58,0x1df17d1);
      QString::append(&local_178);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e9608;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1003e9608:
      local_190 = uVar18;
      QVariant::QVariant(&local_188,4,&local_190,0);
      (*pcVar1)(plVar11,param_1 + 0x28,&local_178,&local_188);
      QVariant::~QVariant(&local_188);
      if (*(int *)local_178.field0_0x0 != -1) {
        if (*(int *)local_178.field0_0x0 != 0) {
          LOCK();
          *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
          local_31 = *(int *)local_178.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e9695;
        }
        QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
      }
LAB_1003e9695:
      plVar11 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
      pcVar1 = *(code **)(*plVar11 + 0x70);
      local_198.field0_0x0 = local_78.field0_0x0;
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_50,0x1df17c5);
      QString::append(&local_198);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e9721;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1003e9721:
      local_1ac = iVar8;
      QVariant::QVariant(&local_1a8,3,&local_1ac,0);
      (*pcVar1)(plVar11,param_1 + 0x28,&local_198,&local_1a8);
      QVariant::~QVariant(&local_1a8);
      if (*(int *)local_198.field0_0x0 != -1) {
        if (*(int *)local_198.field0_0x0 != 0) {
          LOCK();
          *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
          local_31 = *(int *)local_198.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e979e;
        }
        QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
      }
      goto LAB_1003e979e;
    }
    if (uVar7 == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      local_110._32_8_ = QString::fromAscii_helper("1onRejectedMessageClosed()",0x1a);
      local_110._24_4_ = 0x80000000;
      local_110._16_8_ = (QMetaObject *)0x0;
      FUN_100a1c600(local_e8,uVar9,local_110 + 0x20,local_110 + 0x10);
      QVariant::~QVariant((QVariant *)(local_110 + 0x10));
      if (*(int *)local_110._32_8_ != -1) {
        if (*(int *)local_110._32_8_ != 0) {
          LOCK();
          *(int *)local_110._32_8_ = *(int *)local_110._32_8_ + -1;
          local_31 = *(int *)local_110._32_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e9d2c;
        }
        QArrayData::deallocate((QArrayData *)local_110._32_8_,2,8);
      }
LAB_1003e9d2c:
      iVar5 = CMessageManager::instance();
      pQVar14 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
      local_110._8_8_ = PTR_shared_null_1021e15e8;
      local_110._0_8_ = PTR_shared_null_1021e15e8;
      CMessageManager::showMessageBox
                (iVar5,(QWidget *)0x80015164,pQVar14,(QStringList *)(local_110 + 8),
                 (CSlotInfo *)local_110,SUB81(local_e8,0));
      FUN_100039a80(local_110);
      FUN_100039a80(local_110 + 8);
      QVariant::~QVariant(local_c8);
      if (local_e8[0] != (int *)0x0) {
        LOCK();
        *local_e8[0] = *local_e8[0] + -1;
        iVar5 = *local_e8[0];
        UNLOCK();
joined_r0x0001003e9dc5:
        local_31 = iVar5 != 0;
        if ((!(bool)local_31) && (local_e8[0] != (int *)0x0)) {
          operator_delete(local_e8[0]);
        }
      }
    }
    else {
      FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
      uVar9 = CVmConfiguration::getVmHardwareList();
      uVar18 = 0;
      iVar8 = FUN_100117d40(uVar9,0,6);
      if (iVar8 != -1) goto LAB_1003e9575;
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      local_170._32_8_ = QString::fromAscii_helper("1onRejectedMessageClosed()",0x1a);
      local_170._24_4_ = 0x80000000;
      local_170._16_8_ = (QMetaObject *)0x0;
      FUN_100a1c600(local_148,uVar9,local_170 + 0x20,local_170 + 0x10);
      QVariant::~QVariant((QVariant *)(local_170 + 0x10));
      if (*(int *)local_170._32_8_ != -1) {
        if (*(int *)local_170._32_8_ != 0) {
          LOCK();
          *(int *)local_170._32_8_ = *(int *)local_170._32_8_ + -1;
          local_31 = *(int *)local_170._32_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003ea296;
        }
        QArrayData::deallocate((QArrayData *)local_170._32_8_,2,8);
      }
LAB_1003ea296:
      iVar5 = CMessageManager::instance();
      pQVar14 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
      local_170._8_8_ = PTR_shared_null_1021e15e8;
      local_170._0_8_ = PTR_shared_null_1021e15e8;
      CMessageManager::showMessageBox
                (iVar5,(QWidget *)0x80015163,pQVar14,(QStringList *)(local_170 + 8),
                 (CSlotInfo *)local_170,SUB81(local_148,0));
      FUN_100039a80(local_170);
      FUN_100039a80(local_170 + 8);
      QVariant::~QVariant(local_128);
      if (local_148[0] != (int *)0x0) {
        LOCK();
        *local_148[0] = *local_148[0] + -1;
        iVar5 = *local_148[0];
        UNLOCK();
        local_e8[0] = local_148[0];
        goto joined_r0x0001003e9dc5;
      }
    }
    uVar4 = 1;
  }
  else {
LAB_1003e979e:
    if ((iVar5 == 0) || (iVar5 == 3)) {
      lVar12 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
      lVar13 = 0;
      if (lVar12 != 0) {
        lVar13 = FUN_10015a340(lVar12);
        plVar11 = *(long **)(lVar13 + 0x150);
        local_1d0 = (Data *)*plVar11;
        if (*(int *)local_1d0 != -1) {
          if (*(int *)local_1d0 == 0) {
            QListData::detach((int)&local_1d0);
            lVar12 = (long)*(int *)(local_1d0 + 8);
            lVar13 = *plVar11;
            if (((Data *)(lVar13 + (long)*(int *)(lVar13 + 8) * 8) != local_1d0 + lVar12 * 8) &&
               (lVar17 = *(int *)(local_1d0 + 0xc) - lVar12,
               lVar17 != 0 && lVar12 <= *(int *)(local_1d0 + 0xc))) {
              _memcpy(local_1d0 + lVar12 * 8 + 0x10,
                      (void *)(lVar13 + 0x10 + (long)*(int *)(lVar13 + 8) * 8),lVar17 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_1d0 = *(int *)local_1d0 + 1;
            local_31 = *(int *)local_1d0 != 0;
            UNLOCK();
          }
        }
        local_1c8 = local_1d0 + (long)*(int *)(local_1d0 + 8) * 8 + 0x10;
        local_1c0 = local_1d0 + (long)*(int *)(local_1d0 + 0xc) * 8 + 0x10;
        local_1b8 = 1;
        lVar13 = 0;
        if (*(int *)(local_1d0 + 8) != *(int *)(local_1d0 + 0xc)) {
          lVar12 = 0;
          do {
            if (local_1b8 == 0) {
LAB_1003e9a9a:
              local_1c8 = local_1c8 + 8;
              local_1b8 = 1;
              lVar13 = lVar12;
            }
            else {
              lVar13 = *(long *)local_1c8;
              CHwHardDisk::getDeviceId();
              cVar3 = operator==(&local_1d8,&local_98);
              if (*(int *)local_1d8.field0_0x0 != -1) {
                if (*(int *)local_1d8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
                  local_31 = *(int *)local_1d8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003e9a59;
                }
                QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
              }
LAB_1003e9a59:
              if (cVar3 == '\0') goto LAB_1003e9a9a;
              local_1c8 = local_1c8 + 8;
              uVar7 = local_1b8 ^ 1;
              bVar19 = local_1b8 == 1;
              local_1b8 = uVar7;
              if (bVar19) break;
            }
            lVar12 = lVar13;
          } while (local_1c8 != local_1c0);
        }
        if (*(int *)local_1d0 != -1) {
          if (*(int *)local_1d0 != 0) {
            LOCK();
            *(int *)local_1d0 = *(int *)local_1d0 + -1;
            local_31 = *(int *)local_1d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e9af7;
          }
          QListData::dispose(local_1d0);
        }
      }
LAB_1003e9af7:
      CVmHardDisk::CVmHardDisk(local_330);
      if ((lVar13 != 0) && (cVar3 = FUN_100114200(lVar13,local_330,0,0), cVar3 != '\0')) {
        FUN_10011da10(&local_338,lVar13);
        if (*(int *)(local_240 + 0xc) != *(int *)(local_240 + 8)) {
          uVar9 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
          local_348.field0_0x0 = local_78.field0_0x0;
          if (1 < *(int *)local_78.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_48,0x1df1f92);
          QString::append(&local_348);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003e9bcd;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_1003e9bcd:
          FUN_1003e17d0(&local_340,uVar9,&local_348);
          if (*(int *)local_348.field0_0x0 != -1) {
            if (*(int *)local_348.field0_0x0 != 0) {
              LOCK();
              *(int *)local_348.field0_0x0 = *(int *)local_348.field0_0x0 + -1;
              local_31 = *(int *)local_348.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003e9c19;
            }
            QArrayData::deallocate((QArrayData *)local_348.field0_0x0,2,8);
          }
LAB_1003e9c19:
          local_368 = local_340;
          if (*(int *)local_340 != -1) {
            if (*(int *)local_340 == 0) {
              QListData::detach((int)&local_368);
              lVar13 = (long)*(int *)(local_368 + 8);
              if ((local_340 + (long)*(int *)(local_340 + 8) * 8 != local_368 + lVar13 * 8) &&
                 (lVar12 = *(int *)(local_368 + 0xc) - lVar13,
                 lVar12 != 0 && lVar13 <= *(int *)(local_368 + 0xc))) {
                _memcpy(local_368 + lVar13 * 8 + 0x10,
                        local_340 + (long)*(int *)(local_340 + 8) * 8 + 0x10,lVar12 * 8);
              }
            }
            else {
              LOCK();
              *(int *)local_340 = *(int *)local_340 + 1;
              local_31 = *(int *)local_340 != 0;
              UNLOCK();
            }
          }
          puVar2 = PTR_s_VmConfig_1021f1e00;
          local_360 = local_368 + (long)*(int *)(local_368 + 8) * 8 + 0x10;
          local_358 = local_368 + (long)*(int *)(local_368 + 0xc) * 8 + 0x10;
          lVar13 = param_1 + 0x28;
          if (*(int *)(local_368 + 8) != *(int *)(local_368 + 0xc)) {
            do {
              local_350 = 1;
              iVar5 = *(int *)local_360;
              plVar11 = (long *)FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x18));
              pcVar1 = *(code **)(*plVar11 + 0x60);
              iVar8 = -1;
              if (puVar2 != (undefined *)0x0) {
                sVar15 = _strlen(puVar2);
                iVar8 = (int)sVar15;
              }
              local_380 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
              local_398 = (QArrayData *)QString::fromAscii_helper(".Partition[%1].SystemName",0x19);
              QString::arg(&local_390,&local_398,(long)iVar5,0,10,0x20);
              local_388.field0_0x0 = local_78.field0_0x0;
              if (1 < *(int *)local_78.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
                local_31 = *(int *)local_78.field0_0x0 != 0;
                UNLOCK();
              }
              QString::append(&local_388);
              (*pcVar1)(&local_378,plVar11,&local_380);
              uVar7 = local_378.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff;
              QVariant::~QVariant(&local_378);
              if (*(int *)local_388.field0_0x0 != -1) {
                if (*(int *)local_388.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_388.field0_0x0 = *(int *)local_388.field0_0x0 + -1;
                  local_31 = *(int *)local_388.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003ea4d6;
                }
                QArrayData::deallocate((QArrayData *)local_388.field0_0x0,2,8);
              }
LAB_1003ea4d6:
              if (*(int *)local_390 != -1) {
                if (*(int *)local_390 != 0) {
                  LOCK();
                  *(int *)local_390 = *(int *)local_390 + -1;
                  local_31 = *(int *)local_390 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003ea50c;
                }
                QArrayData::deallocate(local_390,2,8);
              }
LAB_1003ea50c:
              if (*(int *)local_398 != -1) {
                if (*(int *)local_398 != 0) {
                  LOCK();
                  *(int *)local_398 = *(int *)local_398 + -1;
                  local_31 = *(int *)local_398 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003ea542;
                }
                QArrayData::deallocate(local_398,2,8);
              }
LAB_1003ea542:
              if (*(int *)local_380 != -1) {
                if (*(int *)local_380 != 0) {
                  LOCK();
                  *(int *)local_380 = *(int *)local_380 + -1;
                  local_31 = *(int *)local_380 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003ea578;
                }
                QArrayData::deallocate(local_380,2,8);
              }
LAB_1003ea578:
              if (uVar7 != 0) {
                uVar9 = FUN_1003ae480(param_1 + 0x20,lVar13);
                local_3b0 = (QArrayData *)QString::fromAscii_helper(".Partition[%1]",0xe);
                QString::arg(&local_3a8,&local_3b0,(long)iVar5,0,10,0x20);
                local_3a0.field0_0x0 = local_78.field0_0x0;
                if (1 < *(int *)local_78.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
                  local_31 = *(int *)local_78.field0_0x0 != 0;
                  UNLOCK();
                }
                QString::append(&local_3a0);
                pQVar16 = (QVariant *)FUN_1002edf40(uVar9,&local_3a0);
                local_3b8 = 0x80000000;
                local_3c0.field7 = 0;
                QVariant::operator=(pQVar16,(QVariant *)&local_3c0);
                QVariant::~QVariant((QVariant *)&local_3c0);
                if (*(int *)local_3a0.field0_0x0 != -1) {
                  if (*(int *)local_3a0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_3a0.field0_0x0 = *(int *)local_3a0.field0_0x0 + -1;
                    local_31 = *(int *)local_3a0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ea674;
                  }
                  QArrayData::deallocate((QArrayData *)local_3a0.field0_0x0,2,8);
                }
LAB_1003ea674:
                if (*(int *)local_3a8 != -1) {
                  if (*(int *)local_3a8 != 0) {
                    LOCK();
                    *(int *)local_3a8 = *(int *)local_3a8 + -1;
                    local_31 = *(int *)local_3a8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ea6aa;
                  }
                  QArrayData::deallocate(local_3a8,2,8);
                }
LAB_1003ea6aa:
                if (*(int *)local_3b0 != -1) {
                  if (*(int *)local_3b0 != 0) {
                    LOCK();
                    *(int *)local_3b0 = *(int *)local_3b0 + -1;
                    local_31 = *(int *)local_3b0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ea6e0;
                  }
                  QArrayData::deallocate(local_3b0,2,8);
                }
              }
LAB_1003ea6e0:
              local_360 = local_360 + 8;
            } while (local_360 != local_358);
          }
          local_350 = 1;
          if (*(int *)local_368 != -1) {
            if (*(int *)local_368 != 0) {
              LOCK();
              *(int *)local_368 = *(int *)local_368 + -1;
              local_31 = *(int *)local_368 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ea735;
            }
            QListData::dispose(local_368);
          }
LAB_1003ea735:
          local_3e0 = local_240;
          if (*(int *)local_240 != -1) {
            if (*(int *)local_240 == 0) {
              QListData::detach((int)&local_3e0);
              lVar12 = (long)*(int *)(local_3e0 + 8);
              if ((local_240 + (long)*(int *)(local_240 + 8) * 8 != local_3e0 + lVar12 * 8) &&
                 (lVar17 = *(int *)(local_3e0 + 0xc) - lVar12,
                 lVar17 != 0 && lVar12 <= *(int *)(local_3e0 + 0xc))) {
                _memcpy(local_3e0 + lVar12 * 8 + 0x10,
                        local_240 + (long)*(int *)(local_240 + 8) * 8 + 0x10,lVar17 * 8);
              }
            }
            else {
              LOCK();
              *(int *)local_240 = *(int *)local_240 + 1;
              local_31 = *(int *)local_240 != 0;
              UNLOCK();
            }
          }
          local_3d8 = local_3e0 + (long)*(int *)(local_3e0 + 8) * 8 + 0x10;
          local_3d0 = local_3e0 + (long)*(int *)(local_3e0 + 0xc) * 8 + 0x10;
          local_3c8 = 1;
          if (*(int *)(local_3e0 + 8) != *(int *)(local_3e0 + 0xc)) {
            do {
              CVmHddPartition::CVmHddPartition(local_490,*(CVmHddPartition **)local_3d8);
              if (local_3c8 != 0) {
                local_4a0 = (QArrayData *)QString::fromAscii_helper("PARTID%1",8);
                lVar12 = (long)DAT_1023122c0;
                DAT_1023122c0 = DAT_1023122c0 + 1;
                QString::arg(&local_498,&local_4a0,lVar12,0,10,0x20);
                if (*(int *)local_4a0 != -1) {
                  if (*(int *)local_4a0 != 0) {
                    LOCK();
                    *(int *)local_4a0 = *(int *)local_4a0 + -1;
                    local_31 = *(int *)local_4a0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ea897;
                  }
                  QArrayData::deallocate(local_4a0,2,8);
                }
LAB_1003ea897:
                uVar9 = FUN_1003ae480(param_1 + 0x20,lVar13);
                local_4b8 = (QArrayData *)QString::fromAscii_helper(".Partition[%1]",0xe);
                QString::arg(&local_4b0,&local_4b8,&local_498,0,0x20);
                local_4a8.field0_0x0 = local_78.field0_0x0;
                if (1 < *(int *)local_78.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
                  local_31 = *(int *)local_78.field0_0x0 != 0;
                  UNLOCK();
                }
                QString::append(&local_4a8);
                pQVar16 = (QVariant *)FUN_1002edf40(uVar9,&local_4a8);
                QVariant::QVariant(&local_4c8,10,&local_498,0);
                QVariant::operator=(pQVar16,&local_4c8);
                QVariant::~QVariant(&local_4c8);
                if (*(int *)local_4a8.field0_0x0 != -1) {
                  if (*(int *)local_4a8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_4a8.field0_0x0 = *(int *)local_4a8.field0_0x0 + -1;
                    local_31 = *(int *)local_4a8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ea97f;
                  }
                  QArrayData::deallocate((QArrayData *)local_4a8.field0_0x0,2,8);
                }
LAB_1003ea97f:
                if (*(int *)local_4b0 != -1) {
                  if (*(int *)local_4b0 != 0) {
                    LOCK();
                    *(int *)local_4b0 = *(int *)local_4b0 + -1;
                    local_31 = *(int *)local_4b0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ea9b5;
                  }
                  QArrayData::deallocate(local_4b0,2,8);
                }
LAB_1003ea9b5:
                if (*(int *)local_4b8 != -1) {
                  if (*(int *)local_4b8 != 0) {
                    LOCK();
                    *(int *)local_4b8 = *(int *)local_4b8 + -1;
                    local_31 = *(int *)local_4b8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003ea9ee;
                  }
                  QArrayData::deallocate(local_4b8,2,8);
                }
LAB_1003ea9ee:
                plVar11 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
                pcVar1 = *(code **)(*plVar11 + 0x70);
                local_4e0 = (QArrayData *)
                            QString::fromAscii_helper(".Partition[%1].SystemName",0x19);
                QString::arg(&local_4d8,&local_4e0,&local_498,0,0x20);
                local_4d0.field0_0x0 = local_78.field0_0x0;
                if (1 < *(int *)local_78.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
                  local_31 = *(int *)local_78.field0_0x0 != 0;
                  UNLOCK();
                }
                QString::append(&local_4d0);
                CVmHddPartition::getSystemName();
                QVariant::QVariant(&local_4f0,10,&local_4f8,0);
                (*pcVar1)(plVar11,lVar13,&local_4d0,&local_4f0);
                QVariant::~QVariant(&local_4f0);
                if (*(int *)local_4f8 != -1) {
                  if (*(int *)local_4f8 != 0) {
                    LOCK();
                    *(int *)local_4f8 = *(int *)local_4f8 + -1;
                    local_31 = *(int *)local_4f8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003eaaef;
                  }
                  QArrayData::deallocate(local_4f8,2,8);
                }
LAB_1003eaaef:
                if (*(int *)local_4d0.field0_0x0 != -1) {
                  if (*(int *)local_4d0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_4d0.field0_0x0 = *(int *)local_4d0.field0_0x0 + -1;
                    local_31 = *(int *)local_4d0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003eab25;
                  }
                  QArrayData::deallocate((QArrayData *)local_4d0.field0_0x0,2,8);
                }
LAB_1003eab25:
                if (*(int *)local_4d8 != -1) {
                  if (*(int *)local_4d8 != 0) {
                    LOCK();
                    *(int *)local_4d8 = *(int *)local_4d8 + -1;
                    local_31 = *(int *)local_4d8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003eab5b;
                  }
                  QArrayData::deallocate(local_4d8,2,8);
                }
LAB_1003eab5b:
                if (*(int *)local_4e0 != -1) {
                  if (*(int *)local_4e0 != 0) {
                    LOCK();
                    *(int *)local_4e0 = *(int *)local_4e0 + -1;
                    local_31 = *(int *)local_4e0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003eab91;
                  }
                  QArrayData::deallocate(local_4e0,2,8);
                }
LAB_1003eab91:
                if (*(int *)local_498 != -1) {
                  if (*(int *)local_498 != 0) {
                    LOCK();
                    *(int *)local_498 = *(int *)local_498 + -1;
                    local_31 = *(int *)local_498 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003eabc7;
                  }
                  QArrayData::deallocate(local_498,2,8);
                }
LAB_1003eabc7:
                local_3c8 = 0;
              }
              CVmHddPartition::~CVmHddPartition(local_490);
              local_3d8 = local_3d8 + 8;
              uVar7 = local_3c8 ^ 1;
              bVar19 = local_3c8 != 1;
              local_3c8 = uVar7;
            } while ((bVar19) && (local_3d8 != local_3d0));
          }
          if (*(int *)local_3e0 != -1) {
            if (*(int *)local_3e0 != 0) {
              LOCK();
              *(int *)local_3e0 = *(int *)local_3e0 + -1;
              local_31 = *(int *)local_3e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003eac44;
            }
            QListData::dispose(local_3e0);
          }
LAB_1003eac44:
          if (*(int *)local_340 != -1) {
            if (*(int *)local_340 != 0) {
              LOCK();
              *(int *)local_340 = *(int *)local_340 + -1;
              local_31 = *(int *)local_340 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003eac70;
            }
            QListData::dispose(local_340);
          }
        }
LAB_1003eac70:
        if (*(int *)local_338 != -1) {
          if (*(int *)local_338 != 0) {
            LOCK();
            *(int *)local_338 = *(int *)local_338 + -1;
            local_31 = *(int *)local_338 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003eaca6;
          }
          QArrayData::deallocate(local_338,2,8);
        }
      }
LAB_1003eaca6:
      CVmHardDisk::~CVmHardDisk(local_330);
    }
    else {
      uVar9 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
      local_508.field0_0x0 = local_78.field0_0x0;
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1df1f92);
      QString::append(&local_508);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e98d0;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1003e98d0:
      FUN_1003e17d0(&local_500,uVar9,&local_508);
      if (*(int *)local_508.field0_0x0 != -1) {
        if (*(int *)local_508.field0_0x0 != 0) {
          LOCK();
          *(int *)local_508.field0_0x0 = *(int *)local_508.field0_0x0 + -1;
          local_31 = *(int *)local_508.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e991c;
        }
        QArrayData::deallocate((QArrayData *)local_508.field0_0x0,2,8);
      }
LAB_1003e991c:
      local_528 = local_500;
      if (*(int *)local_500 != -1) {
        if (*(int *)local_500 == 0) {
          QListData::detach((int)&local_528);
          lVar13 = (long)*(int *)(local_528 + 8);
          if ((local_500 + (long)*(int *)(local_500 + 8) * 8 != local_528 + lVar13 * 8) &&
             (lVar12 = *(int *)(local_528 + 0xc) - lVar13,
             lVar12 != 0 && lVar13 <= *(int *)(local_528 + 0xc))) {
            _memcpy(local_528 + lVar13 * 8 + 0x10,
                    local_500 + (long)*(int *)(local_500 + 8) * 8 + 0x10,lVar12 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_500 = *(int *)local_500 + 1;
          local_31 = *(int *)local_500 != 0;
          UNLOCK();
        }
      }
      puVar2 = PTR_s_VmConfig_1021f1e00;
      local_520 = local_528 + (long)*(int *)(local_528 + 8) * 8 + 0x10;
      local_518 = local_528 + (long)*(int *)(local_528 + 0xc) * 8 + 0x10;
      if (*(int *)(local_528 + 8) != *(int *)(local_528 + 0xc)) {
        do {
          local_510 = 1;
          iVar5 = *(int *)local_520;
          plVar11 = (long *)FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x18));
          pcVar1 = *(code **)(*plVar11 + 0x60);
          iVar8 = -1;
          if (puVar2 != (undefined *)0x0) {
            sVar15 = _strlen(puVar2);
            iVar8 = (int)sVar15;
          }
          local_540 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar8);
          local_558 = (QArrayData *)QString::fromAscii_helper(".Partition[%1].SystemName",0x19);
          QString::arg(&local_550,&local_558,(long)iVar5,0,10,0x20);
          local_548.field0_0x0 = local_78.field0_0x0;
          if (1 < *(int *)local_78.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_548);
          (*pcVar1)(&local_538,plVar11,&local_540);
          uVar7 = local_538.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff;
          QVariant::~QVariant(&local_538);
          if (*(int *)local_548.field0_0x0 != -1) {
            if (*(int *)local_548.field0_0x0 != 0) {
              LOCK();
              *(int *)local_548.field0_0x0 = *(int *)local_548.field0_0x0 + -1;
              local_31 = *(int *)local_548.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003e9f67;
            }
            QArrayData::deallocate((QArrayData *)local_548.field0_0x0,2,8);
          }
LAB_1003e9f67:
          if (*(int *)local_550 != -1) {
            if (*(int *)local_550 != 0) {
              LOCK();
              *(int *)local_550 = *(int *)local_550 + -1;
              local_31 = *(int *)local_550 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003e9f9d;
            }
            QArrayData::deallocate(local_550,2,8);
          }
LAB_1003e9f9d:
          if (*(int *)local_558 != -1) {
            if (*(int *)local_558 != 0) {
              LOCK();
              *(int *)local_558 = *(int *)local_558 + -1;
              local_31 = *(int *)local_558 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003e9fd3;
            }
            QArrayData::deallocate(local_558,2,8);
          }
LAB_1003e9fd3:
          if (*(int *)local_540 != -1) {
            if (*(int *)local_540 != 0) {
              LOCK();
              *(int *)local_540 = *(int *)local_540 + -1;
              local_31 = *(int *)local_540 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ea009;
            }
            QArrayData::deallocate(local_540,2,8);
          }
LAB_1003ea009:
          if (uVar7 != 0) {
            uVar9 = FUN_1003ae480(param_1 + 0x20,param_1 + 0x28);
            local_570 = (QArrayData *)QString::fromAscii_helper(".Partition[%1]",0xe);
            QString::arg(&local_568,&local_570,(long)iVar5,0,10,0x20);
            local_560.field0_0x0 = local_78.field0_0x0;
            if (1 < *(int *)local_78.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
            }
            QString::append(&local_560);
            pQVar16 = (QVariant *)FUN_1002edf40(uVar9,&local_560);
            local_578 = 0x80000000;
            local_580.field7 = 0;
            QVariant::operator=(pQVar16,(QVariant *)&local_580);
            QVariant::~QVariant((QVariant *)&local_580);
            if (*(int *)local_560.field0_0x0 != -1) {
              if (*(int *)local_560.field0_0x0 != 0) {
                LOCK();
                *(int *)local_560.field0_0x0 = *(int *)local_560.field0_0x0 + -1;
                local_31 = *(int *)local_560.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003ea105;
              }
              QArrayData::deallocate((QArrayData *)local_560.field0_0x0,2,8);
            }
LAB_1003ea105:
            if (*(int *)local_568 != -1) {
              if (*(int *)local_568 != 0) {
                LOCK();
                *(int *)local_568 = *(int *)local_568 + -1;
                local_31 = *(int *)local_568 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003ea13b;
              }
              QArrayData::deallocate(local_568,2,8);
            }
LAB_1003ea13b:
            if (*(int *)local_570 != -1) {
              if (*(int *)local_570 != 0) {
                LOCK();
                *(int *)local_570 = *(int *)local_570 + -1;
                local_31 = *(int *)local_570 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003ea171;
              }
              QArrayData::deallocate(local_570,2,8);
            }
          }
LAB_1003ea171:
          local_520 = local_520 + 8;
        } while (local_520 != local_518);
      }
      local_510 = 1;
      if (*(int *)local_528 != -1) {
        if (*(int *)local_528 != 0) {
          LOCK();
          *(int *)local_528 = *(int *)local_528 + -1;
          local_31 = *(int *)local_528 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003ea1c6;
        }
        QListData::dispose(local_528);
      }
LAB_1003ea1c6:
      if (*(int *)local_500 != -1) {
        if (*(int *)local_500 != 0) {
          LOCK();
          *(int *)local_500 = *(int *)local_500 + -1;
          local_31 = *(int *)local_500 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003eacb2;
        }
        QListData::dispose(local_500);
      }
    }
LAB_1003eacb2:
    uVar4 = FUN_1003ed020(param_1);
  }
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003eacf6;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1003eacf6:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_78.field0_0x0 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
  return uVar4;
}

