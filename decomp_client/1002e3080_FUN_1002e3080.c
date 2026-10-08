
void FUN_1002e3080(long *param_1,int param_2)

{
  QString *pQVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  char *pcVar8;
  char *pcVar9;
  QVariant local_1c0;
  Data_conflict local_1b0;
  QVariant local_1a8;
  Data_conflict local_198;
  QVariant local_190;
  Data_conflict local_180;
  QArrayData *local_178;
  QString local_170 [2];
  QArrayData *local_160;
  QVariant local_158;
  QArrayData *local_148;
  QString local_140;
  QString local_138;
  QVariant local_130;
  QVariant local_120;
  QVariant local_110;
  QVariant local_100;
  QVariant local_f0;
  QVariant local_e0;
  QVariant local_d0;
  QVariant local_c0;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  Data_conflict local_98;
  QArrayData *local_90;
  QString local_88;
  Data_conflict local_80;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 < 0) {
    if (((char)param_1[5] != '\0') && (*(int *)(param_1[3] + 8) - 1U < 2)) {
      lVar6 = QObject::sender();
      iVar5 = -0x7ffeabfb;
      if (*(long *)(lVar6 + 0x38) != 0) {
        iVar5 = QNetworkReply::error();
        iVar5 = -0x7ffeabfa - (uint)(iVar5 == 0);
      }
      FUN_1002e4430(param_1,iVar5);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001002e3517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,param_2);
    return;
  }
  lVar6 = param_1[3];
  if (((*(char *)(lVar6 + 0xc) == '\0') || (*(char *)(lVar6 + 0x40) != '\0')) &&
     ((*(uint *)(lVar6 + 8) & 0xfffffffe) != 100)) {
    pQVar1 = (QString *)param_1[4];
    QSettings::QSettings((QSettings *)&local_78,(QObject *)0x0);
    FUN_10077f090(&local_90,*(undefined4 *)(lVar6 + 8));
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_90;
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_68,0x1e2468c);
    QString::append(&local_88);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e3154;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1002e3154:
    local_80.field15 = (QObject *)local_88.field0_0x0;
    if (1 < *(int *)local_88.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_60,0x1de591c);
    QString::append((QString *)&local_80);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e31bf;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1002e31bf:
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e31ef;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_1002e31ef:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e3225;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1002e3225:
    FUN_10077f090(&local_a8,*(undefined4 *)(lVar6 + 8));
    local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a8;
    if (1 < *(int *)local_a8 + 1U) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_58,0x1e2468c);
    QString::append(&local_a0);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e32a8;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1002e32a8:
    local_98.field15 = (QObject *)local_a0.field0_0x0;
    if (1 < *(int *)local_a0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_50,0x1de5928);
    QString::append((QString *)&local_98);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e331c;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1002e331c:
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e3352;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_1002e3352:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e3388;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1002e3388:
    QVariant::QVariant(&local_d0,"");
    QSettings::value((QString *)&local_c0,&local_78);
    QVariant::toString();
    cVar2 = operator==(pQVar1,&local_b0);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_31 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e3411;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_1002e3411:
    QVariant::~QVariant(&local_c0);
    QVariant::~QVariant(&local_d0);
    if (cVar2 == '\0') {
      iVar5 = *(int *)(lVar6 + 0x20);
LAB_1002e351c:
      *(int *)(lVar6 + 0x24) = iVar5;
    }
    else {
      QVariant::QVariant(&local_f0,0);
      QSettings::value((QString *)&local_e0,&local_78);
      uVar4 = QVariant::toUInt((bool *)&local_e0);
      QVariant::~QVariant(&local_e0);
      QVariant::~QVariant(&local_f0);
      iVar5 = *(uint *)(lVar6 + 0x20) - uVar4;
      if (uVar4 <= *(uint *)(lVar6 + 0x20) && iVar5 != 0) goto LAB_1002e351c;
      *(undefined4 *)(lVar6 + 0x24) = 0;
    }
    QVariant::QVariant(&local_100,pQVar1);
    QSettings::setValue((QString *)&local_78,(QVariant *)&local_80);
    QVariant::~QVariant(&local_100);
    QVariant::QVariant(&local_110,*(uint *)(lVar6 + 0x20));
    QSettings::setValue((QString *)&local_78,(QVariant *)&local_98);
    QVariant::~QVariant(&local_110);
    if (*(int *)local_98.field15 != -1) {
      if (*(int *)local_98.field15 != 0) {
        LOCK();
        *(int *)local_98.field15 = *(int *)local_98.field15 + -1;
        local_31 = *(int *)local_98.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e35b6;
      }
      QArrayData::deallocate((QArrayData *)local_98.field15,2,8);
    }
LAB_1002e35b6:
    if (*(int *)local_80.field15 != -1) {
      if (*(int *)local_80.field15 != 0) {
        LOCK();
        *(int *)local_80.field15 = *(int *)local_80.field15 + -1;
        local_31 = *(int *)local_80.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e35e6;
      }
      QArrayData::deallocate((QArrayData *)local_80.field15,2,8);
    }
LAB_1002e35e6:
    QSettings::~QSettings((QSettings *)&local_78);
    lVar6 = param_1[3];
  }
  if (*(int *)(lVar6 + 8) == 100) {
    if (DAT_1023109d0 == (void *)0x0) {
      pvVar7 = operator_new(0x40);
      FUN_10077f120(pvVar7);
      DAT_102273500 = 1;
      DAT_1023109d0 = pvVar7;
    }
    bVar3 = FUN_1007817c0(DAT_1023109d0);
    FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"First welcome screen promo showing %d",
                  bVar3 ^ 1);
    if (DAT_1023109d0 == (void *)0x0) {
      pvVar7 = operator_new(0x40);
      FUN_10077f120(pvVar7);
      DAT_102273500 = 1;
      DAT_1023109d0 = pvVar7;
    }
    FUN_100781780(DAT_1023109d0);
    QSettings::QSettings((QSettings *)&local_130,(QObject *)0x0);
    FUN_10077f090(&local_148,100);
    local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_148;
    if (1 < *(int *)local_148 + 1U) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + 1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
    QString::append(&local_140);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e3732;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002e3732:
    local_138.field0_0x0 = local_140.field0_0x0;
    if (1 < *(int *)local_140.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + 1;
      local_31 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1db96e7);
    QString::append(&local_138);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e37a6;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1002e37a6:
    QVariant::QVariant(&local_158,false);
    QSettings::value((QString *)&local_120,&local_130);
    cVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_120);
    QVariant::~QVariant(&local_158);
    if (*(int *)local_138.field0_0x0 != -1) {
      if (*(int *)local_138.field0_0x0 != 0) {
        LOCK();
        *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
        local_31 = *(int *)local_138.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e3831;
      }
      QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
    }
LAB_1002e3831:
    if (*(int *)local_140.field0_0x0 != -1) {
      if (*(int *)local_140.field0_0x0 != 0) {
        LOCK();
        *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
        local_31 = *(int *)local_140.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e3867;
      }
      QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
    }
LAB_1002e3867:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e389d;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_1002e389d:
    QSettings::~QSettings((QSettings *)&local_130);
    if (bVar3 == 0 && cVar2 == '\x01') {
      FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"Welcome screen promo forcibly disabled");
      CAbstractTask::removeSubTask((int)param_1);
      lVar6 = *param_1;
      param_2 = 0;
      goto LAB_1002e3c1a;
    }
  }
  cVar2 = FUN_1002e2ac0(param_1);
  if ((cVar2 == '\0') ||
     ((lVar6 = param_1[3], *(char *)(lVar6 + 0xc) != '\0' && (*(char *)(lVar6 + 0x40) == '\0')))) {
    cVar2 = FUN_1002e2ac0(param_1);
    pcVar9 = "";
    pcVar8 = " - no need to show";
    if (cVar2 != '\0') {
      pcVar8 = "";
    }
    if (*(char *)(param_1[3] + 0xc) != '\0') {
      if (*(char *)(param_1[3] + 0x40) == '\0') {
        pcVar9 = " - blocked";
      }
      else {
        pcVar9 = "";
      }
    }
    FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"Refused to show promo screen%s%s",pcVar8,pcVar9
                 );
    CAbstractTask::removeSubTask((int)param_1);
  }
  else {
    iVar5 = *(int *)(lVar6 + 8);
    if (iVar5 - 1U < 2) {
      QString::toUtf8();
      FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"Store upgrade promo data: type=%d id=%s",
                    iVar5,local_160 + *(long *)(local_160 + 0x10));
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e395a;
        }
        QArrayData::deallocate(local_160,1,8);
      }
LAB_1002e395a:
      QSettings::QSettings((QSettings *)local_170,(QObject *)0x0);
      local_178 = (QArrayData *)QString::fromAscii_helper("ProductPromo/UpgradePromo",0x19);
      QSettings::beginGroup(local_170);
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e39c9;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_1002e39c9:
      local_180.field7 = QString::fromAscii_helper("PromoId",7);
      QVariant::QVariant(&local_190,(QString *)param_1[3]);
      QSettings::setValue(local_170,(QVariant *)&local_180);
      QVariant::~QVariant(&local_190);
      if (*(int *)local_180.field15 != -1) {
        if (*(int *)local_180.field15 != 0) {
          LOCK();
          *(int *)local_180.field15 = *(int *)local_180.field15 + -1;
          local_31 = *(int *)local_180.field15 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e3a4e;
        }
        QArrayData::deallocate((QArrayData *)local_180.field15,2,8);
      }
LAB_1002e3a4e:
      local_198.field7 = QString::fromAscii_helper("PromoType",9);
      QVariant::QVariant(&local_1a8,*(int *)(param_1[3] + 8));
      QSettings::setValue(local_170,(QVariant *)&local_198);
      QVariant::~QVariant(&local_1a8);
      if (*(int *)local_198.field15 != -1) {
        if (*(int *)local_198.field15 != 0) {
          LOCK();
          *(int *)local_198.field15 = *(int *)local_198.field15 + -1;
          local_31 = *(int *)local_198.field15 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e3ad6;
        }
        QArrayData::deallocate((QArrayData *)local_198.field15,2,8);
      }
LAB_1002e3ad6:
      local_1b0.field7 = QString::fromAscii_helper("PromotedProductVersion",0x16);
      QVariant::QVariant(&local_1c0,*(int *)(param_1[3] + 0x28));
      QSettings::setValue(local_170,(QVariant *)&local_1b0);
      QVariant::~QVariant(&local_1c0);
      if (*(int *)local_1b0.field15 != -1) {
        if (*(int *)local_1b0.field15 != 0) {
          LOCK();
          *(int *)local_1b0.field15 = *(int *)local_1b0.field15 + -1;
          local_31 = *(int *)local_1b0.field15 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e3b5e;
        }
        QArrayData::deallocate((QArrayData *)local_1b0.field15,2,8);
      }
LAB_1002e3b5e:
      QSettings::~QSettings((QSettings *)local_170);
    }
  }
  lVar6 = *param_1;
LAB_1002e3c1a:
  (**(code **)(lVar6 + 0xb0))(param_1,param_2);
  return;
}

