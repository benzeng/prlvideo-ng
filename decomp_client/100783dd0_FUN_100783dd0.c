
void FUN_100783dd0(long param_1)

{
  QString local_f8;
  QString local_f0;
  QArrayData *local_e8 [2];
  QString local_d8 [2];
  Data_conflict local_c8;
  undefined4 local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  QVariant local_80;
  QString local_70;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QVariant local_50;
  QString local_40;
  QArrayData *local_38;
  QVariant local_30;
  QArrayData *local_20;
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)&local_30,(QObject *)0x0);
  local_38 = (QArrayData *)QString::fromAscii_helper("FeedbackReport",0xe);
  QSettings::beginGroup((QString *)&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100783e3c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100783e3c:
  local_58 = (QArrayData *)QString::fromAscii_helper("UserName",8);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  QSettings::value((QString *)&local_50,&local_30);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100783ec4;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100783ec4:
  local_88 = (QArrayData *)QString::fromAscii_helper("EMail",5);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  QSettings::value((QString *)&local_80,&local_30);
  QVariant::toString();
  QVariant::~QVariant(&local_80);
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_11 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100783f58;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100783f58:
  local_b8 = (QArrayData *)QString::fromAscii_helper("Description",0xb);
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  QSettings::value((QString *)&local_b0,&local_30);
  QVariant::toString();
  QVariant::~QVariant(&local_b0);
  QVariant::~QVariant((QVariant *)&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_11 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100784004;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100784004:
  QSettings::endGroup();
  if (*(int *)(local_70.field0_0x0 + 4) == 0) {
    MacUtils::getAddressBookUserInfo();
    QString::operator=(&local_70,local_d8);
    if (*(int *)(local_40.field0_0x0 + 4) == 0) {
      local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e8[0];
      if (1 < *(int *)local_e8[0] + 1U) {
        LOCK();
        *(int *)local_e8[0] = *(int *)local_e8[0] + 1;
        local_11 = *(int *)local_e8[0] != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_20,0x1e31adc);
      QString::append(&local_f8);
      if (*(int *)local_20 != -1) {
        if (*(int *)local_20 != 0) {
          LOCK();
          *(int *)local_20 = *(int *)local_20 + -1;
          local_11 = *(int *)local_20 != 0;
          UNLOCK();
          if ((bool)local_11) goto LAB_1007840b9;
        }
        QArrayData::deallocate(local_20,2,8);
      }
LAB_1007840b9:
      local_f0.field0_0x0 = local_f8.field0_0x0;
      if (1 < *(int *)local_f8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + 1;
        local_11 = *(int *)local_f8.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_f0);
      QString::operator=(&local_40,&local_f0);
      if (*(int *)local_f0.field0_0x0 != -1) {
        if (*(int *)local_f0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
          local_11 = *(int *)local_f0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_11) goto LAB_100784131;
        }
        QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
      }
LAB_100784131:
      if (*(int *)local_f8.field0_0x0 != -1) {
        if (*(int *)local_f8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
          local_11 = *(int *)local_f8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_11) goto LAB_100784167;
        }
        QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
      }
    }
LAB_100784167:
    FUN_1005d96a0(local_e8);
  }
  FUN_1007851a0(*(undefined8 *)(param_1 + 0x48),&local_40);
  FUN_100785220(*(undefined8 *)(param_1 + 0x48),&local_70);
  FUN_1007852a0(*(undefined8 *)(param_1 + 0x48),&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_11 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007841d3;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1007841d3:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_11 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100784203;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100784203:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_11 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100784233;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100784233:
  QSettings::~QSettings((QSettings *)&local_30);
  return;
}

