
void FUN_1005bcce0(long param_1,undefined4 param_2,QString *param_3)

{
  CdDvdInfo *pCVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  undefined *puVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  BootDevice *this;
  QString QVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  int iVar20;
  bool bVar21;
  char local_1e8;
  BootDevice *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QTypedArrayData<unsigned_short> *local_1c0;
  long local_1b8;
  _func_void_Node_ptr *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QString local_190;
  Data *local_188;
  Data *local_180;
  Data *local_178;
  uint local_170;
  QArrayData *local_168;
  Data *local_160;
  Data *local_158;
  Data *local_150;
  Data *local_148;
  int local_140;
  QVariant local_138;
  QArrayData *local_128;
  QArrayData *local_120;
  QVariant local_118;
  QVariant local_108;
  QArrayData *local_f8;
  QString local_f0;
  QString local_e8;
  Data *local_e0;
  Data *local_d8;
  Data *local_d0;
  uint local_c8;
  undefined1 local_c0;
  QString local_b8;
  QString local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  char local_a0;
  QString local_98;
  QString local_90;
  undefined8 local_88;
  QString local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  uint local_58;
  _func_void_Node_ptr *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)&param_3[1].field0_0x0 == 2) {
    local_40 = (QArrayData *)QString::fromAscii_helper(".hdd",4);
    local_1e8 = QString::endsWith(param_3,&local_40,1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bcd6e;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
  else {
    local_1e8 = '\0';
  }
LAB_1005bcd6e:
  puVar6 = PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar20 = *(int *)&param_3[1].field0_0x0;
  iVar2 = iVar20;
  if (iVar20 == 0) {
    iVar2 = *(int *)(param_1 + 0x158);
  }
  FUN_1005bca20(&local_50,param_1);
  FUN_1002b5da0(&local_78,&local_50);
  local_70 = local_78;
  if (*local_78 != -1) {
    if (*local_78 == 0) {
      QListData::detach((int)&local_70);
      iVar10 = local_70[2];
      if (iVar10 != local_70[3]) {
        local_78 = local_78 + (long)local_78[2] * 2 + 4;
        piVar13 = local_70 + (long)iVar10 * 2 + 4;
        lVar12 = (long)local_70[3] * 8 + (long)iVar10 * -8;
        do {
          piVar4 = *(int **)local_78;
          *(int **)piVar13 = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_31 = *piVar4 != 0;
            UNLOCK();
          }
          piVar13 = piVar13 + 2;
          local_78 = local_78 + 2;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
    else {
      LOCK();
      *local_78 = *local_78 + 1;
      local_31 = *local_78 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)local_70[2] * 2 + 4;
  local_60 = local_70 + (long)local_70[3] * 2 + 4;
  local_58 = 1;
  FUN_100039a80(&local_78);
  if (local_58 != 0) {
    do {
      if (local_68 == local_60) break;
      local_80.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_68;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_58 != 0) {
        if (iVar20 == 0) {
          piVar13 = (int *)FUN_1005bf9d0(&local_50,&local_80);
          if (*piVar13 != 0xff) goto LAB_1005bcef0;
        }
        else {
          cVar7 = operator==(param_3,&local_80);
          if (cVar7 != '\0') {
LAB_1005bcef0:
            QString::operator=(&local_48,&local_80);
            goto LAB_1005bcefb;
          }
        }
        local_58 = 0;
      }
LAB_1005bcefb:
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005bcf2b;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1005bcf2b:
      local_68 = local_68 + 2;
      uVar9 = local_58 ^ 1;
      bVar21 = local_58 != 1;
      local_58 = uVar9;
    } while (bVar21);
  }
  FUN_100039a80(&local_70);
  iVar20 = 0;
  if (*(char *)(param_1 + 0x148) == '\0') {
    iVar20 = (iVar2 == 3) + 1 + (uint)(iVar2 == 3);
  }
  local_a0 = '\x01';
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar6;
  iVar10 = *(int *)puVar6;
  if (1 < iVar10 + 1U) {
    LOCK();
    *(int *)puVar6 = *(int *)puVar6 + 1;
    local_31 = *(int *)puVar6 != 0;
    UNLOCK();
    iVar10 = *(int *)puVar6;
  }
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar6;
  if (1 < iVar10 + 1U) {
    LOCK();
    *(int *)puVar6 = *(int *)puVar6 + 1;
    local_31 = *(int *)puVar6 != 0;
    UNLOCK();
    iVar10 = *(int *)puVar6;
  }
  local_88 = (local_88 >> 8 & 0xffffff) << 8;
  if (iVar10 != -1) {
    if (iVar10 == 0) {
LAB_1005bcfd7:
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
    else {
      LOCK();
      *(int *)puVar6 = *(int *)puVar6 + -1;
      local_31 = *(int *)puVar6 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1005bcfd7;
    }
    if (*(int *)puVar6 != -1) {
      if (*(int *)puVar6 != 0) {
        LOCK();
        *(int *)puVar6 = *(int *)puVar6 + -1;
        local_31 = *(int *)puVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bd01f;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
LAB_1005bd01f:
  if (iVar20 != 3 && local_1e8 == '\0') {
    local_c0 = iVar2 == 1;
    local_b8.field0_0x0 = local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar6;
    if (1 < *(int *)puVar6 + 1U) {
      LOCK();
      *(int *)puVar6 = *(int *)puVar6 + 1;
      local_31 = *(int *)puVar6 != 0;
      UNLOCK();
    }
    local_a8 = local_a8 & 0xffffff00;
    uStack_a4 = 0;
    local_a0 = local_c0;
    QString::operator=(&local_98,&local_b8);
    QString::operator=(&local_90,&local_b0);
    local_88 = CONCAT44(uStack_a4,local_a8);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_31 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bd0fd;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_1005bd0fd:
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_31 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bd133;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_1005bd133:
    if (*(int *)puVar6 != -1) {
      if (*(int *)puVar6 != 0) {
        LOCK();
        *(int *)puVar6 = *(int *)puVar6 + -1;
        local_31 = *(int *)puVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bd162;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
LAB_1005bd162:
    if (local_a0 == '\0') {
      QString::operator=(&local_90,&local_98);
    }
    else {
      uVar15 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar15 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar15 = *(undefined8 *)(param_1 + 0x18);
      }
      lVar12 = FUN_10015a340(uVar15);
      plVar19 = *(long **)(lVar12 + 0x148);
      local_e0 = (Data *)*plVar19;
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 == 0) {
          QListData::detach((int)&local_e0);
          lVar17 = (long)*(int *)(local_e0 + 8);
          lVar12 = *plVar19;
          if (((Data *)(lVar12 + (long)*(int *)(lVar12 + 8) * 8) != local_e0 + lVar17 * 8) &&
             (lVar18 = *(int *)(local_e0 + 0xc) - lVar17,
             lVar18 != 0 && lVar17 <= *(int *)(local_e0 + 0xc))) {
            _memcpy(local_e0 + lVar17 * 8 + 0x10,
                    (void *)(lVar12 + 0x10 + (long)*(int *)(lVar12 + 8) * 8),lVar18 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + 1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
        }
      }
      local_d8 = local_e0 + (long)*(int *)(local_e0 + 8) * 8 + 0x10;
      local_d0 = local_e0 + (long)*(int *)(local_e0 + 0xc) * 8 + 0x10;
      local_c8 = 1;
      if (*(int *)(local_e0 + 8) != *(int *)(local_e0 + 0xc)) {
        do {
          if (local_c8 != 0) {
            plVar19 = *(long **)local_d8;
            (**(code **)(*plVar19 + 0xb8))(&local_e8,plVar19);
            cVar7 = operator==(&local_e8,&local_48);
            if (*(int *)local_e8.field0_0x0 != -1) {
              if (*(int *)local_e8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
                local_31 = *(int *)local_e8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005bd2c3;
              }
              QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
            }
LAB_1005bd2c3:
            if (cVar7 == '\0') {
              local_c8 = 0;
            }
            else {
              (**(code **)(*plVar19 + 0xa8))(&local_f0,plVar19);
              QString::operator=(&local_90,&local_f0);
              if (*(int *)local_f0.field0_0x0 != -1) {
                if (*(int *)local_f0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
                  local_31 = *(int *)local_f0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1005bd33a;
                }
                QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
              }
            }
          }
LAB_1005bd33a:
          local_d8 = local_d8 + 8;
          uVar9 = local_c8 ^ 1;
          bVar21 = local_c8 != 1;
          local_c8 = uVar9;
        } while ((bVar21) && (local_d8 != local_d0));
      }
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005bd39b;
        }
        QListData::dispose(local_e0);
      }
    }
LAB_1005bd39b:
    lVar12 = FUN_1005bf9d0(&local_50,&local_48);
    local_88 = CONCAT44(*(undefined4 *)(lVar12 + 8),(undefined4)local_88);
  }
  pCVar1 = (CdDvdInfo *)(param_1 + 0x78);
  COsInstallationInfo::setCdInfo(pCVar1);
  puVar14 = (undefined4 *)FUN_1005bf9d0(&local_50,&local_48);
  uVar11 = *puVar14;
  lVar12 = FUN_1005bf9d0(&local_50,&local_48);
  uVar3 = *(undefined4 *)(lVar12 + 4);
  *(int *)(param_1 + 0x60) = iVar20;
  *(undefined4 *)(param_1 + 100) = uVar11;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  if (iVar20 - 1U < 3) {
    FUN_1005b82f0(param_1,uVar11);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0xff) {
      *(undefined4 *)(param_1 + 0x38) = 0xff;
      FUN_100840290(param_1,0xff);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_1005bf9d0(&local_50,&local_48);
  COsInstallationInfo::setLocale((QString *)pCVar1);
  FUN_1005bf9d0(&local_50,&local_48);
  COsInstallationInfo::setVolumeLicense(SUB81(pCVar1,0));
  FUN_1005bf9d0(&local_50,&local_48);
  COsInstallationInfo::setOsEditions((QStringList *)pCVar1);
  FUN_1005bf9d0(&local_50,&local_48);
  COsInstallationInfo::setUserFriendlyOsEditions((QStringList *)pCVar1);
  if (*(char *)(param_1 + 0x148) == '\0') {
    puVar14 = (undefined4 *)FUN_1005bf9d0(&local_50,&local_48);
    uVar11 = *puVar14;
    lVar12 = FUN_1005bf9d0(&local_50,&local_48);
    bVar8 = FUN_10011a7e0(uVar11,*(undefined4 *)(lVar12 + 8));
    *(uint *)(param_1 + 0x54) = (uint)bVar8 * 2;
    if ((*(char *)(param_1 + 0x148) != '\0') ||
       ((local_88._4_4_ != 1 &&
        (lVar12 = FUN_1005bf9d0(&local_50,&local_48), *(int *)(lVar12 + 4) == 0))))
    goto LAB_1005bd51a;
    puVar14 = (undefined4 *)FUN_1005bf9d0(&local_50,&local_48);
    FUN_1005b82f0(param_1,*puVar14);
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0;
LAB_1005bd51a:
    FUN_1005b82f0(param_1,param_2);
  }
  if ((iVar2 != 3) && (*(char *)(param_1 + 0x148) == '\0')) {
    *(undefined1 *)(param_1 + 0x6c) = 1;
  }
  uVar15 = FUN_1005bf9d0(&local_50,&local_48);
  FUN_1005b8430(param_1,uVar15);
  if ((((iVar2 == 3) && (*(long *)(param_1 + 0x40) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) && (*(long *)(param_1 + 0x48) != 0)) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar20 = CVmCommonOptions::getOsType();
    if (iVar20 == 8) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmCommonOptions();
      uVar9 = CVmCommonOptions::getOsVersion();
      if (((uVar9 < 0x80f) ||
          (lVar12 = FUN_1005bf9d0(&local_50,&local_48), (*(byte *)(lVar12 + 4) & 1) == 0)) ||
         (lVar12 = FUN_1005bf9d0(&local_50,&local_48), (*(byte *)(lVar12 + 4) & 2) == 0))
      goto LAB_1005bd600;
      plVar19 = (long *)0x0;
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (plVar19 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
        plVar19 = *(long **)(param_1 + 0x48);
      }
      pcVar5 = *(code **)(*plVar19 + 0x88);
      local_f8 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.Bios.EfiEnabled",0x20);
      QVariant::QVariant(&local_108,false);
      (*pcVar5)(plVar19,&local_f8,&local_108,0);
      QVariant::~QVariant(&local_108);
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005bd753;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
    }
    else {
LAB_1005bd600:
      plVar19 = (long *)0x0;
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (plVar19 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
        plVar19 = *(long **)(param_1 + 0x48);
      }
      pcVar5 = *(code **)(*plVar19 + 0x80);
      local_120 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.Bios.EfiEnabled",0x20);
      (*pcVar5)(&local_118,plVar19,&local_120);
      cVar7 = QVariant::toBool();
      QVariant::~QVariant(&local_118);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005bd69d;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_1005bd69d:
      if (cVar7 == '\0') {
        plVar19 = (long *)0x0;
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (plVar19 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
          plVar19 = *(long **)(param_1 + 0x48);
        }
        pcVar5 = *(code **)(*plVar19 + 0x88);
        local_128 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.Bios.EfiEnabled",0x20)
        ;
        lVar12 = FUN_1005bf9d0(&local_50,&local_48);
        QVariant::QVariant(&local_138,*(bool *)(lVar12 + 0x45));
        (*pcVar5)(plVar19,&local_128,&local_138,0);
        QVariant::~QVariant(&local_138);
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005bd753;
          }
          QArrayData::deallocate(local_128,2,8);
        }
      }
    }
LAB_1005bd753:
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmStartupOptions();
    CVmStartupOptions::getBootDeviceList();
    local_158 = local_160;
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 == 0) {
        QListData::detach((int)&local_158);
        lVar12 = (long)*(int *)(local_158 + 8);
        if ((local_160 + (long)*(int *)(local_160 + 8) * 8 != local_158 + lVar12 * 8) &&
           (lVar17 = *(int *)(local_158 + 0xc) - lVar12,
           lVar17 != 0 && lVar12 <= *(int *)(local_158 + 0xc))) {
          _memcpy(local_158 + lVar12 * 8 + 0x10,local_160 + (long)*(int *)(local_160 + 8) * 8 + 0x10
                  ,lVar17 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + 1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
      }
    }
    local_150 = local_158 + (long)*(int *)(local_158 + 8) * 8 + 0x10;
    local_148 = local_158 + (long)*(int *)(local_158 + 0xc) * 8 + 0x10;
    local_140 = 1;
    if (*(int *)local_160 == -1) {
LAB_1005bdb4c:
      for (; local_150 != local_148; local_150 = local_150 + 8) {
        lVar12 = *(long *)local_150;
        if ((lVar12 != 0) && (iVar20 = BootDevice::getType(), iVar20 == 0xf)) {
          BootDevice::setInUse(SUB81(lVar12,0));
        }
        local_140 = 1;
      }
    }
    else {
      if (*(int *)local_160 == 0) {
LAB_1005bdb06:
        QListData::dispose(local_160);
      }
      else {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1005bdb06;
      }
      if (local_140 != 0) goto LAB_1005bdb4c;
    }
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_31 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bdbe1;
      }
      QListData::dispose(local_158);
    }
LAB_1005bdbe1:
    CVmConfiguration::getVmSettings();
    QVar16.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmSettings::getVmStartupOptions();
    local_168 = (QArrayData *)local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    CVmStartupOptionsBase::setExternalDeviceSystemName(QVar16);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bdc66;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_1005bdc66:
    uVar15 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar15 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar15 = *(undefined8 *)(param_1 + 0x18);
    }
    lVar12 = FUN_10015a340(uVar15);
    plVar19 = *(long **)(lVar12 + 0x180);
    local_188 = (Data *)*plVar19;
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 == 0) {
        QListData::detach((int)&local_188);
        lVar17 = (long)*(int *)(local_188 + 8);
        lVar12 = *plVar19;
        if (((Data *)(lVar12 + (long)*(int *)(lVar12 + 8) * 8) != local_188 + lVar17 * 8) &&
           (lVar18 = *(int *)(local_188 + 0xc) - lVar17,
           lVar18 != 0 && lVar17 <= *(int *)(local_188 + 0xc))) {
          _memcpy(local_188 + lVar17 * 8 + 0x10,
                  (void *)(lVar12 + 0x10 + (long)*(int *)(lVar12 + 8) * 8),lVar18 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + 1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
      }
    }
    local_180 = local_188 + (long)*(int *)(local_188 + 8) * 8 + 0x10;
    local_178 = local_188 + (long)*(int *)(local_188 + 0xc) * 8 + 0x10;
    local_170 = 1;
    if (*(int *)(local_188 + 8) != *(int *)(local_188 + 0xc)) {
      do {
        if (local_170 != 0) {
          plVar19 = *(long **)local_180;
          (**(code **)(*plVar19 + 0xb8))(&local_190,plVar19);
          cVar7 = operator==(&local_190,&local_48);
          if (*(int *)local_190.field0_0x0 != -1) {
            if (*(int *)local_190.field0_0x0 != 0) {
              LOCK();
              *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
              local_31 = *(int *)local_190.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005bdda3;
            }
            QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
          }
LAB_1005bdda3:
          if (cVar7 == '\0') {
            local_170 = 0;
          }
          else {
            (**(code **)(*plVar19 + 0xb8))(&local_198,plVar19);
            (**(code **)(*plVar19 + 0xa8))(&local_1a0,plVar19);
            CVmConfiguration::getVmIdentification();
            CVmIdentification::getVmUuid();
            FUN_1001b10f0(&local_198,&local_1a0,2,&local_1a8);
            if (*(int *)local_1a8 != -1) {
              if (*(int *)local_1a8 != 0) {
                LOCK();
                *(int *)local_1a8 = *(int *)local_1a8 + -1;
                local_31 = *(int *)local_1a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005bde58;
              }
              QArrayData::deallocate(local_1a8,2,8);
            }
LAB_1005bde58:
            if (*(int *)local_1a0 != -1) {
              if (*(int *)local_1a0 != 0) {
                LOCK();
                *(int *)local_1a0 = *(int *)local_1a0 + -1;
                local_31 = *(int *)local_1a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005bde8e;
              }
              QArrayData::deallocate(local_1a0,2,8);
            }
LAB_1005bde8e:
            if (*(int *)local_198 != -1) {
              if (*(int *)local_198 != 0) {
                LOCK();
                *(int *)local_198 = *(int *)local_198 + -1;
                local_31 = *(int *)local_198 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005bdeda;
              }
              QArrayData::deallocate(local_198,2,8);
            }
          }
        }
LAB_1005bdeda:
        local_180 = local_180 + 8;
        uVar9 = local_170 ^ 1;
        bVar21 = local_170 != 1;
        local_170 = uVar9;
      } while ((bVar21) && (local_180 != local_178));
    }
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bdf3b;
      }
      QListData::dispose(local_188);
    }
  }
  else if (((local_1e8 != '\0') && (*(long *)(param_1 + 0x40) != 0)) &&
          ((*(int *)(*(long *)(param_1 + 0x40) + 4) != 0 && (*(long *)(param_1 + 0x48) != 0)))) {
    uVar15 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar15 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar15 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_100110c60(&local_1b8,uVar15,*(long *)(param_1 + 0x48),6);
    QVar16.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    if (local_1b8 != 0) {
      QVar16.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)
           ___dynamic_cast(local_1b8,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1648,0);
    }
    local_1c8 = (QArrayData *)param_3->field0_0x0;
    if (1 < *(int *)local_1c8 + 1U) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + 1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
    }
    local_1c0 = QVar16.field0_0x0;
    CVmDevice::setSystemName(QVar16);
    if (*(int *)local_1c8 != -1) {
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        local_31 = *(int *)local_1c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bd8f1;
      }
      QArrayData::deallocate(local_1c8,2,8);
    }
LAB_1005bd8f1:
    local_1d0 = (QArrayData *)param_3->field0_0x0;
    if (1 < *(int *)local_1d0 + 1U) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + 1;
      local_31 = *(int *)local_1d0 != 0;
      UNLOCK();
    }
    CVmDevice::setUserFriendlyName(QVar16);
    if (*(int *)local_1d0 != -1) {
      if (*(int *)local_1d0 != 0) {
        LOCK();
        *(int *)local_1d0 = *(int *)local_1d0 + -1;
        local_31 = *(int *)local_1d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bd951;
      }
      QArrayData::deallocate(local_1d0,2,8);
    }
LAB_1005bd951:
    lVar12 = CVmConfiguration::getVmHardwareList();
    FUN_10019ac70(lVar12 + 0x1b0,&local_1c0);
    CVmConfiguration::getVmSettings();
    lVar12 = CVmSettings::getVmStartupOptions();
    uVar15 = *(undefined8 *)(lVar12 + 0x100);
    this = operator_new(0xd8);
    uVar11 = CVmDevice::getIndex();
    BootDevice::BootDevice(this);
    *(BootDevice **)(this + 0xb8) = this + 0xac;
    *(BootDevice **)(this + 0xc0) = this + 0xa8;
    *(BootDevice **)(this + 200) = this + 0xb0;
    *(BootDevice **)(this + 0xd0) = this + 0xb4;
    *(undefined4 *)(this + 0xac) = 6;
    *(undefined4 *)(this + 0xa8) = uVar11;
    *(undefined4 *)(this + 0xb0) = 1;
    this[0xb4] = (BootDevice)0x1;
    puVar6 = PTR_DAT_1021e1818;
    *(undefined **)this = PTR_DAT_1021e1818 + 0x10;
    *(undefined **)(this + 0x10) = puVar6 + 200;
    local_1d8 = this;
    FUN_1005bfc30(uVar15,1,&local_1d8);
    *(undefined1 *)(param_1 + 0x1a0) = 1;
    if (*(int *)(local_1b0 + 0x10) != -1) {
      if (*(int *)(local_1b0 + 0x10) != 0) {
        LOCK();
        pcVar5 = local_1b0 + 0x10;
        *(int *)pcVar5 = *(int *)pcVar5 + -1;
        local_31 = *(int *)pcVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bdf3b;
      }
      QHashData::free_helper(local_1b0);
    }
  }
LAB_1005bdf3b:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bdf71;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1005bdf71:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bdfa7;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1005bdfa7:
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar5 = local_50 + 0x10;
      *(int *)pcVar5 = *(int *)pcVar5 + -1;
      local_31 = *(int *)pcVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bdfd2;
    }
    QHashData::free_helper(local_50);
  }
LAB_1005bdfd2:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

