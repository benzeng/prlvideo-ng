
void FUN_1002c1e60(long *param_1)

{
  QArrayData *pQVar1;
  QSettings *this;
  QDateTime local_90;
  QString local_88;
  QVariant local_80;
  Data_conflict local_70;
  QString local_68 [2];
  QArrayData *local_58;
  QDateTime local_50;
  QString local_48;
  QVariant local_40;
  Data_conflict local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  if ((int)param_1[3] != 0) goto LAB_1002c20c8;
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
    local_30.field7 =
         QString::fromAscii_helper("AcronisOnlineStore/AcronisOnlineStorePromoLastShowtime",0x36);
    QDateTime::currentDateTime();
    local_58 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::toString(&local_48);
    QVariant::QVariant(&local_40,&local_48);
    QSettings::setValue(local_28,(QVariant *)&local_30);
    QVariant::~QVariant(&local_40);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_11 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1002c2056;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1002c2056:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_11 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1002c2086;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1002c2086:
    QDateTime::~QDateTime(&local_50);
    if (*(int *)local_30.field15 != -1) {
      if (*(int *)local_30.field15 != 0) {
        LOCK();
        *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
        local_11 = *(int *)local_30.field15 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1002c20bf;
      }
      QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
    }
LAB_1002c20bf:
    this = (QSettings *)local_28;
  }
  else {
    QSettings::QSettings((QSettings *)local_68,(QObject *)0x0);
    local_70.field7 =
         QString::fromAscii_helper("AcronisTrueImage/AcronisTrueImagePromoLastShowtime",0x32);
    QDateTime::currentDateTime();
    pQVar1 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::toString(&local_88);
    QVariant::QVariant(&local_80,&local_88);
    QSettings::setValue(local_68,(QVariant *)&local_70);
    QVariant::~QVariant(&local_80);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_11 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1002c1f35;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_1002c1f35:
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_11 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1002c1f6b;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
LAB_1002c1f6b:
    QDateTime::~QDateTime(&local_90);
    if (*(int *)local_70.field15 != -1) {
      if (*(int *)local_70.field15 != 0) {
        LOCK();
        *(int *)local_70.field15 = *(int *)local_70.field15 + -1;
        local_11 = *(int *)local_70.field15 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1002c1fa7;
      }
      QArrayData::deallocate((QArrayData *)local_70.field15,2,8);
    }
LAB_1002c1fa7:
    this = (QSettings *)local_68;
  }
  QSettings::~QSettings(this);
LAB_1002c20c8:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

