
undefined1 FUN_100986130(QString *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  QArrayData *pQVar6;
  undefined1 uVar7;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QFileInfo local_118 [8];
  QString local_110;
  QFileInfo local_108 [8];
  QString local_100;
  QArrayData *local_f8;
  QString local_f0;
  QDir local_e8 [8];
  QArrayData *local_e0;
  QString local_d8;
  QDir local_d0 [8];
  QString local_c8;
  QDir local_c0 [8];
  QString local_b8;
  QString local_b0;
  QFileInfo local_a8 [8];
  QArrayData *local_a0;
  QString local_98;
  QFileInfo local_90 [8];
  QFileInfo local_88 [8];
  QString local_80;
  QArrayData *local_78;
  QDateTime local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined1 local_39;
  undefined1 local_38 [16];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  FUN_100dda3c0(local_38);
  FUN_100dda260(&local_58,local_38);
  QSettings::remove(param_1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_39 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1009861a5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009861a5:
  iVar5 = QSettings::status();
  if (iVar5 == 0) {
    uVar7 = 0;
    goto LAB_100986dcc;
  }
  pQVar6 = (QArrayData *)QString::fromAscii_helper(".BACKUP.",8);
  QDateTime::currentDateTime();
  local_78 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd_hh-mm-ss",0x13);
  QDateTime::toString(&local_68);
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_39 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar6;
  QString::append(&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_39 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_10098624a;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10098624a:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_39 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_10098627a;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10098627a:
  QDateTime::~QDateTime(&local_70);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_39 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1009862ae;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1009862ae:
  QSettings::fileName();
  iVar5 = QSettings::scope();
  if (iVar5 == 0) {
    QFileInfo::QFileInfo(local_88,&local_80);
    QFileInfo::QFileInfo(local_a8,&local_80);
    QFileInfo::fileName();
    QString::fromUtf8_helper((char *)&local_98,0x1e31cbd);
    QString::append(&local_98);
    QFileInfo::QFileInfo(local_90,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_39 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_10098636e;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_10098636e:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_39 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_1009863a4;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1009863a4:
    QFileInfo::~QFileInfo(local_a8);
    QFileInfo::absoluteFilePath();
    QFileInfo::absoluteFilePath();
    cVar3 = operator==(&local_b0,&local_b8);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_39 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_10098641e;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_10098641e:
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_39 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_100986454;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_100986454:
    if (cVar3 != '\0') {
      local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QDir::QDir(local_c0,&local_c8);
      if (*(int *)local_c8.field0_0x0 != -1) {
        if (*(int *)local_c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
          local_39 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_39) goto LAB_1009864b3;
        }
        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
      }
LAB_1009864b3:
      cVar3 = FUN_100d80630(1);
      if (cVar3 == '\0') {
        FUN_100d898d0(&local_f8);
        local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_f8;
        if (1 < *(int *)local_f8 + 1U) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + 1;
          local_39 = *(int *)local_f8 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_48,0x1e31cd3);
        QString::append(&local_f0);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_39 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_39) goto LAB_100986677;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_100986677:
        QDir::QDir(local_e8,&local_f0);
        QDir::operator=(local_c0,local_e8);
        QDir::~QDir(local_e8);
        if (*(int *)local_f0.field0_0x0 != -1) {
          if (*(int *)local_f0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
            local_39 = *(int *)local_f0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_39) goto LAB_1009866df;
          }
          QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
        }
LAB_1009866df:
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_39 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_39) goto LAB_100986715;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
      }
      else {
        QDir::homePath();
        local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e0;
        if (1 < *(int *)local_e0 + 1U) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + 1;
          local_39 = *(int *)local_e0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_50,0x1e31cd3);
        QString::append(&local_d8);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_39 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_39) goto LAB_100986545;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_100986545:
        QDir::QDir(local_d0,&local_d8);
        QDir::operator=(local_c0,local_d0);
        QDir::~QDir(local_d0);
        if (*(int *)local_d8.field0_0x0 != -1) {
          if (*(int *)local_d8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
            local_39 = *(int *)local_d8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_39) goto LAB_1009865ad;
          }
          QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
        }
LAB_1009865ad:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_39 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_39) goto LAB_100986715;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
      }
LAB_100986715:
      QFileInfo::QFileInfo(local_118,&local_80);
      QFileInfo::fileName();
      QFileInfo::QFileInfo(local_108,local_c0,&local_110);
      QFileInfo::absoluteFilePath();
      QString::operator=(&local_80,&local_100);
      if (*(int *)local_100.field0_0x0 != -1) {
        if (*(int *)local_100.field0_0x0 != 0) {
          LOCK();
          *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
          local_39 = *(int *)local_100.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_39) goto LAB_1009867ab;
        }
        QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
      }
LAB_1009867ab:
      QFileInfo::~QFileInfo(local_108);
      if (*(int *)local_110.field0_0x0 != -1) {
        if (*(int *)local_110.field0_0x0 != 0) {
          LOCK();
          *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
          local_39 = *(int *)local_110.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_39) goto LAB_1009867ed;
        }
        QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
      }
LAB_1009867ed:
      QFileInfo::~QFileInfo(local_118);
      QDir::~QDir(local_c0);
    }
    QFileInfo::~QFileInfo(local_90);
    QFileInfo::~QFileInfo(local_88);
  }
  local_120.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_39 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_120);
  local_150 = (QArrayData *)
              QString::fromAscii_helper
                        ("QSettings file(%1) can\'t be loaded (status = %2) . \n Current QSettings file would be renamed and stored with suffix %3.\n configBackup = \'%4\', scope = %5\n"
                         ,0x99);
  QString::arg(&local_148,&local_150,&local_80,0,0x20);
  iVar5 = QSettings::status();
  QString::arg(&local_140,&local_148,(long)iVar5,0,10,0x20);
  QString::arg(&local_138,&local_140,&local_60,0,0x20);
  QString::arg(&local_130,&local_138,&local_120,0,0x20);
  iVar5 = QSettings::scope();
  QString::arg(&local_128,&local_130,(long)iVar5,0,10,0x20);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_39 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_10098694c;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10098694c:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_39 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100986982;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100986982:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_39 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1009869b8;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1009869b8:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_39 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1009869ee;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1009869ee:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_39 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100986a24;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100986a24:
  FUN_100df99c0("","PrlQSettings",0,"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
               );
  FUN_100df99c0("","PrlQSettings",0,"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
               );
  QString::toUtf8();
  FUN_100df99c0("","PrlQSettings",0,"%s",local_158 + *(long *)(local_158 + 0x10));
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_39 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100986ad2;
    }
    QArrayData::deallocate(local_158,1,8);
  }
LAB_100986ad2:
  FUN_100df99c0("","PrlQSettings",0,"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
               );
  FUN_100df99c0("","PrlQSettings",0,"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
               );
  cVar3 = QFile::exists(&local_80);
  cVar4 = QFile::rename(&local_80,&local_120);
  if (cVar3 == '\x01' && cVar4 == '\0') {
    QString::toUtf8();
    lVar2 = *(long *)(local_160 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","PrlQSettings",0,
                  "ERROR in QSettings file recovering: Can\'t rename \'%s\' ==> \'%s\'",
                  local_160 + lVar2,local_168 + *(long *)(local_168 + 0x10));
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_39 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_100986bd3;
      }
      QArrayData::deallocate(local_168,1,8);
    }
LAB_100986bd3:
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_39 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_100986c09;
      }
      QArrayData::deallocate(local_160,1,8);
    }
LAB_100986c09:
    cVar3 = QFile::remove(&local_80);
    if (cVar3 != '\0') goto LAB_100986c16;
    QString::toUtf8();
    FUN_100df99c0("","PrlQSettings",0,"ERROR in QSettings file recovering: Can\'t delete %s",
                  local_170 + *(long *)(local_170 + 0x10));
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_39 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_100986cfe;
      }
      QArrayData::deallocate(local_170,1,8);
    }
  }
  else {
    if (cVar4 == '\0') goto LAB_100986cfe;
LAB_100986c16:
    QString::toUtf8();
    FUN_100df99c0("","PrlQSettings",0,
                  "Old file %s was successully backuped. Going to recreate new one.",
                  local_178 + *(long *)(local_178 + 0x10));
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_39 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_100986cfe;
      }
      QArrayData::deallocate(local_178,1,8);
    }
  }
LAB_100986cfe:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_39 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100986d34;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100986d34:
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_39 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100986d6a;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_100986d6a:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_39 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100986d9a;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100986d9a:
  uVar7 = 1;
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_39 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100986dcc;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100986dcc:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

