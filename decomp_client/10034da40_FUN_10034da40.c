
void FUN_10034da40(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  MessageParams *pMVar7;
  int *piVar8;
  int *piVar9;
  QVariant local_2d8;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  Data_conflict local_2b8;
  QString local_2b0 [2];
  QDateTime local_2a0;
  QVariant local_298;
  QArrayData *local_288;
  QArrayData *local_280;
  Data_conflict local_278;
  QString local_270 [2];
  QDateTime local_260;
  QVariant local_258;
  QArrayData *local_248;
  QArrayData *local_240;
  Data_conflict local_238;
  QString local_230 [2];
  QDateTime local_220;
  QVariant local_218;
  QArrayData *local_208;
  QArrayData *local_200;
  Data_conflict local_1f8;
  QString local_1f0 [2];
  QDateTime local_1e0;
  QVariant local_1d8;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  Data_conflict local_1b8;
  QString local_1b0 [2];
  QArrayData *local_1a0;
  int *local_198;
  QString local_190;
  undefined4 local_188 [2];
  QString local_180 [2];
  int *local_170;
  Data_conflict local_d8;
  undefined4 local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  QVariant local_a0;
  QDateTime local_90;
  QDateTime local_88;
  QVariant local_80;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  int *local_38;
  undefined1 local_29;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar5 = FUN_100319390(uVar5);
  iVar3 = FUN_10018a9d0(uVar5);
  if (iVar3 != 0x30000004) {
    return;
  }
  uVar5 = 0;
  QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_68,uVar5);
  local_70 = (QArrayData *)QString::fromAscii_helper("Win Trial warnings count",0x18);
  FUN_10034ee40(&local_60,&local_68,&local_70);
  QVariant::QVariant(&local_80,0);
  QSettings::value((QString *)&local_48,&local_58);
  uVar4 = QVariant::toUInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034db4f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10034db4f:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034db7f;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10034db7f:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034dbaf;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10034dbaf:
  QSettings::~QSettings((QSettings *)&local_58);
  uVar5 = 0;
  QSettings::QSettings((QSettings *)&local_b0,(QObject *)0x0);
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_c0,uVar5);
  local_c8 = (QArrayData *)QString::fromAscii_helper("Win Trial last show time",0x18);
  FUN_10034ee40(&local_b8,&local_c0,&local_c8);
  local_d0 = 0x80000000;
  local_d8.field7 = 0;
  QSettings::value((QString *)&local_a0,&local_b0);
  QVariant::toDateTime();
  QDateTime::toTimeSpec(&local_88,&local_90,1);
  QDateTime::~QDateTime(&local_90);
  QVariant::~QVariant(&local_a0);
  QVariant::~QVariant((QVariant *)&local_d8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034dcd8;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10034dcd8:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034dd0e;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10034dd0e:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034dd44;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10034dd44:
  QSettings::~QSettings((QSettings *)&local_b0);
  MessageParams::MessageParams((MessageParams *)local_188,-0x7ffffff9,(QWidget *)0x0);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_190,uVar5);
  QString::operator=(local_180,&local_190);
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_29 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034ddd1;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_10034ddd1:
  local_188[0] = 0x3c67;
  local_198 = (int *)PTR_shared_null_1021e15e8;
  QString::number((int)&local_1a0,param_2);
  FUN_1000341d0(&local_198,&local_1a0);
  if (local_170 != local_198) {
    local_38 = local_198;
    if (*local_198 != -1) {
      if (*local_198 == 0) {
        QListData::detach((int)&local_38);
        iVar3 = local_38[2];
        if (iVar3 != local_38[3]) {
          piVar8 = local_198 + (long)local_198[2] * 2 + 4;
          piVar9 = local_38 + (long)iVar3 * 2 + 4;
          lVar6 = (long)local_38[3] * 8 + (long)iVar3 * -8;
          do {
            piVar1 = *(int **)piVar8;
            *(int **)piVar9 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_29 = *piVar1 != 0;
              UNLOCK();
            }
            piVar9 = piVar9 + 2;
            piVar8 = piVar8 + 2;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
      }
      else {
        LOCK();
        *local_198 = *local_198 + 1;
        local_29 = *local_198 != 0;
        UNLOCK();
      }
    }
    piVar8 = local_38;
    local_38 = local_170;
    local_170 = piVar8;
    FUN_100039a80(&local_38);
  }
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_29 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034df04;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10034df04:
  FUN_100039a80(&local_198);
  if ((0x1d < param_2 - 0x3dU) || (uVar4 != 0)) {
    if ((0x31 < param_2 - 0xbU) || (1 < uVar4)) {
      if ((9 < param_2 - 1U) || (2 < uVar4)) goto LAB_10034e6c4;
      cVar2 = QDateTime::isValid();
      if (cVar2 != '\0') {
        QDateTime::currentDateTimeUtc();
        lVar6 = QDateTime::daysTo(&local_88);
        QDateTime::~QDateTime(&local_2a0);
        if (lVar6 < 3) goto LAB_10034e6c4;
      }
      pMVar7 = (MessageParams *)CMessageManager::instance();
      CMessageManager::showMessageBox(pMVar7);
      QSettings::QSettings((QSettings *)local_2b0,(QObject *)0x0);
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_1003193e0(&local_2c0,uVar5);
      local_2c8 = (QArrayData *)QString::fromAscii_helper("Win Trial warnings count",0x18);
      FUN_10034ee40(&local_2b8,&local_2c0,&local_2c8);
      QVariant::QVariant(&local_2d8,3);
      QSettings::setValue(local_2b0,(QVariant *)&local_2b8);
      QVariant::~QVariant(&local_2d8);
      if (*(int *)local_2b8.field15 != -1) {
        if (*(int *)local_2b8.field15 != 0) {
          LOCK();
          *(int *)local_2b8.field15 = *(int *)local_2b8.field15 + -1;
          local_29 = *(int *)local_2b8.field15 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10034e64c;
        }
        QArrayData::deallocate((QArrayData *)local_2b8.field15,2,8);
      }
LAB_10034e64c:
      if (*(int *)local_2c8 != -1) {
        if (*(int *)local_2c8 != 0) {
          LOCK();
          *(int *)local_2c8 = *(int *)local_2c8 + -1;
          local_29 = *(int *)local_2c8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10034e682;
        }
        QArrayData::deallocate(local_2c8,2,8);
      }
LAB_10034e682:
      if (*(int *)local_2c0 != -1) {
        if (*(int *)local_2c0 != 0) {
          LOCK();
          *(int *)local_2c0 = *(int *)local_2c0 + -1;
          local_29 = *(int *)local_2c0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10034e6b8;
        }
        QArrayData::deallocate(local_2c0,2,8);
      }
LAB_10034e6b8:
      QSettings::~QSettings((QSettings *)local_2b0);
      goto LAB_10034e6c4;
    }
    cVar2 = QDateTime::isValid();
    if (cVar2 != '\0') {
      QDateTime::currentDateTimeUtc();
      lVar6 = QDateTime::daysTo(&local_88);
      QDateTime::~QDateTime(&local_220);
      if (lVar6 < 10) goto LAB_10034e6c4;
    }
    pMVar7 = (MessageParams *)CMessageManager::instance();
    CMessageManager::showMessageBox(pMVar7);
    QSettings::QSettings((QSettings *)local_230,(QObject *)0x0);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193e0(&local_240,uVar5);
    local_248 = (QArrayData *)QString::fromAscii_helper("Win Trial last show time",0x18);
    FUN_10034ee40(&local_238,&local_240,&local_248);
    QDateTime::currentDateTimeUtc();
    QVariant::QVariant(&local_258,&local_260);
    QSettings::setValue(local_230,(QVariant *)&local_238);
    QVariant::~QVariant(&local_258);
    QDateTime::~QDateTime(&local_260);
    if (*(int *)local_238.field15 != -1) {
      if (*(int *)local_238.field15 != 0) {
        LOCK();
        *(int *)local_238.field15 = *(int *)local_238.field15 + -1;
        local_29 = *(int *)local_238.field15 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10034e346;
      }
      QArrayData::deallocate((QArrayData *)local_238.field15,2,8);
    }
LAB_10034e346:
    if (*(int *)local_248 != -1) {
      if (*(int *)local_248 != 0) {
        LOCK();
        *(int *)local_248 = *(int *)local_248 + -1;
        local_29 = *(int *)local_248 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10034e37c;
      }
      QArrayData::deallocate(local_248,2,8);
    }
LAB_10034e37c:
    if (*(int *)local_240 != -1) {
      if (*(int *)local_240 != 0) {
        LOCK();
        *(int *)local_240 = *(int *)local_240 + -1;
        local_29 = *(int *)local_240 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10034e3b2;
      }
      QArrayData::deallocate(local_240,2,8);
    }
LAB_10034e3b2:
    QSettings::~QSettings((QSettings *)local_230);
    QSettings::QSettings((QSettings *)local_270,(QObject *)0x0);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193e0(&local_280,uVar5);
    local_288 = (QArrayData *)QString::fromAscii_helper("Win Trial warnings count",0x18);
    FUN_10034ee40(&local_278,&local_280,&local_288);
    QVariant::QVariant(&local_298,2);
    QSettings::setValue(local_270,(QVariant *)&local_278);
    QVariant::~QVariant(&local_298);
    if (*(int *)local_278.field15 != -1) {
      if (*(int *)local_278.field15 != 0) {
        LOCK();
        *(int *)local_278.field15 = *(int *)local_278.field15 + -1;
        local_29 = *(int *)local_278.field15 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10034e490;
      }
      QArrayData::deallocate((QArrayData *)local_278.field15,2,8);
    }
LAB_10034e490:
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_29 = *(int *)local_288 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10034e4c6;
      }
      QArrayData::deallocate(local_288,2,8);
    }
LAB_10034e4c6:
    if (*(int *)local_280 != -1) {
      if (*(int *)local_280 != 0) {
        LOCK();
        *(int *)local_280 = *(int *)local_280 + -1;
        local_29 = *(int *)local_280 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10034e4fc;
      }
      QArrayData::deallocate(local_280,2,8);
    }
LAB_10034e4fc:
    QSettings::~QSettings((QSettings *)local_270);
    goto LAB_10034e6c4;
  }
  pMVar7 = (MessageParams *)CMessageManager::instance();
  CMessageManager::showMessageBox(pMVar7);
  QSettings::QSettings((QSettings *)local_1b0,(QObject *)0x0);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_1c0,uVar5);
  local_1c8 = (QArrayData *)QString::fromAscii_helper("Win Trial last show time",0x18);
  FUN_10034ee40(&local_1b8,&local_1c0,&local_1c8);
  QDateTime::currentDateTimeUtc();
  QVariant::QVariant(&local_1d8,&local_1e0);
  QSettings::setValue(local_1b0,(QVariant *)&local_1b8);
  QVariant::~QVariant(&local_1d8);
  QDateTime::~QDateTime(&local_1e0);
  if (*(int *)local_1b8.field15 != -1) {
    if (*(int *)local_1b8.field15 != 0) {
      LOCK();
      *(int *)local_1b8.field15 = *(int *)local_1b8.field15 + -1;
      local_29 = *(int *)local_1b8.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034e026;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field15,2,8);
  }
LAB_10034e026:
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_29 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034e05c;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_10034e05c:
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_29 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034e092;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_10034e092:
  QSettings::~QSettings((QSettings *)local_1b0);
  QSettings::QSettings((QSettings *)local_1f0,(QObject *)0x0);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_200,uVar5);
  local_208 = (QArrayData *)QString::fromAscii_helper("Win Trial warnings count",0x18);
  FUN_10034ee40(&local_1f8,&local_200,&local_208);
  QVariant::QVariant(&local_218,1);
  QSettings::setValue(local_1f0,(QVariant *)&local_1f8);
  QVariant::~QVariant(&local_218);
  if (*(int *)local_1f8.field15 != -1) {
    if (*(int *)local_1f8.field15 != 0) {
      LOCK();
      *(int *)local_1f8.field15 = *(int *)local_1f8.field15 + -1;
      local_29 = *(int *)local_1f8.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034e170;
    }
    QArrayData::deallocate((QArrayData *)local_1f8.field15,2,8);
  }
LAB_10034e170:
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_29 = *(int *)local_208 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034e1a6;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_10034e1a6:
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_29 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034e1dc;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_10034e1dc:
  QSettings::~QSettings((QSettings *)local_1f0);
LAB_10034e6c4:
  FUN_1001f39d0(local_188);
  QDateTime::~QDateTime(&local_88);
  return;
}

