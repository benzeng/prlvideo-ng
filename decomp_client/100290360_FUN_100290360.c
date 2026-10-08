
undefined8 FUN_100290360(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool *pbVar4;
  undefined8 uVar5;
  long local_148;
  QVariant local_140;
  QString local_130;
  QVariant local_128;
  Data_conflict local_118;
  QString local_110 [2];
  int local_fc;
  QArrayData *local_f8;
  QLocale local_f0 [8];
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QVariant local_90;
  QString local_80;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QVariant local_60;
  QVariant local_50;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server to update account locale");
    return 0x3bfa;
  }
  QSettings::QSettings((QSettings *)&local_60,(QObject *)0x0);
  local_68 = (QArrayData *)QString::fromAscii_helper("AccountLocaleUpdated",0x14);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  QSettings::value((QString *)&local_50,&local_60);
  QVariant::toString();
  uVar2 = FUN_10016f500(lVar3);
  FUN_10061abe0(&local_90,uVar2,0x12);
  QVariant::toString();
  cVar1 = operator==(&local_40,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029044b;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10029044b:
  QVariant::~QVariant(&local_90);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100290487;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100290487:
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002904c9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002904c9:
  QSettings::~QSettings((QSettings *)&local_60);
  if (cVar1 != '\0') {
    return 0x3bfa;
  }
  uVar2 = FUN_10016f500(lVar3);
  cVar1 = FUN_10061b4d0(uVar2,2);
  if (cVar1 == '\0') {
LAB_100290512:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",3,"skip account locale update - not valid or volume license"
                   );
    }
    return 0x3bfa;
  }
  uVar2 = FUN_10016f500(lVar3);
  cVar1 = FUN_10061b4d0(uVar2,0x80);
  if (cVar1 != '\0') goto LAB_100290512;
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_b0 = (QArrayData *)QString::fromAscii_helper("%1:%2",5);
  local_b8 = (QArrayData *)QString::fromAscii_helper("country",7);
  QString::arg(&local_a8,&local_b0,&local_b8,0,0x20);
  FUN_100d3fba0(&local_c0);
  QString::arg(&local_a0,&local_a8,&local_c0,0,0x20);
  QString::append(&local_98);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029064d;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10029064d:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100290683;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100290683:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002906b9;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1002906b9:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002906ef;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1002906ef:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100290725;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100290725:
  QString::fromUtf8_helper((char *)&local_38,0x1dd7195);
  QString::append(&local_98);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029077a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10029077a:
  local_d8 = (QArrayData *)QString::fromAscii_helper("%1:%2",5);
  local_e0 = (QArrayData *)QString::fromAscii_helper("locale",6);
  QString::arg(&local_d0,&local_d8,&local_e0,0,0x20);
  QLocale::QLocale(local_f0);
  QLocale::name();
  QString::arg(&local_c8,&local_d0,&local_e8,0,0x20);
  QString::append(&local_98);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100290856;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100290856:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029088c;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10029088c:
  QLocale::~QLocale(local_f0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002908ce;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1002908ce:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100290904;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100290904:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029093a;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10029093a:
  local_f8 = (QArrayData *)QString::fromAscii_helper("{A4C6DF40-2185-440D-A4A0-E5C16350BE3B}",0x26);
  pbVar4 = (bool *)FUN_100175d50(lVar3,&local_f8,&local_98,0);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_29 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002909a3;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1002909a3:
  if (pbVar4 == (bool *)0x0) {
    uVar2 = 0x3bfa;
    FUN_100df99c0("","prl_client_app",0,"Failed to update Account Locale Request. is null.");
    goto LAB_100290b8e;
  }
  cVar1 = CSdkRequest::isCompleted(pbVar4,(int *)0x0);
  if (cVar1 == '\0') {
    pbVar4[0x60] = true;
    QObject::connect(&local_148,pbVar4,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onUpdateAccountLocaleRequestFinished(PRL_RESULT)",0);
    if (local_148 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_148);
    uVar2 = 0;
    CAbstractTask::setWaitForSubTaskCompletion();
    goto LAB_100290b8e;
  }
  uVar5 = FUN_100dddcf0(local_fc);
  uVar2 = 0;
  FUN_100df99c0("","prl_client_app",0,"Update Account Locale Request finished %s",uVar5);
  if (local_fc < 0) goto LAB_100290b8e;
  QSettings::QSettings((QSettings *)local_110,(QObject *)0x0);
  local_118.field7 = QString::fromAscii_helper("AccountLocaleUpdated",0x14);
  uVar2 = FUN_10016f500(lVar3);
  FUN_10061abe0(&local_140,uVar2,0x12);
  QVariant::toString();
  QVariant::QVariant(&local_128,&local_130);
  QSettings::setValue(local_110,(QVariant *)&local_118);
  QVariant::~QVariant(&local_128);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_29 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100290ac4;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_100290ac4:
  QVariant::~QVariant(&local_140);
  if (*(int *)local_118.field15 != -1) {
    if (*(int *)local_118.field15 != 0) {
      LOCK();
      *(int *)local_118.field15 = *(int *)local_118.field15 + -1;
      local_29 = *(int *)local_118.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100290b06;
    }
    QArrayData::deallocate((QArrayData *)local_118.field15,2,8);
  }
LAB_100290b06:
  uVar2 = 0;
  QSettings::~QSettings((QSettings *)local_110);
LAB_100290b8e:
  if (*(int *)local_98.field0_0x0 == -1) {
    return uVar2;
  }
  if (*(int *)local_98.field0_0x0 != 0) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_98.field0_0x0 != 0) {
      return uVar2;
    }
    local_29 = 0;
  }
  QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  return uVar2;
}

