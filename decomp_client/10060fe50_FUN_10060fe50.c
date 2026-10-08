
undefined4 FUN_10060fe50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  QDateTime local_b8;
  QDateTime local_b0;
  QVariant local_a8;
  QVariant local_98;
  QDateTime local_88;
  QString local_80;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined8 local_38;
  QDateTime local_30;
  undefined1 local_21;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_100152bc0(uVar3,param_2);
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return 0xffffffff;
  }
  uVar3 = FUN_10016f500(lVar4);
  cVar1 = FUN_100624c50(uVar3);
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
  QDateTime::currentDateTime();
  uVar3 = FUN_10016f500(lVar4);
  FUN_10061abe0(&local_48,uVar3,6);
  local_38 = QVariant::toDate();
  QVariant::~QVariant(&local_48);
  if (1 < DAT_10230ffd0) {
    QDateTime::toString(&local_58,&local_30,1);
    QString::toUtf8();
    pQVar5 = local_50 + *(long *)(local_50 + 0x10);
    QDate::toString(&local_68,&local_38,1);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,
                  "[timeToShowExpiredVolumeLicenseReminderMSecs] license dates( curentDate = %s, expirationDate = %s."
                  ,pQVar5,local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10060ff87;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_10060ff87:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10060ffb7;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10060ffb7:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10060ffe7;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10060ffe7:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100610017;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_100610017:
  QSettings::QSettings((QSettings *)&local_78,(QObject *)0x0);
  QString::fromUtf8_helper((char *)&local_80,0x1e078d3);
  QString::append(&local_80);
  QDateTime::QDateTime(&local_b0);
  QVariant::QVariant(&local_a8,&local_b0);
  QSettings::value((QString *)&local_98,&local_78);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_98);
  QVariant::~QVariant(&local_a8);
  QDateTime::~QDateTime(&local_b0);
  cVar1 = QDateTime::isValid();
  uVar2 = 0;
  if ((cVar1 != '\0') && (cVar1 = QDateTime::operator<(&local_30,&local_88), cVar1 == '\0')) {
    QDateTime::addMSecs((longlong)&local_b8);
    cVar1 = QDateTime::operator<(&local_30,&local_b8);
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = QDateTime::msecsTo(&local_30);
    }
    QDateTime::~QDateTime(&local_b8);
  }
  QDateTime::~QDateTime(&local_88);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_21 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100610156;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100610156:
  QSettings::~QSettings((QSettings *)&local_78);
  QDateTime::~QDateTime(&local_30);
  return uVar2;
}

