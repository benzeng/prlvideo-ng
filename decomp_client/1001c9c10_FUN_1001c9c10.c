
void FUN_1001c9c10(void)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  QVariant local_430;
  Data_conflict local_420;
  QVariant local_418;
  Data_conflict local_408;
  QVariant local_400;
  Data_conflict local_3f0;
  QVariant local_3e8;
  Data_conflict local_3d8;
  QVariant local_3d0;
  QArrayData *local_3c0;
  QVariant local_3b8;
  Data_conflict local_3a8;
  QVariant local_3a0;
  QArrayData *local_390;
  QVariant local_388;
  Data_conflict local_378;
  QVariant local_370;
  Data_conflict local_360;
  QVariant local_358;
  QArrayData *local_348;
  QVariant local_340;
  QVariant local_330;
  long local_320 [25];
  long local_258 [2];
  QString local_248;
  QArrayData *local_240;
  QVariant local_238;
  Data_conflict local_228;
  QVariant local_220;
  QVariant local_210;
  QVariant local_200;
  Data_conflict local_1f0;
  QVariant local_1e8;
  QArrayData *local_1d8;
  QVariant local_1d0;
  QVariant local_1c0;
  QArrayData *local_1b0;
  QVariant local_1a8;
  QArrayData *local_198;
  QArrayData *local_190;
  QVariant local_188;
  QArrayData *local_178;
  QString local_170;
  Data_conflict local_168;
  QVariant local_160;
  QArrayData *local_150;
  QVariant local_148;
  QVariant local_138;
  QArrayData *local_128;
  QVariant local_120;
  QVariant local_110;
  Data_conflict local_100;
  QVariant local_f8;
  Data_conflict local_e8;
  QVariant local_e0;
  Data_conflict local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  undefined4 local_98;
  int *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QString local_70 [2];
  QVariant local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)&local_60,(QObject *)0x0);
  FUN_100a04400(&local_78);
  QSettings::applicationName();
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
  if (1 < *(int *)local_88 + 1U) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + 1;
    local_31 = *(int *)local_88 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1dd8616);
  QString::append(&local_80);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c9cb0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001c9cb0:
  QSettings::QSettings((QSettings *)local_70,&local_78,&local_80,(QObject *)0x0);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c9cf3;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1001c9cf3:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c9d23;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1001c9d23:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c9d53;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1001c9d53:
  QSettings::childGroups();
  local_b0 = local_90;
  if (*local_90 != -1) {
    if (*local_90 == 0) {
      QListData::detach((int)&local_b0);
      iVar4 = local_b0[2];
      if (iVar4 != local_b0[3]) {
        local_90 = local_90 + (long)local_90[2] * 2 + 4;
        piVar9 = local_b0 + (long)iVar4 * 2 + 4;
        lVar7 = (long)local_b0[3] * 8 + (long)iVar4 * -8;
        do {
          piVar1 = *(int **)local_90;
          *(int **)piVar9 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          local_90 = local_90 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_90 = *local_90 + 1;
      local_31 = *local_90 != 0;
      UNLOCK();
    }
  }
  piVar9 = local_b0 + (long)local_b0[2] * 2 + 4;
  local_a0 = local_b0 + (long)local_b0[3] * 2 + 4;
  local_a8 = piVar9;
  if (local_b0[2] != local_b0[3]) {
    do {
      local_98 = 1;
      local_a8 = piVar9;
      local_b8 = (QArrayData *)QString::fromAscii_helper("Gui Usage",9);
      cVar2 = QString::startsWith(piVar9,&local_b8,1);
      if (cVar2 == '\0') {
        bVar3 = 0;
      }
      else {
        QString::number((int)&local_c0,0xc);
        bVar3 = QString::endsWith(piVar9,&local_c0,1);
        bVar3 = bVar3 ^ 1;
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001c9ed3;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
      }
LAB_1001c9ed3:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001c9f09;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1001c9f09:
      if (bVar3 != 0) {
        QSettings::remove(local_70);
      }
      piVar9 = local_a8 + 2;
      local_a8 = piVar9;
    } while (piVar9 != local_a0);
  }
  local_98 = 1;
  FUN_100039a80(&local_b0);
  local_c8 = (QArrayData *)
             QString::fromAscii_helper
                       ("Application preferences/Old application preferences resetted",0x3c);
  cVar2 = QSettings::contains((QString *)&local_60);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c9faf;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1001c9faf:
  if (cVar2 == '\0') {
    local_d0.field7 =
         QString::fromAscii_helper("Application preferences/Download updates automatically",0x36);
    QVariant::QVariant(&local_e0,true);
    QSettings::setValue((QString *)&local_60,(QVariant *)&local_d0);
    QVariant::~QVariant(&local_e0);
    if (*(int *)local_d0.field15 != -1) {
      if (*(int *)local_d0.field15 != 0) {
        LOCK();
        *(int *)local_d0.field15 = *(int *)local_d0.field15 + -1;
        local_31 = *(int *)local_d0.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca039;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field15,2,8);
    }
LAB_1001ca039:
    local_e8.field7 = QString::fromAscii_helper("Application preferences/Check for updates",0x29);
    QVariant::QVariant(&local_f8,2);
    QSettings::setValue((QString *)&local_60,(QVariant *)&local_e8);
    QVariant::~QVariant(&local_f8);
    if (*(int *)local_e8.field15 != -1) {
      if (*(int *)local_e8.field15 != 0) {
        LOCK();
        *(int *)local_e8.field15 = *(int *)local_e8.field15 + -1;
        local_31 = *(int *)local_e8.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca0bb;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field15,2,8);
    }
LAB_1001ca0bb:
    local_100.field7 =
         QString::fromAscii_helper
                   ("Application preferences/Old application preferences resetted",0x3c);
    QVariant::QVariant(&local_110,true);
    QSettings::setValue((QString *)&local_60,(QVariant *)&local_100);
    QVariant::~QVariant(&local_110);
    if (*(int *)local_100.field15 != -1) {
      if (*(int *)local_100.field15 != 0) {
        LOCK();
        *(int *)local_100.field15 = *(int *)local_100.field15 + -1;
        local_31 = *(int *)local_100.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca13d;
      }
      QArrayData::deallocate((QArrayData *)local_100.field15,2,8);
    }
  }
LAB_1001ca13d:
  local_128 = (QArrayData *)QString::fromAscii_helper("Product Build Number Release Major",0x22);
  QVariant::QVariant(&local_138,4);
  QSettings::value((QString *)&local_120,&local_60);
  iVar4 = QVariant::toInt((bool *)&local_120);
  QVariant::~QVariant(&local_120);
  QVariant::~QVariant(&local_138);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ca1e2;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1001ca1e2:
  if (iVar4 != 0xc) {
    local_150 = (QArrayData *)QString::fromAscii_helper("Product Build Number Release Major",0x22);
    QVariant::QVariant(&local_160,-1);
    QSettings::value((QString *)&local_148,&local_60);
    iVar5 = QVariant::toInt((bool *)&local_148);
    QVariant::~QVariant(&local_148);
    QVariant::~QVariant(&local_160);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca291;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_1001ca291:
    FUN_10077f090(&local_178,100);
    local_170.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_178;
    if (1 < *(int *)local_178 + 1U) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + 1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
    QString::append(&local_170);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca316;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1001ca316:
    local_168.field15 = (QObject *)local_170.field0_0x0;
    if (1 < *(int *)local_170.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + 1;
      local_31 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1db96e7);
    QString::append((QString *)&local_168);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca38a;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1001ca38a:
    QVariant::QVariant(&local_188,0xc < iVar4 || iVar5 == -1);
    QSettings::setValue((QString *)&local_60,(QVariant *)&local_168);
    QVariant::~QVariant(&local_188);
    if (*(int *)local_168.field15 != -1) {
      if (*(int *)local_168.field15 != 0) {
        LOCK();
        *(int *)local_168.field15 = *(int *)local_168.field15 + -1;
        local_31 = *(int *)local_168.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca401;
      }
      QArrayData::deallocate((QArrayData *)local_168.field15,2,8);
    }
LAB_1001ca401:
    if (*(int *)local_170.field0_0x0 != -1) {
      if (*(int *)local_170.field0_0x0 != 0) {
        LOCK();
        *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
        local_31 = *(int *)local_170.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca437;
      }
      QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
    }
LAB_1001ca437:
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca46d;
      }
      QArrayData::deallocate(local_178,2,8);
    }
LAB_1001ca46d:
    if (iVar4 < 5) {
      local_190 = (QArrayData *)QString::fromAscii_helper("User Preferences/Update",0x17);
      QSettings::remove((QString *)&local_60);
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_31 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001ca4d4;
        }
        QArrayData::deallocate(local_190,2,8);
      }
LAB_1001ca4d4:
      MessageUtils::restoreHiddenMessages();
      local_198 = (QArrayData *)QString::fromAscii_helper("Register",8);
      QSettings::remove((QString *)&local_60);
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001ca537;
        }
        QArrayData::deallocate(local_198,2,8);
      }
    }
  }
LAB_1001ca537:
  local_1b0 = (QArrayData *)QString::fromAscii_helper("Product Build Number Version Major",0x22);
  QVariant::QVariant(&local_1c0,0xa28f);
  QSettings::value((QString *)&local_1a8,&local_60);
  iVar4 = QVariant::toInt((bool *)&local_1a8);
  QVariant::~QVariant(&local_1a8);
  QVariant::~QVariant(&local_1c0);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ca5dd;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_1001ca5dd:
  local_1d8 = (QArrayData *)QString::fromAscii_helper("Product Build Number Version Minor",0x22);
  QVariant::QVariant(&local_1e8,0);
  QSettings::value((QString *)&local_1d0,&local_60);
  iVar5 = QVariant::toInt((bool *)&local_1d0);
  QVariant::~QVariant(&local_1d0);
  QVariant::~QVariant(&local_1e8);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_31 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ca680;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_1001ca680:
  if (iVar4 < 0x3f69) {
    local_1f0.field7 = QString::fromAscii_helper("VM List window/Geometry/Height",0x1e);
    QVariant::QVariant(&local_210,-1);
    QSettings::value((QString *)&local_200,&local_60);
    iVar6 = QVariant::toInt((bool *)&local_200);
    QVariant::~QVariant(&local_200);
    QVariant::~QVariant(&local_210);
    if (iVar6 != -1) {
      QVariant::QVariant(&local_220,iVar6 + 1);
      QSettings::setValue((QString *)&local_60,(QVariant *)&local_1f0);
      QVariant::~QVariant(&local_220);
    }
    if (*(int *)local_1f0.field15 != -1) {
      if (*(int *)local_1f0.field15 != 0) {
        LOCK();
        *(int *)local_1f0.field15 = *(int *)local_1f0.field15 + -1;
        local_31 = *(int *)local_1f0.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca76a;
      }
      QArrayData::deallocate((QArrayData *)local_1f0.field15,2,8);
    }
  }
LAB_1001ca76a:
  if (iVar4 < 0x698e) {
    local_228.field7 = QString::fromAscii_helper("Application preferences/Dock icon",0x21);
    QVariant::QVariant(&local_238,0);
    QSettings::setValue((QString *)&local_60,(QVariant *)&local_228);
    QVariant::~QVariant(&local_238);
    if (*(int *)local_228.field15 != -1) {
      if (*(int *)local_228.field15 != 0) {
        LOCK();
        *(int *)local_228.field15 = *(int *)local_228.field15 + -1;
        local_31 = *(int *)local_228.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca7f2;
      }
      QArrayData::deallocate((QArrayData *)local_228.field15,2,8);
    }
  }
LAB_1001ca7f2:
  if ((iVar4 < 0xa28f) || ((iVar4 == 0xa28f && (iVar5 < 0)))) {
    local_240 = (QArrayData *)QString::fromAscii_helper("Guest OS Sources",0x10);
    QSettings::remove((QString *)&local_60);
    if (*(int *)local_240 != -1) {
      if (*(int *)local_240 != 0) {
        LOCK();
        *(int *)local_240 = *(int *)local_240 + -1;
        local_31 = *(int *)local_240 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ca860;
      }
      QArrayData::deallocate(local_240,2,8);
    }
  }
LAB_1001ca860:
  FUN_10010a190(&local_248);
  if (*(int *)(local_248.field0_0x0 + 4) == 0) {
    FUN_100df99c0("","prl_client_app",0,"Can not retrieve client preferences path.");
  }
  else {
    QFile::QFile((QFile *)local_258,&local_248);
    cVar2 = QFile::open(local_258,1);
    if (cVar2 != '\0') {
      CClientPreferences::CClientPreferences((CClientPreferences *)local_320);
      iVar4 = (**(code **)(local_320[0] + 0x50))(local_320,local_258,1);
      if (iVar4 < 0) {
        FUN_100df99c0("","prl_client_app",0,"Can not load client preferences. Error code: %d.",iVar4
                     );
      }
      else {
        QSettings::QSettings((QSettings *)&local_330,(QObject *)0x0);
        local_348 = (QArrayData *)
                    QString::fromAscii_helper("User Preferences/Shortcuts Need Reset",0x25);
        QVariant::QVariant(&local_358,true);
        QSettings::value((QString *)&local_340,&local_330);
        cVar2 = QVariant::toBool();
        QVariant::~QVariant(&local_340);
        QVariant::~QVariant(&local_358);
        if (*(int *)local_348 != -1) {
          if (*(int *)local_348 != 0) {
            LOCK();
            *(int *)local_348 = *(int *)local_348 + -1;
            local_31 = *(int *)local_348 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001ca993;
          }
          QArrayData::deallocate(local_348,2,8);
        }
LAB_1001ca993:
        if (cVar2 != '\0') {
          FUN_100df99c0("","prl_client_app",0,
                        "(!)Notice: performing one-time reset of keyboard shortcuts.");
          plVar8 = (long *)CClientPreferences::getKeyboardPreferences();
          (**(code **)(*plVar8 + 0x20))(plVar8);
          local_360.field7 = QString::fromAscii_helper("User Preferences/Shortcuts Need Reset",0x25)
          ;
          QVariant::QVariant(&local_370,false);
          QSettings::setValue((QString *)&local_330,(QVariant *)&local_360);
          QVariant::~QVariant(&local_370);
          if (*(int *)local_360.field15 != -1) {
            if (*(int *)local_360.field15 != 0) {
              LOCK();
              *(int *)local_360.field15 = *(int *)local_360.field15 + -1;
              local_31 = *(int *)local_360.field15 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001caa53;
            }
            QArrayData::deallocate((QArrayData *)local_360.field15,2,8);
          }
        }
LAB_1001caa53:
        (**(code **)(local_258[0] + 0x70))(local_258);
        QFile::remove(&local_248);
        QSettings::~QSettings((QSettings *)&local_330);
      }
      CClientPreferences::~CClientPreferences((CClientPreferences *)local_320);
    }
    QFile::~QFile((QFile *)local_258);
  }
  local_378.field7 = QString::fromAscii_helper("Prev Product Build Number Release Major",0x27);
  local_390 = (QArrayData *)QString::fromAscii_helper("Product Build Number Release Major",0x22);
  QVariant::QVariant(&local_3a0,-1);
  QSettings::value((QString *)&local_388,&local_60);
  QSettings::setValue((QString *)&local_60,(QVariant *)&local_378);
  QVariant::~QVariant(&local_388);
  QVariant::~QVariant(&local_3a0);
  if (*(int *)local_390 != -1) {
    if (*(int *)local_390 != 0) {
      LOCK();
      *(int *)local_390 = *(int *)local_390 + -1;
      local_31 = *(int *)local_390 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001cab9e;
    }
    QArrayData::deallocate(local_390,2,8);
  }
LAB_1001cab9e:
  if (*(int *)local_378.field15 != -1) {
    if (*(int *)local_378.field15 != 0) {
      LOCK();
      *(int *)local_378.field15 = *(int *)local_378.field15 + -1;
      local_31 = *(int *)local_378.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001cabd4;
    }
    QArrayData::deallocate((QArrayData *)local_378.field15,2,8);
  }
LAB_1001cabd4:
  local_3a8.field7 = QString::fromAscii_helper("Prev Product Build Number Version Major",0x27);
  local_3c0 = (QArrayData *)QString::fromAscii_helper("Product Build Number Version Major",0x22);
  QVariant::QVariant(&local_3d0,-1);
  QSettings::value((QString *)&local_3b8,&local_60);
  QSettings::setValue((QString *)&local_60,(QVariant *)&local_3a8);
  QVariant::~QVariant(&local_3b8);
  QVariant::~QVariant(&local_3d0);
  if (*(int *)local_3c0 != -1) {
    if (*(int *)local_3c0 != 0) {
      LOCK();
      *(int *)local_3c0 = *(int *)local_3c0 + -1;
      local_31 = *(int *)local_3c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001cac98;
    }
    QArrayData::deallocate(local_3c0,2,8);
  }
LAB_1001cac98:
  if (*(int *)local_3a8.field15 != -1) {
    if (*(int *)local_3a8.field15 != 0) {
      LOCK();
      *(int *)local_3a8.field15 = *(int *)local_3a8.field15 + -1;
      local_31 = *(int *)local_3a8.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001cacce;
    }
    QArrayData::deallocate((QArrayData *)local_3a8.field15,2,8);
  }
LAB_1001cacce:
  local_3d8.field7 = QString::fromAscii_helper("Product Build Number Release Major",0x22);
  QVariant::QVariant(&local_3e8,0xc);
  QSettings::setValue((QString *)&local_60,(QVariant *)&local_3d8);
  QVariant::~QVariant(&local_3e8);
  if (*(int *)local_3d8.field15 != -1) {
    if (*(int *)local_3d8.field15 != 0) {
      LOCK();
      *(int *)local_3d8.field15 = *(int *)local_3d8.field15 + -1;
      local_31 = *(int *)local_3d8.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001cad50;
    }
    QArrayData::deallocate((QArrayData *)local_3d8.field15,2,8);
  }
LAB_1001cad50:
  local_3f0.field7 = QString::fromAscii_helper("Product Build Number Release Minor",0x22);
  QVariant::QVariant(&local_400,2);
  QSettings::setValue((QString *)&local_60,(QVariant *)&local_3f0);
  QVariant::~QVariant(&local_400);
  if (*(int *)local_3f0.field15 != -1) {
    if (*(int *)local_3f0.field15 != 0) {
      LOCK();
      *(int *)local_3f0.field15 = *(int *)local_3f0.field15 + -1;
      local_31 = *(int *)local_3f0.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001cadd2;
    }
    QArrayData::deallocate((QArrayData *)local_3f0.field15,2,8);
  }
LAB_1001cadd2:
  local_408.field7 = QString::fromAscii_helper("Product Build Number Version Major",0x22);
  QVariant::QVariant(&local_418,0xa28f);
  QSettings::setValue((QString *)&local_60,(QVariant *)&local_408);
  QVariant::~QVariant(&local_418);
  if (*(int *)local_408.field15 != -1) {
    if (*(int *)local_408.field15 != 0) {
      LOCK();
      *(int *)local_408.field15 = *(int *)local_408.field15 + -1;
      local_31 = *(int *)local_408.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001cae54;
    }
    QArrayData::deallocate((QArrayData *)local_408.field15,2,8);
  }
LAB_1001cae54:
  local_420.field7 = QString::fromAscii_helper("Product Build Number Version Minor",0x22);
  QVariant::QVariant(&local_430,0);
  QSettings::setValue((QString *)&local_60,(QVariant *)&local_420);
  QVariant::~QVariant(&local_430);
  if (*(int *)local_420.field15 != -1) {
    if (*(int *)local_420.field15 != 0) {
      LOCK();
      *(int *)local_420.field15 = *(int *)local_420.field15 + -1;
      local_31 = *(int *)local_420.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001caed3;
    }
    QArrayData::deallocate((QArrayData *)local_420.field15,2,8);
  }
LAB_1001caed3:
  if (*(int *)local_248.field0_0x0 != -1) {
    if (*(int *)local_248.field0_0x0 != 0) {
      LOCK();
      *(int *)local_248.field0_0x0 = *(int *)local_248.field0_0x0 + -1;
      local_31 = *(int *)local_248.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001caf09;
    }
    QArrayData::deallocate((QArrayData *)local_248.field0_0x0,2,8);
  }
LAB_1001caf09:
  FUN_100039a80(&local_90);
  QSettings::~QSettings((QSettings *)local_70);
  QSettings::~QSettings((QSettings *)&local_60);
  return;
}

