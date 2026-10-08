
void FUN_1003f1760(long param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  size_t sVar10;
  undefined8 uVar11;
  QVariant *pQVar12;
  long *plVar13;
  long lVar14;
  bool *pbVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  Data *pDVar22;
  Data *pDVar23;
  ulong uVar24;
  QString *pQVar25;
  bool bVar26;
  QVariant QVar27;
  QVariant QVar28;
  QVariant QVar29;
  QVariant QVar30;
  undefined1 local_5b1;
  undefined1 local_5b0 [16];
  QString local_5a0;
  QString local_598;
  undefined4 local_58c;
  undefined1 local_588 [16];
  QString local_578;
  QString local_570;
  ulong local_568;
  undefined1 local_560 [16];
  QString local_550;
  QString local_548;
  undefined4 local_53c;
  undefined1 local_538 [16];
  QString local_528;
  QString local_520;
  QVariant local_518;
  QArrayData *local_508;
  QArrayData *local_500;
  QArrayData *local_4f8;
  QString local_4f0;
  QArrayData *local_4e8;
  QArrayData *local_4e0;
  Data *local_4d8;
  Data *local_4d0;
  Data *local_4c8;
  undefined4 local_4c0;
  QString local_4b8;
  Data_conflict local_4b0;
  undefined4 local_4a8;
  QArrayData *local_4a0;
  int *local_498;
  QString *local_490;
  QString *local_488;
  undefined4 local_480;
  QString local_478;
  QArrayData *local_470;
  QArrayData *local_468;
  int *local_460;
  int *local_458;
  int *local_450;
  int *local_448;
  int local_440;
  int *local_438;
  undefined1 local_430 [8];
  Data *local_428;
  BootDevice local_420 [104];
  undefined4 local_3b8;
  int local_368;
  int local_364;
  QString local_360;
  QVariant local_358;
  QArrayData *local_348;
  QArrayData *local_340;
  QArrayData *local_338;
  QArrayData *local_330;
  Data *local_328;
  Data *local_320;
  Data *local_318;
  undefined4 local_310;
  Data *local_308;
  Data *local_300;
  Data *local_2f8;
  Data *local_2f0;
  int local_2e8;
  BootDevice local_2e0 [104];
  undefined4 local_278;
  QString local_228;
  QVariant local_220;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QString local_1e8;
  QHash local_1e0 [16];
  QArrayData *local_1d0;
  QString local_1c8;
  QHash local_1c0 [16];
  QArrayData *local_1b0;
  QString local_1a8;
  QHash local_1a0 [16];
  QArrayData *local_190;
  int local_184;
  QString local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  int *local_168;
  int *local_160;
  QString *local_158;
  QString *local_150;
  int local_148;
  Data *local_140;
  QArrayData *local_138;
  QString local_130;
  QHash local_128 [16];
  QString local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  int *local_f8;
  int *local_f0;
  int *local_e8;
  int *local_e0;
  int local_d8;
  QString local_d0;
  QString local_c8;
  Data_conflict local_c0;
  undefined4 local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  Data *local_70;
  Data *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  bool local_31;
  
  puVar3 = PTR_s_VmConfig_1021f1e00;
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e15d0;
  iVar6 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar10 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar6 = (int)sVar10;
  }
  local_a8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  uVar11 = FUN_1003ae480(&local_a0,&local_a8);
  puVar4 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
  iVar6 = -1;
  if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
    sVar10 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
    iVar6 = (int)sVar10;
  }
  local_b0 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar6);
  pQVar12 = (QVariant *)FUN_1002edf40(uVar11,&local_b0);
  local_b8 = 0x80000000;
  local_c0.field7 = 0;
  QVariant::operator=(pQVar12,(QVariant *)&local_c0);
  QVariant::~QVariant((QVariant *)&local_c0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003f1873;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1003f1873:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003f18a9;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003f18a9:
  plVar13 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*plVar13 + 0x68))(plVar13,&local_a0);
  puVar4 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
  iVar6 = -1;
  if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
    sVar10 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
    iVar6 = (int)sVar10;
  }
  local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar4,iVar6);
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  MappingHelpers::removePath((QHash *)&local_a0,&local_c8,&local_d0);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003f195b;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1003f195b:
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003f1991;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_1003f1991:
  iVar6 = -1;
  if (puVar3 != (undefined *)0x0) {
    sVar10 = _strlen(puVar3);
    iVar6 = (int)sVar10;
  }
  local_100 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  uVar11 = FUN_1003ae480(&local_a0,&local_100);
  FUN_1000626e0(&local_f8,uVar11);
  local_f0 = local_f8;
  if (*local_f8 != -1) {
    if (*local_f8 == 0) {
      QListData::detach((int)&local_f0);
      iVar6 = local_f0[2];
      if (iVar6 != local_f0[3]) {
        local_f8 = local_f8 + (long)local_f8[2] * 2 + 4;
        piVar18 = local_f0 + (long)iVar6 * 2 + 4;
        lVar14 = (long)local_f0[3] * 8 + (long)iVar6 * -8;
        do {
          piVar21 = *(int **)local_f8;
          *(int **)piVar18 = piVar21;
          if (1 < *piVar21 + 1U) {
            LOCK();
            *piVar21 = *piVar21 + 1;
            local_31 = *piVar21 != 0;
            UNLOCK();
          }
          piVar18 = piVar18 + 2;
          local_f8 = local_f8 + 2;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
    }
    else {
      LOCK();
      *local_f8 = *local_f8 + 1;
      local_31 = *local_f8 != 0;
      UNLOCK();
    }
  }
  local_e8 = local_f0 + (long)local_f0[2] * 2 + 4;
  local_e0 = local_f0 + (long)local_f0[3] * 2 + 4;
  local_d8 = 1;
  FUN_100039a80(&local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003f1ae2;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1003f1ae2:
  uVar9 = 0xc;
  if (local_d8 != 0) {
    uVar9 = 0xc;
    if (local_e8 == local_e0) {
      uVar9 = 0xc;
    }
    else {
      do {
        piVar18 = local_e8;
        local_108 = (QArrayData *)QString::fromAscii_helper(".Type",5);
        cVar5 = QString::endsWith(piVar18,&local_108,1);
        if (cVar5 == '\0') {
          bVar26 = false;
        }
        else {
          iVar6 = -1;
          if (puVar3 != (undefined *)0x0) {
            sVar10 = _strlen(puVar3);
            iVar6 = (int)sVar10;
          }
          local_110 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
          uVar11 = FUN_1003ae480(&local_a0,&local_110);
          pbVar15 = (bool *)FUN_1002edf40(uVar11,piVar18);
          iVar6 = QVariant::toLongLong(pbVar15);
          bVar26 = iVar6 == 5;
          if (*(int *)local_110 != -1) {
            if (*(int *)local_110 != 0) {
              LOCK();
              *(int *)local_110 = *(int *)local_110 + -1;
              local_31 = *(int *)local_110 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003f1be2;
            }
            QArrayData::deallocate(local_110,2,8);
          }
        }
LAB_1003f1be2:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f1c18;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_1003f1c18:
        if (bVar26) {
          MappingHelpers::getParentObjectPath(&local_118);
          local_130.field0_0x0 = local_118.field0_0x0;
          if (1 < *(int *)local_118.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
            local_31 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_98,0x1df1fc3);
          QString::append(&local_130);
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003f1cb1;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1003f1cb1:
          iVar6 = -1;
          if (puVar3 != (undefined *)0x0) {
            sVar10 = _strlen(puVar3);
            iVar6 = (int)sVar10;
          }
          local_138 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
          MappingHelpers::getValueByPath(local_128,&local_a0,&local_130);
          uVar7 = QVariant::toUInt((bool *)local_128);
          QVariant::~QVariant((QVariant *)local_128);
          if (*(int *)local_138 != -1) {
            if (*(int *)local_138 != 0) {
              LOCK();
              *(int *)local_138 = *(int *)local_138 + -1;
              local_31 = *(int *)local_138 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003f1d38;
            }
            QArrayData::deallocate(local_138,2,8);
          }
LAB_1003f1d38:
          if (*(int *)local_130.field0_0x0 != -1) {
            if (*(int *)local_130.field0_0x0 != 0) {
              LOCK();
              *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
              local_31 = *(int *)local_130.field0_0x0 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003f1d6e;
            }
            QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
          }
LAB_1003f1d6e:
          if (uVar9 < uVar7) {
            uVar7 = uVar9;
          }
          uVar9 = uVar7;
          if (*(int *)local_118.field0_0x0 != -1) {
            if (*(int *)local_118.field0_0x0 != 0) {
              LOCK();
              *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
              local_31 = *(int *)local_118.field0_0x0 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003f1db3;
            }
            QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
          }
        }
LAB_1003f1db3:
        local_e8 = local_e8 + 2;
        local_d8 = 1;
      } while (local_e8 != local_e0);
    }
  }
  FUN_100039a80(&local_f0);
  piVar18 = (int *)PTR_shared_null_1021e15e8;
  local_140 = (Data *)PTR_shared_null_1021e15e8;
  iVar6 = -1;
  if (puVar3 != (undefined *)0x0) {
    sVar10 = _strlen(puVar3);
    iVar6 = (int)sVar10;
  }
  local_170 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  uVar11 = FUN_1003ae480(&local_a0,&local_170);
  FUN_1000626e0(&local_168,uVar11);
  local_160 = local_168;
  if (*local_168 != -1) {
    if (*local_168 == 0) {
      QListData::detach((int)&local_160);
      iVar6 = local_160[2];
      if (iVar6 != local_160[3]) {
        local_168 = local_168 + (long)local_168[2] * 2 + 4;
        piVar21 = local_160 + (long)iVar6 * 2 + 4;
        lVar14 = (long)local_160[3] * 8 + (long)iVar6 * -8;
        do {
          piVar2 = *(int **)local_168;
          *(int **)piVar21 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar21 = piVar21 + 2;
          local_168 = local_168 + 2;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
    }
    else {
      LOCK();
      *local_168 = *local_168 + 1;
      local_31 = *local_168 != 0;
      UNLOCK();
    }
  }
  local_158 = (QString *)(local_160 + (long)local_160[2] * 2 + 4);
  local_150 = (QString *)(local_160 + (long)local_160[3] * 2 + 4);
  local_148 = 1;
  FUN_100039a80(&local_168);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003f1f62;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1003f1f62:
  if ((local_148 != 0) && (local_158 != local_150)) {
    do {
      pQVar25 = local_158;
      local_178 = (QArrayData *)QString::fromAscii_helper(".Type",5);
      cVar5 = QString::endsWith(pQVar25,&local_178,1);
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f1ffc;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_1003f1ffc:
      if (cVar5 != '\0') {
        MappingHelpers::getParentObjectPath(&local_180);
        iVar6 = -1;
        if (puVar3 != (undefined *)0x0) {
          sVar10 = _strlen(puVar3);
          iVar6 = (int)sVar10;
        }
        local_190 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
        uVar11 = FUN_1003ae480(&local_a0,&local_190);
        pbVar15 = (bool *)FUN_1002edf40(uVar11,pQVar25);
        uVar11 = QVariant::toLongLong(pbVar15);
        if (*(int *)local_190 != -1) {
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            local_31 = *(int *)local_190 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f20a3;
          }
          QArrayData::deallocate(local_190,2,8);
        }
LAB_1003f20a3:
        local_1a8.field0_0x0 = local_180.field0_0x0;
        if (1 < *(int *)local_180.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + 1;
          local_31 = *(int *)local_180.field0_0x0 != 0;
          UNLOCK();
        }
        local_184 = (int)uVar11;
        QString::fromUtf8_helper((char *)&local_90,0x1df1fc3);
        QString::append(&local_1a8);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f2132;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1003f2132:
        iVar6 = -1;
        if (puVar3 != (undefined *)0x0) {
          sVar10 = _strlen(puVar3);
          iVar6 = (int)sVar10;
        }
        local_1b0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
        MappingHelpers::getValueByPath(local_1a0,&local_a0,&local_1a8);
        uVar7 = QVariant::toUInt((bool *)local_1a0);
        QVariant::~QVariant((QVariant *)local_1a0);
        if (*(int *)local_1b0 != -1) {
          if (*(int *)local_1b0 != 0) {
            LOCK();
            *(int *)local_1b0 = *(int *)local_1b0 + -1;
            local_31 = *(int *)local_1b0 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f21c8;
          }
          QArrayData::deallocate(local_1b0,2,8);
        }
LAB_1003f21c8:
        if (*(int *)local_1a8.field0_0x0 != -1) {
          if (*(int *)local_1a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
            local_31 = *(int *)local_1a8.field0_0x0 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f21fe;
          }
          QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
        }
LAB_1003f21fe:
        local_1c8.field0_0x0 = local_180.field0_0x0;
        if (1 < *(int *)local_180.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + 1;
          local_31 = *(int *)local_180.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_88,0x1df2560);
        QString::append(&local_1c8);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f2274;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1003f2274:
        iVar6 = -1;
        if (puVar3 != (undefined *)0x0) {
          sVar10 = _strlen(puVar3);
          iVar6 = (int)sVar10;
        }
        local_1d0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
        MappingHelpers::getValueByPath(local_1c0,&local_a0,&local_1c8);
        uVar8 = QVariant::toUInt((bool *)local_1c0);
        QVariant::~QVariant((QVariant *)local_1c0);
        if (*(int *)local_1d0 != -1) {
          if (*(int *)local_1d0 != 0) {
            LOCK();
            *(int *)local_1d0 = *(int *)local_1d0 + -1;
            local_31 = *(int *)local_1d0 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f230a;
          }
          QArrayData::deallocate(local_1d0,2,8);
        }
LAB_1003f230a:
        if (*(int *)local_1c8.field0_0x0 != -1) {
          if (*(int *)local_1c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
            local_31 = *(int *)local_1c8.field0_0x0 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f2340;
          }
          QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
        }
LAB_1003f2340:
        local_1e8.field0_0x0 = local_180.field0_0x0;
        if (1 < *(int *)local_180.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + 1;
          local_31 = *(int *)local_180.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_80,0x1df256f);
        QString::append(&local_1e8);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f23bc;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1003f23bc:
        iVar6 = -1;
        if (puVar3 != (undefined *)0x0) {
          sVar10 = _strlen(puVar3);
          iVar6 = (int)sVar10;
        }
        local_1f0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
        MappingHelpers::getValueByPath(local_1e0,&local_a0,&local_1e8);
        QVariant::toBool();
        QVariant::~QVariant((QVariant *)local_1e0);
        if (*(int *)local_1f0 != -1) {
          if (*(int *)local_1f0 != 0) {
            LOCK();
            *(int *)local_1f0 = *(int *)local_1f0 + -1;
            local_31 = *(int *)local_1f0 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f2449;
          }
          QArrayData::deallocate(local_1f0,2,8);
        }
LAB_1003f2449:
        if (*(int *)local_1e8.field0_0x0 != -1) {
          if (*(int *)local_1e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
            local_31 = *(int *)local_1e8.field0_0x0 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f2486;
          }
          QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
        }
LAB_1003f2486:
        uVar16 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
        lVar14 = FUN_10010dec0(uVar16,uVar11,uVar7);
        bVar26 = false;
        if ((lVar14 != 0) && (bVar26 = false, (int)uVar11 == 5)) {
          local_208 = (QArrayData *)QString::fromAscii_helper("Hardware.%1[%2]",0xf);
          FUN_1003b0eb0(&local_210,5);
          QString::arg(&local_200,&local_208,&local_210,0,0x20);
          QString::arg(&local_1f8,&local_200,(long)*(int *)(lVar14 + 0x68),0,10,0x20);
          if (*(int *)local_200 != -1) {
            if (*(int *)local_200 != 0) {
              LOCK();
              *(int *)local_200 = *(int *)local_200 + -1;
              local_31 = *(int *)local_200 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003f2570;
            }
            QArrayData::deallocate(local_200,2,8);
          }
LAB_1003f2570:
          if (*(int *)local_210 != -1) {
            if (*(int *)local_210 != 0) {
              LOCK();
              *(int *)local_210 = *(int *)local_210 + -1;
              local_31 = *(int *)local_210 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003f25a6;
            }
            QArrayData::deallocate(local_210,2,8);
          }
LAB_1003f25a6:
          if (*(int *)local_208 != -1) {
            if (*(int *)local_208 != 0) {
              LOCK();
              *(int *)local_208 = *(int *)local_208 + -1;
              local_31 = *(int *)local_208 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003f25dc;
            }
            QArrayData::deallocate(local_208,2,8);
          }
LAB_1003f25dc:
          uVar16 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
          local_228.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_1f8;
          if (1 < *(int *)local_1f8 + 1U) {
            LOCK();
            *(int *)local_1f8 = *(int *)local_1f8 + 1;
            local_31 = *(int *)local_1f8 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_78,0x1df17d1);
          QString::append(&local_228);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003f2665;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_1003f2665:
          FUN_1003e1800(&local_220,uVar16,&local_228,0);
          iVar6 = QVariant::toLongLong((bool *)&local_220);
          QVariant::~QVariant(&local_220);
          if (*(int *)local_228.field0_0x0 != -1) {
            if (*(int *)local_228.field0_0x0 != 0) {
              LOCK();
              *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + -1;
              local_31 = *(int *)local_228.field0_0x0 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003f26cb;
            }
            QArrayData::deallocate((QArrayData *)local_228.field0_0x0,2,8);
          }
LAB_1003f26cb:
          bVar26 = uVar7 != uVar9 || iVar6 == 1;
          if (*(int *)local_1f8 != -1) {
            if (*(int *)local_1f8 != 0) {
              LOCK();
              *(int *)local_1f8 = *(int *)local_1f8 + -1;
              local_31 = *(int *)local_1f8 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003f271e;
            }
            QArrayData::deallocate(local_1f8,2,8);
          }
        }
LAB_1003f271e:
        if ((lVar14 == 0) || (bVar26)) {
          puVar17 = (undefined4 *)FUN_1003fa0f0(param_1 + 0x48,&local_184);
          *puVar17 = uVar8;
        }
        else {
          BootDevice::BootDevice(local_2e0);
          BootDevice::setType(local_2e0,uVar11);
          uVar7 = (uint)local_2e0;
          BootDevice::setIndex(uVar7);
          BootDevice::setBootingNumber(uVar7);
          BootDevice::setInUse(SUB81(local_2e0,0));
          local_278 = MappingHelpers::getItemIdFromPath(pQVar25);
          FUN_1003df450(&local_140,local_2e0);
          BootDevice::~BootDevice(local_2e0);
        }
        piVar18 = (int *)PTR_shared_null_1021e15e8;
        if (*(int *)local_180.field0_0x0 != -1) {
          if (*(int *)local_180.field0_0x0 != 0) {
            LOCK();
            *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
            local_31 = *(int *)local_180.field0_0x0 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f2800;
          }
          QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
        }
      }
LAB_1003f2800:
      local_158 = local_158 + 1;
      local_148 = 1;
    } while (local_158 != local_150);
  }
  FUN_100039a80(&local_160);
  if (*(uint *)local_140 < 2) {
    pDVar22 = local_140 + (long)(int)*(uint *)(local_140 + 8) * 8 + 0x10;
  }
  else {
    FUN_1003bde60(&local_140,*(uint *)(local_140 + 4));
    pDVar22 = local_140 + (long)(int)*(uint *)(local_140 + 8) * 8 + 0x10;
    if (1 < *(uint *)local_140) {
      FUN_1003bde60(&local_140,*(uint *)(local_140 + 4));
    }
  }
  if (pDVar22 != local_140 + (long)(int)*(uint *)(local_140 + 0xc) * 8 + 0x10) {
    local_70 = local_140 + (long)(int)*(uint *)(local_140 + 0xc) * 8 + 0x10;
    local_68 = pDVar22;
    FUN_1003bdf40(&local_68,&local_70,*(undefined8 *)pDVar22,FUN_1003ba1a0);
  }
  if (1 < *(uint *)local_140) {
    FUN_1003bde60(&local_140,*(uint *)(local_140 + 4));
  }
  pDVar22 = local_140 + (long)(int)*(uint *)(local_140 + 8) * 8 + 0x10;
  while( true ) {
    if (1 < *(uint *)local_140) {
      FUN_1003bde60(&local_140,*(uint *)(local_140 + 4));
    }
    if (pDVar22 == local_140 + (long)(int)*(uint *)(local_140 + 0xc) * 8 + 0x10) break;
    BootDevice::setBootingNumber((uint)*(undefined8 *)pDVar22);
    pDVar22 = pDVar22 + 8;
  }
  FUN_1003b1cf0(&local_308,*(undefined8 *)(param_1 + 0x18));
  FUN_1003bdc60(&local_300,&local_308);
  local_2f8 = local_300 + (long)*(int *)(local_300 + 8) * 8 + 0x10;
  local_2f0 = local_300 + (long)*(int *)(local_300 + 0xc) * 8 + 0x10;
  local_2e8 = 1;
  if (*(int *)local_308 == -1) {
LAB_1003f2a0c:
    if (local_2f8 != local_2f0) {
      do {
        uVar9 = **(uint **)local_2f8;
        uVar24 = (ulong)uVar9;
        FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
        lVar14 = CVmConfiguration::getVmHardwareList();
        plVar13 = *(long **)(lVar14 + 0xa8 + uVar24 * 8);
        local_328 = (Data *)*plVar13;
        if (*(int *)local_328 != -1) {
          if (*(int *)local_328 == 0) {
            QListData::detach((int)&local_328);
            lVar19 = (long)*(int *)(local_328 + 8);
            lVar14 = *plVar13;
            if (((Data *)(lVar14 + (long)*(int *)(lVar14 + 8) * 8) != local_328 + lVar19 * 8) &&
               (lVar20 = *(int *)(local_328 + 0xc) - lVar19,
               lVar20 != 0 && lVar19 <= *(int *)(local_328 + 0xc))) {
              _memcpy(local_328 + lVar19 * 8 + 0x10,
                      (void *)(lVar14 + 0x10 + (long)*(int *)(lVar14 + 8) * 8),lVar20 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_328 = *(int *)local_328 + 1;
            UNLOCK();
            local_31 = *(int *)local_328 != 0;
          }
        }
        local_320 = local_328 + (long)*(int *)(local_328 + 8) * 8 + 0x10;
        local_318 = local_328 + (long)*(int *)(local_328 + 0xc) * 8 + 0x10;
        local_310 = 1;
        if (*(int *)(local_328 + 8) != *(int *)(local_328 + 0xc)) {
          do {
            local_310 = 1;
            lVar14 = *(long *)local_320;
            if (lVar14 != 0) {
              if (uVar9 == 5) {
                local_340 = (QArrayData *)QString::fromAscii_helper("Hardware.%1[%2]",0xf);
                FUN_1003b0eb0(&local_348,5);
                QString::arg(&local_338,&local_340,&local_348,0,0x20);
                QString::arg(&local_330,&local_338,(long)*(int *)(lVar14 + 0x68),0,10,0x20);
                if (*(int *)local_338 != -1) {
                  if (*(int *)local_338 != 0) {
                    LOCK();
                    *(int *)local_338 = *(int *)local_338 + -1;
                    local_31 = *(int *)local_338 != 0;
                    UNLOCK();
                    if (local_31) goto LAB_1003f2ba9;
                  }
                  QArrayData::deallocate(local_338,2,8);
                }
LAB_1003f2ba9:
                if (*(int *)local_348 != -1) {
                  if (*(int *)local_348 != 0) {
                    LOCK();
                    *(int *)local_348 = *(int *)local_348 + -1;
                    local_31 = *(int *)local_348 != 0;
                    UNLOCK();
                    if (local_31) goto LAB_1003f2bdf;
                  }
                  QArrayData::deallocate(local_348,2,8);
                }
LAB_1003f2bdf:
                if (*(int *)local_340 != -1) {
                  if (*(int *)local_340 != 0) {
                    LOCK();
                    *(int *)local_340 = *(int *)local_340 + -1;
                    local_31 = *(int *)local_340 != 0;
                    UNLOCK();
                    if (local_31) goto LAB_1003f2c15;
                  }
                  QArrayData::deallocate(local_340,2,8);
                }
LAB_1003f2c15:
                uVar11 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
                local_360.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_330;
                if (1 < *(int *)local_330 + 1U) {
                  LOCK();
                  *(int *)local_330 = *(int *)local_330 + 1;
                  local_31 = *(int *)local_330 != 0;
                  UNLOCK();
                }
                QString::fromUtf8_helper((char *)&local_60,0x1df17d1);
                QString::append(&local_360);
                if (*(int *)local_60 != -1) {
                  if (*(int *)local_60 != 0) {
                    LOCK();
                    *(int *)local_60 = *(int *)local_60 + -1;
                    local_31 = *(int *)local_60 != 0;
                    UNLOCK();
                    if (local_31) goto LAB_1003f2c9c;
                  }
                  QArrayData::deallocate(local_60,2,8);
                }
LAB_1003f2c9c:
                FUN_1003e1800(&local_358,uVar11,&local_360,0);
                iVar6 = QVariant::toLongLong((bool *)&local_358);
                QVariant::~QVariant(&local_358);
                if (*(int *)local_360.field0_0x0 != -1) {
                  if (*(int *)local_360.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_360.field0_0x0 = *(int *)local_360.field0_0x0 + -1;
                    UNLOCK();
                    local_31 = *(int *)local_360.field0_0x0 != 0;
                    if (*(int *)local_360.field0_0x0 != 0) goto LAB_1003f2cfb;
                  }
                  QArrayData::deallocate((QArrayData *)local_360.field0_0x0,2,8);
                }
LAB_1003f2cfb:
                bVar26 = iVar6 == 1;
                if (*(int *)local_330 != -1) {
                  if (*(int *)local_330 != 0) {
                    LOCK();
                    *(int *)local_330 = *(int *)local_330 + -1;
                    UNLOCK();
                    local_31 = *(int *)local_330 != 0;
                    if (*(int *)local_330 != 0) goto LAB_1003f2d3b;
                  }
                  QArrayData::deallocate(local_330,2,8);
                }
              }
              else {
                bVar26 = false;
              }
LAB_1003f2d3b:
              local_368 = -1;
              lVar14 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
              lVar19 = 0;
              if (lVar14 == 0) {
LAB_1003f2da1:
                lVar20 = 0;
              }
              else {
                do {
                  while (lVar20 = lVar14, iVar6 = *(int *)(lVar20 + 0x18), (int)uVar9 <= iVar6) {
                    lVar14 = *(long *)(lVar20 + 8);
                    lVar19 = lVar20;
                    if (*(long *)(lVar20 + 8) == 0) goto LAB_1003f2d9c;
                  }
                  lVar14 = *(long *)(lVar20 + 0x10);
                } while (*(long *)(lVar20 + 0x10) != 0);
                if (lVar19 == 0) goto LAB_1003f2da1;
                iVar6 = *(int *)(lVar19 + 0x18);
                lVar20 = lVar19;
LAB_1003f2d9c:
                if ((int)uVar9 < iVar6) goto LAB_1003f2da1;
              }
              piVar18 = (int *)(lVar20 + 0x1c);
              if (lVar20 == 0) {
                piVar18 = &local_368;
              }
              local_364 = *piVar18;
              if (!bVar26) {
                uVar11 = *(undefined8 *)(param_1 + 0x18);
                uVar8 = CVmDevice::getIndex();
                cVar5 = FUN_1003ba1d0(uVar11,&local_140,uVar24,uVar8,&local_364);
                if (cVar5 != '\0') {
                  BootDevice::BootDevice(local_420);
                  BootDevice::setType(local_420,uVar24);
                  CVmDevice::getIndex();
                  uVar7 = (uint)local_420;
                  BootDevice::setIndex(uVar7);
                  BootDevice::setBootingNumber(uVar7);
                  BootDevice::setInUse(SUB81(local_420,0));
                  local_3b8 = 0xffffffff;
                  if (1 < *(uint *)local_140) {
                    FUN_1003bde60(&local_140,*(uint *)(local_140 + 4));
                  }
                  pDVar22 = local_140 + (long)(int)*(uint *)(local_140 + 8) * 8 + 0x10;
                  while( true ) {
                    if (1 < *(uint *)local_140) {
                      FUN_1003bde60(&local_140,*(uint *)(local_140 + 4));
                    }
                    if (pDVar22 == local_140 + (long)(int)*(uint *)(local_140 + 0xc) * 8 + 0x10) {
                      FUN_1003df450(&local_140,local_420);
                      goto LAB_1003f2f0c;
                    }
                    iVar6 = BootDevice::getBootingNumber();
                    if (local_364 <= iVar6) break;
                    pDVar22 = pDVar22 + 8;
                  }
                  local_428 = pDVar22;
                  FUN_1003fa210(local_430,&local_140,&local_428,local_420);
LAB_1003f2f0c:
                  if (1 < *(uint *)local_140) {
                    FUN_1003bde60(&local_140,*(uint *)(local_140 + 4));
                  }
                  pDVar22 = local_140 + (long)(int)*(uint *)(local_140 + 8) * 8 + 0x10;
                  while( true ) {
                    if (1 < *(uint *)local_140) {
                      FUN_1003bde60(&local_140,*(uint *)(local_140 + 4));
                    }
                    if (pDVar22 == local_140 + (long)(int)*(uint *)(local_140 + 0xc) * 8 + 0x10)
                    break;
                    BootDevice::setBootingNumber((uint)*(undefined8 *)pDVar22);
                    pDVar22 = pDVar22 + 8;
                  }
                  BootDevice::~BootDevice(local_420);
                }
              }
            }
            local_320 = local_320 + 8;
            local_310 = 1;
          } while (local_320 != local_318);
        }
        local_310 = 1;
        if (*(int *)local_328 != -1) {
          if (*(int *)local_328 != 0) {
            LOCK();
            *(int *)local_328 = *(int *)local_328 + -1;
            local_31 = *(int *)local_328 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f2fe5;
          }
          QListData::dispose(local_328);
        }
LAB_1003f2fe5:
        local_2f8 = local_2f8 + 8;
        local_2e8 = 1;
        piVar18 = (int *)PTR_shared_null_1021e15e8;
      } while (local_2f8 != local_2f0);
    }
  }
  else {
    if (*(int *)local_308 == 0) {
LAB_1003f29bc:
      iVar6 = *(int *)(local_308 + 0xc);
      if (iVar6 != *(int *)(local_308 + 8)) {
        lVar14 = (long)*(int *)(local_308 + 8) * 8 + (long)iVar6 * -8;
        pDVar22 = local_308 + (long)iVar6 * 8 + 8;
        do {
          if (*(void **)pDVar22 != (void *)0x0) {
            operator_delete(*(void **)pDVar22);
          }
          pDVar22 = pDVar22 + -8;
          lVar14 = lVar14 + 8;
        } while (lVar14 != 0);
      }
      QListData::dispose(local_308);
    }
    else {
      LOCK();
      *(int *)local_308 = *(int *)local_308 + -1;
      local_31 = *(int *)local_308 != 0;
      UNLOCK();
      if (!local_31) goto LAB_1003f29bc;
    }
    if (local_2e8 != 0) goto LAB_1003f2a0c;
  }
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_31 = *(int *)local_300 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003f307f;
    }
    iVar6 = *(int *)(local_300 + 0xc);
    if (iVar6 != *(int *)(local_300 + 8)) {
      lVar14 = (long)*(int *)(local_300 + 8) * 8 + (long)iVar6 * -8;
      pDVar22 = local_300 + (long)iVar6 * 8 + 8;
      do {
        if (*(void **)pDVar22 != (void *)0x0) {
          operator_delete(*(void **)pDVar22);
        }
        pDVar22 = pDVar22 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose(local_300);
  }
LAB_1003f307f:
  if (1 < *(uint *)local_140) {
    FUN_1003bde60(&local_140,*(uint *)(local_140 + 4));
  }
  pDVar22 = local_140 + (long)(int)*(uint *)(local_140 + 8) * 8 + 0x10;
  while( true ) {
    if (1 < *(uint *)local_140) {
      FUN_1003bde60(&local_140,*(uint *)(local_140 + 4));
    }
    if (pDVar22 == local_140 + (long)(int)*(uint *)(local_140 + 0xc) * 8 + 0x10) break;
    BootDevice::setBootingNumber((uint)*(undefined8 *)pDVar22);
    pDVar22 = pDVar22 + 8;
  }
  iVar6 = -1;
  local_438 = piVar18;
  if (puVar3 != (undefined *)0x0) {
    sVar10 = _strlen(puVar3);
    iVar6 = (int)sVar10;
  }
  local_468 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  uVar11 = FUN_1003ae480(&local_a0,&local_468);
  FUN_1000626e0(&local_460,uVar11);
  local_458 = local_460;
  if (*local_460 != -1) {
    if (*local_460 == 0) {
      QListData::detach((int)&local_458);
      iVar6 = local_458[2];
      if (iVar6 != local_458[3]) {
        local_460 = local_460 + (long)local_460[2] * 2 + 4;
        piVar18 = local_458 + (long)iVar6 * 2 + 4;
        lVar14 = (long)local_458[3] * 8 + (long)iVar6 * -8;
        do {
          piVar21 = *(int **)local_460;
          *(int **)piVar18 = piVar21;
          if (1 < *piVar21 + 1U) {
            LOCK();
            *piVar21 = *piVar21 + 1;
            local_31 = *piVar21 != 0;
            UNLOCK();
          }
          piVar18 = piVar18 + 2;
          local_460 = local_460 + 2;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
    }
    else {
      LOCK();
      *local_460 = *local_460 + 1;
      local_31 = *local_460 != 0;
      UNLOCK();
    }
  }
  local_450 = local_458 + (long)local_458[2] * 2 + 4;
  local_448 = local_458 + (long)local_458[3] * 2 + 4;
  local_440 = 1;
  FUN_100039a80(&local_460);
  if (*(int *)local_468 != -1) {
    if (*(int *)local_468 != 0) {
      LOCK();
      *(int *)local_468 = *(int *)local_468 + -1;
      local_31 = *(int *)local_468 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003f3343;
    }
    QArrayData::deallocate(local_468,2,8);
  }
LAB_1003f3343:
  if ((local_440 != 0) && (local_450 != local_448)) {
    do {
      piVar18 = local_450;
      local_470 = (QArrayData *)QString::fromAscii_helper(".Type",5);
      cVar5 = QString::endsWith(piVar18,&local_470,1);
      if (*(int *)local_470 != -1) {
        if (*(int *)local_470 != 0) {
          LOCK();
          *(int *)local_470 = *(int *)local_470 + -1;
          local_31 = *(int *)local_470 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f33d6;
        }
        QArrayData::deallocate(local_470,2,8);
      }
LAB_1003f33d6:
      if (cVar5 != '\0') {
        MappingHelpers::getParentObjectPath(&local_478);
        FUN_1000341d0(&local_438,&local_478);
        if (*(int *)local_478.field0_0x0 != -1) {
          if (*(int *)local_478.field0_0x0 != 0) {
            LOCK();
            *(int *)local_478.field0_0x0 = *(int *)local_478.field0_0x0 + -1;
            local_31 = *(int *)local_478.field0_0x0 != 0;
            UNLOCK();
            if (local_31) goto LAB_1003f342b;
          }
          QArrayData::deallocate((QArrayData *)local_478.field0_0x0,2,8);
        }
      }
LAB_1003f342b:
      local_450 = local_450 + 2;
      local_440 = 1;
    } while (local_450 != local_448);
  }
  FUN_100039a80(&local_458);
  local_498 = local_438;
  if (*local_438 != -1) {
    if (*local_438 == 0) {
      QListData::detach((int)&local_498);
      iVar6 = local_498[2];
      if (iVar6 != local_498[3]) {
        piVar18 = local_438 + (long)local_438[2] * 2 + 4;
        piVar21 = local_498 + (long)iVar6 * 2 + 4;
        lVar14 = (long)local_498[3] * 8 + (long)iVar6 * -8;
        do {
          piVar2 = *(int **)piVar18;
          *(int **)piVar21 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar21 = piVar21 + 2;
          piVar18 = piVar18 + 2;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
    }
    else {
      LOCK();
      *local_438 = *local_438 + 1;
      local_31 = *local_438 != 0;
      UNLOCK();
    }
  }
  pQVar25 = (QString *)(local_498 + (long)local_498[2] * 2 + 4);
  local_488 = (QString *)(local_498 + (long)local_498[3] * 2 + 4);
  local_490 = pQVar25;
  if (local_498[2] != local_498[3]) {
    do {
      local_480 = 1;
      iVar6 = -1;
      local_490 = pQVar25;
      if (puVar3 != (undefined *)0x0) {
        sVar10 = _strlen(puVar3);
        iVar6 = (int)sVar10;
      }
      local_4a0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
      uVar11 = FUN_1003ae480(param_1 + 0x20,&local_4a0);
      pQVar12 = (QVariant *)FUN_1002edf40(uVar11,pQVar25);
      local_4a8 = 0x80000000;
      local_4b0.field7 = 0;
      QVariant::operator=(pQVar12,(QVariant *)&local_4b0);
      QVariant::~QVariant((QVariant *)&local_4b0);
      if (*(int *)local_4a0 != -1) {
        if (*(int *)local_4a0 != 0) {
          LOCK();
          *(int *)local_4a0 = *(int *)local_4a0 + -1;
          local_31 = *(int *)local_4a0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3751;
        }
        QArrayData::deallocate(local_4a0,2,8);
      }
LAB_1003f3751:
      iVar6 = -1;
      if (puVar3 != (undefined *)0x0) {
        sVar10 = _strlen(puVar3);
        iVar6 = (int)sVar10;
      }
      local_4b8.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar3,iVar6);
      MappingHelpers::removeAllPathsStartsWith((QHash *)&local_a0,pQVar25,&local_4b8);
      if (*(int *)local_4b8.field0_0x0 != -1) {
        if (*(int *)local_4b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_4b8.field0_0x0 = *(int *)local_4b8.field0_0x0 + -1;
          local_31 = *(int *)local_4b8.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f37c1;
        }
        QArrayData::deallocate((QArrayData *)local_4b8.field0_0x0,2,8);
      }
LAB_1003f37c1:
      pQVar25 = local_490 + 1;
      local_490 = pQVar25;
    } while (pQVar25 != local_488);
  }
  local_480 = 1;
  FUN_100039a80(&local_498);
  FUN_1003bdd00(&local_4d8,&local_140);
  local_4d0 = local_4d8 + (long)*(int *)(local_4d8 + 8) * 8 + 0x10;
  local_4c8 = local_4d8 + (long)*(int *)(local_4d8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_4d8 + 8) != *(int *)(local_4d8 + 0xc)) {
    do {
      local_4c0 = 1;
      local_4e8 = (QArrayData *)QString::fromAscii_helper("BOOTING_DEVICE_ID%1",0x13);
      lVar14 = (long)DAT_1023122c0;
      DAT_1023122c0 = DAT_1023122c0 + 1;
      QString::arg(&local_4e0,&local_4e8,lVar14,0,10,0x20);
      if (*(int *)local_4e8 != -1) {
        if (*(int *)local_4e8 != 0) {
          LOCK();
          *(int *)local_4e8 = *(int *)local_4e8 + -1;
          local_31 = *(int *)local_4e8 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f38d4;
        }
        QArrayData::deallocate(local_4e8,2,8);
      }
LAB_1003f38d4:
      puVar4 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
      local_500 = (QArrayData *)QString::fromAscii_helper("[%1]",4);
      uVar24 = 0x20;
      QString::arg(&local_4f8,&local_500,&local_4e0);
      if (puVar4 != (undefined *)0x0) {
        _strlen(puVar4);
      }
      QString::fromUtf8_helper((char *)&local_4f0,(int)puVar4);
      QString::append(&local_4f0);
      if (*(int *)local_4f8 != -1) {
        if (*(int *)local_4f8 != 0) {
          LOCK();
          *(int *)local_4f8 = *(int *)local_4f8 + -1;
          local_31 = *(int *)local_4f8 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f398d;
        }
        QArrayData::deallocate(local_4f8,2,8);
      }
LAB_1003f398d:
      if (*(int *)local_500 != -1) {
        if (*(int *)local_500 != 0) {
          LOCK();
          *(int *)local_500 = *(int *)local_500 + -1;
          local_31 = *(int *)local_500 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f39c3;
        }
        QArrayData::deallocate(local_500,2,8);
      }
LAB_1003f39c3:
      iVar6 = -1;
      if (puVar3 != (undefined *)0x0) {
        sVar10 = _strlen(puVar3);
        iVar6 = (int)sVar10;
      }
      local_508 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
      uVar11 = FUN_1003ae480(param_1 + 0x20,&local_508);
      pQVar12 = (QVariant *)FUN_1002edf40(uVar11,&local_4f0);
      QVariant::QVariant(&local_518,10,&local_4e0,0);
      QVariant::operator=(pQVar12,&local_518);
      QVariant::~QVariant(&local_518);
      if (*(int *)local_508 != -1) {
        if (*(int *)local_508 != 0) {
          LOCK();
          *(int *)local_508 = *(int *)local_508 + -1;
          local_31 = *(int *)local_508 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3a71;
        }
        QArrayData::deallocate(local_508,2,8);
      }
LAB_1003f3a71:
      local_520.field0_0x0 = local_4f0.field0_0x0;
      if (1 < *(int *)local_4f0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_4f0.field0_0x0 = *(int *)local_4f0.field0_0x0 + 1;
        local_31 = *(int *)local_4f0.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_58,0x1df1fc3);
      QString::append(&local_520);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3ae7;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1003f3ae7:
      iVar6 = -1;
      if (puVar3 != (undefined *)0x0) {
        sVar10 = _strlen(puVar3);
        iVar6 = (int)sVar10;
      }
      local_528.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar3,iVar6);
      local_53c = BootDevice::getIndex();
      QVariant::QVariant((QVariant *)local_538,3,&local_53c,0);
      QVar27.field0_0x0.field1_0x8.bitField0_30 = (FourByteBitField)uVar24;
      QVar27.field0_0x0.field0_0x0.field15 = (QObject *)local_538;
      uVar24 = uVar24 & 0xffffffff;
      MappingHelpers::setValueByPath((QHash *)&local_a0,&local_520,&local_528,QVar27);
      QVariant::~QVariant((QVariant *)local_538);
      if (*(int *)local_528.field0_0x0 != -1) {
        if (*(int *)local_528.field0_0x0 != 0) {
          LOCK();
          *(int *)local_528.field0_0x0 = *(int *)local_528.field0_0x0 + -1;
          local_31 = *(int *)local_528.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3b91;
        }
        QArrayData::deallocate((QArrayData *)local_528.field0_0x0,2,8);
      }
LAB_1003f3b91:
      if (*(int *)local_520.field0_0x0 != -1) {
        if (*(int *)local_520.field0_0x0 != 0) {
          LOCK();
          *(int *)local_520.field0_0x0 = *(int *)local_520.field0_0x0 + -1;
          local_31 = *(int *)local_520.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3bc7;
        }
        QArrayData::deallocate((QArrayData *)local_520.field0_0x0,2,8);
      }
LAB_1003f3bc7:
      local_548.field0_0x0 = local_4f0.field0_0x0;
      if (1 < *(int *)local_4f0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_4f0.field0_0x0 = *(int *)local_4f0.field0_0x0 + 1;
        local_31 = *(int *)local_4f0.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_50,0x1df255a);
      QString::append(&local_548);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3c3d;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1003f3c3d:
      iVar6 = -1;
      if (puVar3 != (undefined *)0x0) {
        sVar10 = _strlen(puVar3);
        iVar6 = (int)sVar10;
      }
      local_550.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar3,iVar6);
      uVar9 = BootDevice::getType();
      local_568 = (ulong)uVar9;
      QVariant::QVariant((QVariant *)local_560,4,&local_568,0);
      QVar28.field0_0x0.field1_0x8.bitField0_30 = (FourByteBitField)uVar24;
      QVar28.field0_0x0.field0_0x0.field15 = (QObject *)local_560;
      uVar24 = uVar24 & 0xffffffff;
      MappingHelpers::setValueByPath((QHash *)&local_a0,&local_548,&local_550,QVar28);
      QVariant::~QVariant((QVariant *)local_560);
      if (*(int *)local_550.field0_0x0 != -1) {
        if (*(int *)local_550.field0_0x0 != 0) {
          LOCK();
          *(int *)local_550.field0_0x0 = *(int *)local_550.field0_0x0 + -1;
          local_31 = *(int *)local_550.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3cea;
        }
        QArrayData::deallocate((QArrayData *)local_550.field0_0x0,2,8);
      }
LAB_1003f3cea:
      if (*(int *)local_548.field0_0x0 != -1) {
        if (*(int *)local_548.field0_0x0 != 0) {
          LOCK();
          *(int *)local_548.field0_0x0 = *(int *)local_548.field0_0x0 + -1;
          local_31 = *(int *)local_548.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3d20;
        }
        QArrayData::deallocate((QArrayData *)local_548.field0_0x0,2,8);
      }
LAB_1003f3d20:
      local_570.field0_0x0 = local_4f0.field0_0x0;
      if (1 < *(int *)local_4f0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_4f0.field0_0x0 = *(int *)local_4f0.field0_0x0 + 1;
        local_31 = *(int *)local_4f0.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_48,0x1df2560);
      QString::append(&local_570);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3d96;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1003f3d96:
      iVar6 = -1;
      if (puVar3 != (undefined *)0x0) {
        sVar10 = _strlen(puVar3);
        iVar6 = (int)sVar10;
      }
      local_578.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar3,iVar6);
      local_58c = BootDevice::getBootingNumber();
      QVariant::QVariant((QVariant *)local_588,3,&local_58c,0);
      QVar29.field0_0x0.field1_0x8.bitField0_30 = (FourByteBitField)uVar24;
      QVar29.field0_0x0.field0_0x0.field15 = (QObject *)local_588;
      uVar24 = uVar24 & 0xffffffff;
      MappingHelpers::setValueByPath((QHash *)&local_a0,&local_570,&local_578,QVar29);
      QVariant::~QVariant((QVariant *)local_588);
      if (*(int *)local_578.field0_0x0 != -1) {
        if (*(int *)local_578.field0_0x0 != 0) {
          LOCK();
          *(int *)local_578.field0_0x0 = *(int *)local_578.field0_0x0 + -1;
          local_31 = *(int *)local_578.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3e40;
        }
        QArrayData::deallocate((QArrayData *)local_578.field0_0x0,2,8);
      }
LAB_1003f3e40:
      if (*(int *)local_570.field0_0x0 != -1) {
        if (*(int *)local_570.field0_0x0 != 0) {
          LOCK();
          *(int *)local_570.field0_0x0 = *(int *)local_570.field0_0x0 + -1;
          local_31 = *(int *)local_570.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3e76;
        }
        QArrayData::deallocate((QArrayData *)local_570.field0_0x0,2,8);
      }
LAB_1003f3e76:
      local_598.field0_0x0 = local_4f0.field0_0x0;
      if (1 < *(int *)local_4f0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_4f0.field0_0x0 = *(int *)local_4f0.field0_0x0 + 1;
        local_31 = *(int *)local_4f0.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1df256f);
      QString::append(&local_598);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3eec;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1003f3eec:
      iVar6 = -1;
      if (puVar3 != (undefined *)0x0) {
        sVar10 = _strlen(puVar3);
        iVar6 = (int)sVar10;
      }
      local_5a0.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar3,iVar6);
      local_5b1 = BootDevice::isInUse();
      QVariant::QVariant((QVariant *)local_5b0,1,&local_5b1,0);
      QVar30.field0_0x0.field1_0x8.bitField0_30 = (FourByteBitField)uVar24;
      QVar30.field0_0x0.field0_0x0.field15 = (QObject *)local_5b0;
      MappingHelpers::setValueByPath((QHash *)&local_a0,&local_598,&local_5a0,QVar30);
      QVariant::~QVariant((QVariant *)local_5b0);
      if (*(int *)local_5a0.field0_0x0 != -1) {
        if (*(int *)local_5a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_5a0.field0_0x0 = *(int *)local_5a0.field0_0x0 + -1;
          local_31 = *(int *)local_5a0.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3f96;
        }
        QArrayData::deallocate((QArrayData *)local_5a0.field0_0x0,2,8);
      }
LAB_1003f3f96:
      if (*(int *)local_598.field0_0x0 != -1) {
        if (*(int *)local_598.field0_0x0 != 0) {
          LOCK();
          *(int *)local_598.field0_0x0 = *(int *)local_598.field0_0x0 + -1;
          local_31 = *(int *)local_598.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f3fcc;
        }
        QArrayData::deallocate((QArrayData *)local_598.field0_0x0,2,8);
      }
LAB_1003f3fcc:
      if (*(int *)local_4f0.field0_0x0 != -1) {
        if (*(int *)local_4f0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_4f0.field0_0x0 = *(int *)local_4f0.field0_0x0 + -1;
          local_31 = *(int *)local_4f0.field0_0x0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f4005;
        }
        QArrayData::deallocate((QArrayData *)local_4f0.field0_0x0,2,8);
      }
LAB_1003f4005:
      if (*(int *)local_4e0 != -1) {
        if (*(int *)local_4e0 != 0) {
          LOCK();
          *(int *)local_4e0 = *(int *)local_4e0 + -1;
          local_31 = *(int *)local_4e0 != 0;
          UNLOCK();
          if (local_31) goto LAB_1003f4049;
        }
        QArrayData::deallocate(local_4e0,2,8);
      }
LAB_1003f4049:
      local_4d0 = local_4d0 + 8;
    } while (local_4d0 != local_4c8);
  }
  local_4c0 = 1;
  if (*(int *)local_4d8 != -1) {
    if (*(int *)local_4d8 != 0) {
      LOCK();
      *(int *)local_4d8 = *(int *)local_4d8 + -1;
      local_31 = *(int *)local_4d8 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003f40df;
    }
    iVar6 = *(int *)(local_4d8 + 0xc);
    if (iVar6 != *(int *)(local_4d8 + 8)) {
      lVar14 = (long)*(int *)(local_4d8 + 8) * 8 + (long)iVar6 * -8;
      pDVar22 = local_4d8 + (long)iVar6 * 8 + 8;
      do {
        if (*(long **)pDVar22 != (long *)0x0) {
          (**(code **)(**(long **)pDVar22 + 0x20))();
        }
        pDVar22 = pDVar22 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose(local_4d8);
  }
LAB_1003f40df:
  plVar13 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*plVar13 + 0x78))(plVar13,&local_a0);
  FUN_100039a80(&local_438);
  pDVar22 = local_140;
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_31) goto LAB_1003f417b;
    }
    iVar6 = *(int *)(local_140 + 0xc);
    if (iVar6 != *(int *)(local_140 + 8)) {
      lVar14 = (long)*(int *)(local_140 + 8) * 8 + (long)iVar6 * -8;
      pDVar23 = local_140 + (long)iVar6 * 8 + 8;
      do {
        if (*(long **)pDVar23 != (long *)0x0) {
          (**(code **)(**(long **)pDVar23 + 0x20))();
        }
        pDVar23 = pDVar23 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose(pDVar22);
  }
LAB_1003f417b:
  if (*(int *)(local_a0.field0_0x0 + 0x10) != -1) {
    if (*(int *)(local_a0.field0_0x0 + 0x10) != 0) {
      LOCK();
      pQVar1 = local_a0.field0_0x0 + 0x10;
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      local_31 = false;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_a0.field0_0x0);
  }
  return;
}

