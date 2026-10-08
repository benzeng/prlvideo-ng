
void FUN_1002b1ac0(undefined8 param_1,uint *param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  QVariant local_230;
  QString local_220;
  Data_conflict local_218;
  QVariant local_210;
  QString local_200;
  Data_conflict local_1f8;
  QVariant local_1f0;
  QString local_1e0;
  Data_conflict local_1d8;
  QVariant local_1d0;
  QString local_1c0;
  Data_conflict local_1b8;
  QVariant local_1b0;
  QString local_1a0;
  Data_conflict local_198;
  QVariant local_190;
  QString local_180;
  Data_conflict local_178;
  QVariant local_170;
  QString local_160;
  Data_conflict local_158;
  QVariant local_150;
  QString local_140;
  Data_conflict local_138;
  QVariant local_130;
  QString local_120;
  Data_conflict local_118;
  QVariant local_110;
  QString local_100;
  Data_conflict local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8 [2];
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
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)local_d8,(QObject *)0x0);
  local_e0 = (QArrayData *)QString::fromAscii_helper("Guest OS Sources",0x10);
  QSettings::beginGroup(local_d8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_21 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002b1b45;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1002b1b45:
  QString::toUtf8();
  QByteArray::toBase64();
  lVar1 = 0;
  pQVar2 = local_e8 + *(long *)(local_e8 + 0x10);
  if ((pQVar2 != (QArrayData *)0x0) && (*(uint *)(local_e8 + 4) != 0)) {
    lVar1 = 0;
    do {
      if (pQVar2[lVar1] == (QArrayData)0x0) break;
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(local_e8 + 4));
  }
  pQVar2 = (QArrayData *)QString::fromAscii_helper((char *)pQVar2,(int)lVar1);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_21 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002b1bdb;
    }
    QArrayData::deallocate(local_e8,1,8);
  }
LAB_1002b1bdb:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_21 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002b1c11;
    }
    QArrayData::deallocate(local_f0,1,8);
  }
LAB_1002b1c11:
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_21 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
  QString::fromUtf8_helper((char *)&local_c8,0x1e2468c);
  QString::append(&local_100);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002b1c8c;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1002b1c8c:
  local_f8.field15 = (QObject *)local_100.field0_0x0;
  if (1 < *(int *)local_100.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
    local_21 = *(int *)local_100.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_c0,0x1de3a71);
  QString::append((QString *)&local_f8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002b1d0c;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1002b1d0c:
  QVariant::QVariant(&local_110,*param_2);
  QSettings::setValue(local_d8,(QVariant *)&local_f8);
  QVariant::~QVariant(&local_110);
  if (*(int *)local_f8.field15 != -1) {
    if (*(int *)local_f8.field15 != 0) {
      LOCK();
      *(int *)local_f8.field15 = *(int *)local_f8.field15 + -1;
      local_21 = *(int *)local_f8.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002b1d77;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field15,2,8);
  }
LAB_1002b1d77:
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_21 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002b1dad;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_1002b1dad:
  if (*param_2 != 0xff) {
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_120.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
    QString::fromUtf8_helper((char *)&local_b8,0x1e2468c);
    QString::append(&local_120);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_21 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b1e35;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_1002b1e35:
    local_118.field15 = (QObject *)local_120.field0_0x0;
    if (1 < *(int *)local_120.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + 1;
      local_21 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_b0,0x1de3a79);
    QString::append((QString *)&local_118);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_21 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b1eb5;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1002b1eb5:
    QVariant::QVariant(&local_130,param_2[1]);
    QSettings::setValue(local_d8,(QVariant *)&local_118);
    QVariant::~QVariant(&local_130);
    if (*(int *)local_118.field15 != -1) {
      if (*(int *)local_118.field15 != 0) {
        LOCK();
        *(int *)local_118.field15 = *(int *)local_118.field15 + -1;
        local_21 = *(int *)local_118.field15 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b1f21;
      }
      QArrayData::deallocate((QArrayData *)local_118.field15,2,8);
    }
LAB_1002b1f21:
    if (*(int *)local_120.field0_0x0 != -1) {
      if (*(int *)local_120.field0_0x0 != 0) {
        LOCK();
        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
        local_21 = *(int *)local_120.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b1f57;
      }
      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
    }
LAB_1002b1f57:
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
    QString::fromUtf8_helper((char *)&local_a8,0x1e2468c);
    QString::append(&local_140);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_21 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b1fd2;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1002b1fd2:
    local_138.field15 = (QObject *)local_140.field0_0x0;
    if (1 < *(int *)local_140.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + 1;
      local_21 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_a0,0x1de3a7e);
    QString::append((QString *)&local_138);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_21 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2052;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1002b2052:
    QVariant::QVariant(&local_150,param_2[2]);
    QSettings::setValue(local_d8,(QVariant *)&local_138);
    QVariant::~QVariant(&local_150);
    if (*(int *)local_138.field15 != -1) {
      if (*(int *)local_138.field15 != 0) {
        LOCK();
        *(int *)local_138.field15 = *(int *)local_138.field15 + -1;
        local_21 = *(int *)local_138.field15 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b20be;
      }
      QArrayData::deallocate((QArrayData *)local_138.field15,2,8);
    }
LAB_1002b20be:
    if (*(int *)local_140.field0_0x0 != -1) {
      if (*(int *)local_140.field0_0x0 != 0) {
        LOCK();
        *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
        local_21 = *(int *)local_140.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b20f4;
      }
      QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
    }
LAB_1002b20f4:
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_160.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
    QString::fromUtf8_helper((char *)&local_98,0x1e2468c);
    QString::append(&local_160);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b216f;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1002b216f:
    local_158.field15 = (QObject *)local_160.field0_0x0;
    if (1 < *(int *)local_160.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + 1;
      local_21 = *(int *)local_160.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_90,0x1ddf0f0);
    QString::append((QString *)&local_158);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b21ef;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1002b21ef:
    QVariant::QVariant(&local_170,(QString *)(param_2 + 4));
    QSettings::setValue(local_d8,(QVariant *)&local_158);
    QVariant::~QVariant(&local_170);
    if (*(int *)local_158.field15 != -1) {
      if (*(int *)local_158.field15 != 0) {
        LOCK();
        *(int *)local_158.field15 = *(int *)local_158.field15 + -1;
        local_21 = *(int *)local_158.field15 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b225b;
      }
      QArrayData::deallocate((QArrayData *)local_158.field15,2,8);
    }
LAB_1002b225b:
    if (*(int *)local_160.field0_0x0 != -1) {
      if (*(int *)local_160.field0_0x0 != 0) {
        LOCK();
        *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
        local_21 = *(int *)local_160.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2291;
      }
      QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
    }
LAB_1002b2291:
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_180.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
    QString::fromUtf8_helper((char *)&local_88,0x1e2468c);
    QString::append(&local_180);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2300;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1002b2300:
    local_178.field15 = (QObject *)local_180.field0_0x0;
    if (1 < *(int *)local_180.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + 1;
      local_21 = *(int *)local_180.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_80,0x1de3a88);
    QString::append((QString *)&local_178);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2374;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1002b2374:
    QVariant::QVariant(&local_190,(QStringList *)(param_2 + 8));
    QSettings::setValue(local_d8,(QVariant *)&local_178);
    QVariant::~QVariant(&local_190);
    if (*(int *)local_178.field15 != -1) {
      if (*(int *)local_178.field15 != 0) {
        LOCK();
        *(int *)local_178.field15 = *(int *)local_178.field15 + -1;
        local_21 = *(int *)local_178.field15 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b23e0;
      }
      QArrayData::deallocate((QArrayData *)local_178.field15,2,8);
    }
LAB_1002b23e0:
    if (*(int *)local_180.field0_0x0 != -1) {
      if (*(int *)local_180.field0_0x0 != 0) {
        LOCK();
        *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
        local_21 = *(int *)local_180.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2416;
      }
      QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
    }
LAB_1002b2416:
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_1a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
    QString::fromUtf8_helper((char *)&local_78,0x1e2468c);
    QString::append(&local_1a0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2485;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1002b2485:
    local_198.field15 = (QObject *)local_1a0.field0_0x0;
    if (1 < *(int *)local_1a0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + 1;
      local_21 = *(int *)local_1a0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_70,0x1de3a91);
    QString::append((QString *)&local_198);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b24f9;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1002b24f9:
    QVariant::QVariant(&local_1b0,(QStringList *)(param_2 + 10));
    QSettings::setValue(local_d8,(QVariant *)&local_198);
    QVariant::~QVariant(&local_1b0);
    if (*(int *)local_198.field15 != -1) {
      if (*(int *)local_198.field15 != 0) {
        LOCK();
        *(int *)local_198.field15 = *(int *)local_198.field15 + -1;
        local_21 = *(int *)local_198.field15 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2565;
      }
      QArrayData::deallocate((QArrayData *)local_198.field15,2,8);
    }
LAB_1002b2565:
    if (*(int *)local_1a0.field0_0x0 != -1) {
      if (*(int *)local_1a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
        local_21 = *(int *)local_1a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b259b;
      }
      QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
    }
LAB_1002b259b:
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_1c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
    QString::fromUtf8_helper((char *)&local_68,0x1e2468c);
    QString::append(&local_1c0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b260a;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1002b260a:
    local_1b8.field15 = (QObject *)local_1c0.field0_0x0;
    if (1 < *(int *)local_1c0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + 1;
      local_21 = *(int *)local_1c0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_60,0x1de3aa4);
    QString::append((QString *)&local_1b8);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b267e;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1002b267e:
    QVariant::QVariant(&local_1d0,SUB41(param_2[0xc],0));
    QSettings::setValue(local_d8,(QVariant *)&local_1b8);
    QVariant::~QVariant(&local_1d0);
    if (*(int *)local_1b8.field15 != -1) {
      if (*(int *)local_1b8.field15 != 0) {
        LOCK();
        *(int *)local_1b8.field15 = *(int *)local_1b8.field15 + -1;
        local_21 = *(int *)local_1b8.field15 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b26eb;
      }
      QArrayData::deallocate((QArrayData *)local_1b8.field15,2,8);
    }
LAB_1002b26eb:
    if (*(int *)local_1c0.field0_0x0 != -1) {
      if (*(int *)local_1c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
        local_21 = *(int *)local_1c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2721;
      }
      QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
    }
LAB_1002b2721:
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_1e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
    QString::fromUtf8_helper((char *)&local_58,0x1e2468c);
    QString::append(&local_1e0);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2790;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1002b2790:
    local_1d8.field15 = (QObject *)local_1e0.field0_0x0;
    if (1 < *(int *)local_1e0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + 1;
      local_21 = *(int *)local_1e0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_50,0x1de3ab4);
    QString::append((QString *)&local_1d8);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2804;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1002b2804:
    QVariant::QVariant(&local_1f0,SUB41(param_2[0x12],0));
    QSettings::setValue(local_d8,(QVariant *)&local_1d8);
    QVariant::~QVariant(&local_1f0);
    if (*(int *)local_1d8.field15 != -1) {
      if (*(int *)local_1d8.field15 != 0) {
        LOCK();
        *(int *)local_1d8.field15 = *(int *)local_1d8.field15 + -1;
        local_21 = *(int *)local_1d8.field15 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2871;
      }
      QArrayData::deallocate((QArrayData *)local_1d8.field15,2,8);
    }
LAB_1002b2871:
    if (*(int *)local_1e0.field0_0x0 != -1) {
      if (*(int *)local_1e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
        local_21 = *(int *)local_1e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b28a7;
      }
      QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
    }
LAB_1002b28a7:
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_200.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
    QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
    QString::append(&local_200);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2916;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002b2916:
    local_1f8.field15 = (QObject *)local_200.field0_0x0;
    if (1 < *(int *)local_200.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + 1;
      local_21 = *(int *)local_200.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1de3abf);
    QString::append((QString *)&local_1f8);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b298a;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1002b298a:
    QVariant::QVariant(&local_210,*(ulonglong *)(param_2 + 0x14));
    QSettings::setValue(local_d8,(QVariant *)&local_1f8);
    QVariant::~QVariant(&local_210);
    if (*(int *)local_1f8.field15 != -1) {
      if (*(int *)local_1f8.field15 != 0) {
        LOCK();
        *(int *)local_1f8.field15 = *(int *)local_1f8.field15 + -1;
        local_21 = *(int *)local_1f8.field15 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b29f6;
      }
      QArrayData::deallocate((QArrayData *)local_1f8.field15,2,8);
    }
LAB_1002b29f6:
    if (*(int *)local_200.field0_0x0 != -1) {
      if (*(int *)local_200.field0_0x0 != 0) {
        LOCK();
        *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
        local_21 = *(int *)local_200.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2a2c;
      }
      QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
    }
LAB_1002b2a2c:
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_220.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
    QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
    QString::append(&local_220);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2a9b;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1002b2a9b:
    local_218.field15 = (QObject *)local_220.field0_0x0;
    if (1 < *(int *)local_220.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + 1;
      local_21 = *(int *)local_220.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_30,0x1de3acd);
    QString::append((QString *)&local_218);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2b0f;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_1002b2b0f:
    QVariant::QVariant(&local_230,(QString *)(param_2 + 0xe));
    QSettings::setValue(local_d8,(QVariant *)&local_218);
    QVariant::~QVariant(&local_230);
    if (*(int *)local_218.field15 != -1) {
      if (*(int *)local_218.field15 != 0) {
        LOCK();
        *(int *)local_218.field15 = *(int *)local_218.field15 + -1;
        local_21 = *(int *)local_218.field15 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2b7e;
      }
      QArrayData::deallocate((QArrayData *)local_218.field15,2,8);
    }
LAB_1002b2b7e:
    if (*(int *)local_220.field0_0x0 != -1) {
      if (*(int *)local_220.field0_0x0 != 0) {
        LOCK();
        *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
        local_21 = *(int *)local_220.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b2bb4;
      }
      QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
    }
  }
LAB_1002b2bb4:
  QSettings::endGroup();
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002b2bed;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002b2bed:
  QSettings::~QSettings((QSettings *)local_d8);
  return;
}

