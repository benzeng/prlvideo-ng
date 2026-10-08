
void FUN_100031e10(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  QArrayData *pQVar14;
  undefined8 in_stack_fffffffffffffdb8;
  undefined4 uVar15;
  QVariant local_218;
  QArrayData *local_208;
  QVariant local_200;
  QVariant local_1f0;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QVariant local_1c0;
  QArrayData *local_1b0;
  QVariant local_1a8;
  QVariant local_198;
  QArrayData *local_188;
  QArrayData *local_180;
  QVariant local_178;
  QArrayData *local_168;
  QVariant local_160;
  QVariant local_150;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QVariant local_120;
  QArrayData *local_110;
  QVariant local_108;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QVariant local_c0;
  QVariant local_b0;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  puVar3 = PTR__objc_msgSend_1021e1c68;
  puVar2 = PTR__NSApp_1021e1070;
  uVar15 = (undefined4)((ulong)in_stack_fffffffffffffdb8 >> 0x20);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_presentationOptions_102269898);
  uVar7 = (*(code *)puVar3)(*(undefined8 *)puVar2);
  QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
  local_60 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
  QVariant::QVariant(&local_70,false);
  QSettings::value((QString *)&local_48,&local_58);
  cVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100031ee0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100031ee0:
  QSettings::~QSettings((QSettings *)&local_58);
  if (((2 < DAT_10230ffd0) && (cVar4 == '\x01')) &&
     (FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                    "\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"),
     2 < DAT_10230ffd0)) {
    FUN_100033410(&local_80,param_1);
    QString::toLocal8Bit();
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                  "Requested presentation mode flags - %lu \'%s\'",param_1,
                  local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100031fa5;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_100031fa5:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100031fd5;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100031fd5:
    if (2 < DAT_10230ffd0) {
      FUN_100033410(&local_90,uVar6);
      QString::toLocal8Bit();
      FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                    "Current presentation mode flags - %lu \'%s\'",uVar6,
                    local_88 + *(long *)(local_88 + 0x10));
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100032063;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_100032063:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000320a3;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1000320a3:
      if (2 < DAT_10230ffd0) {
        FUN_100033410(&local_a0,uVar7);
        QString::toLocal8Bit();
        FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                      "System presentation mode flags - %lu \'%s\'",uVar7,
                      local_98 + *(long *)(local_98 + 0x10));
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100032133;
          }
          QArrayData::deallocate(local_98,1,8);
        }
LAB_100032133:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100032169;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
      }
    }
  }
LAB_100032169:
  if ((param_1 & 8) == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (char)(((uint)uVar6 & 4) >> 2);
  }
  if ((param_1 & 4) == 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = (byte)(((uint)uVar6 & 8) >> 3);
  }
  uVar11 = uVar6 & 0x400;
  bVar5 = MacUtils::screensHaveSeparateSpaces();
  bVar10 = 0x400 < param_1 & (byte)((param_1 & 0x400) >> 10) & (bVar5 ^ 1);
  bVar5 = bVar10;
  if (bVar10 == 0) {
    if ((param_1 & 0x400) == 0) {
      bVar5 = (byte)(uVar11 >> 10) ^ 1;
    }
    else if (uVar11 == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
      if (cVar4 == '\0') {
        bVar5 = bVar13;
      }
    }
  }
  uVar9 = uVar11 | param_1 & 0xfffffffffffff7ff;
  uVar12 = uVar11 | param_1 | 0x800;
  if (uVar11 == 0 && (param_1 & 0x400) == 0) {
    uVar12 = uVar9;
  }
  if ((param_1 & 4) == 0) {
    uVar12 = uVar9;
  }
  if ((uVar6 == uVar12) && (bVar10 == 0)) {
    QSettings::QSettings((QSettings *)&local_c0,(QObject *)0x0);
    local_c8 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
    QVariant::QVariant(&local_d8,false);
    QSettings::value((QString *)&local_b0,&local_c0);
    cVar4 = QVariant::toBool();
    QVariant::~QVariant(&local_b0);
    QVariant::~QVariant(&local_d8);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003230d;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_10003230d:
    QSettings::~QSettings((QSettings *)&local_c0);
    if ((2 < DAT_10230ffd0) && (cVar4 == '\x01')) {
      FUN_100033410(&local_e8,uVar6);
      QString::toLocal8Bit();
      FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                    "Skip presentation mode flags - %lu \'%s\'. Current flags are the same.",uVar6,
                    local_e0 + *(long *)(local_e0 + 0x10));
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000323b6;
        }
        QArrayData::deallocate(local_e0,1,8);
      }
LAB_1000323b6:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          iVar1 = *(int *)local_e8;
          UNLOCK();
joined_r0x000100032a4d:
          local_31 = iVar1 != 0;
          if ((bool)local_31) goto LAB_100032a65;
        }
LAB_100032a56:
        QArrayData::deallocate(local_e8,2,8);
      }
    }
  }
  else if (bVar5 == 0) {
    QSettings::QSettings((QSettings *)&local_108,(QObject *)0x0);
    local_110 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
    QVariant::QVariant(&local_120,false);
    QSettings::value((QString *)&local_f8,&local_108);
    cVar4 = QVariant::toBool();
    QVariant::~QVariant(&local_f8);
    QVariant::~QVariant(&local_120);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000324b2;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_1000324b2:
    QSettings::~QSettings((QSettings *)&local_108);
    if ((2 < DAT_10230ffd0) && (cVar4 == '\x01')) {
      FUN_100033410(&local_130,uVar12);
      QString::toLocal8Bit();
      pQVar14 = local_128 + *(long *)(local_128 + 0x10);
      FUN_100033410(&local_140,uVar6);
      QString::toLocal8Bit();
      FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                    "Skip set presentation mode flags - %lu \'%s\'. Cannot set over current ones - %lu \'%s\'"
                    ,uVar12,pQVar14,uVar6,local_138 + *(long *)(local_138 + 0x10));
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100032592;
        }
        QArrayData::deallocate(local_138,1,8);
      }
LAB_100032592:
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000325c8;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_1000325c8:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000325fe;
        }
        QArrayData::deallocate(local_128,1,8);
      }
LAB_1000325fe:
      if (*(int *)local_130 != -1) {
        local_e8 = local_130;
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          iVar1 = *(int *)local_130;
          UNLOCK();
          goto joined_r0x000100032a4d;
        }
        goto LAB_100032a56;
      }
    }
  }
  else {
    QSettings::QSettings((QSettings *)&local_160,(QObject *)0x0);
    local_168 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
    QVariant::QVariant(&local_178,false);
    QSettings::value((QString *)&local_150,&local_160);
    cVar4 = QVariant::toBool();
    QVariant::~QVariant(&local_150);
    QVariant::~QVariant(&local_178);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000326ea;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_1000326ea:
    QSettings::~QSettings((QSettings *)&local_160);
    if ((2 < DAT_10230ffd0) && (cVar4 == '\x01')) {
      FUN_100033410(&local_188,uVar12);
      QString::toLocal8Bit();
      FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                    "Set presentation mode flags - %lu \'%s\' (forced=%d)",uVar12,
                    local_180 + *(long *)(local_180 + 0x10),CONCAT44(uVar15,(uint)bVar10));
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10003279a;
        }
        QArrayData::deallocate(local_180,1,8);
      }
LAB_10003279a:
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_31 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000327d0;
        }
        QArrayData::deallocate(local_188,2,8);
      }
    }
LAB_1000327d0:
    puVar3 = PTR__objc_msgSend_1021e1c68;
    puVar2 = PTR__NSApp_1021e1070;
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_setPresentationOptions__1022698a8,uVar12);
    uVar7 = (*(code *)puVar3)(*(undefined8 *)puVar2,PTR_s_presentationOptions_102269898);
    uVar8 = (*(code *)puVar3)(*(undefined8 *)puVar2);
    QSettings::QSettings((QSettings *)&local_1a8,(QObject *)0x0);
    local_1b0 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
    QVariant::QVariant(&local_1c0,false);
    QSettings::value((QString *)&local_198,&local_1a8);
    cVar4 = QVariant::toBool();
    QVariant::~QVariant(&local_198);
    QVariant::~QVariant(&local_1c0);
    if (*(int *)local_1b0 != -1) {
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        local_31 = *(int *)local_1b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000328c2;
      }
      QArrayData::deallocate(local_1b0,2,8);
    }
LAB_1000328c2:
    QSettings::~QSettings((QSettings *)&local_1a8);
    if ((2 < DAT_10230ffd0) && (cVar4 == '\x01')) {
      FUN_100033410(&local_1d0,uVar7);
      QString::toLocal8Bit();
      FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                    "Presentation mode flags after set - %lu \'%s\'",uVar7,
                    local_1c8 + *(long *)(local_1c8 + 0x10));
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_31 = *(int *)local_1c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100032968;
        }
        QArrayData::deallocate(local_1c8,1,8);
      }
LAB_100032968:
      if (*(int *)local_1d0 != -1) {
        if (*(int *)local_1d0 != 0) {
          LOCK();
          *(int *)local_1d0 = *(int *)local_1d0 + -1;
          local_31 = *(int *)local_1d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10003299e;
        }
        QArrayData::deallocate(local_1d0,2,8);
      }
LAB_10003299e:
      if (2 < DAT_10230ffd0) {
        FUN_100033410(&local_1e0,uVar8);
        QString::toLocal8Bit();
        FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                      "System presentation mode flags after set - %lu \'%s\'",uVar8,
                      local_1d8 + *(long *)(local_1d8 + 0x10));
        if (*(int *)local_1d8 != -1) {
          if (*(int *)local_1d8 != 0) {
            LOCK();
            *(int *)local_1d8 = *(int *)local_1d8 + -1;
            local_31 = *(int *)local_1d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100032a2f;
          }
          QArrayData::deallocate(local_1d8,1,8);
        }
LAB_100032a2f:
        if (*(int *)local_1e0 != -1) {
          local_e8 = local_1e0;
          if (*(int *)local_1e0 != 0) {
            LOCK();
            *(int *)local_1e0 = *(int *)local_1e0 + -1;
            iVar1 = *(int *)local_1e0;
            UNLOCK();
            goto joined_r0x000100032a4d;
          }
          goto LAB_100032a56;
        }
      }
    }
  }
LAB_100032a65:
  QSettings::QSettings((QSettings *)&local_200,(QObject *)0x0);
  local_208 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
  QVariant::QVariant(&local_218,false);
  QSettings::value((QString *)&local_1f0,&local_200);
  cVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_1f0);
  QVariant::~QVariant(&local_218);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100032b16;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_100032b16:
  QSettings::~QSettings((QSettings *)&local_200);
  if ((2 < DAT_10230ffd0) && (cVar4 == '\x01')) {
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                  "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
  }
  return;
}

