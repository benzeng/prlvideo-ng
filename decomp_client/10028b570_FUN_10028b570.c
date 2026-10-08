
undefined8 FUN_10028b570(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QVariant local_e0;
  QVariant local_d0;
  QArrayData *local_c0;
  QString local_b8;
  QVariant local_b0;
  undefined4 local_a0 [2];
  QVariant local_98;
  undefined8 local_88;
  QDateTime local_80;
  QVariant local_78;
  QDateTime local_68;
  QVariant local_60;
  QDateTime local_50;
  QDateTime local_48;
  QVariant local_40;
  undefined1 local_29;
  
  lVar3 = FUN_10061b510(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return 0x80000009;
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_10061abe0(&local_40,*(undefined8 *)(param_1 + 0x18),0);
  iVar2 = QVariant::toInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  if (1 < DAT_10230ffd0) {
    uVar4 = FUN_100dddcf0(iVar2);
    FUN_100df99c0("","prl_client_app",2,"License status: [%.8X] \'%s\'",iVar2,uVar4);
  }
  if (iVar2 < 0) {
    if (iVar2 < -0x7ffeefa8) {
      if (iVar2 == -0x7ffeefff) {
LAB_10028bb83:
        CAbstractTask::appendSubTask((int)param_1);
        return 0;
      }
LAB_10028bb97:
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",2,"Renewalble license not valid.");
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      return 0;
    }
    if (-0x7ffeef8d < iVar2) {
      if ((iVar2 == -0x7ffeef8c) || (iVar2 == -0x7ffeef89)) goto LAB_10028bb83;
      goto LAB_10028bb97;
    }
    if (iVar2 != -0x7ffeefa8) {
      if (iVar2 == -0x7ffeef9b) goto LAB_10028bb83;
      goto LAB_10028bb97;
    }
  }
  else if (iVar2 != 0) goto LAB_10028bb97;
  QDateTime::currentDateTime();
  FUN_10061abe0(&local_60,*(undefined8 *)(param_1 + 0x18),8);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_60);
  FUN_10061abe0(&local_78,*(undefined8 *)(param_1 + 0x18),9);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_78);
  FUN_10061abe0(&local_98,*(undefined8 *)(param_1 + 0x18),6);
  local_88 = QVariant::toDate();
  local_a0[0] = QDateTime::time();
  QDateTime::QDateTime(&local_80,&local_88,local_a0,0);
  QVariant::~QVariant(&local_98);
  cVar1 = QDateTime::operator<(&local_48,&local_68);
  if ((cVar1 != '\0') || (cVar1 = QDateTime::operator<(&local_48,&local_80), cVar1 == '\0')) {
    cVar1 = QDateTime::operator<(&local_48,&local_50);
    if ((cVar1 == '\0') && (cVar1 = QDateTime::operator<(&local_48,&local_68), cVar1 != '\0')) {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",2,"Valid renewalble license has valid working period.");
      }
      goto LAB_10028bc33;
    }
    QDateTime::toString(&local_f0,&local_48,1);
    QString::toUtf8();
    pQVar6 = local_e8 + *(long *)(local_e8 + 0x10);
    QDateTime::toString(&local_100,&local_50,1);
    QString::toUtf8();
    pQVar7 = local_f8 + *(long *)(local_f8 + 0x10);
    QDateTime::toString(&local_110,&local_68,1);
    QString::toUtf8();
    pQVar5 = local_108 + *(long *)(local_108 + 0x10);
    QDateTime::toString(&local_120,&local_80,1);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,
                  "Renewalble license status do not match working period( curentDate = %s, startDate = %s, updateDate = %s, expirationDate = %s."
                  ,pQVar6,pQVar7,pQVar5,local_118 + *(long *)(local_118 + 0x10));
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_29 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10028b9dd;
      }
      QArrayData::deallocate(local_118,1,8);
    }
LAB_10028b9dd:
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_29 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10028ba13;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_10028ba13:
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_29 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10028ba49;
      }
      QArrayData::deallocate(local_108,1,8);
    }
LAB_10028ba49:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_29 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10028ba7f;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_10028ba7f:
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_29 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10028bab5;
      }
      QArrayData::deallocate(local_f8,1,8);
    }
LAB_10028bab5:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_29 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10028baeb;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_10028baeb:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_29 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10028bb21;
      }
      QArrayData::deallocate(local_e8,1,8);
    }
LAB_10028bb21:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_29 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10028bb57;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_10028bb57:
    CAbstractTask::appendSubTask((int)param_1);
    goto LAB_10028bc33;
  }
  QSettings::QSettings((QSettings *)&local_b0,(QObject *)0x0);
  local_b8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("DoNotShowRenewLicenseReminder/",0x1e);
  uVar4 = FUN_10061b510(*(undefined8 *)(param_1 + 0x18));
  FUN_10015a2b0(&local_c0,uVar4);
  QString::append(&local_b8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10028b7ca;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10028b7ca:
  QVariant::QVariant(&local_e0,false);
  QSettings::value((QString *)&local_d0,&local_b0);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_d0);
  QVariant::~QVariant(&local_e0);
  if (cVar1 == '\0') {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"Renewalble License is in grace period.");
    }
  }
  else if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,
                  "Show renew license dialog was skipped because checkbox \'Do not show renew dialog\' was checked."
                 );
  }
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_29 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10028bc27;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_10028bc27:
  QSettings::~QSettings((QSettings *)&local_b0);
LAB_10028bc33:
  QDateTime::~QDateTime(&local_80);
  QDateTime::~QDateTime(&local_68);
  QDateTime::~QDateTime(&local_50);
  QDateTime::~QDateTime(&local_48);
  return 0;
}

