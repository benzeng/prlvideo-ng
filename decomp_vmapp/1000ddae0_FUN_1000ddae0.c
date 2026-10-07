
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ddae0(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  byte bVar1;
  char cVar2;
  size_t sVar3;
  void *pvVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  QString QVar10;
  long lVar11;
  void *pvVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  QArrayData *pQVar21;
  ulong uVar22;
  ulong uVar23;
  string *psVar24;
  char cVar25;
  ushort uVar26;
  string *psVar27;
  undefined1 local_600 [8];
  void *local_5f8;
  string *local_5f0;
  string *local_5e8;
  undefined1 local_5d8 [8];
  void *local_5d0;
  string *local_5c8;
  string *local_5c0;
  undefined8 local_5b0;
  void *local_5a8;
  string *local_5a0;
  string *local_598;
  long local_588;
  void *local_580;
  string *local_578;
  string *local_570;
  long local_560;
  void *local_558;
  string *local_550;
  string *local_548;
  void *local_538;
  void *local_530;
  long local_520;
  void *local_518;
  string *local_510;
  string *local_508;
  undefined1 local_4f8 [8];
  void *local_4f0;
  string *local_4e8;
  string *local_4e0;
  long local_4d0;
  void *local_4c8;
  string *local_4c0;
  string *local_4b8;
  undefined1 local_4a8 [8];
  void *local_4a0;
  string *local_498;
  string *local_490;
  long local_480;
  void *local_478;
  string *local_470;
  string *local_468;
  QArrayData *local_458;
  string local_450 [24];
  QArrayData *local_438;
  QArrayData *local_430;
  long local_428;
  void *local_420;
  string *local_418;
  string *local_410;
  undefined8 local_400;
  void *local_3f8;
  string *local_3f0;
  string *local_3e8;
  QArrayData *local_3d8;
  QString local_3d0;
  long local_3c8;
  QString local_3c0;
  undefined8 local_3b8;
  void *local_3b0;
  string *local_3a8;
  string *local_3a0;
  undefined8 local_390;
  void *local_388;
  string *local_380;
  string *local_378;
  long local_368;
  void *pvStack_360;
  string *local_358;
  string *psStack_350;
  undefined8 local_348;
  void *local_338;
  undefined8 local_330;
  uint local_328;
  undefined4 uStack_324;
  int local_320;
  QArrayData *local_318;
  QArrayData *local_310;
  QString local_308;
  QString local_300;
  QArrayData *local_2f8;
  string local_2f0 [24];
  QArrayData *local_2d8;
  undefined8 local_2d0;
  QString local_2c8;
  QDateTime local_2c0 [8];
  QString local_2b8;
  string local_2b0 [24];
  string local_298 [24];
  size_t local_280;
  string local_278 [24];
  string local_260 [24];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  QArrayData *local_228;
  string local_220 [24];
  string local_208 [24];
  undefined4 local_1f0 [2];
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  char *local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  char local_198 [64];
  char local_158 [64];
  char local_118 [64];
  char *local_d8;
  undefined8 local_d0;
  char local_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  char local_78 [19];
  undefined1 local_65;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  long local_38;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar15;
  QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
  CVmIdentification::getSourceVmUuid();
  if (*(int *)(local_300.field0_0x0 + 4) == 0) {
    CVmIdentification::getVmUuid();
    QString::operator=(&local_300,&local_308);
    if (*(int *)local_308.field0_0x0 != -1) {
      if (*(int *)local_308.field0_0x0 != 0) {
        LOCK();
        *(int *)local_308.field0_0x0 = *(int *)local_308.field0_0x0 + -1;
        UNLOCK();
        local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_308.field0_0x0 != 0);
        if (*(int *)local_308.field0_0x0 != 0) goto LAB_1000ddbb4;
      }
      QArrayData::deallocate((QArrayData *)local_308.field0_0x0,2,8);
    }
LAB_1000ddbb4:
    local_310 = (QArrayData *)local_300.field0_0x0;
    if (1 < *(int *)local_300.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_300.field0_0x0 = *(int *)local_300.field0_0x0 + 1;
      UNLOCK();
      local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_300.field0_0x0 != 0);
    }
    CVmIdentification::setSourceVmUuid(QVar10);
    if (*(int *)local_310 != -1) {
      if (*(int *)local_310 != 0) {
        LOCK();
        *(int *)local_310 = *(int *)local_310 + -1;
        UNLOCK();
        local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_310 != 0);
        if (*(int *)local_310 != 0) goto LAB_1000ddc21;
      }
      QArrayData::deallocate(local_310,2,8);
    }
  }
LAB_1000ddc21:
  QString::toUtf8();
  FUN_1008e3970("","vm",0,"[Bios] Generating SMBios for %s");
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      UNLOCK();
      local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_318 != 0);
      if (*(int *)local_318 != 0) goto LAB_1000ddc99;
    }
    QArrayData::deallocate(local_318,1,8);
  }
LAB_1000ddc99:
  lVar11 = FUN_1000dcd50(4);
  sVar3 = *(size_t *)(lVar11 + 8);
  pvVar12 = _calloc(1,sVar3);
  if (pvVar12 != (void *)0x0) {
    local_328 = 0;
    uStack_324 = 0;
    local_320 = 0;
    local_358 = (string *)0x0;
    psStack_350 = (string *)0x0;
    local_368 = 0;
    pvStack_360 = (void *)0x0;
    local_348 = 0;
    local_338 = pvVar12;
    local_330 = param_1;
    FUN_1000e1250(&local_390,&local_338,&DAT_100bfbed0,
                  &PTR_s_Parallels_Software_International_100bfbef0);
    pvStack_360 = local_388;
    local_368 = local_390;
    FUN_1000e1770(&local_358,local_380,local_378);
    psVar27 = local_380;
    if (local_380 != (string *)0x0) {
      while (local_378 != psVar27) {
        local_378 = local_378 + -0x18;
        std::string::~string(local_378);
      }
      operator_delete(local_380);
    }
    if ((param_3 & 0x40) != 0) {
      *(byte *)((long)pvStack_360 + 0x13) = *(byte *)((long)pvStack_360 + 0x13) | 8;
    }
    if ((param_3 & 8) != 0) {
      *(byte *)((long)pvStack_360 + 0x12) = *(byte *)((long)pvStack_360 + 0x12) | 1;
    }
    QDateTime::QDateTime(local_2c0);
    QDateTime::setTime_t((uint)local_2c0);
    local_2d0 = QDateTime::date();
    local_2d8 = (QArrayData *)QString::fromAscii_helper("MM/dd/yyyy",10);
    QDate::toString(&local_2c8);
    if (*(int *)local_2d8 != -1) {
      if (*(int *)local_2d8 != 0) {
        LOCK();
        *(int *)local_2d8 = *(int *)local_2d8 + -1;
        UNLOCK();
        local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_2d8 != 0);
        if (*(int *)local_2d8 != 0) goto LAB_1000dde72;
      }
      QArrayData::deallocate(local_2d8,2,8);
    }
LAB_1000dde72:
    QString::toUtf8();
    pQVar21 = local_2f8 + *(long *)(local_2f8 + 0x10);
    _strlen((char *)pQVar21);
    std::string::__init((char *)local_2f0,(ulong)pQVar21);
    uVar22 = (ulong)*(byte *)((long)pvStack_360 + 8) - 1;
    uVar18 = ((long)psStack_350 - (long)local_358 >> 3) * -0x5555555555555555;
    if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    std::string::operator=(local_358 + uVar22 * 0x18,local_2f0);
    std::string::~string(local_2f0);
    if (*(int *)local_2f8 != -1) {
      if (*(int *)local_2f8 != 0) {
        LOCK();
        *(int *)local_2f8 = *(int *)local_2f8 + -1;
        UNLOCK();
        local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_2f8 != 0);
        if (*(int *)local_2f8 != 0) goto LAB_1000ddf4f;
      }
      QArrayData::deallocate(local_2f8,1,8);
    }
LAB_1000ddf4f:
    if (*(int *)local_2c8.field0_0x0 != -1) {
      if (*(int *)local_2c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2c8.field0_0x0 = *(int *)local_2c8.field0_0x0 + -1;
        UNLOCK();
        local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_2c8.field0_0x0 != 0);
        if (*(int *)local_2c8.field0_0x0 != 0) goto LAB_1000ddf8b;
      }
      QArrayData::deallocate((QArrayData *)local_2c8.field0_0x0,2,8);
    }
LAB_1000ddf8b:
    QDateTime::~QDateTime(local_2c0);
    pvVar4 = local_338;
    bVar1 = *(byte *)((long)pvStack_360 + 1);
    _memcpy(local_338,pvStack_360,(ulong)bVar1);
    local_338 = (void *)((ulong)bVar1 + (long)local_338);
    local_320 = local_320 + (uint)bVar1;
    psVar27 = local_358;
    if (local_358 != psStack_350) {
      do {
        if (((byte)*psVar27 & 1) == 0) {
          uVar18 = (ulong)((byte)*psVar27 >> 1);
          psVar24 = psVar27 + 1;
        }
        else {
          uVar18 = *(ulong *)(psVar27 + 8);
          psVar24 = *(string **)(psVar27 + 0x10);
        }
        uVar22 = uVar18 + 1 & 0xffffffff;
        _memcpy(local_338,psVar24,uVar22);
        local_338 = (void *)(uVar22 + (long)local_338);
        local_320 = local_320 + (int)(uVar18 + 1);
        psVar27 = psVar27 + 0x18;
      } while (psVar27 != psStack_350);
    }
    local_1f0[0]._0_1_ = 0;
    local_1f0[0]._1_3_ = 0;
    uVar19 = (psVar27 == local_358) + 1;
    _memcpy(local_338,local_1f0,(ulong)uVar19);
    local_338 = (void *)((long)local_338 + (ulong)uVar19);
    local_320 = local_320 + uVar19;
    uVar19 = (int)local_338 - (int)pvVar4;
    if (local_328 < uVar19) {
      local_328 = uVar19;
    }
    FUN_1000e1250(&local_3b8,&local_338,&DAT_100bfbf10,
                  &PTR_s_Parallels_Software_International_100bfbf30);
    pvStack_360 = local_3b0;
    local_368 = local_3b8;
    FUN_1000e1770(&local_358,local_3a8,local_3a0);
    psVar27 = local_3a8;
    if (local_3a8 != (string *)0x0) {
      while (local_3a0 != psVar27) {
        local_3a0 = local_3a0 + -0x18;
        std::string::~string(local_3a0);
      }
      operator_delete(local_3a8);
    }
    local_3c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    local_3c8 = DAT_1011c3698 + 0x110;
    iVar6 = FUN_1000b4970(&local_3c8);
    if (iVar6 != 0) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmCommonOptions();
      CVmCommonOptions::getSerialNumber();
      QString::operator=(&local_3c0,&local_3d0);
      if (*(int *)local_3d0.field0_0x0 != -1) {
        if (*(int *)local_3d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_3d0.field0_0x0 = *(int *)local_3d0.field0_0x0 + -1;
          local_1f0[0]._0_1_ = *(int *)local_3d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)(undefined1)local_1f0[0]) goto LAB_1000de1dc;
        }
        QArrayData::deallocate((QArrayData *)local_3d0.field0_0x0,2,8);
      }
LAB_1000de1dc:
      QString::toUtf8();
      pcVar13 = (char *)FUN_1007da5e0("devices.smbios.serial",
                                      local_3d8 + *(long *)(local_3d8 + 0x10));
      if (pcVar13 != (char *)0x0) {
        _strlen(pcVar13);
      }
      QString::fromUtf8_helper((char *)&local_2b8,(int)pcVar13);
      QString::operator=(&local_3c0,&local_2b8);
      if (*(int *)local_2b8.field0_0x0 != -1) {
        if (*(int *)local_2b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_2b8.field0_0x0 = *(int *)local_2b8.field0_0x0 + -1;
          local_1f0[0]._0_1_ = *(int *)local_2b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)(undefined1)local_1f0[0]) goto LAB_1000de27c;
        }
        QArrayData::deallocate((QArrayData *)local_2b8.field0_0x0,2,8);
      }
LAB_1000de27c:
      if (*(int *)local_3d8 != -1) {
        if (*(int *)local_3d8 != 0) {
          LOCK();
          *(int *)local_3d8 = *(int *)local_3d8 + -1;
          local_1f0[0]._0_1_ = *(int *)local_3d8 != 0;
          UNLOCK();
          if ((bool)(undefined1)local_1f0[0]) goto LAB_1000de2b8;
        }
        QArrayData::deallocate(local_3d8,1,8);
      }
    }
LAB_1000de2b8:
    uVar19 = *(uint *)(param_5 + 0x480);
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    FUN_1000e15b0(&local_300,&local_58);
    *(undefined8 *)((long)pvStack_360 + 0x10) = local_50;
    *(undefined8 *)((long)pvStack_360 + 8) = local_58;
    if (*(int *)(local_3c0.field0_0x0 + 4) == 0) {
      if ((uVar19 & 0xff00) != 0x700) {
        uVar18 = 0;
        std::string::assign((char *)&local_248);
        do {
          cVar25 = (char)&local_248;
          if (uVar18 != 0) {
            std::string::push_back(cVar25);
          }
          std::string::push_back(cVar25);
          std::string::push_back(cVar25);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 0x10);
        goto LAB_1000de3a6;
      }
      std::string::assign((char *)&local_248);
      uVar14 = _IOServiceMatching("IOPlatformExpertDevice");
      iVar6 = _IOServiceGetMatchingService
                        (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,uVar14);
      if (iVar6 != 0) {
        lVar15 = _IORegistryEntryCreateCFProperty
                           (iVar6,&cf_IOPlatformSerialNumber,
                            *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,0);
        if (lVar15 != 0) {
          lVar11 = _CFStringGetCStringPtr(lVar15,0);
          if (lVar11 != 0) {
            if (2 < DAT_1011b55f8) {
              FUN_1008e3970("","vm",3,"[UpdateSystemTable] Obtained Serial number: %s");
            }
            std::string::assign((char *)&local_248);
          }
          _CFRelease(lVar15);
        }
        _IOObjectRelease(iVar6);
      }
LAB_1000de488:
      std::string::__init((char *)local_278,0x1009f2e1c);
      uVar22 = (ulong)*(byte *)((long)pvStack_360 + 4) - 1;
      uVar18 = ((long)psStack_350 - (long)local_358 >> 3) * -0x5555555555555555;
      if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      std::string::operator=(local_358 + uVar22 * 0x18,local_278);
      std::string::~string(local_278);
      pcVar13 = (char *)FUN_1007da5e0("devices.mac_hw_model","");
      if (*pcVar13 == '\0') {
        _sprintf(local_78,"Parallels%d,1",0xc);
      }
      else {
        iVar6 = _strcmp(pcVar13,"default");
        if (iVar6 == 0) {
          builtin_strncpy(local_78,"Macmini2,1",0xb);
          local_280 = 0x13;
          iVar6 = _sysctlbyname("hw.model",local_78,&local_280,(void *)0x0,0);
          if ((((iVar6 == 0) && (iVar6 = _strncmp(local_78,"MacBook",7), iVar6 == 0)) &&
              (iVar6 = _strncmp(local_78,"MacBookPro",10), iVar6 != 0)) &&
             (iVar6 = _strncmp(local_78,"MacBookAir",10), iVar6 != 0)) {
            if (2 < DAT_1011b55f8) {
              FUN_1008e3970("","vm",3,"[UpdateSystemTable] Patching model: %s -> Macmini2,1");
            }
            builtin_strncpy(local_78,"Macmini2,1",0xb);
          }
          iVar6 = _strncmp(local_78,"Macmini5,2",10);
          if (iVar6 == 0) {
            if (2 < DAT_1011b55f8) {
              FUN_1008e3970("","vm",3,"[UpdateSystemTable] Patching model: %s -> Macmini5,1");
            }
            builtin_strncpy(local_78,"Macmini5,1",0xb);
          }
        }
        else {
          _strncpy(local_78,pcVar13,0x13);
        }
      }
      local_65 = 0;
      _strlen(local_78);
      std::string::__init((char *)local_298,(ulong)local_78);
      uVar22 = (ulong)*(byte *)((long)pvStack_360 + 5) - 1;
      uVar18 = ((long)psStack_350 - (long)local_358 >> 3) * -0x5555555555555555;
      if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      std::string::operator=(local_358 + uVar22 * 0x18,local_298);
      std::string::~string(local_298);
      std::string::__init((char *)local_2b0,0x1009fa7a8);
      uVar22 = (ulong)*(byte *)((long)pvStack_360 + 6) - 1;
      uVar18 = ((long)psStack_350 - (long)local_358 >> 3) * -0x5555555555555555;
      if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      std::string::operator=(local_358 + uVar22 * 0x18,local_2b0);
      std::string::~string(local_2b0);
    }
    else {
      QString::toUtf8();
      std::string::__init((char *)local_260,(ulong)(local_228 + *(long *)(local_228 + 0x10)));
      if (*(int *)local_228 != -1) {
        if (*(int *)local_228 != 0) {
          LOCK();
          *(int *)local_228 = *(int *)local_228 + -1;
          local_1f0[0]._0_1_ = *(int *)local_228 != 0;
          UNLOCK();
          if ((bool)(undefined1)local_1f0[0]) goto LAB_1000de380;
        }
        QArrayData::deallocate(local_228,1,8);
      }
LAB_1000de380:
      std::string::operator=((string *)&local_248,local_260);
      std::string::~string(local_260);
LAB_1000de3a6:
      if ((uVar19 & 0xff00) == 0x700) goto LAB_1000de488;
    }
    uVar22 = (ulong)*(byte *)((long)pvStack_360 + 7) - 1;
    uVar18 = ((long)psStack_350 - (long)local_358 >> 3) * -0x5555555555555555;
    if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    std::string::operator=(local_358 + uVar22 * 0x18,(string *)&local_248);
    std::string::~string((string *)&local_248);
    pvVar4 = local_338;
    bVar1 = *(byte *)((long)pvStack_360 + 1);
    _memcpy(local_338,pvStack_360,(ulong)bVar1);
    local_338 = (void *)((ulong)bVar1 + (long)local_338);
    local_320 = local_320 + (uint)bVar1;
    psVar27 = local_358;
    if (local_358 != psStack_350) {
      do {
        if (((byte)*psVar27 & 1) == 0) {
          uVar18 = (ulong)((byte)*psVar27 >> 1);
          psVar24 = psVar27 + 1;
        }
        else {
          uVar18 = *(ulong *)(psVar27 + 8);
          psVar24 = *(string **)(psVar27 + 0x10);
        }
        uVar22 = uVar18 + 1 & 0xffffffff;
        _memcpy(local_338,psVar24,uVar22);
        local_338 = (void *)(uVar22 + (long)local_338);
        local_320 = local_320 + (int)(uVar18 + 1);
        psVar27 = psVar27 + 0x18;
      } while (psVar27 != psStack_350);
    }
    local_1f0[0] = 0;
    uVar19 = (psVar27 == local_358) + 1;
    _memcpy(local_338,local_1f0,(ulong)uVar19);
    local_338 = (void *)((long)local_338 + (ulong)uVar19);
    local_320 = local_320 + uVar19;
    uVar19 = (int)local_338 - (int)pvVar4;
    if (local_328 < uVar19) {
      local_328 = uVar19;
    }
    FUN_1000e1250(&local_400,&local_338,&DAT_100bfbf70,
                  &PTR_s_Parallels_Software_International_100bfbf80);
    pvStack_360 = local_3f8;
    local_368 = local_400;
    FUN_1000e1770(&local_358,local_3f0,local_3e8);
    psVar27 = local_3f0;
    if (local_3f0 != (string *)0x0) {
      while (local_3e8 != psVar27) {
        local_3e8 = local_3e8 + -0x18;
        std::string::~string(local_3e8);
      }
      operator_delete(local_3f0);
    }
    if ((*(uint *)(param_5 + 0x480) & 0xff00) == 0x700) {
      uVar14 = _IOServiceMatching("IOPlatformExpertDevice");
      iVar6 = _IOServiceGetMatchingService
                        (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,uVar14);
      if (iVar6 == 0) {
        FUN_1008e3970("","vm",0,"[UpdateBoardTable] failed to load platform expert");
      }
      else {
        lVar15 = _IORegistryEntryCreateCFProperty
                           (iVar6,&cf_board_id,*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,0);
        if (lVar15 == 0) {
          FUN_1008e3970("","vm",0,"[UpdateBoardTable] failed to find board-id property");
        }
        else {
          uVar19 = _CFDataGetLength(lVar15);
          if (uVar19 == 0) {
LAB_1000debce:
            FUN_1008e3970("","vm",0,"[UpdateBoardTable] failed to alloc %u bytes");
          }
          else {
            pcVar13 = _malloc((ulong)uVar19);
            if (pcVar13 == (char *)0x0) goto LAB_1000debce;
            _CFDataGetBytes(lVar15,0,(ulong)uVar19,pcVar13);
            if (2 < DAT_1011b55f8) {
              FUN_1008e3970("","vm",3,"[UpdateBoardTable] boardId: %s");
            }
            _strlen(pcVar13);
            std::string::__init((char *)local_220,(ulong)pcVar13);
            uVar22 = (ulong)*(byte *)((long)pvStack_360 + 5) - 1;
            uVar18 = ((long)psStack_350 - (long)local_358 >> 3) * -0x5555555555555555;
            if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            std::string::operator=(local_358 + uVar22 * 0x18,local_220);
            std::string::~string(local_220);
            _free(pcVar13);
          }
          _CFRelease(lVar15);
        }
        _IOObjectRelease(iVar6);
      }
    }
    pvVar4 = local_338;
    bVar1 = *(byte *)((long)pvStack_360 + 1);
    _memcpy(local_338,pvStack_360,(ulong)bVar1);
    local_338 = (void *)((ulong)bVar1 + (long)local_338);
    local_320 = local_320 + (uint)bVar1;
    psVar27 = local_358;
    if (local_358 != psStack_350) {
      do {
        if (((byte)*psVar27 & 1) == 0) {
          uVar18 = (ulong)((byte)*psVar27 >> 1);
          psVar24 = psVar27 + 1;
        }
        else {
          uVar18 = *(ulong *)(psVar27 + 8);
          psVar24 = *(string **)(psVar27 + 0x10);
        }
        uVar22 = uVar18 + 1 & 0xffffffff;
        _memcpy(local_338,psVar24,uVar22);
        local_338 = (void *)(uVar22 + (long)local_338);
        local_320 = local_320 + (int)(uVar18 + 1);
        psVar27 = psVar27 + 0x18;
      } while (psVar27 != psStack_350);
    }
    local_1f0[0] = 0;
    uVar19 = (psVar27 == local_358) + 1;
    _memcpy(local_338,local_1f0,(ulong)uVar19);
    local_338 = (void *)((long)local_338 + (ulong)uVar19);
    local_320 = local_320 + uVar19;
    uVar19 = (int)local_338 - (int)pvVar4;
    if (local_328 < uVar19) {
      local_328 = uVar19;
    }
    FUN_1000e1250(&local_428,&local_338,&DAT_100bfbfb0,
                  &PTR_s_Parallels_Software_International_100bfbfd0);
    pvStack_360 = local_420;
    local_368 = local_428;
    FUN_1000e1770(&local_358,local_418,local_410);
    psVar27 = local_418;
    if (local_418 != (string *)0x0) {
      while (local_410 != psVar27) {
        local_410 = local_410 + -0x18;
        std::string::~string(local_410);
      }
      operator_delete(local_418);
    }
    if ((local_368 != 0) && (5 < *(byte *)(local_368 + 1))) {
      *(undefined1 *)((long)pvStack_360 + 5) = *(undefined1 *)(local_368 + 5);
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    CVmCommonOptions::getAssetId();
    if (*(int *)(local_430 + 4) != 0) {
      local_88 = 0;
      uStack_80 = 0;
      QUuid::toString();
      iVar6 = *(int *)(local_438 + 4);
      if (*(int *)local_438 != -1) {
        if (*(int *)local_438 != 0) {
          LOCK();
          *(int *)local_438 = *(int *)local_438 + -1;
          UNLOCK();
          local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_438 != 0);
          if (*(int *)local_438 != 0) goto LAB_1000dee6e;
        }
        QArrayData::deallocate(local_438,2,8);
      }
LAB_1000dee6e:
      if (iVar6 < *(int *)(local_430 + 4)) {
        QString::truncate((int)&local_430);
      }
      QString::toLatin1();
      pQVar21 = local_458 + *(long *)(local_458 + 0x10);
      _strlen((char *)pQVar21);
      std::string::__init((char *)local_450,(ulong)pQVar21);
      uVar22 = (ulong)*(byte *)((long)pvStack_360 + 8) - 1;
      uVar18 = ((long)psStack_350 - (long)local_358 >> 3) * -0x5555555555555555;
      if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      std::string::operator=(local_358 + uVar22 * 0x18,local_450);
      std::string::~string(local_450);
      if (*(int *)local_458 != -1) {
        if (*(int *)local_458 != 0) {
          LOCK();
          *(int *)local_458 = *(int *)local_458 + -1;
          UNLOCK();
          local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_458 != 0);
          if (*(int *)local_458 != 0) goto LAB_1000def65;
        }
        QArrayData::deallocate(local_458,1,8);
      }
    }
LAB_1000def65:
    pvVar4 = local_338;
    bVar1 = *(byte *)((long)pvStack_360 + 1);
    _memcpy(local_338,pvStack_360,(ulong)bVar1);
    local_338 = (void *)((ulong)bVar1 + (long)local_338);
    local_320 = local_320 + (uint)bVar1;
    psVar27 = local_358;
    if (local_358 != psStack_350) {
      do {
        if (((byte)*psVar27 & 1) == 0) {
          uVar18 = (ulong)((byte)*psVar27 >> 1);
          psVar24 = psVar27 + 1;
        }
        else {
          uVar18 = *(ulong *)(psVar27 + 8);
          psVar24 = *(string **)(psVar27 + 0x10);
        }
        uVar22 = uVar18 + 1 & 0xffffffff;
        _memcpy(local_338,psVar24,uVar22);
        local_338 = (void *)(uVar22 + (long)local_338);
        local_320 = local_320 + (int)(uVar18 + 1);
        psVar27 = psVar27 + 0x18;
      } while (psVar27 != psStack_350);
    }
    local_1f0[0] = 0;
    uVar19 = (psVar27 == local_358) + 1;
    _memcpy(local_338,local_1f0,(ulong)uVar19);
    local_338 = (void *)((long)local_338 + (ulong)uVar19);
    local_320 = local_320 + uVar19;
    uVar19 = (int)local_338 - (int)pvVar4;
    if (local_328 < uVar19) {
      local_328 = uVar19;
    }
    FUN_1000e1250(&local_480,&local_338,&DAT_100bfc000,&PTR_s_CPU_Socket__0_100bfc030);
    pvStack_360 = local_478;
    local_368 = local_480;
    FUN_1000e1770(&local_358,local_470,local_468);
    psVar27 = local_470;
    if (local_470 != (string *)0x0) {
      while (local_468 != psVar27) {
        local_468 = local_468 + -0x18;
        std::string::~string(local_468);
      }
      operator_delete(local_470);
    }
    local_3c = 0;
    local_40 = 0;
    local_48 = 0;
    uVar7 = FUN_1007782b0(1,0);
    uVar8 = FUN_100778290(1,0);
    *(ulong *)((long)pvStack_360 + 8) = CONCAT44(uVar7,uVar8);
    uVar7 = FUN_1007782c0(0,0);
    local_48 = CONCAT44(local_48._4_4_,uVar7);
    uVar7 = FUN_1007782b0(0,0);
    local_48 = CONCAT44(uVar7,(undefined4)local_48);
    local_40 = FUN_1007782a0(0,0);
    _strlen((char *)&local_48);
    std::string::__init((char *)local_208,(ulong)&local_48);
    uVar22 = (ulong)*(byte *)((long)pvStack_360 + 7) - 1;
    uVar18 = ((long)psStack_350 - (long)local_358 >> 3) * -0x5555555555555555;
    if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    std::string::operator=(local_358 + uVar22 * 0x18,local_208);
    std::string::~string(local_208);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",3,"[UpdateProcessorTable] Manufacturer: %s");
    }
    pvVar4 = local_338;
    *(short *)((long)pvStack_360 + 0x12) = (short)(*(ulong *)(param_5 + 0x10) / 1000000);
    *(short *)((long)pvStack_360 + 0x14) = (short)(*(ulong *)(param_5 + 8) / 1000000);
    *(short *)((long)pvStack_360 + 0x16) = (short)(*(ulong *)(param_5 + 8) / 1000000);
    if ((local_368 != 0) && (6 < *(byte *)(local_368 + 1))) {
      *(undefined1 *)((long)pvStack_360 + 6) = *(undefined1 *)(local_368 + 6);
    }
    bVar1 = *(byte *)((long)pvStack_360 + 1);
    _memcpy(local_338,pvStack_360,(ulong)bVar1);
    local_338 = (void *)((ulong)bVar1 + (long)local_338);
    local_320 = local_320 + (uint)bVar1;
    psVar27 = local_358;
    if (local_358 != psStack_350) {
      do {
        if (((byte)*psVar27 & 1) == 0) {
          uVar18 = (ulong)((byte)*psVar27 >> 1);
          psVar24 = psVar27 + 1;
        }
        else {
          uVar18 = *(ulong *)(psVar27 + 8);
          psVar24 = *(string **)(psVar27 + 0x10);
        }
        uVar22 = uVar18 + 1 & 0xffffffff;
        _memcpy(local_338,psVar24,uVar22);
        local_338 = (void *)(uVar22 + (long)local_338);
        local_320 = local_320 + (int)(uVar18 + 1);
        psVar27 = psVar27 + 0x18;
      } while (psVar27 != psStack_350);
    }
    local_1f0[0] = 0;
    uVar19 = (psVar27 == local_358) + 1;
    _memcpy(local_338,local_1f0,(ulong)uVar19);
    local_338 = (void *)((long)local_338 + (ulong)uVar19);
    local_320 = local_320 + uVar19;
    uVar19 = (int)local_338 - (int)pvVar4;
    if (local_328 < uVar19) {
      local_328 = uVar19;
    }
    FUN_1000e1250(local_4a8,&local_338,&DAT_100bfc048,&PTR_s_ISA_slot_1_100bfc060);
    pvVar4 = local_338;
    bVar1 = *(byte *)((long)local_4a0 + 1);
    _memcpy(local_338,local_4a0,(ulong)bVar1);
    local_338 = (void *)((ulong)bVar1 + (long)local_338);
    local_320 = local_320 + (uint)bVar1;
    psVar27 = local_498;
    if (local_498 != local_490) {
      do {
        if (((byte)*psVar27 & 1) == 0) {
          uVar18 = (ulong)((byte)*psVar27 >> 1);
          psVar24 = psVar27 + 1;
        }
        else {
          uVar18 = *(ulong *)(psVar27 + 8);
          psVar24 = *(string **)(psVar27 + 0x10);
        }
        uVar22 = uVar18 + 1 & 0xffffffff;
        _memcpy(local_338,psVar24,uVar22);
        local_338 = (void *)(uVar22 + (long)local_338);
        local_320 = local_320 + (int)(uVar18 + 1);
        psVar27 = psVar27 + 0x18;
      } while (psVar27 != local_490);
    }
    local_1f0[0] = 0;
    uVar19 = (psVar27 == local_498) + 1;
    _memcpy(local_338,local_1f0,(ulong)uVar19);
    psVar27 = local_498;
    local_338 = (void *)((long)local_338 + (ulong)uVar19);
    local_320 = local_320 + uVar19;
    uVar19 = (int)local_338 - (int)pvVar4;
    if (local_328 < uVar19) {
      local_328 = uVar19;
    }
    if (local_498 != (string *)0x0) {
      while (local_490 != psVar27) {
        local_490 = local_490 + -0x18;
        std::string::~string(local_490);
      }
      operator_delete(local_498);
    }
    local_d8 = local_c8;
    local_d0 = 0;
    uVar19 = 0;
    do {
      uVar19 = uVar19 + 1;
      _sprintf(local_c8,"PCI slot %d",(ulong)uVar19);
      FUN_1000e1250(&local_4d0,&local_338,&DAT_100bfc070,&local_d8);
      pvStack_360 = local_4c8;
      local_368 = local_4d0;
      FUN_1000e1770(&local_358,local_4c0,local_4b8);
      psVar27 = local_4c0;
      if (local_4c0 != (string *)0x0) {
        while (local_4b8 != psVar27) {
          local_4b8 = local_4b8 + -0x18;
          std::string::~string(local_4b8);
        }
        operator_delete(local_4c0);
      }
      pvVar4 = local_338;
      *(short *)((long)pvStack_360 + 9) = (short)uVar19;
      bVar1 = *(byte *)((long)pvStack_360 + 1);
      _memcpy(local_338,pvStack_360,(ulong)bVar1);
      local_338 = (void *)((ulong)bVar1 + (long)local_338);
      local_320 = local_320 + (uint)bVar1;
      psVar27 = local_358;
      if (local_358 != psStack_350) {
        do {
          if (((byte)*psVar27 & 1) == 0) {
            uVar18 = (ulong)((byte)*psVar27 >> 1);
            psVar24 = psVar27 + 1;
          }
          else {
            uVar18 = *(ulong *)(psVar27 + 8);
            psVar24 = *(string **)(psVar27 + 0x10);
          }
          uVar22 = uVar18 + 1 & 0xffffffff;
          _memcpy(local_338,psVar24,uVar22);
          local_338 = (void *)(uVar22 + (long)local_338);
          local_320 = local_320 + (int)(uVar18 + 1);
          psVar27 = psVar27 + 0x18;
        } while (psVar27 != psStack_350);
      }
      local_1f0[0] = 0;
      uVar20 = (psVar27 == local_358) + 1;
      _memcpy(local_338,local_1f0,(ulong)uVar20);
      local_338 = (void *)((long)local_338 + (ulong)uVar20);
      local_320 = local_320 + uVar20;
      uVar20 = (int)local_338 - (int)pvVar4;
      if (local_328 < uVar20) {
        local_328 = uVar20;
      }
    } while ((int)uVar19 < 5);
    FUN_1000e1250(local_4f8,&local_338,&DAT_100bfc07d,&PTR_s_Parallels_Video_Adapter_100bfc090);
    pvVar4 = local_338;
    bVar1 = *(byte *)((long)local_4f0 + 1);
    _memcpy(local_338,local_4f0,(ulong)bVar1);
    local_338 = (void *)((ulong)bVar1 + (long)local_338);
    local_320 = local_320 + (uint)bVar1;
    psVar27 = local_4e8;
    if (local_4e8 != local_4e0) {
      do {
        if (((byte)*psVar27 & 1) == 0) {
          uVar18 = (ulong)((byte)*psVar27 >> 1);
          psVar24 = psVar27 + 1;
        }
        else {
          uVar18 = *(ulong *)(psVar27 + 8);
          psVar24 = *(string **)(psVar27 + 0x10);
        }
        uVar22 = uVar18 + 1 & 0xffffffff;
        _memcpy(local_338,psVar24,uVar22);
        local_338 = (void *)(uVar22 + (long)local_338);
        local_320 = local_320 + (int)(uVar18 + 1);
        psVar27 = psVar27 + 0x18;
      } while (psVar27 != local_4e0);
    }
    local_1f0[0] = 0;
    uVar19 = (psVar27 == local_4e8) + 1;
    _memcpy(local_338,local_1f0,(ulong)uVar19);
    psVar27 = local_4e8;
    local_338 = (void *)((long)local_338 + (ulong)uVar19);
    local_320 = local_320 + uVar19;
    uVar19 = (int)local_338 - (int)pvVar4;
    if (local_328 < uVar19) {
      local_328 = uVar19;
    }
    if (local_4e8 != (string *)0x0) {
      while (local_4e0 != psVar27) {
        local_4e0 = local_4e0 + -0x18;
        std::string::~string(local_4e0);
      }
      operator_delete(local_4e8);
    }
    uVar7 = uStack_324;
    CDispCommonPreferences::getMemoryPreferences();
    iVar6 = CDispMemoryPreferences::getMaxVmMemory();
    iVar9 = FUN_1007da300("devices.dmi.dimm",iVar6 + 0x3fffU >> 0xe);
    FUN_1000e1250(&local_520,&local_338,&DAT_100bfc0a8,0);
    pvStack_360 = local_518;
    local_368 = local_520;
    FUN_1000e1770(&local_358,local_510,local_508);
    psVar27 = local_510;
    if (local_510 != (string *)0x0) {
      while (local_508 != psVar27) {
        local_508 = local_508 + -0x18;
        std::string::~string(local_508);
      }
      operator_delete(local_510);
    }
    pvVar4 = local_338;
    *(int *)((long)pvStack_360 + 7) = iVar6 << 10;
    *(short *)((long)pvStack_360 + 0xd) = (short)iVar9;
    if ((local_368 != 0) && (6 < *(byte *)(local_368 + 1))) {
      *(undefined1 *)((long)pvStack_360 + 6) = *(undefined1 *)(local_368 + 6);
    }
    bVar1 = *(byte *)((long)pvStack_360 + 1);
    _memcpy(local_338,pvStack_360,(ulong)bVar1);
    local_338 = (void *)((ulong)bVar1 + (long)local_338);
    local_320 = local_320 + (uint)bVar1;
    psVar27 = local_358;
    if (local_358 != psStack_350) {
      do {
        if (((byte)*psVar27 & 1) == 0) {
          uVar18 = (ulong)((byte)*psVar27 >> 1);
          psVar24 = psVar27 + 1;
        }
        else {
          uVar18 = *(ulong *)(psVar27 + 8);
          psVar24 = *(string **)(psVar27 + 0x10);
        }
        uVar22 = uVar18 + 1 & 0xffffffff;
        _memcpy(local_338,psVar24,uVar22);
        local_338 = (void *)(uVar22 + (long)local_338);
        local_320 = local_320 + (int)(uVar18 + 1);
        psVar27 = psVar27 + 0x18;
      } while (psVar27 != psStack_350);
    }
    local_1f0[0] = 0;
    uVar19 = (psVar27 == local_358) + 1;
    _memcpy(local_338,local_1f0,(ulong)uVar19);
    local_338 = (void *)((long)local_338 + (ulong)uVar19);
    local_320 = local_320 + uVar19;
    uVar19 = (int)local_338 - (int)pvVar4;
    if (local_328 < uVar19) {
      local_328 = uVar19;
    }
    local_1e8 = local_c8;
    local_1e0 = local_118;
    local_1a8 = 0;
    local_1d8 = "Parallels Virtual RAM";
    local_1d0 = local_158;
    local_1c8 = local_198;
    local_1c0 = 0;
    uVar19 = *(uint *)(param_5 + 0x46c);
    local_1b8 = local_1e8;
    local_1b0 = local_1e0;
    FUN_1000e19d0(&local_538);
    if (0 < iVar9) {
      lVar15 = 0;
      do {
        uVar26 = 0;
        iVar6 = (int)lVar15;
        uVar20 = 0;
        if (uVar19 != 0) {
          uVar5 = 1;
          do {
            uVar26 = uVar5;
            if (0x3fff < uVar26) break;
            uVar5 = uVar26 * 2;
          } while (uVar26 < uVar19);
          uVar26 = uVar26 >> (0x80 < uVar26 - uVar19 & iVar9 - iVar6 != 1 & -(uVar19 < uVar26));
          uVar20 = uVar19 - uVar26;
          if (uVar19 < uVar26) {
            uVar20 = 0;
          }
        }
        uVar19 = uVar20;
        *(ushort *)((long)local_538 + lVar15 * 2) = uVar26;
        lVar15 = lVar15 + 1;
      } while (iVar6 != iVar9 + -1);
    }
    FUN_1000e1a80(local_530,local_530,local_538,local_538,local_1f0);
    if (0 < iVar9) {
      uVar18 = 0;
      do {
        _sprintf(local_c8,"DIMM #%d",uVar18 & 0xffffffff);
        _sprintf(local_118,"BANK #%d",uVar18 & 0xffffffff);
        uVar26 = *(ushort *)((long)local_538 + uVar18 * 2);
        if (uVar26 == 0) {
          iVar6 = FUN_1006d65a0();
          uVar26 = 0x8001;
          if (iVar6 == 0) goto LAB_1000dfc90;
          uVar26 = 0;
LAB_1000dfd80:
          FUN_1000e1250(&local_588,&local_338,&DAT_100bfc0c0,&local_1b8);
          pvStack_360 = local_580;
          local_368 = local_588;
          FUN_1000e1770(&local_358,local_578,local_570);
          psVar27 = local_578;
          if (local_578 != (string *)0x0) {
            while (local_570 != psVar27) {
              local_570 = local_570 + -0x18;
              std::string::~string(local_570);
            }
            operator_delete(local_578);
          }
          *(undefined1 *)((long)pvStack_360 + 0x17) = 0;
          *(undefined1 *)((long)pvStack_360 + 0x18) = 0;
          *(undefined1 *)((long)pvStack_360 + 0x1a) = 0;
        }
        else {
LAB_1000dfc90:
          if ((*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) != 0x700) goto LAB_1000dfd80;
          _sprintf(local_198,"PRL-%dMB",(ulong)uVar26);
          _sprintf(local_158,"%08d",(ulong)((int)uVar18 + 1));
          FUN_1000e1250(&local_560,&local_338,&DAT_100bfc0c0,&local_1e8);
          pvStack_360 = local_558;
          local_368 = local_560;
          FUN_1000e1770(&local_358,local_550,local_548);
          psVar27 = local_550;
          if (local_550 != (string *)0x0) {
            while (local_548 != psVar27) {
              local_548 = local_548 + -0x18;
              std::string::~string(local_548);
            }
            operator_delete(local_550);
          }
          *(undefined1 *)((long)pvStack_360 + 0x17) = 3;
          *(undefined1 *)((long)pvStack_360 + 0x18) = 4;
          *(undefined1 *)((long)pvStack_360 + 0x1a) = 5;
        }
        *(short *)((long)pvStack_360 + 4) = (short)uVar7;
        *(ushort *)((long)pvStack_360 + 0xc) = uVar26;
        if (2 < DAT_1011b55f8) {
          FUN_1008e3970("","vm",3,"smbios dimm[%d]: 0x%x",uVar18 & 0xffffffff,uVar26);
        }
        pvVar4 = local_338;
        bVar1 = *(byte *)((long)pvStack_360 + 1);
        _memcpy(local_338,pvStack_360,(ulong)bVar1);
        local_338 = (void *)((ulong)bVar1 + (long)local_338);
        local_320 = local_320 + (uint)bVar1;
        psVar27 = local_358;
        if (local_358 != psStack_350) {
          do {
            if (((byte)*psVar27 & 1) == 0) {
              uVar22 = (ulong)((byte)*psVar27 >> 1);
              psVar24 = psVar27 + 1;
            }
            else {
              uVar22 = *(ulong *)(psVar27 + 8);
              psVar24 = *(string **)(psVar27 + 0x10);
            }
            uVar23 = uVar22 + 1 & 0xffffffff;
            _memcpy(local_338,psVar24,uVar23);
            local_338 = (void *)(uVar23 + (long)local_338);
            local_320 = local_320 + (int)(uVar22 + 1);
            psVar27 = psVar27 + 0x18;
          } while (psVar27 != psStack_350);
        }
        local_1f0[0] = 0;
        uVar19 = (psVar27 == local_358) + 1;
        _memcpy(local_338,local_1f0,(ulong)uVar19);
        local_338 = (void *)((long)local_338 + (ulong)uVar19);
        local_320 = local_320 + uVar19;
        uVar19 = (int)local_338 - (int)pvVar4;
        if (local_328 < uVar19) {
          local_328 = uVar19;
        }
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)iVar9);
    }
    FUN_1000e1250(&local_5b0,&local_338,&DAT_100bfc0e1,0);
    pvStack_360 = local_5a8;
    local_368 = local_5b0;
    FUN_1000e1770(&local_358,local_5a0,local_598);
    psVar27 = local_5a0;
    if (local_5a0 != (string *)0x0) {
      while (local_598 != psVar27) {
        local_598 = local_598 + -0x18;
        std::string::~string(local_598);
      }
      operator_delete(local_5a0);
    }
    pvVar4 = local_338;
    *(int *)((long)pvStack_360 + 8) = *(int *)(param_5 + 0x46c) * 0x400 + -1;
    *(short *)((long)pvStack_360 + 0xc) = (short)uVar7;
    bVar1 = *(byte *)((long)pvStack_360 + 1);
    _memcpy(local_338,pvStack_360,(ulong)bVar1);
    local_338 = (void *)((ulong)bVar1 + (long)local_338);
    local_320 = local_320 + (uint)bVar1;
    psVar27 = local_358;
    if (local_358 != psStack_350) {
      do {
        if (((byte)*psVar27 & 1) == 0) {
          uVar18 = (ulong)((byte)*psVar27 >> 1);
          psVar24 = psVar27 + 1;
        }
        else {
          uVar18 = *(ulong *)(psVar27 + 8);
          psVar24 = *(string **)(psVar27 + 0x10);
        }
        uVar22 = uVar18 + 1 & 0xffffffff;
        _memcpy(local_338,psVar24,uVar22);
        local_338 = (void *)(uVar22 + (long)local_338);
        local_320 = local_320 + (int)(uVar18 + 1);
        psVar27 = psVar27 + 0x18;
      } while (psVar27 != psStack_350);
    }
    local_1f0[0] = 0;
    uVar19 = (psVar27 == local_358) + 1;
    _memcpy(local_338,local_1f0,(ulong)uVar19);
    local_338 = (void *)((long)local_338 + (ulong)uVar19);
    local_320 = local_320 + uVar19;
    uVar19 = (int)local_338 - (int)pvVar4;
    if (local_328 < uVar19) {
      local_328 = uVar19;
    }
    FUN_1000e1250(local_5d8,&local_338,&DAT_100bfc0f0,0);
    pvVar4 = local_338;
    bVar1 = *(byte *)((long)local_5d0 + 1);
    _memcpy(local_338,local_5d0,(ulong)bVar1);
    local_338 = (void *)((ulong)bVar1 + (long)local_338);
    local_320 = local_320 + (uint)bVar1;
    psVar27 = local_5c8;
    if (local_5c8 != local_5c0) {
      do {
        if (((byte)*psVar27 & 1) == 0) {
          uVar18 = (ulong)((byte)*psVar27 >> 1);
          psVar24 = psVar27 + 1;
        }
        else {
          uVar18 = *(ulong *)(psVar27 + 8);
          psVar24 = *(string **)(psVar27 + 0x10);
        }
        uVar22 = uVar18 + 1 & 0xffffffff;
        _memcpy(local_338,psVar24,uVar22);
        local_338 = (void *)(uVar22 + (long)local_338);
        local_320 = local_320 + (int)(uVar18 + 1);
        psVar27 = psVar27 + 0x18;
      } while (psVar27 != local_5c0);
    }
    local_1f0[0] = 0;
    uVar19 = (psVar27 == local_5c8) + 1;
    _memcpy(local_338,local_1f0,(ulong)uVar19);
    psVar27 = local_5c8;
    local_338 = (void *)((long)local_338 + (ulong)uVar19);
    local_320 = local_320 + uVar19;
    uVar19 = (int)local_338 - (int)pvVar4;
    if (local_328 < uVar19) {
      local_328 = uVar19;
    }
    if (local_5c8 != (string *)0x0) {
      while (local_5c0 != psVar27) {
        local_5c0 = local_5c0 + -0x18;
        std::string::~string(local_5c0);
      }
      operator_delete(local_5c8);
    }
    FUN_1000e1250(local_600,&local_338,&DAT_100bfc104,0);
    pvVar4 = local_338;
    bVar1 = *(byte *)((long)local_5f8 + 1);
    _memcpy(local_338,local_5f8,(ulong)bVar1);
    local_338 = (void *)((ulong)bVar1 + (long)local_338);
    local_320 = local_320 + (uint)bVar1;
    psVar27 = local_5f0;
    if (local_5f0 != local_5e8) {
      do {
        if (((byte)*psVar27 & 1) == 0) {
          uVar18 = (ulong)((byte)*psVar27 >> 1);
          psVar24 = psVar27 + 1;
        }
        else {
          uVar18 = *(ulong *)(psVar27 + 8);
          psVar24 = *(string **)(psVar27 + 0x10);
        }
        uVar22 = uVar18 + 1 & 0xffffffff;
        _memcpy(local_338,psVar24,uVar22);
        local_338 = (void *)(uVar22 + (long)local_338);
        local_320 = local_320 + (int)(uVar18 + 1);
        psVar27 = psVar27 + 0x18;
      } while (psVar27 != local_5e8);
    }
    local_1f0[0] = 0;
    uVar19 = (psVar27 == local_5f0) + 1;
    _memcpy(local_338,local_1f0,(ulong)uVar19);
    psVar27 = local_5f0;
    local_338 = (void *)((long)local_338 + (ulong)uVar19);
    local_320 = uVar19 + local_320;
    uVar19 = (int)local_338 - (int)pvVar4;
    if (local_328 < uVar19) {
      local_328 = uVar19;
    }
    if (local_5f0 != (string *)0x0) {
      while (local_5e8 != psVar27) {
        local_5e8 = local_5e8 + -0x18;
        std::string::~string(local_5e8);
      }
      operator_delete(local_5f0);
    }
    *(undefined8 *)(param_2 + 0x6118) = DAT_100b2e068;
    *(undefined8 *)(param_2 + 0x6110) = _s__DMI__100b2e060;
    uVar14 = ram0x000100b2e050;
    *(undefined8 *)(param_2 + 0x6108) = DAT_100b2e058;
    *(undefined8 *)(param_2 + 0x6100) = uVar14;
    *(short *)(param_2 + 0x6108) = (short)local_328;
    *(short *)(param_2 + 0x6116) = (short)local_320;
    puVar16 = (undefined4 *)FUN_1000dcd50(4);
    uVar7 = *puVar16;
    *(undefined4 *)(param_2 + 0x6118) = uVar7;
    *(short *)(param_2 + 0x611c) = (short)uStack_324;
    *(char *)(param_2 + 0x6115) =
         -(*(char *)(param_2 + 0x611e) +
          (char)((uint)uStack_324 >> 8) +
          (char)((uint)uVar7 >> 0x18) +
          (char)((uint)uVar7 >> 0x10) +
          (char)((uint)uVar7 >> 8) +
          (char)uVar7 +
          *(char *)(param_2 + 0x6117) +
          *(char *)(param_2 + 0x6116) +
          *(char *)(param_2 + 0x6115) +
          *(char *)(param_2 + 0x6114) +
          *(char *)(param_2 + 0x6113) +
          *(char *)(param_2 + 0x6112) + *(char *)(param_2 + 0x6111) + *(char *)(param_2 + 0x6110) +
          (char)uStack_324);
    bVar1 = *(byte *)(param_2 + 0x6105);
    uVar19 = (uint)bVar1;
    cVar25 = '\0';
    if (bVar1 != 0) {
      pcVar13 = (char *)(param_2 + 0x6100);
      if ((bVar1 & 3) == 0) {
        cVar25 = '\0';
      }
      else {
        iVar6 = -(bVar1 & 3);
        cVar25 = '\0';
        do {
          uVar19 = uVar19 - 1;
          cVar2 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          cVar25 = cVar2 + cVar25;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
      }
      if (2 < bVar1 - 1) {
        do {
          cVar25 = pcVar13[3] + pcVar13[2] + pcVar13[1] + *pcVar13 + cVar25;
          pcVar13 = pcVar13 + 4;
          uVar19 = uVar19 - 4;
        } while (uVar19 != 0);
      }
    }
    *(char *)(param_2 + 0x6104) = -cVar25;
    puVar17 = (undefined8 *)FUN_1000dcd50(4);
    uVar14 = *puVar17;
    iVar6 = FUN_10008c9b0(param_6,uVar14,pvVar12,sVar3);
    if (iVar6 < 0) {
      FUN_1008e3970("","vm",0,"Failed to copy SMBios to memory 0x%08llX",uVar14);
    }
    _free(pvVar12);
    if (local_538 != (void *)0x0) {
      if (local_530 != local_538) {
        local_530 = (void *)((~((long)local_530 + (-2 - (long)local_538)) & 0xfffffffffffffffeU) +
                            (long)local_530);
      }
      operator_delete(local_538);
    }
    if (*(int *)local_430 != -1) {
      if (*(int *)local_430 != 0) {
        LOCK();
        *(int *)local_430 = *(int *)local_430 + -1;
        UNLOCK();
        local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_430 != 0);
        if (*(int *)local_430 != 0) goto LAB_1000e06e8;
      }
      QArrayData::deallocate(local_430,2,8);
    }
LAB_1000e06e8:
    lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (*(int *)local_3c0.field0_0x0 != -1) {
      if (*(int *)local_3c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_3c0.field0_0x0 = *(int *)local_3c0.field0_0x0 + -1;
        UNLOCK();
        local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_3c0.field0_0x0 != 0);
        if (*(int *)local_3c0.field0_0x0 != 0) goto LAB_1000e072e;
      }
      QArrayData::deallocate((QArrayData *)local_3c0.field0_0x0,2,8);
    }
LAB_1000e072e:
    psVar27 = local_358;
    if (local_358 != (string *)0x0) {
      while (psStack_350 != psVar27) {
        psStack_350 = psStack_350 + -0x18;
        std::string::~string(psStack_350);
      }
      operator_delete(local_358);
    }
  }
  if (*(int *)local_300.field0_0x0 != -1) {
    if (*(int *)local_300.field0_0x0 != 0) {
      LOCK();
      *(int *)local_300.field0_0x0 = *(int *)local_300.field0_0x0 + -1;
      UNLOCK();
      local_1f0[0] = CONCAT31(local_1f0[0]._1_3_,*(int *)local_300.field0_0x0 != 0);
      if (*(int *)local_300.field0_0x0 != 0) goto LAB_1000e07ae;
    }
    QArrayData::deallocate((QArrayData *)local_300.field0_0x0,2,8);
  }
LAB_1000e07ae:
  if (lVar15 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

