
undefined1 FUN_100611280(void)

{
  char cVar1;
  QArrayData *pQVar2;
  undefined1 uVar3;
  QString local_80;
  QArrayData *local_78;
  QDateTime local_70;
  QDateTime local_68;
  Data_conflict local_60;
  undefined4 local_58;
  QString local_50;
  QVariant local_48;
  QVariant local_38;
  QDateTime local_28;
  undefined1 local_19;
  
  cVar1 = FUN_10060b3d0();
  if (cVar1 != '\0') {
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    FUN_100df99c0("","prl_client_app",2,"[onTrialPromoTimerTimeout] License Wizard is visible now.")
    ;
    return 0;
  }
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  QString::fromUtf8_helper((char *)&local_50,0x1e0721e);
  QString::append(&local_50);
  local_58 = 0x80000000;
  local_60.field7 = 0;
  QSettings::value((QString *)&local_38,&local_48);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_19 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10061134d;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10061134d:
  QSettings::~QSettings((QSettings *)&local_48);
  cVar1 = QDateTime::isValid();
  uVar3 = 1;
  if (cVar1 == '\0') goto LAB_1006114ad;
  QDateTime::addMSecs((longlong)&local_68);
  QDateTime::currentDateTime();
  cVar1 = QDateTime::operator<(&local_70,&local_68);
  QDateTime::~QDateTime(&local_70);
  QDateTime::~QDateTime(&local_68);
  if (cVar1 == '\0') goto LAB_1006114ad;
  if (1 < DAT_10230ffd0) {
    pQVar2 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::toString(&local_80);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"[onTrialPromoTimerTimeout] Trial Promo was show at %s",
                  local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_19 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10061144b;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_10061144b:
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_19 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10061147b;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_10061147b:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_19 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006114ab;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1006114ab:
  uVar3 = 0;
LAB_1006114ad:
  QDateTime::~QDateTime(&local_28);
  return uVar3;
}

