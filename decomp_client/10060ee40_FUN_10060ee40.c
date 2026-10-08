
int FUN_10060ee40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *pQVar6;
  QDateTime local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QVariant local_f0;
  QVariant local_e0;
  QVariant local_d0;
  QDateTime local_c0;
  QString local_b8;
  QTime local_b0 [8];
  QDate local_a8 [8];
  QDateTime local_a0;
  QVariant local_98;
  QVariant local_88;
  QString local_78;
  QVariant local_70;
  QVariant local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QDateTime local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_100152bc0(uVar4,param_2);
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return -1;
  }
  uVar4 = FUN_10016f500(lVar5);
  cVar1 = FUN_10061b500(uVar4);
  if (cVar1 != '\0') {
    return -1;
  }
  uVar4 = FUN_10016f500(lVar5);
  cVar1 = FUN_10061c5c0(uVar4);
  if (cVar1 == '\0') {
    return -1;
  }
  QDateTime::currentDateTime();
  if (1 < DAT_10230ffd0) {
    QDateTime::toString(&local_50,&local_40,1);
    QString::toUtf8();
    pQVar6 = local_48 + *(long *)(local_48 + 0x10);
    uVar4 = FUN_10016f500(lVar5);
    FUN_10061abe0(&local_60,uVar4,0xd);
    uVar2 = QVariant::toInt((bool *)&local_60);
    FUN_100df99c0("","prl_client_app",2,
                  "[timeToShowOfflineActivationReminderMSecs] license dates( curentDate = %s, days left = %d."
                  ,pQVar6,uVar2);
    QVariant::~QVariant(&local_60);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060ef7a;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_10060ef7a:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060efaa;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_10060efaa:
  QSettings::QSettings((QSettings *)&local_70,(QObject *)0x0);
  local_78.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("DoNotShowOfflineActivationReminder/",0x23);
  QString::append(&local_78);
  QVariant::QVariant(&local_98,false);
  QSettings::value((QString *)&local_88,&local_70);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_88);
  QVariant::~QVariant(&local_98);
  if (cVar1 == '\0') {
    QDate::QDate(local_a8,0x7bc,3,0x13);
    QTime::QTime(local_b0,1,0x23,0x16,0);
    QDateTime::QDateTime(&local_a0,local_a8,local_b0,0);
    local_b8.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper("OfflineActivationReminderLastShowTime/",0x26);
    QString::operator=(&local_78,&local_b8);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_31 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060f133;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_10060f133:
    QString::append(&local_78);
    QVariant::QVariant(&local_e0,&local_a0);
    QSettings::value((QString *)&local_d0,&local_70);
    QVariant::toDateTime();
    QVariant::~QVariant(&local_d0);
    QVariant::~QVariant(&local_e0);
    cVar1 = QDateTime::operator==(&local_c0,&local_a0);
    iVar3 = -1;
    if (cVar1 == '\0') {
      cVar1 = FUN_100608210(param_1,param_2);
      iVar3 = 60000;
      if (cVar1 == '\0') {
        local_f8 = (QArrayData *)QString::fromAscii_helper("OfflineActivationReminderInterval",0x21)
        ;
        QVariant::QVariant(&local_108,86400000);
        QSettings::value((QString *)&local_f0,&local_70);
        QVariant::toLongLong((bool *)&local_f0);
        QVariant::~QVariant(&local_f0);
        QVariant::~QVariant(&local_108);
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10060f278;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_10060f278:
        QDateTime::addMSecs((longlong)&local_110);
        cVar1 = QDateTime::operator<(&local_110,&local_40);
        iVar3 = 0;
        if ((cVar1 == '\0') &&
           (cVar1 = QDateTime::operator<(&local_c0,&local_40), iVar3 = 0, cVar1 != '\0')) {
          iVar3 = QDateTime::secsTo(&local_40);
          iVar3 = iVar3 * 1000;
        }
        QDateTime::~QDateTime(&local_110);
      }
    }
    QDateTime::~QDateTime(&local_c0);
    QDateTime::~QDateTime(&local_a0);
  }
  else {
    iVar3 = -1;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,
                    "[timeToShowOfflineActivationReminderMSecs] \'Do not show Offline Activation Reminder was setted."
                   );
    }
  }
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10060f324;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10060f324:
  QSettings::~QSettings((QSettings *)&local_70);
  QDateTime::~QDateTime(&local_40);
  return iVar3;
}

