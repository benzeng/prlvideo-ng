
char FUN_10002dd30(undefined8 param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  QWidget *pQVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  QWidget *pQVar12;
  QMapNodeBase *pQVar13;
  QArrayData *pQVar14;
  char *pcVar15;
  char cVar16;
  long lVar17;
  bool bVar18;
  QMapNodeBase *local_488;
  QArrayData *local_470;
  QArrayData *local_468;
  QArrayData *local_460;
  QArrayData *local_458;
  QVariant local_450;
  QArrayData *local_440;
  QVariant local_438;
  QVariant local_428;
  QArrayData *local_418;
  QArrayData *local_410;
  QArrayData *local_408;
  QArrayData *local_400;
  QVariant local_3f8;
  QArrayData *local_3e8;
  QVariant local_3e0;
  QVariant local_3d0;
  QArrayData *local_3c0;
  QArrayData *local_3b8;
  QArrayData *local_3b0;
  QArrayData *local_3a8;
  QVariant local_3a0;
  QArrayData *local_390;
  QVariant local_388;
  QVariant local_378;
  QArrayData *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QArrayData *local_350;
  QVariant local_348;
  QArrayData *local_338;
  QVariant local_330;
  QVariant local_320;
  QArrayData *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  QVariant local_2f0;
  QArrayData *local_2e0;
  QVariant local_2d8;
  QVariant local_2c8;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QVariant local_298;
  QArrayData *local_288;
  QVariant local_280;
  QVariant local_270;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QVariant local_240;
  QArrayData *local_230;
  QVariant local_228;
  QVariant local_218;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QVariant local_1f0;
  QArrayData *local_1e0;
  QVariant local_1d8;
  QVariant local_1c8;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QVariant local_198;
  QArrayData *local_188;
  QVariant local_180;
  QVariant local_170;
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
  QArrayData *local_d8;
  QArrayData *local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QVariant local_b0;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  uVar6 = FUN_1001d50a0();
  cVar2 = FUN_1001d5120(uVar6);
  if (cVar2 != '\0') {
    QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
    local_60 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
    QVariant::QVariant(&local_70,false);
    QSettings::value((QString *)&local_48,&local_58);
    cVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_48);
    QVariant::~QVariant(&local_70);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002dde9;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10002dde9:
    QSettings::~QSettings((QSettings *)&local_58);
    if (DAT_10230ffd0 < 2) {
      return '\x02';
    }
    if (cVar2 != '\x01') {
      return '\x02';
    }
    EnumUtils::enumToString(&local_80,2);
    QString::toUtf8();
    pQVar14 = local_78 + *(long *)(local_78 + 0x10);
    EnumUtils::enumToString(&local_90,param_2);
    QString::toUtf8();
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",2,
                  "RESULT 01: PD is in Kiosk mode. Calculated UI mode: %s (requested: %s).",pQVar14,
                  local_88 + *(long *)(local_88 + 0x10));
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002deb1;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_10002deb1:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002dee7;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10002dee7:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002df17;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_10002df17:
    cVar2 = '\x02';
    if (*(int *)local_80 == -1) {
      return '\x02';
    }
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return '\x02';
      }
      local_31 = 0;
    }
LAB_10002e56f:
    QArrayData::deallocate(local_80,2,8);
    return cVar2;
  }
  cVar2 = FUN_100030d30();
  if (cVar2 != '\0') {
    QSettings::QSettings((QSettings *)&local_b0,(QObject *)0x0);
    local_b8 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
    QVariant::QVariant(&local_c8,false);
    QSettings::value((QString *)&local_a0,&local_b0);
    cVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_a0);
    QVariant::~QVariant(&local_c8);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002e00d;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_10002e00d:
    QSettings::~QSettings((QSettings *)&local_b0);
    if (DAT_10230ffd0 < 2) {
      return '\x01';
    }
    if (cVar2 != '\x01') {
      return '\x01';
    }
    EnumUtils::enumToString(&local_d8,1);
    QString::toUtf8();
    pQVar14 = local_d0 + *(long *)(local_d0 + 0x10);
    EnumUtils::enumToString(&local_e8,param_2);
    QString::toUtf8();
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",2,
                  "RESULT 02: Switch from/to Full Screen is in progress. Calculated UI mode: %s (requested: %s)."
                  ,pQVar14,local_e0 + *(long *)(local_e0 + 0x10));
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002e0ed;
      }
      QArrayData::deallocate(local_e0,1,8);
    }
LAB_10002e0ed:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002e123;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_10002e123:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002e159;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
LAB_10002e159:
    cVar2 = '\x01';
    if (*(int *)local_d8 == -1) {
      return '\x01';
    }
    local_80 = local_d8;
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      UNLOCK();
      if (*(int *)local_d8 != 0) {
        return '\x01';
      }
      local_31 = 0;
    }
    goto LAB_10002e56f;
  }
  FUN_1001d50a0();
  pQVar7 = (QWidget *)QApplication::activeWindow();
  if (pQVar7 == (QWidget *)0x0) {
    QSettings::QSettings((QSettings *)&local_108,(QObject *)0x0);
    local_110 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
    QVariant::QVariant(&local_120,false);
    QSettings::value((QString *)&local_f8,&local_108);
    cVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_f8);
    QVariant::~QVariant(&local_120);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002e3ee;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_10002e3ee:
    QSettings::~QSettings((QSettings *)&local_108);
    if (DAT_10230ffd0 < 2) {
      return '\x01';
    }
    if (cVar2 != '\x01') {
      return '\x01';
    }
    EnumUtils::enumToString(&local_130,1);
    QString::toUtf8();
    pQVar14 = local_128 + *(long *)(local_128 + 0x10);
    EnumUtils::enumToString(&local_140,param_2);
    QString::toUtf8();
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",2,
                  "RESULT 03: No active window. Calculated UI mode: %s (requested: %s).",pQVar14,
                  local_138 + *(long *)(local_138 + 0x10));
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002e4ce;
      }
      QArrayData::deallocate(local_138,1,8);
    }
LAB_10002e4ce:
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002e504;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_10002e504:
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002e53a;
      }
      QArrayData::deallocate(local_128,1,8);
    }
LAB_10002e53a:
    cVar2 = '\x01';
    if (*(int *)local_130 == -1) {
      return '\x01';
    }
    local_80 = local_130;
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      UNLOCK();
      if (*(int *)local_130 != 0) {
        return '\x01';
      }
      local_31 = 0;
    }
    goto LAB_10002e56f;
  }
  QObject::property((char *)&local_150);
  QObject::property((char *)&local_160);
  QSettings::QSettings((QSettings *)&local_180,(QObject *)0x0);
  local_188 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
  QVariant::QVariant(&local_198,false);
  QSettings::value((QString *)&local_170,&local_180);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_170);
  QVariant::~QVariant(&local_198);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002e29e;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_10002e29e:
  QSettings::~QSettings((QSettings *)&local_180);
  if ((1 < DAT_10230ffd0) && (cVar2 == '\x01')) {
    QWidget::windowTitle();
    QString::toUtf8();
    pQVar14 = local_1a0 + *(long *)(local_1a0 + 0x10);
    bVar18 = (local_150.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0;
    if (bVar18) {
      pcVar15 = "";
    }
    else {
      QVariant::toString();
      QString::toUtf8();
      pcVar15 = (char *)(local_1b0 + *(long *)(local_1b0 + 0x10));
    }
    uVar4 = 0xffffffff;
    if ((local_160.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
      uVar4 = QVariant::toInt((bool *)&local_160);
    }
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",2,
                  "Active Window: %p [%s] (VmID=[%s], Display ID=%d)",pQVar7,pQVar14,pcVar15,uVar4);
    if (!bVar18) {
      if (*(int *)local_1b0 != -1) {
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          local_31 = *(int *)local_1b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002e61a;
        }
        QArrayData::deallocate(local_1b0,1,8);
      }
LAB_10002e61a:
      if (*(int *)local_1b8 != -1) {
        if (*(int *)local_1b8 != 0) {
          LOCK();
          *(int *)local_1b8 = *(int *)local_1b8 + -1;
          local_31 = *(int *)local_1b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002e650;
        }
        QArrayData::deallocate(local_1b8,2,8);
      }
    }
LAB_10002e650:
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002e686;
      }
      QArrayData::deallocate(local_1a0,1,8);
    }
LAB_10002e686:
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_31 = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002e6bc;
      }
      QArrayData::deallocate(local_1a8,2,8);
    }
  }
LAB_10002e6bc:
  plVar8 = (long *)CHostDesktopWorkspacesController::instance();
  cVar2 = (**(code **)(*plVar8 + 0xd8))(plVar8);
  cVar16 = '\x01';
  if (cVar2 != '\0') {
    QSettings::QSettings((QSettings *)&local_1d8,(QObject *)0x0);
    local_1e0 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
    QVariant::QVariant(&local_1f0,false);
    QSettings::value((QString *)&local_1c8,&local_1d8);
    cVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_1c8);
    QVariant::~QVariant(&local_1f0);
    if (*(int *)local_1e0 != -1) {
      if (*(int *)local_1e0 != 0) {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + -1;
        local_31 = *(int *)local_1e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002e78f;
      }
      QArrayData::deallocate(local_1e0,2,8);
    }
LAB_10002e78f:
    QSettings::~QSettings((QSettings *)&local_1d8);
    cVar16 = '\x03';
    if ((2 < DAT_10230ffd0) && (cVar2 == '\x01')) {
      EnumUtils::enumToString(&local_200,3);
      QString::toUtf8();
      FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",3,
                    "Active window is on Full Screen Space. Use %s as a default UI mode",
                    local_1f8 + *(long *)(local_1f8 + 0x10));
      if (*(int *)local_1f8 != -1) {
        if (*(int *)local_1f8 != 0) {
          LOCK();
          *(int *)local_1f8 = *(int *)local_1f8 + -1;
          local_31 = *(int *)local_1f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002e840;
        }
        QArrayData::deallocate(local_1f8,1,8);
      }
LAB_10002e840:
      cVar16 = '\x03';
      if (*(int *)local_200 != -1) {
        if (*(int *)local_200 != 0) {
          LOCK();
          *(int *)local_200 = *(int *)local_200 + -1;
          local_31 = *(int *)local_200 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002e87c;
        }
        QArrayData::deallocate(local_200,2,8);
      }
    }
  }
LAB_10002e87c:
  uVar6 = FUN_100152280();
  QVariant::toString();
  lVar9 = FUN_1001548f0(uVar6);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002e8df;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_10002e8df:
  if (lVar9 == 0) {
    QSettings::QSettings((QSettings *)&local_228,(QObject *)0x0);
    local_230 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
    QVariant::QVariant(&local_240,false);
    QSettings::value((QString *)&local_218,&local_228);
    cVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_218);
    QVariant::~QVariant(&local_240);
    if (*(int *)local_230 != -1) {
      if (*(int *)local_230 != 0) {
        LOCK();
        *(int *)local_230 = *(int *)local_230 + -1;
        local_31 = *(int *)local_230 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002ea09;
      }
      QArrayData::deallocate(local_230,2,8);
    }
LAB_10002ea09:
    QSettings::~QSettings((QSettings *)&local_228);
    if ((DAT_10230ffd0 < 2) || (cVar2 != '\x01')) goto LAB_10002f8b7;
    EnumUtils::enumToString(&local_250,cVar16);
    QString::toUtf8();
    pQVar14 = local_248 + *(long *)(local_248 + 0x10);
    EnumUtils::enumToString(&local_260,param_2);
    QString::toUtf8();
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",2,
                  "RESULT 04: No VM for the active window. Calculated UI mode: %s (requested: %s).",
                  pQVar14,local_258 + *(long *)(local_258 + 0x10));
    if (*(int *)local_258 != -1) {
      if (*(int *)local_258 != 0) {
        LOCK();
        *(int *)local_258 = *(int *)local_258 + -1;
        local_31 = *(int *)local_258 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002eae5;
      }
      QArrayData::deallocate(local_258,1,8);
    }
LAB_10002eae5:
    if (*(int *)local_260 != -1) {
      if (*(int *)local_260 != 0) {
        LOCK();
        *(int *)local_260 = *(int *)local_260 + -1;
        local_31 = *(int *)local_260 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002eb1b;
      }
      QArrayData::deallocate(local_260,2,8);
    }
LAB_10002eb1b:
    if (*(int *)local_248 != -1) {
      if (*(int *)local_248 != 0) {
        LOCK();
        *(int *)local_248 = *(int *)local_248 + -1;
        local_31 = *(int *)local_248 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002eb51;
      }
      QArrayData::deallocate(local_248,1,8);
    }
LAB_10002eb51:
    if (*(int *)local_250 != -1) {
      if (*(int *)local_250 != 0) {
        LOCK();
        *(int *)local_250 = *(int *)local_250 + -1;
        local_31 = *(int *)local_250 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002f8b7;
      }
      QArrayData::deallocate(local_250,2,8);
    }
    goto LAB_10002f8b7;
  }
  uVar6 = FUN_10018c280(lVar9);
  iVar5 = FUN_100319ae0(uVar6);
  if (iVar5 != 2) {
    QSettings::QSettings((QSettings *)&local_280,(QObject *)0x0);
    local_288 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
    QVariant::QVariant(&local_298,false);
    QSettings::value((QString *)&local_270,&local_280);
    cVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_270);
    QVariant::~QVariant(&local_298);
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_31 = *(int *)local_288 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002ec45;
      }
      QArrayData::deallocate(local_288,2,8);
    }
LAB_10002ec45:
    QSettings::~QSettings((QSettings *)&local_280);
    if ((DAT_10230ffd0 < 2) || (cVar2 != '\x01')) goto LAB_10002f8b7;
    EnumUtils::enumToString(&local_2a8,cVar16);
    QString::toUtf8();
    pQVar14 = local_2a0 + *(long *)(local_2a0 + 0x10);
    EnumUtils::enumToString(&local_2b8,param_2);
    QString::toUtf8();
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",2,
                  "RESULT 05: active VM is not in Full Screen. Calculated UI mode: %s (requested: %s)."
                  ,pQVar14,local_2b0 + *(long *)(local_2b0 + 0x10));
    if (*(int *)local_2b0 != -1) {
      if (*(int *)local_2b0 != 0) {
        LOCK();
        *(int *)local_2b0 = *(int *)local_2b0 + -1;
        local_31 = *(int *)local_2b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002ed21;
      }
      QArrayData::deallocate(local_2b0,1,8);
    }
LAB_10002ed21:
    if (*(int *)local_2b8 != -1) {
      if (*(int *)local_2b8 != 0) {
        LOCK();
        *(int *)local_2b8 = *(int *)local_2b8 + -1;
        local_31 = *(int *)local_2b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002ed57;
      }
      QArrayData::deallocate(local_2b8,2,8);
    }
LAB_10002ed57:
    if (*(int *)local_2a0 != -1) {
      if (*(int *)local_2a0 != 0) {
        LOCK();
        *(int *)local_2a0 = *(int *)local_2a0 + -1;
        local_31 = *(int *)local_2a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002ed8d;
      }
      QArrayData::deallocate(local_2a0,1,8);
    }
LAB_10002ed8d:
    if (*(int *)local_2a8 != -1) {
      if (*(int *)local_2a8 != 0) {
        LOCK();
        *(int *)local_2a8 = *(int *)local_2a8 + -1;
        local_31 = *(int *)local_2a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002f8b7;
      }
      QArrayData::deallocate(local_2a8,2,8);
    }
    goto LAB_10002f8b7;
  }
  FUN_10018c2b0(lVar9);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getVmFullScreen();
  cVar2 = CVmFullScreen::isOptimiseForGames();
  cVar3 = MacUtils::screensHaveSeparateSpaces();
  if (cVar3 == '\0') {
    uVar6 = FUN_10018c280(lVar9);
    plVar8 = (long *)FUN_100319950(uVar6);
    local_488 = (QMapNodeBase *)*plVar8;
    if (*(int *)local_488 == 0) {
      local_488 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(*plVar8 + 0x10) != 0) {
        puVar10 = (ulong *)FUN_1000340b0();
        *(ulong **)(local_488 + 0x10) = puVar10;
        *puVar10 = *puVar10 & 3 | (ulong)(local_488 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*(int *)local_488 != -1) {
      LOCK();
      *(int *)local_488 = *(int *)local_488 + 1;
      local_31 = *(int *)local_488 != 0;
      UNLOCK();
      local_488 = (QMapNodeBase *)*plVar8;
    }
    lVar17 = 0;
    if (*(long *)(local_488 + 0x10) != 0) {
      pQVar13 = *(QMapNodeBase **)(local_488 + 0x20);
      while (lVar17 = 0, pQVar13 != local_488 + 8) {
        if ((((*(long *)(pQVar13 + 0x20) != 0) && (*(int *)(*(long *)(pQVar13 + 0x20) + 4) != 0)) &&
            (lVar17 = *(long *)(pQVar13 + 0x28), lVar17 != 0)) &&
           (lVar11 = FUN_100323e30(lVar17), lVar11 != 0)) {
          pQVar12 = (QWidget *)FUN_100323e30(lVar17);
          cVar3 = WidgetUtils::isWidgetOnPrimaryScreen(pQVar12);
          if (cVar3 != '\0') break;
        }
        pQVar13 = (QMapNodeBase *)QMapNodeBase::nextNode();
      }
    }
    if (*(int *)local_488 != -1) {
      if (*(int *)local_488 != 0) {
        LOCK();
        *(int *)local_488 = *(int *)local_488 + -1;
        local_31 = *(int *)local_488 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002ef1d;
      }
      if (*(long *)(local_488 + 0x10) != 0) {
        FUN_100034170();
        QMapDataBase::freeTree(local_488,(int)*(undefined8 *)(local_488 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_488);
    }
LAB_10002ef1d:
    if (lVar17 != 0) {
      plVar8 = (long *)CHostDesktopWorkspacesController::instance();
      pcVar1 = *(code **)(*plVar8 + 0xc0);
      FUN_100323e30(lVar17,0);
      cVar3 = (*pcVar1)(plVar8);
      goto LAB_10002ef4b;
    }
  }
  else {
    plVar8 = (long *)CHostDesktopWorkspacesController::instance();
    cVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
LAB_10002ef4b:
    if (cVar3 != '\0') {
      if (param_2 == 0) {
        uVar6 = FUN_10018c280(lVar9);
        uVar6 = FUN_100319d40(uVar6);
        cVar3 = FUN_10035c0c0(uVar6);
        if (cVar3 == '\0') {
          plVar8 = (long *)CHostDesktopWorkspacesController::instance();
          cVar2 = (**(code **)(*plVar8 + 0xd8))(plVar8);
          if (cVar2 != '\0') {
            cVar16 = '\x03';
          }
          QSettings::QSettings((QSettings *)&local_3e0,(QObject *)0x0);
          local_3e8 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
          QVariant::QVariant(&local_3f8,false);
          QSettings::value((QString *)&local_3d0,&local_3e0);
          cVar2 = QVariant::toBool();
          QVariant::~QVariant(&local_3d0);
          QVariant::~QVariant(&local_3f8);
          if (*(int *)local_3e8 != -1) {
            if (*(int *)local_3e8 != 0) {
              LOCK();
              *(int *)local_3e8 = *(int *)local_3e8 + -1;
              local_31 = *(int *)local_3e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10002f9b4;
            }
            QArrayData::deallocate(local_3e8,2,8);
          }
LAB_10002f9b4:
          QSettings::~QSettings((QSettings *)&local_3e0);
          if ((DAT_10230ffd0 < 2) || (cVar2 != '\x01')) goto LAB_10002f8b7;
          EnumUtils::enumToString(&local_408,cVar16);
          QString::toUtf8();
          pQVar14 = local_400 + *(long *)(local_400 + 0x10);
          EnumUtils::enumToString(&local_418,0);
          QString::toUtf8();
          FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",2,
                        "RESULT 09: Calculated UI mode: %s (requested: %s).",pQVar14,
                        local_410 + *(long *)(local_410 + 0x10));
          if (*(int *)local_410 != -1) {
            if (*(int *)local_410 != 0) {
              LOCK();
              *(int *)local_410 = *(int *)local_410 + -1;
              local_31 = *(int *)local_410 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10002fa8c;
            }
            QArrayData::deallocate(local_410,1,8);
          }
LAB_10002fa8c:
          if (*(int *)local_418 != -1) {
            if (*(int *)local_418 != 0) {
              LOCK();
              *(int *)local_418 = *(int *)local_418 + -1;
              local_31 = *(int *)local_418 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10002fac2;
            }
            QArrayData::deallocate(local_418,2,8);
          }
LAB_10002fac2:
          if (*(int *)local_400 != -1) {
            if (*(int *)local_400 != 0) {
              LOCK();
              *(int *)local_400 = *(int *)local_400 + -1;
              local_31 = *(int *)local_400 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10002faf8;
            }
            QArrayData::deallocate(local_400,1,8);
          }
LAB_10002faf8:
          if (*(int *)local_408 != -1) {
            if (*(int *)local_408 != 0) {
              LOCK();
              *(int *)local_408 = *(int *)local_408 + -1;
              local_31 = *(int *)local_408 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10002f8b7;
            }
            QArrayData::deallocate(local_408,2,8);
          }
          goto LAB_10002f8b7;
        }
        iVar5 = MacUtils::tabsCountInWindow(pQVar7);
        cVar16 = '\x05';
        if (cVar2 == '\0') {
          cVar16 = (iVar5 < 2) + '\x03';
        }
        QSettings::QSettings((QSettings *)&local_388,(QObject *)0x0);
        local_390 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
        QVariant::QVariant(&local_3a0,false);
        QSettings::value((QString *)&local_378,&local_388);
        cVar2 = QVariant::toBool();
        QVariant::~QVariant(&local_378);
        QVariant::~QVariant(&local_3a0);
        if (*(int *)local_390 != -1) {
          if (*(int *)local_390 != 0) {
            LOCK();
            *(int *)local_390 = *(int *)local_390 + -1;
            local_31 = *(int *)local_390 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002f2af;
          }
          QArrayData::deallocate(local_390,2,8);
        }
LAB_10002f2af:
        QSettings::~QSettings((QSettings *)&local_388);
        if ((DAT_10230ffd0 < 2) || (cVar2 != '\x01')) goto LAB_10002f8b7;
        EnumUtils::enumToString(&local_3b0,cVar16);
        QString::toUtf8();
        pQVar14 = local_3a8 + *(long *)(local_3a8 + 0x10);
        EnumUtils::enumToString(&local_3c0,0);
        QString::toUtf8();
        FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",2,
                      "RESULT 08: Calculated UI mode: %s (requested: %s).",pQVar14,
                      local_3b8 + *(long *)(local_3b8 + 0x10));
        if (*(int *)local_3b8 != -1) {
          if (*(int *)local_3b8 != 0) {
            LOCK();
            *(int *)local_3b8 = *(int *)local_3b8 + -1;
            local_31 = *(int *)local_3b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002f387;
          }
          QArrayData::deallocate(local_3b8,1,8);
        }
LAB_10002f387:
        if (*(int *)local_3c0 != -1) {
          if (*(int *)local_3c0 != 0) {
            LOCK();
            *(int *)local_3c0 = *(int *)local_3c0 + -1;
            local_31 = *(int *)local_3c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002f3bd;
          }
          QArrayData::deallocate(local_3c0,2,8);
        }
LAB_10002f3bd:
        if (*(int *)local_3a8 != -1) {
          if (*(int *)local_3a8 != 0) {
            LOCK();
            *(int *)local_3a8 = *(int *)local_3a8 + -1;
            local_31 = *(int *)local_3a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002f3f3;
          }
          QArrayData::deallocate(local_3a8,1,8);
        }
LAB_10002f3f3:
        if (*(int *)local_3b0 != -1) {
          if (*(int *)local_3b0 != 0) {
            LOCK();
            *(int *)local_3b0 = *(int *)local_3b0 + -1;
            local_31 = *(int *)local_3b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002f8b7;
          }
          QArrayData::deallocate(local_3b0,2,8);
        }
        goto LAB_10002f8b7;
      }
      if (param_2 != 3) {
        if (param_2 != 4) goto LAB_10002f688;
        QSettings::QSettings((QSettings *)&local_2d8,(QObject *)0x0);
        local_2e0 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
        QVariant::QVariant(&local_2f0,false);
        QSettings::value((QString *)&local_2c8,&local_2d8);
        cVar2 = QVariant::toBool();
        QVariant::~QVariant(&local_2c8);
        QVariant::~QVariant(&local_2f0);
        if (*(int *)local_2e0 != -1) {
          if (*(int *)local_2e0 != 0) {
            LOCK();
            *(int *)local_2e0 = *(int *)local_2e0 + -1;
            local_31 = *(int *)local_2e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002f4f0;
          }
          QArrayData::deallocate(local_2e0,2,8);
        }
LAB_10002f4f0:
        QSettings::~QSettings((QSettings *)&local_2d8);
        cVar16 = '\x04';
        if ((DAT_10230ffd0 < 2) || (cVar2 != '\x01')) goto LAB_10002f8b7;
        EnumUtils::enumToString(&local_300,4);
        QString::toUtf8();
        pQVar14 = local_2f8 + *(long *)(local_2f8 + 0x10);
        EnumUtils::enumToString(&local_310,4);
        QString::toUtf8();
        FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",2,
                      "RESULT 06: Calculated UI mode: %s (requested: %s).",pQVar14,
                      local_308 + *(long *)(local_308 + 0x10));
        if (*(int *)local_308 != -1) {
          if (*(int *)local_308 != 0) {
            LOCK();
            *(int *)local_308 = *(int *)local_308 + -1;
            local_31 = *(int *)local_308 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002f5d3;
          }
          QArrayData::deallocate(local_308,1,8);
        }
LAB_10002f5d3:
        if (*(int *)local_310 != -1) {
          if (*(int *)local_310 != 0) {
            LOCK();
            *(int *)local_310 = *(int *)local_310 + -1;
            local_31 = *(int *)local_310 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002f609;
          }
          QArrayData::deallocate(local_310,2,8);
        }
LAB_10002f609:
        if (*(int *)local_2f8 != -1) {
          if (*(int *)local_2f8 != 0) {
            LOCK();
            *(int *)local_2f8 = *(int *)local_2f8 + -1;
            local_31 = *(int *)local_2f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002f63f;
          }
          QArrayData::deallocate(local_2f8,1,8);
        }
LAB_10002f63f:
        cVar16 = '\x04';
        if (*(int *)local_300 != -1) {
          if (*(int *)local_300 != 0) {
            LOCK();
            *(int *)local_300 = *(int *)local_300 + -1;
            local_31 = *(int *)local_300 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002f8b7;
          }
          QArrayData::deallocate(local_300,2,8);
        }
        goto LAB_10002f8b7;
      }
      QSettings::QSettings((QSettings *)&local_330,(QObject *)0x0);
      local_338 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
      QVariant::QVariant(&local_348,false);
      QSettings::value((QString *)&local_320,&local_330);
      cVar2 = QVariant::toBool();
      QVariant::~QVariant(&local_320);
      QVariant::~QVariant(&local_348);
      if (*(int *)local_338 != -1) {
        if (*(int *)local_338 != 0) {
          LOCK();
          *(int *)local_338 = *(int *)local_338 + -1;
          local_31 = *(int *)local_338 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002f01b;
        }
        QArrayData::deallocate(local_338,2,8);
      }
LAB_10002f01b:
      QSettings::~QSettings((QSettings *)&local_330);
      cVar16 = '\x03';
      if ((DAT_10230ffd0 < 2) || (cVar2 != '\x01')) goto LAB_10002f8b7;
      EnumUtils::enumToString(&local_358,3);
      QString::toUtf8();
      pQVar14 = local_350 + *(long *)(local_350 + 0x10);
      EnumUtils::enumToString(&local_368,3);
      QString::toUtf8();
      FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",2,
                    "RESULT 07: Calculated UI mode: %s (requested: %s).",pQVar14,
                    local_360 + *(long *)(local_360 + 0x10));
      if (*(int *)local_360 != -1) {
        if (*(int *)local_360 != 0) {
          LOCK();
          *(int *)local_360 = *(int *)local_360 + -1;
          local_31 = *(int *)local_360 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002f0fe;
        }
        QArrayData::deallocate(local_360,1,8);
      }
LAB_10002f0fe:
      if (*(int *)local_368 != -1) {
        if (*(int *)local_368 != 0) {
          LOCK();
          *(int *)local_368 = *(int *)local_368 + -1;
          local_31 = *(int *)local_368 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002f134;
        }
        QArrayData::deallocate(local_368,2,8);
      }
LAB_10002f134:
      if (*(int *)local_350 != -1) {
        if (*(int *)local_350 != 0) {
          LOCK();
          *(int *)local_350 = *(int *)local_350 + -1;
          local_31 = *(int *)local_350 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002f16a;
        }
        QArrayData::deallocate(local_350,1,8);
      }
LAB_10002f16a:
      cVar16 = '\x03';
      if (*(int *)local_358 != -1) {
        if (*(int *)local_358 != 0) {
          LOCK();
          *(int *)local_358 = *(int *)local_358 + -1;
          local_31 = *(int *)local_358 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002f8b7;
        }
        QArrayData::deallocate(local_358,2,8);
      }
      goto LAB_10002f8b7;
    }
  }
LAB_10002f688:
  QSettings::QSettings((QSettings *)&local_438,(QObject *)0x0);
  local_440 = (QArrayData *)QString::fromAscii_helper("Debug System UI",0xf);
  QVariant::QVariant(&local_450,false);
  QSettings::value((QString *)&local_428,&local_438);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_428);
  QVariant::~QVariant(&local_450);
  if (*(int *)local_440 != -1) {
    if (*(int *)local_440 != 0) {
      LOCK();
      *(int *)local_440 = *(int *)local_440 + -1;
      local_31 = *(int *)local_440 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002f739;
    }
    QArrayData::deallocate(local_440,2,8);
  }
LAB_10002f739:
  QSettings::~QSettings((QSettings *)&local_438);
  if ((DAT_10230ffd0 < 2) || (cVar2 != '\x01')) goto LAB_10002f8b7;
  EnumUtils::enumToString(&local_460,cVar16);
  QString::toUtf8();
  pQVar14 = local_458 + *(long *)(local_458 + 0x10);
  EnumUtils::enumToString(&local_470,param_2);
  QString::toUtf8();
  FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",2,
                "RESULT 10: Calculated UI mode: %s (requested: %s).",pQVar14,
                local_468 + *(long *)(local_468 + 0x10));
  if (*(int *)local_468 != -1) {
    if (*(int *)local_468 != 0) {
      LOCK();
      *(int *)local_468 = *(int *)local_468 + -1;
      local_31 = *(int *)local_468 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002f815;
    }
    QArrayData::deallocate(local_468,1,8);
  }
LAB_10002f815:
  if (*(int *)local_470 != -1) {
    if (*(int *)local_470 != 0) {
      LOCK();
      *(int *)local_470 = *(int *)local_470 + -1;
      local_31 = *(int *)local_470 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002f84b;
    }
    QArrayData::deallocate(local_470,2,8);
  }
LAB_10002f84b:
  if (*(int *)local_458 != -1) {
    if (*(int *)local_458 != 0) {
      LOCK();
      *(int *)local_458 = *(int *)local_458 + -1;
      local_31 = *(int *)local_458 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002f881;
    }
    QArrayData::deallocate(local_458,1,8);
  }
LAB_10002f881:
  if (*(int *)local_460 != -1) {
    if (*(int *)local_460 != 0) {
      LOCK();
      *(int *)local_460 = *(int *)local_460 + -1;
      local_31 = *(int *)local_460 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002f8b7;
    }
    QArrayData::deallocate(local_460,2,8);
  }
LAB_10002f8b7:
  QVariant::~QVariant(&local_160);
  QVariant::~QVariant(&local_150);
  return cVar16;
}

