
undefined8 * FUN_1002aed30(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  QArrayData *pQVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_3c0;
  undefined8 uStack_3b0;
  QArrayData *local_3a0;
  QArrayData *local_398;
  QArrayData *local_390;
  Data_conflict local_388;
  undefined4 local_380;
  QString local_378;
  QString local_370;
  QVariant local_368;
  QString local_358;
  Data_conflict local_350;
  undefined4 local_348;
  QString local_340;
  QString local_338;
  QVariant local_330;
  Data_conflict local_320;
  undefined4 local_318;
  QString local_310;
  QString local_308;
  QVariant local_300;
  Data_conflict local_2f0;
  undefined4 local_2e8;
  QString local_2e0;
  QString local_2d8;
  QVariant local_2d0;
  Data_conflict local_2c0;
  undefined4 local_2b8;
  QString local_2b0;
  QString local_2a8;
  QVariant local_2a0;
  undefined1 local_290 [8];
  Data_conflict local_288;
  undefined4 local_280;
  QString local_278;
  QString local_270;
  QVariant local_268;
  undefined1 local_258 [8];
  Data_conflict local_250;
  undefined4 local_248;
  QString local_240;
  QString local_238;
  QVariant local_230;
  QString local_220;
  Data_conflict local_218;
  undefined4 local_210;
  QString local_208;
  QString local_200;
  QVariant local_1f8;
  Data_conflict local_1e8;
  undefined4 local_1e0;
  QString local_1d8;
  QString local_1d0;
  QVariant local_1c8;
  Data_conflict local_1b8;
  undefined4 local_1b0;
  QString local_1a8;
  QString local_1a0;
  QVariant local_198;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  QString local_178;
  undefined8 uStack_170;
  undefined *local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  QString local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  QArrayData *local_120;
  int *local_118;
  int *local_110;
  int *local_108;
  int *local_100;
  uint local_f8;
  QArrayData *local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15d0;
  QSettings::QSettings((QSettings *)&local_e8,(QObject *)0x0);
  local_f0 = (QArrayData *)QString::fromAscii_helper("Guest OS Sources",0x10);
  QSettings::beginGroup((QString *)&local_e8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002aedc4;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1002aedc4:
  QSettings::childGroups();
  local_110 = local_118;
  if (*local_118 != -1) {
    if (*local_118 == 0) {
      QListData::detach((int)&local_110);
      iVar1 = local_110[2];
      if (iVar1 != local_110[3]) {
        local_118 = local_118 + (long)local_118[2] * 2 + 4;
        piVar7 = local_110 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_110[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_118;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          local_118 = local_118 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_118 = *local_118 + 1;
      local_31 = *local_118 != 0;
      UNLOCK();
    }
  }
  local_108 = local_110 + (long)local_110[2] * 2 + 4;
  local_100 = local_110 + (long)local_110[3] * 2 + 4;
  local_f8 = 1;
  FUN_100039a80(&local_118);
  puVar4 = PTR_shared_null_1021e15e8;
  puVar3 = PTR_shared_null_1021e1288;
  if (local_f8 != 0) {
    auVar10._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar10._0_8_ = PTR_shared_null_1021e1288;
    auVar10._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    auVar11._8_4_ = (int)PTR_shared_null_1021e15e8;
    auVar11._0_8_ = PTR_shared_null_1021e15e8;
    auVar11._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    do {
      if (local_108 == local_100) break;
      local_120 = *(QArrayData **)local_108;
      if (1 < *(int *)local_120 + 1U) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + 1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
      }
      if (local_f8 != 0) {
        local_188 = 0xff;
        local_184 = 0;
        local_180 = 0;
        uStack_3b0 = auVar10._8_8_;
        local_178.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
        uStack_170 = uStack_3b0;
        uStack_3c0 = auVar11._8_8_;
        local_168 = puVar4;
        uStack_160 = uStack_3c0;
        local_158 = 0;
        local_150.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        local_148 = 0;
        local_144 = 0;
        local_140 = 0;
        local_128 = 0;
        local_130 = 0;
        local_138 = 0;
        if (1 < *(int *)local_120 + 1U) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + 1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
        }
        local_1a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_120;
        QString::fromUtf8_helper((char *)&local_d8,0x1e2468c);
        QString::append(&local_1a8);
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002af043;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_1002af043:
        local_1a0.field0_0x0 = local_1a8.field0_0x0;
        if (1 < *(int *)local_1a8.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + 1;
          local_31 = *(int *)local_1a8.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_d0,0x1de3a71);
        QString::append(&local_1a0);
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002af0b7;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_1002af0b7:
        local_1b0 = 0x80000000;
        local_1b8.field7 = 0;
        QSettings::value((QString *)&local_198,&local_e8);
        local_188 = QVariant::toUInt((bool *)&local_198);
        QVariant::~QVariant(&local_198);
        QVariant::~QVariant((QVariant *)&local_1b8);
        if (*(int *)local_1a0.field0_0x0 != -1) {
          if (*(int *)local_1a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
            local_31 = *(int *)local_1a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002af13e;
          }
          QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
        }
LAB_1002af13e:
        if (*(int *)local_1a8.field0_0x0 != -1) {
          if (*(int *)local_1a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
            local_31 = *(int *)local_1a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002af174;
          }
          QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
        }
LAB_1002af174:
        if (local_188 != 0xff) {
          local_1d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_120;
          if (1 < *(int *)local_120 + 1U) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + 1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_c8,0x1e2468c);
          QString::append(&local_1d8);
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af20a;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_1002af20a:
          local_1d0.field0_0x0 = local_1d8.field0_0x0;
          if (1 < *(int *)local_1d8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + 1;
            local_31 = *(int *)local_1d8.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_c0,0x1de3a79);
          QString::append(&local_1d0);
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af282;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_1002af282:
          local_1e0 = 0x80000000;
          local_1e8.field7 = 0;
          QSettings::value((QString *)&local_1c8,&local_e8);
          local_184 = QVariant::toUInt((bool *)&local_1c8);
          QVariant::~QVariant(&local_1c8);
          QVariant::~QVariant((QVariant *)&local_1e8);
          if (*(int *)local_1d0.field0_0x0 != -1) {
            if (*(int *)local_1d0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
              local_31 = *(int *)local_1d0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af314;
            }
            QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
          }
LAB_1002af314:
          if (*(int *)local_1d8.field0_0x0 != -1) {
            if (*(int *)local_1d8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
              local_31 = *(int *)local_1d8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af34a;
            }
            QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
          }
LAB_1002af34a:
          local_208.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_120;
          if (1 < *(int *)local_120 + 1U) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + 1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_b8,0x1e2468c);
          QString::append(&local_208);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af3d0;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_1002af3d0:
          local_200.field0_0x0 = local_208.field0_0x0;
          if (1 < *(int *)local_208.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + 1;
            local_31 = *(int *)local_208.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_b0,0x1de3a7e);
          QString::append(&local_200);
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af448;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
LAB_1002af448:
          local_210 = 0x80000000;
          local_218.field7 = 0;
          QSettings::value((QString *)&local_1f8,&local_e8);
          local_180 = QVariant::toUInt((bool *)&local_1f8);
          QVariant::~QVariant(&local_1f8);
          QVariant::~QVariant((QVariant *)&local_218);
          if (*(int *)local_200.field0_0x0 != -1) {
            if (*(int *)local_200.field0_0x0 != 0) {
              LOCK();
              *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
              local_31 = *(int *)local_200.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af4da;
            }
            QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
          }
LAB_1002af4da:
          if (*(int *)local_208.field0_0x0 != -1) {
            if (*(int *)local_208.field0_0x0 != 0) {
              LOCK();
              *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
              local_31 = *(int *)local_208.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af510;
            }
            QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
          }
LAB_1002af510:
          local_240.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_120;
          if (1 < *(int *)local_120 + 1U) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + 1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_a8,0x1e2468c);
          QString::append(&local_240);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af596;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_1002af596:
          local_238.field0_0x0 = local_240.field0_0x0;
          if (1 < *(int *)local_240.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + 1;
            local_31 = *(int *)local_240.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_a0,0x1ddf0f0);
          QString::append(&local_238);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af60e;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_1002af60e:
          local_248 = 0x80000000;
          local_250.field7 = 0;
          QSettings::value((QString *)&local_230,&local_e8);
          QVariant::toString();
          QString::operator=(&local_178,&local_220);
          if (*(int *)local_220.field0_0x0 != -1) {
            if (*(int *)local_220.field0_0x0 != 0) {
              LOCK();
              *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
              local_31 = *(int *)local_220.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af6a2;
            }
            QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
          }
LAB_1002af6a2:
          QVariant::~QVariant(&local_230);
          QVariant::~QVariant((QVariant *)&local_250);
          if (*(int *)local_238.field0_0x0 != -1) {
            if (*(int *)local_238.field0_0x0 != 0) {
              LOCK();
              *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
              local_31 = *(int *)local_238.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af6e8;
            }
            QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
          }
LAB_1002af6e8:
          if (*(int *)local_240.field0_0x0 != -1) {
            if (*(int *)local_240.field0_0x0 != 0) {
              LOCK();
              *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + -1;
              local_31 = *(int *)local_240.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af71e;
            }
            QArrayData::deallocate((QArrayData *)local_240.field0_0x0,2,8);
          }
LAB_1002af71e:
          local_278.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_120;
          if (1 < *(int *)local_120 + 1U) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + 1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_98,0x1e2468c);
          QString::append(&local_278);
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af7a4;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1002af7a4:
          local_270.field0_0x0 = local_278.field0_0x0;
          if (1 < *(int *)local_278.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + 1;
            local_31 = *(int *)local_278.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_90,0x1de3a88);
          QString::append(&local_270);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af81c;
            }
            QArrayData::deallocate(local_90,2,8);
          }
LAB_1002af81c:
          local_280 = 0x80000000;
          local_288.field7 = 0;
          QSettings::value((QString *)&local_268,&local_e8);
          QVariant::toStringList();
          FUN_1000e5fc0(&local_168,local_258);
          FUN_100039a80(local_258);
          QVariant::~QVariant(&local_268);
          QVariant::~QVariant((QVariant *)&local_288);
          if (*(int *)local_270.field0_0x0 != -1) {
            if (*(int *)local_270.field0_0x0 != 0) {
              LOCK();
              *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
              local_31 = *(int *)local_270.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af8ca;
            }
            QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
          }
LAB_1002af8ca:
          if (*(int *)local_278.field0_0x0 != -1) {
            if (*(int *)local_278.field0_0x0 != 0) {
              LOCK();
              *(int *)local_278.field0_0x0 = *(int *)local_278.field0_0x0 + -1;
              local_31 = *(int *)local_278.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af900;
            }
            QArrayData::deallocate((QArrayData *)local_278.field0_0x0,2,8);
          }
LAB_1002af900:
          local_2b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_120;
          if (1 < *(int *)local_120 + 1U) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + 1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_88,0x1e2468c);
          QString::append(&local_2b0);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af981;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_1002af981:
          local_2a8.field0_0x0 = local_2b0.field0_0x0;
          if (1 < *(int *)local_2b0.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_2b0.field0_0x0 = *(int *)local_2b0.field0_0x0 + 1;
            local_31 = *(int *)local_2b0.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_80,0x1de3a91);
          QString::append(&local_2a8);
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002af9f3;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_1002af9f3:
          local_2b8 = 0x80000000;
          local_2c0.field7 = 0;
          QSettings::value((QString *)&local_2a0,&local_e8);
          QVariant::toStringList();
          FUN_1000e5fc0(&uStack_160,local_290);
          FUN_100039a80(local_290);
          QVariant::~QVariant(&local_2a0);
          QVariant::~QVariant((QVariant *)&local_2c0);
          if (*(int *)local_2a8.field0_0x0 != -1) {
            if (*(int *)local_2a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_2a8.field0_0x0 = *(int *)local_2a8.field0_0x0 + -1;
              local_31 = *(int *)local_2a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002afa97;
            }
            QArrayData::deallocate((QArrayData *)local_2a8.field0_0x0,2,8);
          }
LAB_1002afa97:
          if (*(int *)local_2b0.field0_0x0 != -1) {
            if (*(int *)local_2b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_2b0.field0_0x0 = *(int *)local_2b0.field0_0x0 + -1;
              local_31 = *(int *)local_2b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002afacd;
            }
            QArrayData::deallocate((QArrayData *)local_2b0.field0_0x0,2,8);
          }
LAB_1002afacd:
          local_2e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_120;
          if (1 < *(int *)local_120 + 1U) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + 1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_78,0x1e2468c);
          QString::append(&local_2e0);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002afb47;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_1002afb47:
          local_2d8.field0_0x0 = local_2e0.field0_0x0;
          if (1 < *(int *)local_2e0.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + 1;
            local_31 = *(int *)local_2e0.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_70,0x1de3aa4);
          QString::append(&local_2d8);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002afbb9;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_1002afbb9:
          local_2e8 = 0x80000000;
          local_2f0.field7 = 0;
          QSettings::value((QString *)&local_2d0,&local_e8);
          local_158 = QVariant::toBool();
          QVariant::~QVariant(&local_2d0);
          QVariant::~QVariant((QVariant *)&local_2f0);
          if (*(int *)local_2d8.field0_0x0 != -1) {
            if (*(int *)local_2d8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_2d8.field0_0x0 = *(int *)local_2d8.field0_0x0 + -1;
              local_31 = *(int *)local_2d8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002afc49;
            }
            QArrayData::deallocate((QArrayData *)local_2d8.field0_0x0,2,8);
          }
LAB_1002afc49:
          if (*(int *)local_2e0.field0_0x0 != -1) {
            if (*(int *)local_2e0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_2e0.field0_0x0 = *(int *)local_2e0.field0_0x0 + -1;
              local_31 = *(int *)local_2e0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002afc7f;
            }
            QArrayData::deallocate((QArrayData *)local_2e0.field0_0x0,2,8);
          }
LAB_1002afc7f:
          local_310.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_120;
          if (1 < *(int *)local_120 + 1U) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + 1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_68,0x1e2468c);
          QString::append(&local_310);
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002afcf9;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_1002afcf9:
          local_308.field0_0x0 = local_310.field0_0x0;
          if (1 < *(int *)local_310.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_310.field0_0x0 = *(int *)local_310.field0_0x0 + 1;
            local_31 = *(int *)local_310.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_60,0x1de3ab4);
          QString::append(&local_308);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002afd6b;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_1002afd6b:
          local_318 = 0x80000000;
          local_320.field7 = 0;
          QSettings::value((QString *)&local_300,&local_e8);
          local_140 = QVariant::toBool();
          QVariant::~QVariant(&local_300);
          QVariant::~QVariant((QVariant *)&local_320);
          if (*(int *)local_308.field0_0x0 != -1) {
            if (*(int *)local_308.field0_0x0 != 0) {
              LOCK();
              *(int *)local_308.field0_0x0 = *(int *)local_308.field0_0x0 + -1;
              local_31 = *(int *)local_308.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002afdfb;
            }
            QArrayData::deallocate((QArrayData *)local_308.field0_0x0,2,8);
          }
LAB_1002afdfb:
          if (*(int *)local_310.field0_0x0 != -1) {
            if (*(int *)local_310.field0_0x0 != 0) {
              LOCK();
              *(int *)local_310.field0_0x0 = *(int *)local_310.field0_0x0 + -1;
              local_31 = *(int *)local_310.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002afe31;
            }
            QArrayData::deallocate((QArrayData *)local_310.field0_0x0,2,8);
          }
LAB_1002afe31:
          local_340.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_120;
          if (1 < *(int *)local_120 + 1U) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + 1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_58,0x1e2468c);
          QString::append(&local_340);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002afeab;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_1002afeab:
          local_338.field0_0x0 = local_340.field0_0x0;
          if (1 < *(int *)local_340.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_340.field0_0x0 = *(int *)local_340.field0_0x0 + 1;
            local_31 = *(int *)local_340.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_50,0x1de3abf);
          QString::append(&local_338);
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002aff1d;
            }
            QArrayData::deallocate(local_50,2,8);
          }
LAB_1002aff1d:
          local_348 = 0x80000000;
          local_350.field7 = 0;
          QSettings::value((QString *)&local_330,&local_e8);
          local_138 = QVariant::toULongLong((bool *)&local_330);
          QVariant::~QVariant(&local_330);
          QVariant::~QVariant((QVariant *)&local_350);
          if (*(int *)local_338.field0_0x0 != -1) {
            if (*(int *)local_338.field0_0x0 != 0) {
              LOCK();
              *(int *)local_338.field0_0x0 = *(int *)local_338.field0_0x0 + -1;
              local_31 = *(int *)local_338.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002affb0;
            }
            QArrayData::deallocate((QArrayData *)local_338.field0_0x0,2,8);
          }
LAB_1002affb0:
          if (*(int *)local_340.field0_0x0 != -1) {
            if (*(int *)local_340.field0_0x0 != 0) {
              LOCK();
              *(int *)local_340.field0_0x0 = *(int *)local_340.field0_0x0 + -1;
              local_31 = *(int *)local_340.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002affe6;
            }
            QArrayData::deallocate((QArrayData *)local_340.field0_0x0,2,8);
          }
LAB_1002affe6:
          local_378.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_120;
          if (1 < *(int *)local_120 + 1U) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + 1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
          QString::append(&local_378);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002b0060;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_1002b0060:
          local_370.field0_0x0 = local_378.field0_0x0;
          if (1 < *(int *)local_378.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_378.field0_0x0 = *(int *)local_378.field0_0x0 + 1;
            local_31 = *(int *)local_378.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_40,0x1de3acd);
          QString::append(&local_370);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002b00d2;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_1002b00d2:
          local_380 = 0x80000000;
          local_388.field7 = 0;
          QSettings::value((QString *)&local_368,&local_e8);
          QVariant::toString();
          QString::operator=(&local_150,&local_358);
          if (*(int *)local_358.field0_0x0 != -1) {
            if (*(int *)local_358.field0_0x0 != 0) {
              LOCK();
              *(int *)local_358.field0_0x0 = *(int *)local_358.field0_0x0 + -1;
              local_31 = *(int *)local_358.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002b0166;
            }
            QArrayData::deallocate((QArrayData *)local_358.field0_0x0,2,8);
          }
LAB_1002b0166:
          QVariant::~QVariant(&local_368);
          QVariant::~QVariant((QVariant *)&local_388);
          if (*(int *)local_370.field0_0x0 != -1) {
            if (*(int *)local_370.field0_0x0 != 0) {
              LOCK();
              *(int *)local_370.field0_0x0 = *(int *)local_370.field0_0x0 + -1;
              local_31 = *(int *)local_370.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002b01ac;
            }
            QArrayData::deallocate((QArrayData *)local_370.field0_0x0,2,8);
          }
LAB_1002b01ac:
          if (*(int *)local_378.field0_0x0 != -1) {
            if (*(int *)local_378.field0_0x0 != 0) {
              LOCK();
              *(int *)local_378.field0_0x0 = *(int *)local_378.field0_0x0 + -1;
              local_31 = *(int *)local_378.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002b01f0;
            }
            QArrayData::deallocate((QArrayData *)local_378.field0_0x0,2,8);
          }
        }
LAB_1002b01f0:
        QString::toLatin1();
        QByteArray::fromBase64((QByteArray *)&local_398);
        pQVar8 = local_398 + *(long *)(local_398 + 0x10);
        if ((pQVar8 != (QArrayData *)0x0) && (*(uint *)(local_398 + 4) != 0)) {
          lVar5 = 0;
          do {
            if (pQVar8[lVar5] == (QArrayData)0x0) break;
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < *(uint *)(local_398 + 4));
          if ((int)lVar5 == -1) {
            _strlen((char *)pQVar8);
          }
        }
        QString::fromUtf8_helper((char *)&local_390,(int)pQVar8);
        FUN_1002b5b50(param_1,&local_390,&local_188);
        if (*(int *)local_390 != -1) {
          if (*(int *)local_390 != 0) {
            LOCK();
            *(int *)local_390 = *(int *)local_390 + -1;
            local_31 = *(int *)local_390 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002b02bf;
          }
          QArrayData::deallocate(local_390,2,8);
        }
LAB_1002b02bf:
        if (*(int *)local_398 != -1) {
          if (*(int *)local_398 != 0) {
            LOCK();
            *(int *)local_398 = *(int *)local_398 + -1;
            local_31 = *(int *)local_398 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002b02ff;
          }
          QArrayData::deallocate(local_398,1,8);
        }
LAB_1002b02ff:
        if (*(int *)local_3a0 != -1) {
          if (*(int *)local_3a0 != 0) {
            LOCK();
            *(int *)local_3a0 = *(int *)local_3a0 + -1;
            local_31 = *(int *)local_3a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002b0338;
          }
          QArrayData::deallocate(local_3a0,1,8);
        }
LAB_1002b0338:
        FUN_10005e410(&local_188);
        local_f8 = 0;
      }
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002b0384;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_1002b0384:
      local_108 = local_108 + 2;
      uVar6 = local_f8 ^ 1;
      bVar9 = local_f8 != 1;
      local_f8 = uVar6;
    } while (bVar9);
  }
  FUN_100039a80(&local_110);
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)&local_e8);
  return param_1;
}

