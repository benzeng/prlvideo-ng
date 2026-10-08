
QDateTime * FUN_1007795f0(QDateTime *param_1,long param_2)

{
  char cVar1;
  QArrayData *pQVar2;
  QString local_b8;
  QVariant local_b0;
  QDateTime local_a0;
  QArrayData *local_98;
  Data_conflict local_90;
  undefined4 local_88;
  QVariant local_80;
  QString local_70;
  QDateTime local_68;
  QString local_60;
  QString local_58;
  Data_conflict local_50;
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QDateTime::QDateTime(param_1);
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_60.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x10);
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_21 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
  QString::append(&local_60);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100779681;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100779681:
  local_58.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_21 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_58);
  local_50.field15 = (QObject *)local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_21 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e16267);
  QString::append((QString *)&local_50);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100779715;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100779715:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100779745;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100779745:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100779775;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100779775:
  cVar1 = QSettings::contains((QString *)&local_48);
  if (cVar1 != '\0') {
    local_88 = 0x80000000;
    local_90.field7 = 0;
    QSettings::value((QString *)&local_80,&local_48);
    QVariant::toString();
    local_98 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::fromString((QString *)&local_68,&local_70);
    QDateTime::operator=(param_1,&local_68);
    QDateTime::~QDateTime(&local_68);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100779838;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100779838:
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_21 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100779868;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100779868:
    QVariant::~QVariant(&local_80);
    QVariant::~QVariant((QVariant *)&local_90);
  }
  cVar1 = QDateTime::isValid();
  if (cVar1 == '\0') {
    QDateTime::currentDateTime();
    QDateTime::operator=(param_1,&local_a0);
    QDateTime::~QDateTime(&local_a0);
    pQVar2 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::toString(&local_b8);
    QVariant::QVariant(&local_b0,&local_b8);
    QSettings::setValue((QString *)&local_48,(QVariant *)&local_50);
    QVariant::~QVariant(&local_b0);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_21 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10077994b;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_10077994b:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_21 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100779981;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_100779981:
  if (*(int *)local_50.field15 != -1) {
    if (*(int *)local_50.field15 != 0) {
      LOCK();
      *(int *)local_50.field15 = *(int *)local_50.field15 + -1;
      local_21 = *(int *)local_50.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007799b1;
    }
    QArrayData::deallocate((QArrayData *)local_50.field15,2,8);
  }
LAB_1007799b1:
  QSettings::~QSettings((QSettings *)&local_48);
  return param_1;
}

