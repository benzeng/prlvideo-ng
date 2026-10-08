
int FUN_10060de60(long param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *pQVar9;
  long lVar10;
  QDateTime local_140;
  QDateTime local_138;
  QDateTime local_130;
  QDateTime local_128;
  QDateTime local_120;
  QVariant local_118;
  QVariant local_108;
  QDateTime local_f8;
  QString local_f0;
  QVariant local_e8;
  QVariant local_d8;
  QString local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined4 local_80 [2];
  QVariant local_78;
  undefined8 local_68;
  QDateTime local_60;
  QVariant local_58;
  QDateTime local_48;
  QDateTime local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_100152bc0(uVar4,param_2);
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return -1;
  }
  uVar4 = FUN_10016f500(lVar5);
  cVar2 = FUN_10061b500(uVar4,1);
  if (cVar2 != '\0') {
    return -1;
  }
  uVar4 = FUN_10016f500(lVar5);
  cVar2 = FUN_10061b4d0(uVar4,0x20);
  if (cVar2 != '\0') {
    return -1;
  }
  uVar4 = FUN_10016f500(lVar5);
  cVar2 = FUN_10061b4d0(uVar4,0x2010);
  if (cVar2 == '\0') {
    uVar4 = FUN_10016f500(lVar5);
    cVar2 = FUN_10061b4d0(uVar4,0x8000);
    if (cVar2 == '\0') {
      return -1;
    }
  }
  QDateTime::currentDateTime();
  uVar4 = FUN_10016f500(lVar5);
  FUN_10061abe0(&local_58,uVar4,9);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_58);
  uVar4 = FUN_10016f500(lVar5);
  FUN_10061abe0(&local_78,uVar4,6);
  local_68 = QVariant::toDate();
  local_80[0] = QDateTime::time();
  QDateTime::QDateTime(&local_60,&local_68,local_80,0);
  QVariant::~QVariant(&local_78);
  if (1 < DAT_10230ffd0) {
    QDateTime::toString(&local_90,&local_40,1);
    QString::toUtf8();
    pQVar9 = local_88 + *(long *)(local_88 + 0x10);
    QDateTime::toString(&local_a0,&local_48,1);
    QString::toUtf8();
    pQVar7 = local_98 + *(long *)(local_98 + 0x10);
    QDateTime::toString(&local_b0,&local_60,1);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,
                  "[timeToShowGracePeriodReminderMSecs] Renewable license dates( curentDate = %s, updateDate = %s, expirationDate = %s."
                  ,pQVar9,pQVar7,local_a8 + *(long *)(local_a8 + 0x10));
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060e097;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_10060e097:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060e0cd;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_10060e0cd:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060e103;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_10060e103:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060e139;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10060e139:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060e170;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_10060e170:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060e1a6;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_10060e1a6:
  cVar2 = QDateTime::operator<(&local_40,&local_60);
  if (cVar2 == '\0') {
    iVar3 = -1;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"[timeToShowGracePeriodReminderMSecs] KA license expired."
                   );
    }
    goto LAB_10060e5eb;
  }
  QSettings::QSettings((QSettings *)&local_c0,(QObject *)0x0);
  local_c8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("DoNotShowRenewLicenseReminder/",0x1e);
  QString::append(&local_c8);
  QVariant::QVariant(&local_e8,false);
  QSettings::value((QString *)&local_d8,&local_c0);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_d8);
  QVariant::~QVariant(&local_e8);
  if (cVar2 == '\0') {
    local_f0.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper("RenewLicenseLastShowTime/",0x19);
    QString::operator=(&local_c8,&local_f0);
    if (*(int *)local_f0.field0_0x0 != -1) {
      if (*(int *)local_f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
        local_31 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060e342;
      }
      QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
    }
LAB_10060e342:
    QString::append(&local_c8);
    QDateTime::addDays((longlong)&local_120);
    QVariant::QVariant(&local_118,&local_120);
    QSettings::value((QString *)&local_108,&local_c0);
    QVariant::toDateTime();
    QVariant::~QVariant(&local_108);
    QVariant::~QVariant(&local_118);
    QDateTime::~QDateTime(&local_120);
    lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    if (lVar1 == 0) {
LAB_10060e444:
      uVar4 = FUN_10016f500(lVar5);
      cVar2 = FUN_10061b4d0(uVar4,0x80);
      if (cVar2 == '\0') {
        QDateTime::addDays((longlong)&local_128);
        QDateTime::operator=(&local_f8,&local_128);
        QDateTime::~QDateTime(&local_128);
      }
    }
    else {
      lVar10 = 0;
      do {
        while (lVar8 = lVar1, cVar2 = operator<((QString *)(lVar8 + 0x18),param_2), cVar2 == '\0') {
          lVar1 = *(long *)(lVar8 + 8);
          lVar10 = lVar8;
          if (*(long *)(lVar8 + 8) == 0) goto LAB_10060e421;
        }
        lVar1 = *(long *)(lVar8 + 0x10);
      } while (*(long *)(lVar8 + 0x10) != 0);
      lVar8 = lVar10;
      if (lVar10 == 0) goto LAB_10060e444;
LAB_10060e421:
      cVar2 = operator<(param_2,(QString *)(lVar8 + 0x18));
      if ((cVar2 != '\0') ||
         (pcVar6 = (char *)FUN_100613a70(param_1 + 0x38,param_2), *pcVar6 == '\0'))
      goto LAB_10060e444;
    }
    cVar2 = QDateTime::operator<(&local_40,&local_48);
    if (cVar2 == '\0') {
      cVar2 = QDateTime::operator<(&local_f8,&local_48);
      iVar3 = 0;
      if ((cVar2 == '\0') && (cVar2 = QDateTime::operator<(&local_40,&local_f8), cVar2 == '\0')) {
        QDateTime::addMSecs((longlong)&local_138);
        cVar2 = QDateTime::operator<(&local_40,&local_138);
        QDateTime::~QDateTime(&local_138);
        if (cVar2 != '\0') {
          QDateTime::addMSecs((longlong)&local_140);
          iVar3 = QDateTime::secsTo(&local_40);
          QDateTime::~QDateTime(&local_140);
          iVar3 = iVar3 * 1000;
        }
      }
    }
    else {
      QDateTime::addMSecs((longlong)&local_130);
      cVar2 = QDateTime::operator<(&local_130,&local_48);
      iVar3 = 86400000;
      if (cVar2 == '\0') {
        iVar3 = QDateTime::secsTo(&local_40);
        iVar3 = iVar3 * 1000;
      }
      QDateTime::~QDateTime(&local_130);
    }
    QDateTime::~QDateTime(&local_f8);
  }
  else {
    iVar3 = -1;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,
                    "[timeToShowGracePeriodReminderMSecs] \'Do not show renew dialog\' was checked."
                   );
    }
  }
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10060e5df;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_10060e5df:
  QSettings::~QSettings((QSettings *)&local_c0);
LAB_10060e5eb:
  QDateTime::~QDateTime(&local_60);
  QDateTime::~QDateTime(&local_48);
  QDateTime::~QDateTime(&local_40);
  return iVar3;
}

