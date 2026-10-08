
/* WARNING: Removing unreachable block (ram,0x0001006092d4) */
/* WARNING: Removing unreachable block (ram,0x0001006092e2) */
/* WARNING: Removing unreachable block (ram,0x0001006092ee) */

undefined1 FUN_100608960(long param_1,QStringList *param_2,CSlotInfo *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  QString *pQVar9;
  uint in_stack_fffffffffffffe1c;
  Data_conflict local_198;
  undefined4 local_190;
  undefined1 local_188;
  QVariant local_180;
  QArrayData *local_170;
  int *local_168 [4];
  QVariant local_148 [2];
  QLocale local_130 [8];
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QLocale local_110 [8];
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QLocale local_f0 [8];
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QLocale local_c8 [8];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  undefined1 local_a0 [32];
  QVariant local_80;
  Data_conflict local_70;
  QString local_68 [2];
  QVariant local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)local_68,(QObject *)0x0);
  QString::fromUtf8_helper(&local_70.field0,0x1e0721e);
  QString::append((QString *)&local_70);
  QDateTime::currentDateTime();
  QVariant::QVariant(&local_80,(QDateTime *)(local_a0 + 0x18));
  QSettings::setValue(local_68,(QVariant *)&local_70);
  QVariant::~QVariant(&local_80);
  QDateTime::~QDateTime((QDateTime *)(local_a0 + 0x18));
  if (*(int *)local_70.field15 != -1) {
    if (*(int *)local_70.field15 != 0) {
      LOCK();
      *(int *)local_70.field15 = *(int *)local_70.field15 + -1;
      local_31 = *(int *)local_70.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100608a16;
    }
    QArrayData::deallocate((QArrayData *)local_70.field15,2,8);
  }
LAB_100608a16:
  QSettings::~QSettings((QSettings *)local_68);
  FUN_100609af0(param_1,param_2,1);
  uVar4 = FUN_100152280();
  lVar5 = FUN_100152bc0(uVar4,param_2);
  iVar3 = 0;
  if (lVar5 != 0) {
    local_40 = QDate::currentDate();
    uVar4 = FUN_10016f500(lVar5);
    FUN_10061abe0(&local_58,uVar4,6);
    local_48 = QVariant::toDate();
    iVar3 = QDate::daysTo((QDate *)&local_40);
    QVariant::~QVariant(&local_58);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
  lVar8 = 0;
  if (lVar5 != 0) {
    do {
      while (lVar6 = lVar5, cVar2 = operator<((QString *)(lVar6 + 0x18),(QString *)param_2),
            cVar2 != '\0') {
        lVar5 = *(long *)(lVar6 + 0x10);
        if (*(long *)(lVar6 + 0x10) == 0) {
          lVar6 = lVar8;
          if (lVar8 == 0) goto LAB_100608b0d;
          goto LAB_100608af6;
        }
      }
      lVar5 = *(long *)(lVar6 + 8);
      lVar8 = lVar6;
    } while (*(long *)(lVar6 + 8) != 0);
LAB_100608af6:
    cVar2 = operator<((QString *)param_2,(QString *)(lVar6 + 0x18));
    if (cVar2 == '\0') {
      pQVar9 = (QString *)CMessageManager::instance();
      FUN_1000bd960(param_1 + 0x40,param_2);
      CMessageManager::raiseSpecificMessageBox(pQVar9,(int)param_2);
      FUN_100df99c0("","prl_client_app",0,"Trial warning message already shown.");
      return 0;
    }
  }
LAB_100608b0d:
  puVar1 = PTR_s_buyproduct__102274830;
  local_a0._8_8_ = PTR_shared_null_1021e15e8;
  local_a0._0_8_ = PTR_shared_null_1021e15e8;
  if (iVar3 == 1) {
    local_a0._20_4_ = 0x3b1e;
    QString::number((int)&local_a8,1);
    FUN_1000341d0(local_a0 + 8,&local_a8);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100608b95;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100608b95:
    puVar1 = PTR_s_buyproduct__102274830;
    local_c0 = (QArrayData *)
               QString::fromAscii_helper("http://www.parallels.com/buy-pdfm12-@LOCALE@",0x2c);
    QLocale::QLocale(local_c8);
    FUN_100d3f730(&local_b8,&local_c0,local_c8);
    if (puVar1 != (undefined *)0x0) {
      _strlen(puVar1);
    }
    QString::fromUtf8_helper((char *)&local_b0,(int)puVar1);
    QString::append(&local_b0);
    FUN_1000341d0(local_a0,&local_b0);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_31 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100608c5a;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_100608c5a:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100608c90;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100608c90:
    QLocale::~QLocale(local_c8);
    pQVar9 = (QString *)0x3b1e;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060919b;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
  }
  else if (iVar3 < 1) {
    iVar7 = (int)PTR_s_buyproduct__102274830;
    if (iVar3 == 0) {
      local_a0._20_4_ = 0x3b20;
      local_108 = (QArrayData *)
                  QString::fromAscii_helper("http://www.parallels.com/buy-pdfm12-@LOCALE@",0x2c);
      QLocale::QLocale(local_110);
      FUN_100d3f730(&local_100,&local_108,local_110);
      if (puVar1 != (undefined *)0x0) {
        _strlen(puVar1);
      }
      QString::fromUtf8_helper((char *)&local_f8,iVar7);
      QString::append(&local_f8);
      FUN_1000341d0(local_a0,&local_f8);
      if (*(int *)local_f8.field0_0x0 != -1) {
        if (*(int *)local_f8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
          local_31 = *(int *)local_f8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10060911d;
        }
        QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
      }
LAB_10060911d:
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100609153;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_100609153:
      QLocale::~QLocale(local_110);
      pQVar9 = (QString *)0x3b20;
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10060919b;
        }
        QArrayData::deallocate(local_108,2,8);
      }
    }
    else {
      local_a0._20_4_ = 0x3b21;
      local_128 = (QArrayData *)
                  QString::fromAscii_helper("http://www.parallels.com/buy-pdfm12-@LOCALE@",0x2c);
      QLocale::QLocale(local_130);
      FUN_100d3f730(&local_120,&local_128,local_130);
      if (puVar1 != (undefined *)0x0) {
        _strlen(puVar1);
      }
      QString::fromUtf8_helper((char *)&local_118,iVar7);
      QString::append(&local_118);
      FUN_1000341d0(local_a0,&local_118);
      if (*(int *)local_118.field0_0x0 != -1) {
        if (*(int *)local_118.field0_0x0 != 0) {
          LOCK();
          *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
          local_31 = *(int *)local_118.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100608fc3;
        }
        QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
      }
LAB_100608fc3:
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100608ff9;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_100608ff9:
      QLocale::~QLocale(local_130);
      pQVar9 = (QString *)0x3b21;
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10060919b;
        }
        QArrayData::deallocate(local_128,2,8);
      }
    }
  }
  else {
    local_a0._20_4_ = 0x3b1f;
    QString::number((int)&local_d0,iVar3);
    FUN_1000341d0(local_a0 + 8,&local_d0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100608d55;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_100608d55:
    puVar1 = PTR_s_buyproduct__102274830;
    local_e8 = (QArrayData *)
               QString::fromAscii_helper("http://www.parallels.com/buy-pdfm12-@LOCALE@",0x2c);
    QLocale::QLocale(local_f0);
    FUN_100d3f730(&local_e0,&local_e8,local_f0);
    if (puVar1 != (undefined *)0x0) {
      _strlen(puVar1);
    }
    QString::fromUtf8_helper((char *)&local_d8,(int)puVar1);
    QString::append(&local_d8);
    FUN_1000341d0(local_a0,&local_d8);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100608e1a;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
LAB_100608e1a:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100608e50;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100608e50:
    QLocale::~QLocale(local_f0);
    pQVar9 = (QString *)0x3b1f;
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060919b;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
  }
LAB_10060919b:
  FUN_1000be560(param_1 + 0x40,param_2,local_a0 + 0x14);
  local_170 = (QArrayData *)
              QString::fromAscii_helper
                        ("1onTrialLicenseExpiresDlgClosed(PRL_RESULT, Messaging::ButtonID,const QVariant&)"
                         ,0x50);
  QVariant::QVariant(&local_180,(QString *)param_2);
  FUN_100a1c600(local_168,param_1,&local_170,&local_180);
  QVariant::~QVariant(&local_180);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100609237;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100609237:
  iVar3 = CMessageManager::instance();
  local_190 = 0x80000000;
  local_198.field7 = 0;
  local_188 = 1;
  CMessageManager::showMessageBox
            (iVar3,pQVar9,param_2,(QStringList *)(local_a0 + 8),(CSlotInfo *)local_a0,
             SUB81(local_168,0),(QWidget *)((ulong)in_stack_fffffffffffffe1c << 0x20),param_3);
  QVariant::~QVariant((QVariant *)&local_198);
  QVariant::~QVariant(local_148);
  if (local_168[0] != (int *)0x0) {
    LOCK();
    *local_168[0] = *local_168[0] + -1;
    local_31 = *local_168[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_168[0] != (int *)0x0)) {
      operator_delete(local_168[0]);
    }
  }
  FUN_100039a80(local_a0);
  FUN_100039a80(local_a0 + 8);
  return 1;
}

