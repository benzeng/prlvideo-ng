
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1005e8360(long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  QArrayData *local_268;
  QArrayData *local_260;
  QString local_258;
  QArrayData *local_250;
  QString local_248;
  QArrayData *local_240;
  QString local_238;
  QArrayData *local_230;
  QString local_228;
  QArrayData *local_220;
  QString local_218;
  QArrayData *local_210;
  QString local_208;
  QString local_200;
  QString local_1f8;
  QString local_1f0;
  QString local_1e8;
  QString local_1e0;
  QString local_1d8;
  QString local_1d0;
  QString local_1c8;
  QString local_1c0;
  undefined1 local_1b8 [8];
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QString local_190;
  QArrayData *local_188;
  QString local_180;
  QArrayData *local_178;
  QString local_170;
  QArrayData *local_168;
  QString local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QString local_148;
  QArrayData *local_140;
  QString local_138;
  undefined8 local_130;
  QString local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  undefined1 local_98 [8];
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    local_68 = (QArrayData *)QString::fromAscii_helper("PURCHASEID",10);
    FUN_1005ea4a0(&local_60,param_3,&local_68);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"Purchase completed. Status: %d. OrderID: %s",param_2,
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e841a;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_1005e841a:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e844a;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1005e844a:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e847a;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1005e847a:
  lVar2 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x40);
  *(undefined1 *)(lVar2 + 0x138) = 0;
  uVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x40);
  FUN_1005b69c0(&local_e8,uVar3);
  iVar1 = QDateTime::currentMSecsSinceEpoch();
  QString::number((longlong)&local_f0,iVar1);
  QString::operator=(&local_90,&local_f0);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_31 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e850c;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_1005e850c:
  QString::fromUtf8_helper((char *)&local_50,0x1e41978);
  QString::operator=(&local_78,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e855b;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1005e855b:
  local_110 = (QArrayData *)QString::fromAscii_helper("CURRENCY",8);
  FUN_1005ea4a0(&local_108,param_3,&local_110);
  FUN_100df0d70(&local_100,&local_108);
  local_120 = (QArrayData *)QString::fromAscii_helper("ORDERTOTAL",10);
  FUN_1005ea4a0(&local_118,param_3,&local_120);
  local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_100;
  if (1 < *(int *)local_100 + 1U) {
    LOCK();
    *(int *)local_100 = *(int *)local_100 + 1;
    local_31 = *(int *)local_100 != 0;
    UNLOCK();
  }
  QString::append(&local_f8);
  QString::operator=(&local_80,&local_f8);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e8642;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_1005e8642:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e8678;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1005e8678:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e86ae;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1005e86ae:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e86e4;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1005e86e4:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e871a;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1005e871a:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e8750;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1005e8750:
  local_130 = QDate::currentDate();
  QDate::toString(&local_128,&local_130,3);
  QString::operator=(&local_88,&local_128);
  if (*(int *)local_128.field0_0x0 != -1) {
    if (*(int *)local_128.field0_0x0 != 0) {
      LOCK();
      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
      local_31 = *(int *)local_128.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e87ba;
    }
    QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
  }
LAB_1005e87ba:
  local_140 = (QArrayData *)QString::fromAscii_helper("PURCHASEID",10);
  FUN_1005ea4a0(&local_138,param_3,&local_140);
  QString::operator=(&local_70,&local_138);
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_31 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e882e;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_1005e882e:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e8864;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1005e8864:
  local_150 = (QArrayData *)QString::fromAscii_helper("Key",3);
  FUN_1005ea4a0(&local_148,param_3,&local_150);
  QString::operator=(&local_a0,&local_148);
  if (*(int *)local_148.field0_0x0 != -1) {
    if (*(int *)local_148.field0_0x0 != 0) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
      local_31 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e88db;
    }
    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
  }
LAB_1005e88db:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e8911;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1005e8911:
  FUN_10073e290(&local_158,&local_e8);
  iVar1 = QString::compare_helper
                    (local_158 + *(long *)(local_158 + 0x10),*(undefined4 *)(local_158 + 4),"x32",
                     0xffffffff,1);
  if (iVar1 == 0) {
    local_168 = (QArrayData *)QString::fromAscii_helper("32_DownloadRequestUrl",0x15);
    FUN_1005ea4a0(&local_160,param_3,&local_168);
    QString::operator=(&local_b0,&local_160);
    if (*(int *)local_160.field0_0x0 != -1) {
      if (*(int *)local_160.field0_0x0 != 0) {
        LOCK();
        *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
        local_31 = *(int *)local_160.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e8b34;
      }
      QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
    }
LAB_1005e8b34:
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e8b6a;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_1005e8b6a:
    local_178 = (QArrayData *)QString::fromAscii_helper("32_DownloadToken",0x10);
    FUN_1005ea4a0(&local_170,param_3,&local_178);
    QString::operator=(&local_a8,&local_170);
    if (*(int *)local_170.field0_0x0 != -1) {
      if (*(int *)local_170.field0_0x0 != 0) {
        LOCK();
        *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
        local_31 = *(int *)local_170.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e8be4;
      }
      QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
    }
LAB_1005e8be4:
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e8c1a;
      }
      QArrayData::deallocate(local_178,2,8);
    }
  }
  else {
    local_188 = (QArrayData *)QString::fromAscii_helper("64_DownloadRequestUrl",0x15);
    FUN_1005ea4a0(&local_180,param_3,&local_188);
    QString::operator=(&local_b0,&local_180);
    if (*(int *)local_180.field0_0x0 != -1) {
      if (*(int *)local_180.field0_0x0 != 0) {
        LOCK();
        *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
        local_31 = *(int *)local_180.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e89ce;
      }
      QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
    }
LAB_1005e89ce:
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e8a04;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_1005e8a04:
    local_198 = (QArrayData *)QString::fromAscii_helper("64_DownloadToken",0x10);
    FUN_1005ea4a0(&local_190,param_3,&local_198);
    QString::operator=(&local_a8,&local_190);
    if (*(int *)local_190.field0_0x0 != -1) {
      if (*(int *)local_190.field0_0x0 != 0) {
        LOCK();
        *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
        local_31 = *(int *)local_190.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e8a7e;
      }
      QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
    }
LAB_1005e8a7e:
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_31 = *(int *)local_198 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e8c1a;
      }
      QArrayData::deallocate(local_198,2,8);
    }
  }
LAB_1005e8c1a:
  if (*(int *)(local_a8.field0_0x0 + 4) == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e05a50);
    QString::operator=(&local_a8,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e8c74;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1005e8c74:
  uVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x40);
  FUN_1005b9a00(uVar3,&local_e8);
  local_1a0 = (QArrayData *)QString::fromAscii_helper("store",5);
  uVar3 = FUN_10073fe80(&local_1a0);
  FUN_1007420e0(uVar3,&local_e8);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e8cf9;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1005e8cf9:
  local_1a8 = (QArrayData *)local_e8.field0_0x0;
  if (1 < *(int *)local_e8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + 1;
    local_31 = *(int *)local_e8.field0_0x0 != 0;
    UNLOCK();
  }
  pcVar4 = "x32";
  iVar1 = QString::compare_helper
                    (local_158 + *(long *)(local_158 + 0x10),*(undefined4 *)(local_158 + 4),"x32",
                     0xffffffff,1);
  if (iVar1 == 0) {
    pcVar4 = "x64";
  }
  local_1b0 = (QArrayData *)QString::fromAscii_helper(pcVar4,3);
  QString::replace(&local_1a8,&local_158,&local_1b0,1);
  uVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x40);
  local_210 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
  uVar3 = FUN_1005b8a40(uVar3,&local_210);
  FUN_100746cb0(&local_208,uVar3,&local_1a8);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e8e10;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_1005e8e10:
  if (*(int *)(local_208.field0_0x0 + 4) != 0) {
    QString::operator=(&local_e8,&local_208);
    QString::operator=(&local_e0,&local_200);
    QString::operator=(&local_d8,&local_1f8);
    QString::operator=(&local_d0,&local_1f0);
    QString::operator=(&local_c8,&local_1e8);
    QString::operator=(&local_c0,&local_1e0);
    QString::operator=(&local_b8,&local_1d8);
    QString::operator=(&local_b0,&local_1d0);
    QString::operator=(&local_a8,&local_1c8);
    QString::operator=(&local_a0,&local_1c0);
    FUN_100283c40(local_98,local_1b8);
    local_220 = (QArrayData *)QString::fromAscii_helper("Key",3);
    FUN_1005ea4a0(&local_218,param_3,&local_220);
    QString::operator=(&local_a0,&local_218);
    if (*(int *)local_218.field0_0x0 != -1) {
      if (*(int *)local_218.field0_0x0 != 0) {
        LOCK();
        *(int *)local_218.field0_0x0 = *(int *)local_218.field0_0x0 + -1;
        local_31 = *(int *)local_218.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e8f71;
      }
      QArrayData::deallocate((QArrayData *)local_218.field0_0x0,2,8);
    }
LAB_1005e8f71:
    if (*(int *)local_220 != -1) {
      if (*(int *)local_220 != 0) {
        LOCK();
        *(int *)local_220 = *(int *)local_220 + -1;
        local_31 = *(int *)local_220 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e8fa7;
      }
      QArrayData::deallocate(local_220,2,8);
    }
LAB_1005e8fa7:
    iVar1 = QString::compare_helper
                      (local_1b0 + *(long *)(local_1b0 + 0x10),*(undefined4 *)(local_1b0 + 4),"x32",
                       0xffffffff,1);
    if (iVar1 == 0) {
      local_230 = (QArrayData *)QString::fromAscii_helper("32_DownloadRequestUrl",0x15);
      FUN_1005ea4a0(&local_228,param_3,&local_230);
      QString::operator=(&local_b0,&local_228);
      if (*(int *)local_228.field0_0x0 != -1) {
        if (*(int *)local_228.field0_0x0 != 0) {
          LOCK();
          *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + -1;
          local_31 = *(int *)local_228.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e91a9;
        }
        QArrayData::deallocate((QArrayData *)local_228.field0_0x0,2,8);
      }
LAB_1005e91a9:
      if (*(int *)local_230 != -1) {
        if (*(int *)local_230 != 0) {
          LOCK();
          *(int *)local_230 = *(int *)local_230 + -1;
          local_31 = *(int *)local_230 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e91df;
        }
        QArrayData::deallocate(local_230,2,8);
      }
LAB_1005e91df:
      local_240 = (QArrayData *)QString::fromAscii_helper("32_DownloadToken",0x10);
      FUN_1005ea4a0(&local_238,param_3,&local_240);
      QString::operator=(&local_a8,&local_238);
      if (*(int *)local_238.field0_0x0 != -1) {
        if (*(int *)local_238.field0_0x0 != 0) {
          LOCK();
          *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
          local_31 = *(int *)local_238.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e9252;
        }
        QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
      }
LAB_1005e9252:
      if (*(int *)local_240 != -1) {
        if (*(int *)local_240 != 0) {
          LOCK();
          *(int *)local_240 = *(int *)local_240 + -1;
          local_31 = *(int *)local_240 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e9288;
        }
        QArrayData::deallocate(local_240,2,8);
      }
    }
    else {
      local_250 = (QArrayData *)QString::fromAscii_helper("64_DownloadRequestUrl",0x15);
      FUN_1005ea4a0(&local_248,param_3,&local_250);
      QString::operator=(&local_b0,&local_248);
      if (*(int *)local_248.field0_0x0 != -1) {
        if (*(int *)local_248.field0_0x0 != 0) {
          LOCK();
          *(int *)local_248.field0_0x0 = *(int *)local_248.field0_0x0 + -1;
          local_31 = *(int *)local_248.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e904a;
        }
        QArrayData::deallocate((QArrayData *)local_248.field0_0x0,2,8);
      }
LAB_1005e904a:
      if (*(int *)local_250 != -1) {
        if (*(int *)local_250 != 0) {
          LOCK();
          *(int *)local_250 = *(int *)local_250 + -1;
          local_31 = *(int *)local_250 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e9080;
        }
        QArrayData::deallocate(local_250,2,8);
      }
LAB_1005e9080:
      local_260 = (QArrayData *)QString::fromAscii_helper("64_DownloadToken",0x10);
      FUN_1005ea4a0(&local_258,param_3,&local_260);
      QString::operator=(&local_a8,&local_258);
      if (*(int *)local_258.field0_0x0 != -1) {
        if (*(int *)local_258.field0_0x0 != 0) {
          LOCK();
          *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + -1;
          local_31 = *(int *)local_258.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e90f3;
        }
        QArrayData::deallocate((QArrayData *)local_258.field0_0x0,2,8);
      }
LAB_1005e90f3:
      if (*(int *)local_260 != -1) {
        if (*(int *)local_260 != 0) {
          LOCK();
          *(int *)local_260 = *(int *)local_260 + -1;
          local_31 = *(int *)local_260 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e9288;
        }
        QArrayData::deallocate(local_260,2,8);
      }
    }
LAB_1005e9288:
    if (*(int *)(local_a8.field0_0x0 + 4) == 0) {
      QString::fromUtf8_helper((char *)&local_40,0x1e05a50);
      QString::operator=(&local_a8,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e92e2;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
LAB_1005e92e2:
    local_268 = (QArrayData *)QString::fromAscii_helper("store",5);
    uVar3 = FUN_10073fe80(&local_268);
    FUN_1007420e0(uVar3,&local_e8);
    if (*(int *)local_268 != -1) {
      if (*(int *)local_268 != 0) {
        LOCK();
        *(int *)local_268 = *(int *)local_268 + -1;
        local_31 = *(int *)local_268 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e934b;
      }
      QArrayData::deallocate(local_268,2,8);
    }
  }
LAB_1005e934b:
  CAbstractWizardPage::wizardCtrl();
  CWizardController::goNext();
  FUN_100252e70(&local_208);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e93a5;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_1005e93a5:
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e93db;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_1005e93db:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e9411;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1005e9411:
  FUN_100252c80(&local_90);
  FUN_100252e70(&local_e8);
  return;
}

