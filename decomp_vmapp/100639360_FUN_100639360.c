
void FUN_100639360(QString param_1,char param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  CRepAutoStatisticInfo *this;
  long lVar6;
  uint *puVar7;
  QArrayData *local_2d8;
  QString local_2d0;
  QDir local_2c8 [8];
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QFileInfo local_2a8 [8];
  QArrayData *local_2a0;
  QDateTime local_298 [8];
  uint *local_290;
  QArrayData *local_288;
  undefined *local_280;
  _func_void_Node_ptr *local_278;
  undefined1 local_270 [8];
  undefined *local_268;
  QArrayData *local_260;
  CUpdaterConfig local_258 [8];
  int local_250;
  QString local_190;
  QString local_188;
  QFile local_180 [16];
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  long local_150 [23];
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
  
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x110);
  FUN_10063a700(&local_50);
  (*pcVar1)(param_1.field0_0x0,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006393c9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006393c9:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x120);
  FUN_1007720d0(&local_58);
  (*pcVar1)(param_1.field0_0x0,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100639418;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100639418:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x130);
  FUN_10076f500(&local_60,1);
  (*pcVar1)(param_1.field0_0x0,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063946c;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10063946c:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x140);
  FUN_100770cf0(&local_68);
  (*pcVar1)(param_1.field0_0x0,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006394bb;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006394bb:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x150);
  FUN_10077be90(&local_70);
  (*pcVar1)(param_1.field0_0x0,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063950a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10063950a:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x160);
  FUN_10077c020(&local_78);
  (*pcVar1)(param_1.field0_0x0,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063955c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10063955c:
  FUN_1007739b0(&local_80);
  CProblemReport::setMountInfo(param_1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006395a3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006395a3:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x230);
  FUN_100773cb0(&local_88);
  (*pcVar1)(param_1.field0_0x0,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006395fc;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1006395fc:
  FUN_1006d9070(&local_98,1);
  FUN_100774f50(&local_90,&local_98);
  CProblemReport::setFilesMd5InProductBundle(param_1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100639668;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100639668:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063969e;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10063969e:
  CDispatcherConfig::CDispatcherConfig((CDispatcherConfig *)local_150);
  FUN_1006da530(&local_158);
  pcVar1 = *(code **)(local_150[0] + 0x58);
  local_160 = local_158;
  if (1 < *(int *)local_158 + 1U) {
    LOCK();
    *(int *)local_158 = *(int *)local_158 + 1;
    local_31 = *(int *)local_158 != 0;
    UNLOCK();
  }
  iVar4 = (*pcVar1)(local_150,&local_160,1);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063972d;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10063972d:
  if (iVar4 == 0) {
    pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x180);
    CDispatcherConfig::getDispatcherSettings();
    bVar2 = (bool)CDispatcherSettings::getCommonPreferences();
    CBaseNode::toString(SUB81(&local_168,0),bVar2);
    (*pcVar1)(param_1.field0_0x0,&local_168);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006397af;
      }
      QArrayData::deallocate(local_168,2,8);
    }
  }
LAB_1006397af:
  FUN_1006d9b50(&local_170);
  local_190.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_170;
  if (1 < *(int *)local_170 + 1U) {
    LOCK();
    *(int *)local_170 = *(int *)local_170 + 1;
    local_31 = *(int *)local_170 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0xa02eac);
  QString::append(&local_190);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063982f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10063982f:
  FUN_100640950(&local_188,&local_190,*(undefined8 *)PTR__UPDATER_CONFIG_FILE_NAME_100ba20a8);
  QFile::QFile(local_180,&local_188);
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_31 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100639895;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_100639895:
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_31 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006398cb;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_1006398cb:
  cVar3 = QFile::exists();
  if (cVar3 != '\0') {
    CUpdaterConfig::CUpdaterConfig(local_258,local_180);
    if (local_250 == 0) {
      pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x1e0);
      CBaseNode::toString(SUB81(&local_260,0),SUB81(local_258,0));
      (*pcVar1)(param_1.field0_0x0,&local_260);
      if (*(int *)local_260 != -1) {
        if (*(int *)local_260 != 0) {
          LOCK();
          *(int *)local_260 = *(int *)local_260 + -1;
          local_31 = *(int *)local_260 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100639969;
        }
        QArrayData::deallocate(local_260,2,8);
      }
    }
LAB_100639969:
    CUpdaterConfig::~CUpdaterConfig(local_258);
  }
  FUN_10061ffc0(param_1.field0_0x0);
  if (param_2 != '\0') {
    local_268 = PTR_shared_null_100ba2188;
    local_280 = PTR_shared_null_100ba2188;
    FUN_1006e1490(&local_288);
    FUN_10000c490(&local_280,&local_288);
    FUN_10063a790(&local_278,&local_280,1);
    FUN_1000221d0(local_270,&local_278);
    FUN_100640d80(&local_268,local_270);
    FUN_100013180(local_270);
    if (*(int *)(local_278 + 0x10) != -1) {
      if (*(int *)(local_278 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_278 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100639a40;
      }
      QHashData::free_helper(local_278);
    }
LAB_100639a40:
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_31 = *(int *)local_288 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100639a76;
      }
      QArrayData::deallocate(local_288,2,8);
    }
LAB_100639a76:
    FUN_100013180(&local_280);
    FUN_10063c440(local_298,3);
    FUN_10063b680(&local_290,&local_268,local_298);
    QDateTime::~QDateTime(local_298);
    if ((int)local_290[2] < (int)local_290[3]) {
      lVar6 = 0;
      do {
        pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x68);
        if (*local_290 < 2) {
          uVar5 = local_290[2];
          puVar7 = local_290 + ((int)uVar5 + lVar6) * 2 + 4;
        }
        else {
          FUN_100022c80(&local_290,local_290[1]);
          uVar5 = local_290[2];
          puVar7 = local_290 + (lVar6 + (int)uVar5) * 2 + 4;
          if (1 < *local_290) {
            FUN_100022c80(&local_290,local_290[1]);
            uVar5 = local_290[2];
          }
        }
        QFileInfo::QFileInfo(local_2a8,(QString *)(local_290 + ((int)uVar5 + lVar6) * 2 + 4));
        QFileInfo::fileName();
        (*pcVar1)(param_1.field0_0x0,puVar7,&local_2a0);
        if (*(int *)local_2a0 != -1) {
          if (*(int *)local_2a0 != 0) {
            LOCK();
            *(int *)local_2a0 = *(int *)local_2a0 + -1;
            local_31 = *(int *)local_2a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100639bb2;
          }
          QArrayData::deallocate(local_2a0,2,8);
        }
LAB_100639bb2:
        QFileInfo::~QFileInfo(local_2a8);
        lVar6 = lVar6 + 1;
      } while (lVar6 < (long)(int)local_290[3] - (long)(int)local_290[2]);
    }
    FUN_100013180(&local_290);
    FUN_100013180(&local_268);
  }
  FUN_1006209b0(&local_2b0);
  CProblemReport::setComputerModel(param_1);
  if (*(int *)local_2b0 != -1) {
    if (*(int *)local_2b0 != 0) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + -1;
      local_31 = *(int *)local_2b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100639c45;
    }
    QArrayData::deallocate(local_2b0,2,8);
  }
LAB_100639c45:
  FUN_1006dbe90(&local_2d8);
  local_2d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2d8;
  if (1 < *(int *)local_2d8 + 1U) {
    LOCK();
    *(int *)local_2d8 = *(int *)local_2d8 + 1;
    local_31 = *(int *)local_2d8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x9f6d6c);
  QString::append(&local_2d0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100639cc5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100639cc5:
  QDir::QDir(local_2c8,&local_2d0);
  QDir::absolutePath();
  FUN_100772580(&local_2b8,&local_2c0);
  CProblemReport::setAudioPluginsInfo(param_1);
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_31 = *(int *)local_2b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100639d47;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_100639d47:
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_31 = *(int *)local_2c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100639d7d;
    }
    QArrayData::deallocate(local_2c0,2,8);
  }
LAB_100639d7d:
  QDir::~QDir(local_2c8);
  if (*(int *)local_2d0.field0_0x0 != -1) {
    if (*(int *)local_2d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2d0.field0_0x0 = *(int *)local_2d0.field0_0x0 + -1;
      local_31 = *(int *)local_2d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100639dbf;
    }
    QArrayData::deallocate((QArrayData *)local_2d0.field0_0x0,2,8);
  }
LAB_100639dbf:
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_31 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100639df5;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_100639df5:
  this = operator_new(0x140);
  CRepAutoStatisticInfo::CRepAutoStatisticInfo(this);
  FUN_10063c590(this);
  CProblemReport::setAutoStatisticInfo((CRepAutoStatisticInfo *)param_1.field0_0x0);
  QFile::~QFile(local_180);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100639e63;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100639e63:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100639e99;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100639e99:
  CDispatcherConfig::~CDispatcherConfig((CDispatcherConfig *)local_150);
  return;
}

