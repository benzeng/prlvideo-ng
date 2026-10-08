
void FUN_1001b2370(long *param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  QTypedArrayData<unsigned_short> *pQStack_230;
  QVariant local_210;
  Data_conflict local_200;
  QVariant local_1f8;
  Data_conflict local_1e8;
  QVariant local_1e0;
  Data_conflict local_1d0;
  QVariant local_1c8;
  Data_conflict local_1b8;
  QString local_1b0;
  QString local_1a8;
  int local_1a0;
  QString local_198;
  long local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  uint local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  Data_conflict local_160;
  undefined4 local_158;
  QArrayData *local_150;
  QVariant local_148;
  QString local_138;
  Data_conflict local_130;
  undefined4 local_128;
  QArrayData *local_120;
  QVariant local_118;
  QString local_108;
  QString QStack_100;
  undefined4 local_f8;
  QString local_f0 [2];
  QArrayData *local_e0;
  uint *local_d8;
  QArrayData *local_d0;
  uint *local_c8;
  Data_conflict local_c0;
  undefined4 local_b8;
  QArrayData *local_b0;
  QVariant local_a8;
  QString local_98;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  QVariant local_78;
  QString local_68;
  undefined *local_60;
  QArrayData *local_58;
  QVariant local_50;
  uint *local_40;
  undefined1 local_31;
  
  if (*(int *)(*param_1 + 0xc) - *(int *)(*param_1 + 8) !=
      *(int *)(*param_2 + 0xc) - *(int *)(*param_2 + 8)) {
    FUN_100df99c0("","prl_client_app",0,"Size old and new usb list not equal!");
    return;
  }
  QSettings::QSettings((QSettings *)&local_50,(QObject *)0x0);
  local_58 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  iVar5 = QSettings::beginReadArray((QString *)&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b2408;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001b2408:
  puVar3 = PTR_shared_null_1021e1288;
  local_60 = PTR_shared_null_1021e15e8;
  if (*(int *)(*param_1 + 0xc) - *(int *)(*param_1 + 8) != iVar5) {
    FUN_100df99c0("","prl_client_app",0,"Size old and usb list in qsettings not equal!");
    goto LAB_1001b3054;
  }
  if (0 < iVar5) {
    auVar13._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar13._0_8_ = PTR_shared_null_1021e1288;
    auVar13._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    lVar11 = 0;
    do {
      QSettings::setArrayIndex((int)&local_50);
      local_80 = (QArrayData *)QString::fromAscii_helper("Device Name",0xb);
      local_88 = 0x80000000;
      local_90.field7 = 0;
      QSettings::value((QString *)&local_78,&local_50);
      QVariant::toString();
      QVariant::~QVariant(&local_78);
      QVariant::~QVariant((QVariant *)&local_90);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b2500;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1001b2500:
      local_b0 = (QArrayData *)QString::fromAscii_helper("Device Id",9);
      local_b8 = 0x80000000;
      local_c0.field7 = 0;
      QSettings::value((QString *)&local_a8,&local_50);
      QVariant::toString();
      QVariant::~QVariant(&local_a8);
      QVariant::~QVariant((QVariant *)&local_c0);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b25a6;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1001b25a6:
      puVar7 = (uint *)*param_1;
      if (1 < *puVar7) {
        FUN_100036c40(param_1,puVar7[1]);
        puVar7 = (uint *)*param_1;
      }
      uVar9 = puVar7[2];
      local_d0 = (QArrayData *)QString::fromAscii_helper("---sdjhfgsjhdfgs",0x10);
      QString::split(&local_c8,puVar7 + ((int)uVar9 + lVar11) * 2 + 4,&local_d0,0,1);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b2658;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1001b2658:
      uVar9 = local_c8[2];
      if (local_c8[3] - uVar9 == 2) {
        if (1 < *local_c8) {
          FUN_100036c40(&local_c8,local_c8[1]);
          uVar9 = local_c8[2];
        }
        cVar4 = operator==(&local_68,(QString *)(local_c8 + (long)(int)uVar9 * 2 + 4));
        if (cVar4 != '\0') {
          if (1 < *local_c8) {
            FUN_100036c40(&local_c8,local_c8[1]);
          }
          cVar4 = operator==(&local_98,(QString *)(local_c8 + (long)(int)local_c8[2] * 2 + 6));
          if (cVar4 != '\0') {
            puVar7 = (uint *)*param_2;
            if (1 < *puVar7) {
              FUN_100036c40(param_2,puVar7[1]);
              puVar7 = (uint *)*param_2;
            }
            lVar8 = *(long *)(puVar7 + ((int)puVar7[2] + lVar11) * 2 + 4);
            iVar6 = QString::compare_helper
                              (*(long *)(lVar8 + 0x10) + lVar8,*(undefined4 *)(lVar8 + 4),
                               "---sdjhfgsjhdfgs",0xffffffff,1);
            if (iVar6 != 0) {
              puVar7 = (uint *)*param_2;
              if (1 < *puVar7) {
                FUN_100036c40(param_2,puVar7[1]);
                puVar7 = (uint *)*param_2;
              }
              uVar9 = puVar7[2];
              local_e0 = (QArrayData *)QString::fromAscii_helper("---sdjhfgsjhdfgs",0x10);
              QString::split(&local_d8,puVar7 + ((int)uVar9 + lVar11) * 2 + 4,&local_e0,0,1);
              if (local_c8 != local_d8) {
                local_40 = local_d8;
                if (*local_d8 != 0xffffffff) {
                  if (*local_d8 == 0) {
                    QListData::detach((int)&local_40);
                    uVar9 = local_40[2];
                    if (uVar9 != local_40[3]) {
                      puVar7 = local_d8 + (long)(int)local_d8[2] * 2 + 4;
                      puVar10 = local_40 + (long)(int)uVar9 * 2 + 4;
                      lVar8 = (long)(int)local_40[3] * 8 + (long)(int)uVar9 * -8;
                      do {
                        piVar1 = *(int **)puVar7;
                        *(int **)puVar10 = piVar1;
                        if (1 < *piVar1 + 1U) {
                          LOCK();
                          *piVar1 = *piVar1 + 1;
                          local_31 = *piVar1 != 0;
                          UNLOCK();
                        }
                        puVar10 = puVar10 + 2;
                        puVar7 = puVar7 + 2;
                        lVar8 = lVar8 + -8;
                      } while (lVar8 != 0);
                    }
                  }
                  else {
                    LOCK();
                    *local_d8 = *local_d8 + 1;
                    local_31 = *local_d8 != 0;
                    UNLOCK();
                  }
                }
                puVar7 = local_40;
                local_40 = local_c8;
                local_c8 = puVar7;
                FUN_100039a80(&local_40);
              }
              FUN_100039a80(&local_d8);
              if (*(int *)local_e0 != -1) {
                if (*(int *)local_e0 != 0) {
                  LOCK();
                  *(int *)local_e0 = *(int *)local_e0 + -1;
                  local_31 = *(int *)local_e0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001b2958;
                }
                QArrayData::deallocate(local_e0,2,8);
              }
LAB_1001b2958:
              uVar9 = local_c8[2];
              if (local_c8[3] - uVar9 == 2) {
                pQStack_230 = auVar13._8_8_;
                local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
                QStack_100.field0_0x0 = pQStack_230;
                local_f0[0].field0_0x0 =
                     (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
                if (1 < *local_c8) {
                  FUN_100036c40(&local_c8,local_c8[1]);
                  uVar9 = local_c8[2];
                }
                QString::operator=(&local_108,(QString *)(local_c8 + (long)(int)uVar9 * 2 + 4));
                if (1 < *local_c8) {
                  FUN_100036c40(&local_c8,local_c8[1]);
                }
                QString::operator=(&QStack_100,
                                   (QString *)(local_c8 + (long)(int)local_c8[2] * 2 + 6));
                local_120 = (QArrayData *)QString::fromAscii_helper("Action",6);
                local_128 = 0x80000000;
                local_130.field7 = 0;
                QSettings::value((QString *)&local_118,&local_50);
                local_f8 = QVariant::toInt((bool *)&local_118);
                QVariant::~QVariant(&local_118);
                QVariant::~QVariant((QVariant *)&local_130);
                if (*(int *)local_120 != -1) {
                  if (*(int *)local_120 != 0) {
                    LOCK();
                    *(int *)local_120 = *(int *)local_120 + -1;
                    local_31 = *(int *)local_120 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001b2abb;
                  }
                  QArrayData::deallocate(local_120,2,8);
                }
LAB_1001b2abb:
                local_150 = (QArrayData *)QString::fromAscii_helper("AssocVmId",9);
                local_158 = 0x80000000;
                local_160.field7 = 0;
                QSettings::value((QString *)&local_148,&local_50);
                QVariant::toString();
                QString::operator=(local_f0,&local_138);
                if (*(int *)local_138.field0_0x0 != -1) {
                  if (*(int *)local_138.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
                    local_31 = *(int *)local_138.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001b2b60;
                  }
                  QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
                }
LAB_1001b2b60:
                QVariant::~QVariant(&local_148);
                QVariant::~QVariant((QVariant *)&local_160);
                if (*(int *)local_150 != -1) {
                  if (*(int *)local_150 != 0) {
                    LOCK();
                    *(int *)local_150 = *(int *)local_150 + -1;
                    local_31 = *(int *)local_150 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001b2baa;
                  }
                  QArrayData::deallocate(local_150,2,8);
                }
LAB_1001b2baa:
                FUN_1001b6000(&local_60,&local_108);
                FUN_1001b5ee0(&local_108);
              }
              else {
                FUN_100df99c0("","prl_client_app",0,"parameters splited incorrectly!");
              }
            }
          }
        }
      }
      else {
        FUN_100df99c0("","prl_client_app",0,"parameters splited incorrectly!");
      }
      FUN_100039a80(&local_c8);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b28a7;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_1001b28a7:
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b28de;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1001b28de:
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar5);
  }
  QSettings::endArray();
  local_168 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  QSettings::remove((QString *)&local_50);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b2c90;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1001b2c90:
  local_170 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  QSettings::beginWriteArray((QString *)&local_50,(int)&local_170);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b2cf3;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1001b2cf3:
  FUN_1001b6440(&local_190,&local_60);
  local_188 = (undefined8 *)(local_190 + 0x10 + (long)*(int *)(local_190 + 8) * 8);
  local_180 = (undefined8 *)(local_190 + 0x10 + (long)*(int *)(local_190 + 0xc) * 8);
  local_178 = 1;
  if (*(int *)(local_190 + 8) != *(int *)(local_190 + 0xc)) {
    do {
      puVar2 = (undefined8 *)*local_188;
      local_1b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar2;
      if (1 < *(int *)local_1b0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + 1;
        local_31 = *(int *)local_1b0.field0_0x0 != 0;
        UNLOCK();
      }
      local_1a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2[1];
      if (1 < *(int *)local_1a8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + 1;
        local_31 = *(int *)local_1a8.field0_0x0 != 0;
        UNLOCK();
      }
      local_198.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2[3];
      if (1 < *(int *)local_198.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + 1;
        local_31 = *(int *)local_198.field0_0x0 != 0;
        UNLOCK();
      }
      local_1a0 = *(int *)(puVar2 + 2);
      if (local_178 != 0) {
        QSettings::setArrayIndex((int)&local_50);
        local_1b8.field7 = QString::fromAscii_helper("Device Name",0xb);
        QVariant::QVariant(&local_1c8,&local_1b0);
        QSettings::setValue((QString *)&local_50,(QVariant *)&local_1b8);
        QVariant::~QVariant(&local_1c8);
        if (*(int *)local_1b8.field15 != -1) {
          if (*(int *)local_1b8.field15 != 0) {
            LOCK();
            *(int *)local_1b8.field15 = *(int *)local_1b8.field15 + -1;
            local_31 = *(int *)local_1b8.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001b2e5e;
          }
          QArrayData::deallocate((QArrayData *)local_1b8.field15,2,8);
        }
LAB_1001b2e5e:
        local_1d0.field7 = QString::fromAscii_helper("Device Id",9);
        QVariant::QVariant(&local_1e0,&local_1a8);
        QSettings::setValue((QString *)&local_50,(QVariant *)&local_1d0);
        QVariant::~QVariant(&local_1e0);
        if (*(int *)local_1d0.field15 != -1) {
          if (*(int *)local_1d0.field15 != 0) {
            LOCK();
            *(int *)local_1d0.field15 = *(int *)local_1d0.field15 + -1;
            local_31 = *(int *)local_1d0.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001b2edc;
          }
          QArrayData::deallocate((QArrayData *)local_1d0.field15,2,8);
        }
LAB_1001b2edc:
        local_1e8.field7 = QString::fromAscii_helper("Action",6);
        QVariant::QVariant(&local_1f8,local_1a0);
        QSettings::setValue((QString *)&local_50,(QVariant *)&local_1e8);
        QVariant::~QVariant(&local_1f8);
        if (*(int *)local_1e8.field15 != -1) {
          if (*(int *)local_1e8.field15 != 0) {
            LOCK();
            *(int *)local_1e8.field15 = *(int *)local_1e8.field15 + -1;
            local_31 = *(int *)local_1e8.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001b2f52;
          }
          QArrayData::deallocate((QArrayData *)local_1e8.field15,2,8);
        }
LAB_1001b2f52:
        if (*(int *)(local_198.field0_0x0 + 4) != 0) {
          local_200.field7 = QString::fromAscii_helper("AssocVmId",9);
          QVariant::QVariant(&local_210,&local_198);
          QSettings::setValue((QString *)&local_50,(QVariant *)&local_200);
          QVariant::~QVariant(&local_210);
          if (*(int *)local_200.field15 != -1) {
            if (*(int *)local_200.field15 != 0) {
              LOCK();
              *(int *)local_200.field15 = *(int *)local_200.field15 + -1;
              local_31 = *(int *)local_200.field15 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001b2fe7;
            }
            QArrayData::deallocate((QArrayData *)local_200.field15,2,8);
          }
        }
LAB_1001b2fe7:
        local_178 = 0;
      }
      FUN_1001b5ee0(&local_1b0);
      local_188 = local_188 + 1;
      uVar9 = local_178 ^ 1;
      bVar12 = local_178 != 1;
      local_178 = uVar9;
    } while ((bVar12) && (local_188 != local_180));
  }
  FUN_1001b5e30(&local_190);
  QSettings::endArray();
  FUN_1001b1b60(1);
LAB_1001b3054:
  FUN_1001b5e30(&local_60);
  QSettings::~QSettings((QSettings *)&local_50);
  return;
}

