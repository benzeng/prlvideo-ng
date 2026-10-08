
QDateTime * FUN_1007752e0(QDateTime *param_1,long param_2)

{
  char cVar1;
  QArrayData *pQVar2;
  QString local_120;
  QVariant local_118;
  QString local_108;
  QString local_100;
  Data_conflict local_f8;
  QDateTime local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  Data_conflict local_d0;
  undefined4 local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QVariant local_a8;
  QString local_98;
  QDateTime local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QDateTime::QDateTime(param_1);
  QSettings::QSettings((QSettings *)&local_70,(QObject *)0x0);
  local_88.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x10);
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_29 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x1e2468c);
  QString::append(&local_88);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100775374;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100775374:
  local_80.field0_0x0 = local_88.field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_29 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_80);
  local_78.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_29 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1e160b4);
  QString::append(&local_78);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100775409;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100775409:
  cVar1 = QSettings::contains((QString *)&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100775448;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100775448:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100775478;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100775478:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007754a8;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1007754a8:
  if (cVar1 != '\0') {
    local_c0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x10);
    if (1 < *(int *)local_c0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
      local_29 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_50,0x1e2468c);
    QString::append(&local_c0);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100775520;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100775520:
    local_b8.field0_0x0 = local_c0.field0_0x0;
    if (1 < *(int *)local_c0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
      local_29 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_b8);
    local_b0.field0_0x0 = local_b8.field0_0x0;
    if (1 < *(int *)local_b8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
      local_29 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0x1e160b4);
    QString::append(&local_b0);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007755c2;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1007755c2:
    local_c8 = 0x80000000;
    local_d0.field7 = 0;
    QSettings::value((QString *)&local_a8,&local_70);
    QVariant::toString();
    local_d8 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::fromString((QString *)&local_90,&local_98);
    QDateTime::operator=(param_1,&local_90);
    QDateTime::~QDateTime(&local_90);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077568b;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_10077568b:
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_29 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007756c1;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_1007756c1:
    QVariant::~QVariant(&local_a8);
    QVariant::~QVariant((QVariant *)&local_d0);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_29 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077570f;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_10077570f:
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_29 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100775745;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_100775745:
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_29 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077577b;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
  }
LAB_10077577b:
  cVar1 = QDateTime::isValid();
  if (cVar1 != '\0') goto LAB_100775b28;
  local_e8 = *(QArrayData **)(param_2 + 0x10);
  if (1 < *(int *)local_e8 + 1U) {
    LOCK();
    *(int *)local_e8 = *(int *)local_e8 + 1;
    local_29 = *(int *)local_e8 != 0;
    UNLOCK();
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_e0) || (*(long *)(local_e0 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_e0,*(uint *)(local_e0 + 4) + 1,*(uint *)(local_e0 + 8) >> 0x1f);
  }
  FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Initialize last show time for promo %s",
                local_e0 + *(long *)(local_e0 + 0x10));
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100775847;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_100775847:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077587d;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10077587d:
  QDateTime::currentDateTime();
  QDateTime::operator=(param_1,&local_f0);
  QDateTime::~QDateTime(&local_f0);
  local_108.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x10);
  if (1 < *(int *)local_108.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + 1;
    local_29 = *(int *)local_108.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_108);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100775914;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100775914:
  local_100.field0_0x0 = local_108.field0_0x0;
  if (1 < *(int *)local_108.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + 1;
    local_29 = *(int *)local_108.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_100);
  local_f8.field15 = (QObject *)local_100.field0_0x0;
  if (1 < *(int *)local_100.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
    local_29 = *(int *)local_100.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e160b4);
  QString::append((QString *)&local_f8);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007759b6;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007759b6:
  pQVar2 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_120);
  QVariant::QVariant(&local_118,&local_120);
  QSettings::setValue((QString *)&local_70,(QVariant *)&local_f8);
  QVariant::~QVariant(&local_118);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_29 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100775a50;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_100775a50:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100775a86;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100775a86:
  if (*(int *)local_f8.field15 != -1) {
    if (*(int *)local_f8.field15 != 0) {
      LOCK();
      *(int *)local_f8.field15 = *(int *)local_f8.field15 + -1;
      local_29 = *(int *)local_f8.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100775abc;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field15,2,8);
  }
LAB_100775abc:
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_29 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100775af2;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_100775af2:
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_29 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100775b28;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_100775b28:
  QSettings::~QSettings((QSettings *)&local_70);
  return param_1;
}

