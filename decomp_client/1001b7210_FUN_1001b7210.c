
undefined1 FUN_1001b7210(long param_1)

{
  bool bVar1;
  undefined1 extraout_AL;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined7 extraout_var;
  ulong uVar5;
  undefined1 uVar6;
  QDateTime local_e0;
  QArrayData *local_d8;
  Data_conflict local_d0;
  undefined4 local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QString local_a8;
  QDateTime local_a0;
  QArrayData *local_98;
  QDateTime local_90;
  QDateTime local_88;
  QArrayData *local_80;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QVariant local_60;
  QString local_50;
  QDateTime local_48;
  QVariant local_40;
  undefined4 local_30;
  undefined1 local_28;
  undefined7 uStack_27;
  
  QDate::currentDate();
  local_28 = extraout_AL;
  uStack_27 = extraout_var;
  uVar5 = QDate::day();
  if ((uVar5 & 1) == 0) {
    local_30 = QTime::currentTime();
    iVar3 = QTime::hour();
    if (*(long *)(param_1 + 0x10) != 0) {
      QTimer::start((int)*(long *)(param_1 + 0x10));
    }
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    FUN_100df99c0("[APP_HAV_PROMO]","prl_client_app",2,"Today is an even day. Timeout : %d",
                  (0x18 - iVar3) * 3600000);
    return 0;
  }
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  local_68 = (QArrayData *)QString::fromAscii_helper("Antivirus/FirstStartApp",0x17);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  QSettings::value((QString *)&local_60,&local_40);
  QVariant::toString();
  local_80 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::fromString((QString *)&local_48,&local_50);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_28 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_28) goto LAB_1001b7326;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1001b7326:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_28 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_28) goto LAB_1001b7356;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1001b7356:
  QVariant::~QVariant(&local_60);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_28 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_28) goto LAB_1001b7398;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001b7398:
  QDateTime::currentDateTime();
  QDateTime::addDays((longlong)&local_90);
  cVar2 = QDateTime::operator<(&local_88,&local_90);
  if (cVar2 != '\0') {
    iVar3 = QDateTime::toTime_t();
    iVar4 = QDateTime::toTime_t();
    if (*(long *)(param_1 + 0x10) != 0) {
      QTimer::start((int)*(long *)(param_1 + 0x10));
    }
    if (DAT_10230ffd0 < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      FUN_100df99c0("[APP_HAV_PROMO]","prl_client_app",2,"Check first showtime. Timeout : %d",
                    (iVar3 - iVar4) * 1000);
    }
    goto LAB_1001b772f;
  }
  local_98 = (QArrayData *)QString::fromAscii_helper("Antivirus/HavPromoLastShowtime",0x1e);
  cVar2 = QSettings::contains((QString *)&local_40);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_28 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_28) goto LAB_1001b749f;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1001b749f:
  if (cVar2 == '\0') {
    if (*(long *)(param_1 + 0x10) != 0) {
      QTimer::start((int)*(long *)(param_1 + 0x10));
    }
    uVar6 = 1;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("[APP_HAV_PROMO]","prl_client_app",2,"It is first showtime. Timeout : %d",
                    0x48190800);
    }
    goto LAB_1001b772f;
  }
  local_c0 = (QArrayData *)QString::fromAscii_helper("Antivirus/HavPromoLastShowtime",0x1e);
  local_c8 = 0x80000000;
  local_d0.field7 = 0;
  QSettings::value((QString *)&local_b8,&local_40);
  QVariant::toString();
  local_d8 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::fromString((QString *)&local_a0,&local_a8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_28 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_28) goto LAB_1001b756d;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1001b756d:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_28 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_28) goto LAB_1001b75a3;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1001b75a3:
  QVariant::~QVariant(&local_b8);
  QVariant::~QVariant((QVariant *)&local_d0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_28 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_28) goto LAB_1001b75f1;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1001b75f1:
  QDateTime::addDays((longlong)&local_e0);
  QDateTime::operator=(&local_90,&local_e0);
  QDateTime::~QDateTime(&local_e0);
  cVar2 = QDateTime::operator<(&local_88,&local_90);
  bVar1 = false;
  if (cVar2 != '\0') {
    iVar3 = QDateTime::toTime_t();
    iVar4 = QDateTime::toTime_t();
    if (*(long *)(param_1 + 0x10) != 0) {
      QTimer::start((int)*(long *)(param_1 + 0x10));
    }
    bVar1 = true;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("[APP_HAV_PROMO]","prl_client_app",2,"Check next showtime. Timeout : %d",
                    (iVar3 - iVar4) * 1000);
    }
  }
  QDateTime::~QDateTime(&local_a0);
  if (bVar1) {
    uVar6 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0) {
      QTimer::start((int)*(long *)(param_1 + 0x10));
    }
    uVar6 = 1;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("[APP_HAV_PROMO]","prl_client_app",2,"It is next showtime. Timeout : %d",
                    0x48190800);
    }
  }
LAB_1001b772f:
  QDateTime::~QDateTime(&local_90);
  QDateTime::~QDateTime(&local_88);
  QDateTime::~QDateTime(&local_48);
  QSettings::~QSettings((QSettings *)&local_40);
  return uVar6;
}

