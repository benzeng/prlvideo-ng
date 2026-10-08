
void FUN_100784640(long param_1)

{
  QArrayData *local_a8;
  QString local_a0;
  QVariant local_98;
  Data_conflict local_88;
  QArrayData *local_80;
  QString local_78;
  QVariant local_70;
  Data_conflict local_60;
  QArrayData *local_58;
  QString local_50;
  QVariant local_48;
  Data_conflict local_38;
  QArrayData *local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
  local_30 = (QArrayData *)QString::fromAscii_helper("FeedbackReport",0xe);
  QSettings::beginGroup(local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007846ac;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007846ac:
  local_38.field7 = QString::fromAscii_helper("UserName",8);
  FUN_100785170(&local_58,*(undefined8 *)(param_1 + 0x48));
  QString::simplified();
  QVariant::QVariant(&local_48,&local_50);
  QSettings::setValue(local_28,(QVariant *)&local_38);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_11 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100784732;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100784732:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100784762;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100784762:
  if (*(int *)local_38.field15 != -1) {
    if (*(int *)local_38.field15 != 0) {
      LOCK();
      *(int *)local_38.field15 = *(int *)local_38.field15 + -1;
      local_11 = *(int *)local_38.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100784792;
    }
    QArrayData::deallocate((QArrayData *)local_38.field15,2,8);
  }
LAB_100784792:
  local_60.field7 = QString::fromAscii_helper("EMail",5);
  FUN_1007851f0(&local_80,*(undefined8 *)(param_1 + 0x48));
  QString::simplified();
  QVariant::QVariant(&local_70,&local_78);
  QSettings::setValue(local_28,(QVariant *)&local_60);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_11 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100784818;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100784818:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_11 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100784848;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100784848:
  if (*(int *)local_60.field15 != -1) {
    if (*(int *)local_60.field15 != 0) {
      LOCK();
      *(int *)local_60.field15 = *(int *)local_60.field15 + -1;
      local_11 = *(int *)local_60.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100784878;
    }
    QArrayData::deallocate((QArrayData *)local_60.field15,2,8);
  }
LAB_100784878:
  local_88.field7 = QString::fromAscii_helper("Description",0xb);
  FUN_100785270(&local_a8,*(undefined8 *)(param_1 + 0x48));
  QString::simplified();
  QVariant::QVariant(&local_98,&local_a0);
  QSettings::setValue(local_28,(QVariant *)&local_88);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_11 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100784919;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100784919:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_11 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10078494f;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10078494f:
  if (*(int *)local_88.field15 != -1) {
    if (*(int *)local_88.field15 != 0) {
      LOCK();
      *(int *)local_88.field15 = *(int *)local_88.field15 + -1;
      local_11 = *(int *)local_88.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10078497f;
    }
    QArrayData::deallocate((QArrayData *)local_88.field15,2,8);
  }
LAB_10078497f:
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)local_28);
  return;
}

