
void FUN_1003712c0(undefined8 param_1,undefined8 *param_2,QRect *param_3)

{
  QVariant local_f8;
  Data_conflict local_e8;
  QVariant local_e0;
  Data_conflict local_d0;
  QVariant local_c8;
  Data_conflict local_b8;
  QVariant local_b0;
  Data_conflict local_a0;
  QVariant local_98;
  Data_conflict local_88;
  QVariant local_80;
  Data_conflict local_70;
  QVariant local_68;
  Data_conflict local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40 [2];
  undefined1 local_29;
  
  QSettings::QSettings((QSettings *)local_40,(QObject *)0x0);
  if (2 < DAT_10230ffd0) {
    local_50 = (QArrayData *)*param_2;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("[CONSOLE_MNG]","prl_client_app",3,
                  " Write window geometry to %s: frame geometry %dx%d (%d,%d), normal geometry %dx%d (%d, %d), states %d, screen number %d"
                  ,local_48 + *(long *)(local_48 + 0x10),
                  (*(int *)(param_3 + 8) + 1) - *(int *)param_3,
                  (*(int *)(param_3 + 0xc) + 1) - *(int *)(param_3 + 4),*(int *)param_3,
                  *(int *)(param_3 + 4),(*(int *)(param_3 + 0x18) + 1) - *(int *)(param_3 + 0x10),
                  (*(int *)(param_3 + 0x1c) + 1) - *(int *)(param_3 + 0x14),*(int *)(param_3 + 0x10)
                  ,*(int *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x20),
                  *(undefined4 *)(param_3 + 0x24));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003713d1;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1003713d1:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100371401;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100371401:
  QSettings::beginGroup(local_40);
  if (((byte)param_3[0x20] & 2) == 0) {
    local_58.field7 = QString::fromAscii_helper("Window Frame Geometry",0x15);
    QVariant::QVariant(&local_68,param_3);
    QSettings::setValue(local_40,(QVariant *)&local_58);
    QVariant::~QVariant(&local_68);
    if (*(int *)local_58.field15 != -1) {
      if (*(int *)local_58.field15 != 0) {
        LOCK();
        *(int *)local_58.field15 = *(int *)local_58.field15 + -1;
        local_29 = *(int *)local_58.field15 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100371483;
      }
      QArrayData::deallocate((QArrayData *)local_58.field15,2,8);
    }
LAB_100371483:
    local_70.field7 = QString::fromAscii_helper("Window Normal Geometry",0x16);
    QVariant::QVariant(&local_80,param_3 + 0x10);
    QSettings::setValue(local_40,(QVariant *)&local_70);
    QVariant::~QVariant(&local_80);
    if (*(int *)local_70.field15 != -1) {
      if (*(int *)local_70.field15 != 0) {
        LOCK();
        *(int *)local_70.field15 = *(int *)local_70.field15 + -1;
        local_29 = *(int *)local_70.field15 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003714ef;
      }
      QArrayData::deallocate((QArrayData *)local_70.field15,2,8);
    }
  }
LAB_1003714ef:
  local_88.field7 = QString::fromAscii_helper("Window States",0xd);
  QVariant::QVariant(&local_98,*(int *)(param_3 + 0x20));
  QSettings::setValue(local_40,(QVariant *)&local_88);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_88.field15 != -1) {
    if (*(int *)local_88.field15 != 0) {
      LOCK();
      *(int *)local_88.field15 = *(int *)local_88.field15 + -1;
      local_29 = *(int *)local_88.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100371564;
    }
    QArrayData::deallocate((QArrayData *)local_88.field15,2,8);
  }
LAB_100371564:
  local_a0.field7 = QString::fromAscii_helper("Window Screen Number",0x14);
  QVariant::QVariant(&local_b0,*(int *)(param_3 + 0x24));
  QSettings::setValue(local_40,(QVariant *)&local_a0);
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_a0.field15 != -1) {
    if (*(int *)local_a0.field15 != 0) {
      LOCK();
      *(int *)local_a0.field15 = *(int *)local_a0.field15 + -1;
      local_29 = *(int *)local_a0.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003715e5;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field15,2,8);
  }
LAB_1003715e5:
  local_b8.field7 = QString::fromAscii_helper("Window Guest Screen Resolution",0x1e);
  QVariant::QVariant(&local_c8,(QSize *)(param_3 + 0x38));
  QSettings::setValue(local_40,(QVariant *)&local_b8);
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_b8.field15 != -1) {
    if (*(int *)local_b8.field15 != 0) {
      LOCK();
      *(int *)local_b8.field15 = *(int *)local_b8.field15 + -1;
      local_29 = *(int *)local_b8.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100371666;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field15,2,8);
  }
LAB_100371666:
  if (*(int *)(param_3 + 0x28) < 1) goto LAB_100371776;
  local_d0.field7 = QString::fromAscii_helper("Window Space Number",0x13);
  QVariant::QVariant(&local_e0,*(int *)(param_3 + 0x28));
  QSettings::setValue(local_40,(QVariant *)&local_d0);
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_d0.field15 != -1) {
    if (*(int *)local_d0.field15 != 0) {
      LOCK();
      *(int *)local_d0.field15 = *(int *)local_d0.field15 + -1;
      local_29 = *(int *)local_d0.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003716f2;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field15,2,8);
  }
LAB_1003716f2:
  local_e8.field7 = QString::fromAscii_helper("Window Space UUID",0x11);
  QVariant::QVariant(&local_f8,(QString *)(param_3 + 0x30));
  QSettings::setValue(local_40,(QVariant *)&local_e8);
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_e8.field15 != -1) {
    if (*(int *)local_e8.field15 != 0) {
      LOCK();
      *(int *)local_e8.field15 = *(int *)local_e8.field15 + -1;
      local_29 = *(int *)local_e8.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100371776;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field15,2,8);
  }
LAB_100371776:
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)local_40);
  return;
}

