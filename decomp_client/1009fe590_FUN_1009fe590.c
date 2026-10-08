
void FUN_1009fe590(QString param_1,char param_2)

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
  QDateTime local_298;
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
  FUN_1009ff930(&local_50);
  (*pcVar1)(param_1.field0_0x0,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fe5f9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009fe5f9:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x120);
  FUN_100dc2840(&local_58);
  (*pcVar1)(param_1.field0_0x0,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fe648;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009fe648:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x130);
  FUN_100dbfc70(&local_60,1);
  (*pcVar1)(param_1.field0_0x0,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fe69c;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009fe69c:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x140);
  FUN_100dc1460(&local_68);
  (*pcVar1)(param_1.field0_0x0,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fe6eb;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009fe6eb:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x150);
  FUN_100dcc600(&local_70);
  (*pcVar1)(param_1.field0_0x0,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fe73a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1009fe73a:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x160);
  FUN_100dcc790(&local_78);
  (*pcVar1)(param_1.field0_0x0,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fe78c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1009fe78c:
  FUN_100dc4120(&local_80);
  CProblemReport::setMountInfo(param_1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fe7d3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1009fe7d3:
  pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x230);
  FUN_100dc4420(&local_88);
  (*pcVar1)(param_1.field0_0x0,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fe82c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1009fe82c:
  FUN_100d814b0(&local_98,1);
  FUN_100dc56c0(&local_90,&local_98);
  CProblemReport::setFilesMd5InProductBundle(param_1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fe898;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1009fe898:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fe8ce;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1009fe8ce:
  CDispatcherConfig::CDispatcherConfig((CDispatcherConfig *)local_150);
  FUN_100d82970(&local_158);
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
      if ((bool)local_31) goto LAB_1009fe95d;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1009fe95d:
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
        if ((bool)local_31) goto LAB_1009fe9df;
      }
      QArrayData::deallocate(local_168,2,8);
    }
  }
LAB_1009fe9df:
  FUN_100d81f90(&local_170);
  local_190.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_170;
  if (1 < *(int *)local_170 + 1U) {
    LOCK();
    *(int *)local_170 = *(int *)local_170 + 1;
    local_31 = *(int *)local_170 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
  QString::append(&local_190);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fea5f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009fea5f:
  FUN_100137810(&local_188,&local_190,*(undefined8 *)PTR__UPDATER_CONFIG_FILE_NAME_1021e1238);
  QFile::QFile(local_180,&local_188);
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_31 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009feac5;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_1009feac5:
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_31 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009feafb;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_1009feafb:
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
          if ((bool)local_31) goto LAB_1009feb99;
        }
        QArrayData::deallocate(local_260,2,8);
      }
    }
LAB_1009feb99:
    CUpdaterConfig::~CUpdaterConfig(local_258);
  }
  FUN_1009e5200(param_1.field0_0x0);
  if (param_2 != '\0') {
    local_268 = PTR_shared_null_1021e15e8;
    local_280 = PTR_shared_null_1021e15e8;
    FUN_100d898d0(&local_288);
    FUN_1000341d0(&local_280,&local_288);
    FUN_1009ff9c0(&local_278,&local_280,1);
    FUN_1000625e0(local_270,&local_278);
    FUN_1001d3590(&local_268,local_270);
    FUN_100039a80(local_270);
    if (*(int *)(local_278 + 0x10) != -1) {
      if (*(int *)(local_278 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_278 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009fec70;
      }
      QHashData::free_helper(local_278);
    }
LAB_1009fec70:
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_31 = *(int *)local_288 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009feca6;
      }
      QArrayData::deallocate(local_288,2,8);
    }
LAB_1009feca6:
    FUN_100039a80(&local_280);
    FUN_100a01670(&local_298,3);
    FUN_100a008b0(&local_290,&local_268,&local_298);
    QDateTime::~QDateTime(&local_298);
    if ((int)local_290[2] < (int)local_290[3]) {
      lVar6 = 0;
      do {
        pcVar1 = *(code **)(*(long *)param_1.field0_0x0 + 0x68);
        if (*local_290 < 2) {
          uVar5 = local_290[2];
          puVar7 = local_290 + ((int)uVar5 + lVar6) * 2 + 4;
        }
        else {
          FUN_100036c40(&local_290,local_290[1]);
          uVar5 = local_290[2];
          puVar7 = local_290 + (lVar6 + (int)uVar5) * 2 + 4;
          if (1 < *local_290) {
            FUN_100036c40(&local_290,local_290[1]);
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
            if ((bool)local_31) goto LAB_1009fede2;
          }
          QArrayData::deallocate(local_2a0,2,8);
        }
LAB_1009fede2:
        QFileInfo::~QFileInfo(local_2a8);
        lVar6 = lVar6 + 1;
      } while (lVar6 < (long)(int)local_290[3] - (long)(int)local_290[2]);
    }
    FUN_100039a80(&local_290);
    FUN_100039a80(&local_268);
  }
  FUN_1009e5bf0(&local_2b0);
  CProblemReport::setComputerModel(param_1);
  if (*(int *)local_2b0 != -1) {
    if (*(int *)local_2b0 != 0) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + -1;
      local_31 = *(int *)local_2b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fee75;
    }
    QArrayData::deallocate(local_2b0,2,8);
  }
LAB_1009fee75:
  FUN_100d842d0(&local_2d8);
  local_2d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2d8;
  if (1 < *(int *)local_2d8 + 1U) {
    LOCK();
    *(int *)local_2d8 = *(int *)local_2d8 + 1;
    local_31 = *(int *)local_2d8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1efe38c);
  QString::append(&local_2d0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009feef5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009feef5:
  QDir::QDir(local_2c8,&local_2d0);
  QDir::absolutePath();
  FUN_100dc2cf0(&local_2b8,&local_2c0);
  CProblemReport::setAudioPluginsInfo(param_1);
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_31 = *(int *)local_2b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fef77;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_1009fef77:
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_31 = *(int *)local_2c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fefad;
    }
    QArrayData::deallocate(local_2c0,2,8);
  }
LAB_1009fefad:
  QDir::~QDir(local_2c8);
  if (*(int *)local_2d0.field0_0x0 != -1) {
    if (*(int *)local_2d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2d0.field0_0x0 = *(int *)local_2d0.field0_0x0 + -1;
      local_31 = *(int *)local_2d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009fefef;
    }
    QArrayData::deallocate((QArrayData *)local_2d0.field0_0x0,2,8);
  }
LAB_1009fefef:
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_31 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ff025;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_1009ff025:
  this = operator_new(0x140);
  CRepAutoStatisticInfo::CRepAutoStatisticInfo(this);
  FUN_100a017c0(this);
  CProblemReport::setAutoStatisticInfo((CRepAutoStatisticInfo *)param_1.field0_0x0);
  QFile::~QFile(local_180);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ff093;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1009ff093:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ff0c9;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1009ff0c9:
  CDispatcherConfig::~CDispatcherConfig((CDispatcherConfig *)local_150);
  return;
}

