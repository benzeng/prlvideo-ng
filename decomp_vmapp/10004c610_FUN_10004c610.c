
QString * FUN_10004c610(QString *param_1,long param_2,int param_3)

{
  int iVar1;
  QArrayData *pQVar2;
  QString local_110;
  undefined8 local_108;
  QArrayData *local_100;
  QString local_f8;
  QString local_f0;
  QDateTime local_e8 [8];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QTypedArrayData<unsigned_short> *local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
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
  
  QString::mid((int)&local_c0,param_3);
  local_b8.field0_0x0 = local_c0;
  if (1 < *(int *)local_c0 + 1U) {
    LOCK();
    *(int *)local_c0 = *(int *)local_c0 + 1;
    local_21 = *(int *)local_c0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_80,0xa06364);
  QString::append(&local_b8);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004c6b3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10004c6b3:
  QString::number((uint)&local_c8,*(int *)(param_2 + 0x20));
  local_b0.field0_0x0 = local_b8.field0_0x0;
  if (1 < *(int *)local_b8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
    local_21 = *(int *)local_b8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_b0);
  local_a8.field0_0x0 = local_b0.field0_0x0;
  if (1 < *(int *)local_b0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
    local_21 = *(int *)local_b0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_78,0x9e35e4);
  QString::append(&local_a8);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004c76d;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10004c76d:
  QString::number((uint)&local_d0,*(int *)(param_2 + 0x24));
  local_a0.field0_0x0 = local_a8.field0_0x0;
  if (1 < *(int *)local_a8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
    local_21 = *(int *)local_a8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_a0);
  local_98.field0_0x0 = local_a0.field0_0x0;
  if (1 < *(int *)local_a0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
    local_21 = *(int *)local_a0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_70,0x9e35e4);
  QString::append(&local_98);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004c827;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10004c827:
  QString::number((uint)&local_d8,*(int *)(param_2 + 0x2c));
  local_90.field0_0x0 = local_98.field0_0x0;
  if (1 < *(int *)local_98.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_21 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_90);
  local_88.field0_0x0 = local_90.field0_0x0;
  if (1 < *(int *)local_90.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
    local_21 = *(int *)local_90.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_68,0x9e35e4);
  QString::append(&local_88);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004c8db;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10004c8db:
  QString::number((uint)&local_e0,*(int *)(param_2 + 0x28));
  param_1->field0_0x0 = local_88.field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_21 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_21 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004c94c;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10004c94c:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_21 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004c97c;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10004c97c:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_21 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004c9b2;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_10004c9b2:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_21 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004c9e8;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10004c9e8:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_21 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004ca1e;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_10004ca1e:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_21 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004ca54;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_10004ca54:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004ca8a;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10004ca8a:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_21 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004cac0;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_10004cac0:
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_21 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004caf6;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_10004caf6:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004cb2c;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10004cb2c:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_21 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004cb62;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_10004cb62:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004cb98;
    }
    QArrayData::deallocate((QArrayData *)local_c0,2,8);
  }
LAB_10004cb98:
  QDateTime::currentDateTime();
  local_108 = QDateTime::date();
  QDate::toString(&local_100,&local_108,1);
  QString::fromUtf8_helper((char *)&local_f8,0xa06364);
  QString::append(&local_f8);
  QDateTime::time();
  pQVar2 = (QArrayData *)QString::fromAscii_helper("-hhmmss",7);
  QTime::toString(&local_110);
  local_f0.field0_0x0 = local_f8.field0_0x0;
  if (1 < *(int *)local_f8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + 1;
    local_21 = *(int *)local_f8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_f0);
  QString::append(param_1);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_21 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004ccb5;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_10004ccb5:
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_21 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004cceb;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_10004cceb:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004cd21;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10004cd21:
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_21 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004cd57;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_10004cd57:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_21 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004cd8d;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10004cd8d:
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 < 0x21) {
    if (iVar1 == 0) {
      QString::fromUtf8_helper((char *)&local_60,0x9e35ee);
      QString::append(param_1);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_21 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10004cf54;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
    else if (iVar1 == 0x11) {
      QString::fromUtf8_helper((char *)&local_58,0x9e35f3);
      QString::append(param_1);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_21 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10004cf54;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
    else {
LAB_10004cf27:
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("GSHEXT","vm",1,"Unknown platform type = %d");
      }
    }
  }
  else if (iVar1 == 0x21) {
    QString::fromUtf8_helper((char *)&local_50,0x9e35f8);
    QString::append(param_1);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10004cf54;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
  else {
    if (iVar1 != 0x22) goto LAB_10004cf27;
    QString::fromUtf8_helper((char *)&local_48,0x9e35fd);
    QString::append(param_1);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10004cf54;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10004cf54:
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == 3) {
    QString::fromUtf8_helper((char *)&local_30,0x9e3629);
    QString::append(param_1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10004d0aa;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  else if (iVar1 == 2) {
    QString::fromUtf8_helper((char *)&local_38,0x9e3622);
    QString::append(param_1);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10004d0aa;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  else if (iVar1 == 1) {
    QString::fromUtf8_helper((char *)&local_40,0x9e361d);
    QString::append(param_1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10004d0aa;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
  else if (0 < DAT_1011b55f8) {
    FUN_1008e3970("GSHEXT","vm",1,"Unknown format with code = %d");
  }
LAB_10004d0aa:
  QDateTime::~QDateTime(local_e8);
  return param_1;
}

