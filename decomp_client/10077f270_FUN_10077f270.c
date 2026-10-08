
void FUN_10077f270(long param_1,undefined8 param_2,int param_3)

{
  QArrayData *pQVar1;
  undefined8 *puVar2;
  QVariant local_98;
  QString local_88;
  Data_conflict local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QDateTime local_60;
  QDateTime local_58;
  QString local_50 [2];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QSettings::QSettings((QSettings *)local_50,(QObject *)0x0);
  QDateTime::currentDateTime();
  QDateTime::addMSecs((longlong)&local_58);
  QDateTime::~QDateTime(&local_60);
  if (1 < DAT_10230ffd0) {
    local_78 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::toString(&local_70);
    QString::toUtf8();
    FUN_100df99c0("[APP_PROMO]","prl_client_app",2,"Next time promo will be shown at: %s",
                  local_68 + *(long *)(local_68 + 0x10));
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077f351;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_10077f351:
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077f381;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_10077f381:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077f3b1;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_10077f3b1:
  if (param_3 == 3) {
    pQVar1 = (QArrayData *)QString::fromAscii_helper("UrgentPromo",0xb);
  }
  else if (param_3 == 4) {
    pQVar1 = (QArrayData *)QString::fromAscii_helper("NotificationPromo",0x11);
  }
  else if (param_3 == 100) {
    pQVar1 = (QArrayData *)QString::fromAscii_helper("WelcomeScreenPromo",0x12);
  }
  else {
    pQVar1 = (QArrayData *)QString::fromAscii_helper("ProductPromo",0xc);
  }
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_88);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077f480;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10077f480:
  local_80.field15 = (QObject *)local_88.field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_29 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e1644c);
  QString::append((QString *)&local_80);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077f4eb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10077f4eb:
  QVariant::QVariant(&local_98,&local_58);
  QSettings::setValue(local_50,(QVariant *)&local_80);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_80.field15 != -1) {
    if (*(int *)local_80.field15 != 0) {
      LOCK();
      *(int *)local_80.field15 = *(int *)local_80.field15 + -1;
      local_29 = *(int *)local_80.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077f54b;
    }
    QArrayData::deallocate((QArrayData *)local_80.field15,2,8);
  }
LAB_10077f54b:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077f57b;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10077f57b:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10077f5a6;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10077f5a6:
  if (param_3 == 4) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
  }
  else if (param_3 == 3) {
    puVar2 = (undefined8 *)(param_1 + 0x18);
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x10);
  }
  QTimer::start((int)*puVar2);
  QDateTime::~QDateTime(&local_58);
  QSettings::~QSettings((QSettings *)local_50);
  return;
}

