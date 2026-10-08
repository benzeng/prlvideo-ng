
void FUN_10062ea10(QWidget *param_1)

{
  int iVar1;
  QPixmap *pQVar2;
  long *plVar3;
  QString *pQVar4;
  char cVar5;
  byte bVar6;
  QWidget QVar7;
  char cVar8;
  long lVar9;
  undefined8 uVar10;
  QWidget *pQVar11;
  long lVar12;
  QArrayData *pQVar13;
  QArrayData *pQVar14;
  QArrayData *pQVar15;
  QArrayData *local_430;
  QArrayData *local_428;
  QArrayData *local_420;
  QArrayData *local_418;
  QArrayData *local_410;
  QArrayData *local_408;
  QArrayData *local_400;
  QArrayData *local_3f8;
  QArrayData *local_3f0;
  QArrayData *local_3e8;
  QArrayData *local_3e0;
  QArrayData *local_3d8;
  QArrayData *local_3d0;
  QString local_3c8;
  QArrayData *local_3c0;
  QArrayData *local_3b8;
  QArrayData *local_3b0;
  QArrayData *local_3a8;
  QArrayData *local_3a0;
  QArrayData *local_398;
  QArrayData *local_390;
  QArrayData *local_388;
  QLocale local_380 [8];
  QArrayData *local_378;
  QArrayData *local_370;
  QArrayData *local_368;
  QString local_360;
  QArrayData *local_358;
  QArrayData *local_350;
  QString local_348;
  QArrayData *local_340;
  QArrayData *local_338;
  QString local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QString local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  QString local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QString local_2d8;
  QLocale local_2d0 [8];
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QString local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QString local_298;
  undefined8 local_290;
  undefined8 local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QString local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QString local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QString local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QString local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QString local_1a0;
  QString local_198;
  QString local_190;
  QVariant local_188;
  QVariant local_178;
  QArrayData *local_168;
  QString local_160;
  QVariant local_158;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  undefined4 local_108 [2];
  QVariant local_100;
  undefined8 local_f0;
  QDateTime local_e8;
  QVariant local_e0;
  QDateTime local_d0;
  QDateTime local_c8;
  QVariant local_c0;
  QDateTime local_b0;
  QArrayData *local_a8;
  QPixmap local_a0 [32];
  QPixmap local_80 [32];
  QPixmap local_60 [32];
  undefined8 local_40;
  undefined1 local_31;
  
  FUN_100633ed0(*(undefined8 *)(param_1 + 0x60),param_1);
  WidgetUtils::setMessageBoxContentsMargins(param_1);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x70);
  }
  lVar9 = FUN_10061b510(uVar10);
  if (lVar9 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  pQVar2 = *(QPixmap **)(*(long *)(param_1 + 0x60) + 0x80);
  FUN_1001c8260(local_60,4);
  QLabel::setPixmap(pQVar2);
  QPixmap::~QPixmap(local_60);
  pQVar2 = *(QPixmap **)(*(long *)(param_1 + 0x60) + 0x58);
  local_a8 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/PreferencesDlgIcons/warning_128x128.png",0x31);
  QPixmap::QPixmap(local_a0,&local_a8,0,0);
  local_40 = 0x1000000010;
  QPixmap::scaled(local_80,local_a0,&local_40,1,1);
  QLabel::setPixmap(pQVar2);
  QPixmap::~QPixmap(local_80);
  QPixmap::~QPixmap(local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10062eb50;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10062eb50:
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x70);
  }
  FUN_10061abe0(&local_c0,uVar10,8);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_c0);
  QDateTime::currentDateTime();
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x70);
  }
  FUN_10061abe0(&local_e0,uVar10,9);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_e0);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x70);
  }
  FUN_10061abe0(&local_100,uVar10,6);
  local_f0 = QVariant::toDate();
  local_108[0] = QDateTime::time();
  QDateTime::QDateTime(&local_e8,&local_f0,local_108,0);
  QVariant::~QVariant(&local_100);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x70);
  }
  cVar5 = FUN_10061b4d0(uVar10);
  if (cVar5 == '\0') {
    QVar7 = (QWidget)0x0;
  }
  else {
    uVar10 = 0;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x70);
    }
    bVar6 = FUN_10061b4d0(uVar10);
    QVar7 = (QWidget)(bVar6 ^ 1);
  }
  param_1[0x78] = QVar7;
  if (1 < DAT_10230ffd0) {
    QDateTime::toString(&local_118,&local_c8,1);
    QString::toUtf8();
    pQVar14 = local_110 + *(long *)(local_110 + 0x10);
    QDateTime::toString(&local_128,&local_b0,1);
    QString::toUtf8();
    pQVar15 = local_120 + *(long *)(local_120 + 0x10);
    QDateTime::toString(&local_138,&local_d0,1);
    QString::toUtf8();
    pQVar13 = local_130 + *(long *)(local_130 + 0x10);
    QDateTime::toString(&local_148,&local_e8,1);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,
                  "[RenewLicenseDialog] license dates( curentDate = %s, startDate = %s, updateDate = %s, expirationDate = %s."
                  ,pQVar14,pQVar15,pQVar13,local_140 + *(long *)(local_140 + 0x10));
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062ee36;
      }
      QArrayData::deallocate(local_140,1,8);
    }
LAB_10062ee36:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062ee6c;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_10062ee6c:
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062eea2;
      }
      QArrayData::deallocate(local_130,1,8);
    }
LAB_10062eea2:
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062eed8;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_10062eed8:
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062ef0e;
      }
      QArrayData::deallocate(local_120,1,8);
    }
LAB_10062ef0e:
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062ef44;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_10062ef44:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062ef7a;
      }
      QArrayData::deallocate(local_110,1,8);
    }
LAB_10062ef7a:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062efb0;
      }
      QArrayData::deallocate(local_118,2,8);
    }
  }
LAB_10062efb0:
  QSettings::QSettings((QSettings *)&local_158,(QObject *)0x0);
  local_160.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("DoNotShowRenewLicenseReminder/",0x1e);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x70);
  }
  uVar10 = FUN_10061b510(uVar10);
  FUN_10015a2b0(&local_168,uVar10);
  QString::append(&local_160);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10062f04c;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10062f04c:
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x70);
  }
  cVar5 = FUN_10061b4d0(uVar10);
  plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x18);
  if (cVar5 == '\0') {
    QVariant::QVariant(&local_188,false);
    QSettings::value((QString *)&local_178,&local_158);
    QVariant::toBool();
    QAbstractButton::setChecked(SUB81(plVar3,0));
    QVariant::~QVariant(&local_178);
    QVariant::~QVariant(&local_188);
  }
  else {
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
    pQVar11 = (QWidget *)QWidget::layout();
    QLayout::removeWidget(pQVar11);
  }
  FontUtils::setSmallFont(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x70),false);
  FontUtils::setSmallFont(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x60),false);
  FontUtils::setSmallFont(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x40),false);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x70);
  }
  bVar6 = FUN_10061b4d0(uVar10,0x80);
  cVar5 = FUN_100632fc0(param_1);
  local_190.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_198.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar8 = QDateTime::operator<(&local_c8,&local_d0);
  bVar6 = bVar6 ^ 1;
  if ((cVar8 == '\0') && (cVar8 = QDateTime::operator<(&local_c8,&local_e8), cVar8 != '\0')) {
    if (param_1[0x78] == (QWidget)0x0) {
      lVar9 = QDateTime::date();
      lVar12 = QDateTime::date();
      if (lVar9 == lVar12) {
        local_1f8 = (QArrayData *)QString::fromAscii_helper("<b>%1</b>",9);
        FUN_1001c7700(&local_200,PTR_s_Your_copy_of___PRODUCT_NAME_FULL_102270a18);
        QString::arg(&local_1f0,&local_1f8,&local_200,0,0x20);
        QString::operator=(&local_190,&local_1f0);
        if (*(int *)local_1f0.field0_0x0 != -1) {
          if (*(int *)local_1f0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
            local_31 = *(int *)local_1f0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630516;
          }
          QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
        }
LAB_100630516:
        if (*(int *)local_200 != -1) {
          if (*(int *)local_200 != 0) {
            LOCK();
            *(int *)local_200 = *(int *)local_200 + -1;
            local_31 = *(int *)local_200 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063054c;
          }
          QArrayData::deallocate(local_200,2,8);
        }
LAB_10063054c:
        if (*(int *)local_1f8 != -1) {
          if (*(int *)local_1f8 != 0) {
            LOCK();
            *(int *)local_1f8 = *(int *)local_1f8 + -1;
            local_31 = *(int *)local_1f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630cdf;
          }
          QArrayData::deallocate(local_1f8,2,8);
        }
      }
      else {
        local_210 = (QArrayData *)QString::fromAscii_helper("<b>%1</b>",9);
        FUN_1001c7700(&local_228,PTR_s_Your_copy_of___PRODUCT_NAME_FULL_102270a10);
        local_238 = QDateTime::date();
        QDate::toString(&local_230,&local_238,4);
        QString::arg(&local_220,&local_228,&local_230,0,0x20);
        local_240 = QDateTime::date();
        local_248 = QDateTime::date();
        uVar10 = QDate::daysTo((QDate *)&local_240);
        QString::arg(&local_218,&local_220,uVar10,0,10,0x20);
        QString::arg(&local_208,&local_210,&local_218,0,0x20);
        QString::operator=(&local_190,&local_208);
        if (*(int *)local_208.field0_0x0 != -1) {
          if (*(int *)local_208.field0_0x0 != 0) {
            LOCK();
            *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
            local_31 = *(int *)local_208.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630bd1;
          }
          QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
        }
LAB_100630bd1:
        if (*(int *)local_218 != -1) {
          if (*(int *)local_218 != 0) {
            LOCK();
            *(int *)local_218 = *(int *)local_218 + -1;
            local_31 = *(int *)local_218 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630c07;
          }
          QArrayData::deallocate(local_218,2,8);
        }
LAB_100630c07:
        if (*(int *)local_220 != -1) {
          if (*(int *)local_220 != 0) {
            LOCK();
            *(int *)local_220 = *(int *)local_220 + -1;
            local_31 = *(int *)local_220 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630c3d;
          }
          QArrayData::deallocate(local_220,2,8);
        }
LAB_100630c3d:
        if (*(int *)local_230 != -1) {
          if (*(int *)local_230 != 0) {
            LOCK();
            *(int *)local_230 = *(int *)local_230 + -1;
            local_31 = *(int *)local_230 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630c73;
          }
          QArrayData::deallocate(local_230,2,8);
        }
LAB_100630c73:
        if (*(int *)local_228 != -1) {
          if (*(int *)local_228 != 0) {
            LOCK();
            *(int *)local_228 = *(int *)local_228 + -1;
            local_31 = *(int *)local_228 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630ca9;
          }
          QArrayData::deallocate(local_228,2,8);
        }
LAB_100630ca9:
        if (*(int *)local_210 != -1) {
          if (*(int *)local_210 != 0) {
            LOCK();
            *(int *)local_210 = *(int *)local_210 + -1;
            local_31 = *(int *)local_210 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630cdf;
          }
          QArrayData::deallocate(local_210,2,8);
        }
      }
    }
    else {
      lVar9 = QDateTime::date();
      lVar12 = QDateTime::date();
      if (lVar9 == lVar12) {
        local_1a8 = (QArrayData *)QString::fromAscii_helper("<b>%1</b>",9);
        QMetaObject::tr((char *)&local_1c0,(char *)&PTR_staticMetaObject_102222100,0x1e08fb7);
        QString::toUtf8();
        FUN_1001c7700(&local_1b0,local_1b8 + *(long *)(local_1b8 + 0x10));
        QString::arg(&local_1a0,&local_1a8,&local_1b0,0,0x20);
        QString::operator=(&local_190,&local_1a0);
        if (*(int *)local_1a0.field0_0x0 != -1) {
          if (*(int *)local_1a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
            local_31 = *(int *)local_1a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062f2b8;
          }
          QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
        }
LAB_10062f2b8:
        if (*(int *)local_1b0 != -1) {
          if (*(int *)local_1b0 != 0) {
            LOCK();
            *(int *)local_1b0 = *(int *)local_1b0 + -1;
            local_31 = *(int *)local_1b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062f2ee;
          }
          QArrayData::deallocate(local_1b0,2,8);
        }
LAB_10062f2ee:
        if (*(int *)local_1b8 != -1) {
          if (*(int *)local_1b8 != 0) {
            LOCK();
            *(int *)local_1b8 = *(int *)local_1b8 + -1;
            local_31 = *(int *)local_1b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062f324;
          }
          QArrayData::deallocate(local_1b8,1,8);
        }
LAB_10062f324:
        if (*(int *)local_1c0 != -1) {
          if (*(int *)local_1c0 != 0) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + -1;
            local_31 = *(int *)local_1c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062f35a;
          }
          QArrayData::deallocate(local_1c0,2,8);
        }
LAB_10062f35a:
        if (*(int *)local_1a8 != -1) {
          if (*(int *)local_1a8 != 0) {
            LOCK();
            *(int *)local_1a8 = *(int *)local_1a8 + -1;
            local_31 = *(int *)local_1a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630cdf;
          }
          QArrayData::deallocate(local_1a8,2,8);
        }
      }
      else {
        local_1d0 = (QArrayData *)QString::fromAscii_helper("<b>%1</b>",9);
        QMetaObject::tr((char *)&local_1e8,(char *)&PTR_staticMetaObject_102222100,0x1e09022);
        QString::toUtf8();
        FUN_1001c7700(&local_1d8,local_1e0 + *(long *)(local_1e0 + 0x10));
        QString::arg(&local_1c8,&local_1d0,&local_1d8,0,0x20);
        QString::operator=(&local_190,&local_1c8);
        if (*(int *)local_1c8.field0_0x0 != -1) {
          if (*(int *)local_1c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
            local_31 = *(int *)local_1c8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006309a9;
          }
          QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
        }
LAB_1006309a9:
        if (*(int *)local_1d8 != -1) {
          if (*(int *)local_1d8 != 0) {
            LOCK();
            *(int *)local_1d8 = *(int *)local_1d8 + -1;
            local_31 = *(int *)local_1d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006309df;
          }
          QArrayData::deallocate(local_1d8,2,8);
        }
LAB_1006309df:
        if (*(int *)local_1e0 != -1) {
          if (*(int *)local_1e0 != 0) {
            LOCK();
            *(int *)local_1e0 = *(int *)local_1e0 + -1;
            local_31 = *(int *)local_1e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630a15;
          }
          QArrayData::deallocate(local_1e0,1,8);
        }
LAB_100630a15:
        if (*(int *)local_1e8 != -1) {
          if (*(int *)local_1e8 != 0) {
            LOCK();
            *(int *)local_1e8 = *(int *)local_1e8 + -1;
            local_31 = *(int *)local_1e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630a4b;
          }
          QArrayData::deallocate(local_1e8,2,8);
        }
LAB_100630a4b:
        if (*(int *)local_1d0 != -1) {
          if (*(int *)local_1d0 != 0) {
            LOCK();
            *(int *)local_1d0 = *(int *)local_1d0 + -1;
            local_31 = *(int *)local_1d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630cdf;
          }
          QArrayData::deallocate(local_1d0,2,8);
        }
      }
    }
LAB_100630cdf:
    if (param_1[0x78] == (QWidget)0x0) {
      uVar10 = 0;
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
        uVar10 = *(undefined8 *)(param_1 + 0x70);
      }
      cVar8 = FUN_10061b4d0(uVar10,0x80);
      if (cVar8 == '\0') {
        FUN_1001c7700(&local_2b8,PTR_s_Your_product_license_has_expired_102270a20);
        local_2c8 = (QArrayData *)
                    QString::fromAscii_helper("http://www.parallels.com/licenses-@LOCALE@",0x2a);
        QLocale::QLocale(local_2d0);
        FUN_100d3f730(&local_2c0,&local_2c8,local_2d0);
        QString::arg(&local_2b0,&local_2b8,&local_2c0,0,0x20);
        QString::operator=(&local_198,&local_2b0);
        if (*(int *)local_2b0.field0_0x0 != -1) {
          if (*(int *)local_2b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_2b0.field0_0x0 = *(int *)local_2b0.field0_0x0 + -1;
            local_31 = *(int *)local_2b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006311c0;
          }
          QArrayData::deallocate((QArrayData *)local_2b0.field0_0x0,2,8);
        }
LAB_1006311c0:
        if (*(int *)local_2c0 != -1) {
          if (*(int *)local_2c0 != 0) {
            LOCK();
            *(int *)local_2c0 = *(int *)local_2c0 + -1;
            local_31 = *(int *)local_2c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006311f6;
          }
          QArrayData::deallocate(local_2c0,2,8);
        }
LAB_1006311f6:
        QLocale::~QLocale(local_2d0);
        if (*(int *)local_2c8 != -1) {
          if (*(int *)local_2c8 != 0) {
            LOCK();
            *(int *)local_2c8 = *(int *)local_2c8 + -1;
            local_31 = *(int *)local_2c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100631238;
          }
          QArrayData::deallocate(local_2c8,2,8);
        }
LAB_100631238:
        if (*(int *)local_2b8 != -1) {
          if (*(int *)local_2b8 != 0) {
            LOCK();
            *(int *)local_2b8 = *(int *)local_2b8 + -1;
            local_31 = *(int *)local_2b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063011e;
          }
          QArrayData::deallocate(local_2b8,2,8);
        }
      }
      else {
        FUN_1001c7700(&local_2a0,PTR_s_The_product_license_has_not_been_102270a28);
        FUN_1006216f0(&local_2a8,0);
        local_298.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_2a0;
        if (1 < *(int *)local_2a0 + 1U) {
          LOCK();
          *(int *)local_2a0 = *(int *)local_2a0 + 1;
          local_31 = *(int *)local_2a0 != 0;
          UNLOCK();
        }
        QString::append(&local_298);
        QString::operator=(&local_198,&local_298);
        if (*(int *)local_298.field0_0x0 != -1) {
          if (*(int *)local_298.field0_0x0 != 0) {
            LOCK();
            *(int *)local_298.field0_0x0 = *(int *)local_298.field0_0x0 + -1;
            local_31 = *(int *)local_298.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630ee7;
          }
          QArrayData::deallocate((QArrayData *)local_298.field0_0x0,2,8);
        }
LAB_100630ee7:
        if (*(int *)local_2a8 != -1) {
          if (*(int *)local_2a8 != 0) {
            LOCK();
            *(int *)local_2a8 = *(int *)local_2a8 + -1;
            local_31 = *(int *)local_2a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630f1d;
          }
          QArrayData::deallocate(local_2a8,2,8);
        }
LAB_100630f1d:
        if (*(int *)local_2a0 != -1) {
          if (*(int *)local_2a0 != 0) {
            LOCK();
            *(int *)local_2a0 = *(int *)local_2a0 + -1;
            local_31 = *(int *)local_2a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063011e;
          }
          QArrayData::deallocate(local_2a0,2,8);
        }
      }
    }
    else {
      lVar9 = QDateTime::date();
      lVar12 = QDateTime::date();
      if (lVar9 == lVar12) {
        QMetaObject::tr((char *)&local_260,(char *)&PTR_staticMetaObject_102222100,0x1e09089);
        QString::toUtf8();
        FUN_1001c7700(&local_250,local_258 + *(long *)(local_258 + 0x10));
        QString::operator=(&local_198,&local_250);
        if (*(int *)local_250.field0_0x0 != -1) {
          if (*(int *)local_250.field0_0x0 != 0) {
            LOCK();
            *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
            local_31 = *(int *)local_250.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630da4;
          }
          QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
        }
LAB_100630da4:
        if (*(int *)local_258 != -1) {
          if (*(int *)local_258 != 0) {
            LOCK();
            *(int *)local_258 = *(int *)local_258 + -1;
            local_31 = *(int *)local_258 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100630dda;
          }
          QArrayData::deallocate(local_258,1,8);
        }
LAB_100630dda:
        if (*(int *)local_260 != -1) {
          if (*(int *)local_260 != 0) {
            LOCK();
            *(int *)local_260 = *(int *)local_260 + -1;
            local_31 = *(int *)local_260 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063011e;
          }
          QArrayData::deallocate(local_260,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_280,(char *)&PTR_staticMetaObject_102222100,0x1e090db);
        QString::toUtf8();
        FUN_1001c7700(&local_270,local_278 + *(long *)(local_278 + 0x10));
        local_288 = QDateTime::date();
        local_290 = QDateTime::date();
        uVar10 = QDate::daysTo((QDate *)&local_288);
        QString::arg(&local_268,&local_270,uVar10,0,10,0x20);
        QString::operator=(&local_198,&local_268);
        if (*(int *)local_268.field0_0x0 != -1) {
          if (*(int *)local_268.field0_0x0 != 0) {
            LOCK();
            *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
            local_31 = *(int *)local_268.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100631052;
          }
          QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
        }
LAB_100631052:
        if (*(int *)local_270 != -1) {
          if (*(int *)local_270 != 0) {
            LOCK();
            *(int *)local_270 = *(int *)local_270 + -1;
            local_31 = *(int *)local_270 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100631088;
          }
          QArrayData::deallocate(local_270,2,8);
        }
LAB_100631088:
        if (*(int *)local_278 != -1) {
          if (*(int *)local_278 != 0) {
            LOCK();
            *(int *)local_278 = *(int *)local_278 + -1;
            local_31 = *(int *)local_278 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006310be;
          }
          QArrayData::deallocate(local_278,1,8);
        }
LAB_1006310be:
        if (*(int *)local_280 != -1) {
          if (*(int *)local_280 != 0) {
            LOCK();
            *(int *)local_280 = *(int *)local_280 + -1;
            local_31 = *(int *)local_280 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10063011e;
          }
          QArrayData::deallocate(local_280,2,8);
        }
      }
    }
  }
  else {
    cVar8 = QDateTime::operator<(&local_c8,&local_b0);
    if ((cVar8 != '\0') || (cVar8 = QDateTime::operator<(&local_c8,&local_e8), cVar8 == '\0')) {
      if (param_1[0x78] == (QWidget)0x0) {
        uVar10 = 0;
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
          uVar10 = *(undefined8 *)(param_1 + 0x70);
        }
        cVar8 = FUN_10061b4d0(uVar10,0x80);
        if (cVar8 == '\0') {
          local_350 = (QArrayData *)QString::fromAscii_helper("<b>%1</b>",9);
          FUN_1001c7700(&local_358,PTR_s_Your_product_license_has_expired_102270a00);
          QString::arg(&local_348,&local_350,&local_358,0,0x20);
          QString::operator=(&local_190,&local_348);
          if (*(int *)local_348.field0_0x0 != -1) {
            if (*(int *)local_348.field0_0x0 != 0) {
              LOCK();
              *(int *)local_348.field0_0x0 = *(int *)local_348.field0_0x0 + -1;
              local_31 = *(int *)local_348.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10062ff0f;
            }
            QArrayData::deallocate((QArrayData *)local_348.field0_0x0,2,8);
          }
LAB_10062ff0f:
          if (*(int *)local_358 != -1) {
            if (*(int *)local_358 != 0) {
              LOCK();
              *(int *)local_358 = *(int *)local_358 + -1;
              local_31 = *(int *)local_358 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10062ff45;
            }
            QArrayData::deallocate(local_358,2,8);
          }
LAB_10062ff45:
          if (*(int *)local_350 != -1) {
            if (*(int *)local_350 != 0) {
              LOCK();
              *(int *)local_350 = *(int *)local_350 + -1;
              local_31 = *(int *)local_350 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10062ff7b;
            }
            QArrayData::deallocate(local_350,2,8);
          }
LAB_10062ff7b:
          FUN_1001c7700(&local_368,PTR_s_To_continue_using___PRODUCT_NAME_102270a08);
          local_378 = (QArrayData *)
                      QString::fromAscii_helper("http://www.parallels.com/licenses-@LOCALE@",0x2a);
          QLocale::QLocale(local_380);
          FUN_100d3f730(&local_370,&local_378,local_380);
          QString::arg(&local_360,&local_368,&local_370,0,0x20);
          QString::operator=(&local_198,&local_360);
          if (*(int *)local_360.field0_0x0 != -1) {
            if (*(int *)local_360.field0_0x0 != 0) {
              LOCK();
              *(int *)local_360.field0_0x0 = *(int *)local_360.field0_0x0 + -1;
              local_31 = *(int *)local_360.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10063003a;
            }
            QArrayData::deallocate((QArrayData *)local_360.field0_0x0,2,8);
          }
LAB_10063003a:
          if (*(int *)local_370 != -1) {
            if (*(int *)local_370 != 0) {
              LOCK();
              *(int *)local_370 = *(int *)local_370 + -1;
              local_31 = *(int *)local_370 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100630070;
            }
            QArrayData::deallocate(local_370,2,8);
          }
LAB_100630070:
          QLocale::~QLocale(local_380);
          if (*(int *)local_378 != -1) {
            if (*(int *)local_378 != 0) {
              LOCK();
              *(int *)local_378 = *(int *)local_378 + -1;
              local_31 = *(int *)local_378 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006300b2;
            }
            QArrayData::deallocate(local_378,2,8);
          }
LAB_1006300b2:
          bVar6 = 1;
          if (*(int *)local_368 != -1) {
            if (*(int *)local_368 != 0) {
              LOCK();
              *(int *)local_368 = *(int *)local_368 + -1;
              local_31 = *(int *)local_368 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006300eb;
            }
            QArrayData::deallocate(local_368,2,8);
          }
        }
        else {
          local_320 = (QArrayData *)QString::fromAscii_helper("<b>%1</b>",9);
          FUN_1001c7700(&local_328,PTR_s_The_product_license_has_expired__1022709e0);
          QString::arg(&local_318,&local_320,&local_328,0,0x20);
          QString::operator=(&local_190,&local_318);
          if (*(int *)local_318.field0_0x0 != -1) {
            if (*(int *)local_318.field0_0x0 != 0) {
              LOCK();
              *(int *)local_318.field0_0x0 = *(int *)local_318.field0_0x0 + -1;
              local_31 = *(int *)local_318.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10062fcef;
            }
            QArrayData::deallocate((QArrayData *)local_318.field0_0x0,2,8);
          }
LAB_10062fcef:
          if (*(int *)local_328 != -1) {
            if (*(int *)local_328 != 0) {
              LOCK();
              *(int *)local_328 = *(int *)local_328 + -1;
              local_31 = *(int *)local_328 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10062fd25;
            }
            QArrayData::deallocate(local_328,2,8);
          }
LAB_10062fd25:
          if (*(int *)local_320 != -1) {
            if (*(int *)local_320 != 0) {
              LOCK();
              *(int *)local_320 = *(int *)local_320 + -1;
              local_31 = *(int *)local_320 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10062fd5b;
            }
            QArrayData::deallocate(local_320,2,8);
          }
LAB_10062fd5b:
          FUN_1001c7700(&local_338,PTR_s_The_product_license_has_not_been_102270a28);
          FUN_1006216f0(&local_340,0);
          local_330.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_338;
          if (1 < *(int *)local_338 + 1U) {
            LOCK();
            *(int *)local_338 = *(int *)local_338 + 1;
            local_31 = *(int *)local_338 != 0;
            UNLOCK();
          }
          QString::append(&local_330);
          QString::operator=(&local_198,&local_330);
          if (*(int *)local_330.field0_0x0 != -1) {
            if (*(int *)local_330.field0_0x0 != 0) {
              LOCK();
              *(int *)local_330.field0_0x0 = *(int *)local_330.field0_0x0 + -1;
              local_31 = *(int *)local_330.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10062fdfa;
            }
            QArrayData::deallocate((QArrayData *)local_330.field0_0x0,2,8);
          }
LAB_10062fdfa:
          if (*(int *)local_340 != -1) {
            if (*(int *)local_340 != 0) {
              LOCK();
              *(int *)local_340 = *(int *)local_340 + -1;
              local_31 = *(int *)local_340 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10062fe30;
            }
            QArrayData::deallocate(local_340,2,8);
          }
LAB_10062fe30:
          bVar6 = 1;
          if (*(int *)local_338 != -1) {
            if (*(int *)local_338 != 0) {
              LOCK();
              *(int *)local_338 = *(int *)local_338 + -1;
              local_31 = *(int *)local_338 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006300eb;
            }
            QArrayData::deallocate(local_338,2,8);
          }
        }
      }
      else {
        local_2e0 = (QArrayData *)QString::fromAscii_helper("<b>%1</b>",9);
        QMetaObject::tr((char *)&local_2f8,(char *)&PTR_staticMetaObject_102222100,0x1e09158);
        QString::toUtf8();
        FUN_1001c7700(&local_2e8,local_2f0 + *(long *)(local_2f0 + 0x10));
        QString::arg(&local_2d8,&local_2e0,&local_2e8,0,0x20);
        QString::operator=(&local_190,&local_2d8);
        if (*(int *)local_2d8.field0_0x0 != -1) {
          if (*(int *)local_2d8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_2d8.field0_0x0 = *(int *)local_2d8.field0_0x0 + -1;
            local_31 = *(int *)local_2d8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062fa45;
          }
          QArrayData::deallocate((QArrayData *)local_2d8.field0_0x0,2,8);
        }
LAB_10062fa45:
        if (*(int *)local_2e8 != -1) {
          if (*(int *)local_2e8 != 0) {
            LOCK();
            *(int *)local_2e8 = *(int *)local_2e8 + -1;
            local_31 = *(int *)local_2e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062fa7b;
          }
          QArrayData::deallocate(local_2e8,2,8);
        }
LAB_10062fa7b:
        if (*(int *)local_2f0 != -1) {
          if (*(int *)local_2f0 != 0) {
            LOCK();
            *(int *)local_2f0 = *(int *)local_2f0 + -1;
            local_31 = *(int *)local_2f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062fab1;
          }
          QArrayData::deallocate(local_2f0,1,8);
        }
LAB_10062fab1:
        if (*(int *)local_2f8 != -1) {
          if (*(int *)local_2f8 != 0) {
            LOCK();
            *(int *)local_2f8 = *(int *)local_2f8 + -1;
            local_31 = *(int *)local_2f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062fae7;
          }
          QArrayData::deallocate(local_2f8,2,8);
        }
LAB_10062fae7:
        if (*(int *)local_2e0 != -1) {
          if (*(int *)local_2e0 != 0) {
            LOCK();
            *(int *)local_2e0 = *(int *)local_2e0 + -1;
            local_31 = *(int *)local_2e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062fb1d;
          }
          QArrayData::deallocate(local_2e0,2,8);
        }
LAB_10062fb1d:
        QMetaObject::tr((char *)&local_310,(char *)&PTR_staticMetaObject_102222100,0x1e09196);
        QString::toUtf8();
        FUN_1001c7700(&local_300,local_308 + *(long *)(local_308 + 0x10));
        QString::operator=(&local_198,&local_300);
        if (*(int *)local_300.field0_0x0 != -1) {
          if (*(int *)local_300.field0_0x0 != 0) {
            LOCK();
            *(int *)local_300.field0_0x0 = *(int *)local_300.field0_0x0 + -1;
            local_31 = *(int *)local_300.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062fbb2;
          }
          QArrayData::deallocate((QArrayData *)local_300.field0_0x0,2,8);
        }
LAB_10062fbb2:
        if (*(int *)local_308 != -1) {
          if (*(int *)local_308 != 0) {
            LOCK();
            *(int *)local_308 = *(int *)local_308 + -1;
            local_31 = *(int *)local_308 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10062fbe8;
          }
          QArrayData::deallocate(local_308,1,8);
        }
LAB_10062fbe8:
        if (*(int *)local_310 != -1) {
          if (*(int *)local_310 != 0) {
            LOCK();
            *(int *)local_310 = *(int *)local_310 + -1;
            local_31 = *(int *)local_310 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006300eb;
          }
          QArrayData::deallocate(local_310,2,8);
        }
      }
LAB_1006300eb:
      (**(code **)(**(long **)(*(long *)(param_1 + 0x60) + 0x18) + 0x68))
                (*(long **)(*(long *)(param_1 + 0x60) + 0x18),0);
      pQVar11 = (QWidget *)QWidget::layout();
      QLayout::removeWidget(pQVar11);
      goto LAB_10063011e;
    }
    QDateTime::toString(&local_390,&local_c8,1);
    QString::toUtf8();
    pQVar14 = local_388 + *(long *)(local_388 + 0x10);
    QDateTime::toString(&local_3a0,&local_b0,1);
    QString::toUtf8();
    pQVar13 = local_398 + *(long *)(local_398 + 0x10);
    QDateTime::toString(&local_3b0,&local_d0,1);
    QString::toUtf8();
    pQVar15 = local_3a8 + *(long *)(local_3a8 + 0x10);
    QDateTime::toString(&local_3c0,&local_e8,1);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,
                  "[RenewLicenseDialog] wrong license dates( curentDate = %s, startDate = %s, updateDate = %s, expirationDate = %s."
                  ,pQVar14,pQVar13,pQVar15,local_3b8 + *(long *)(local_3b8 + 0x10));
    if (*(int *)local_3b8 != -1) {
      if (*(int *)local_3b8 != 0) {
        LOCK();
        *(int *)local_3b8 = *(int *)local_3b8 + -1;
        local_31 = *(int *)local_3b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f51b;
      }
      QArrayData::deallocate(local_3b8,1,8);
    }
LAB_10062f51b:
    if (*(int *)local_3c0 != -1) {
      if (*(int *)local_3c0 != 0) {
        LOCK();
        *(int *)local_3c0 = *(int *)local_3c0 + -1;
        local_31 = *(int *)local_3c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f551;
      }
      QArrayData::deallocate(local_3c0,2,8);
    }
LAB_10062f551:
    if (*(int *)local_3a8 != -1) {
      if (*(int *)local_3a8 != 0) {
        LOCK();
        *(int *)local_3a8 = *(int *)local_3a8 + -1;
        local_31 = *(int *)local_3a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f58a;
      }
      QArrayData::deallocate(local_3a8,1,8);
    }
LAB_10062f58a:
    if (*(int *)local_3b0 != -1) {
      if (*(int *)local_3b0 != 0) {
        LOCK();
        *(int *)local_3b0 = *(int *)local_3b0 + -1;
        local_31 = *(int *)local_3b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f5c7;
      }
      QArrayData::deallocate(local_3b0,2,8);
    }
LAB_10062f5c7:
    if (*(int *)local_398 != -1) {
      if (*(int *)local_398 != 0) {
        LOCK();
        *(int *)local_398 = *(int *)local_398 + -1;
        local_31 = *(int *)local_398 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f5fd;
      }
      QArrayData::deallocate(local_398,1,8);
    }
LAB_10062f5fd:
    if (*(int *)local_3a0 != -1) {
      if (*(int *)local_3a0 != 0) {
        LOCK();
        *(int *)local_3a0 = *(int *)local_3a0 + -1;
        local_31 = *(int *)local_3a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f633;
      }
      QArrayData::deallocate(local_3a0,2,8);
    }
LAB_10062f633:
    if (*(int *)local_388 != -1) {
      if (*(int *)local_388 != 0) {
        LOCK();
        *(int *)local_388 = *(int *)local_388 + -1;
        local_31 = *(int *)local_388 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f669;
      }
      QArrayData::deallocate(local_388,1,8);
    }
LAB_10062f669:
    if (*(int *)local_390 != -1) {
      if (*(int *)local_390 != 0) {
        LOCK();
        *(int *)local_390 = *(int *)local_390 + -1;
        local_31 = *(int *)local_390 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f69f;
      }
      QArrayData::deallocate(local_390,2,8);
    }
LAB_10062f69f:
    local_3d0 = (QArrayData *)QString::fromAscii_helper("<b>%1</b>",9);
    QMetaObject::tr((char *)&local_3d8,(char *)&PTR_staticMetaObject_102222100,0x1e09268);
    QString::arg(&local_3c8,&local_3d0,&local_3d8,0,0x20);
    QString::operator=(&local_190,&local_3c8);
    if (*(int *)local_3c8.field0_0x0 != -1) {
      if (*(int *)local_3c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_3c8.field0_0x0 = *(int *)local_3c8.field0_0x0 + -1;
        local_31 = *(int *)local_3c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f744;
      }
      QArrayData::deallocate((QArrayData *)local_3c8.field0_0x0,2,8);
    }
LAB_10062f744:
    if (*(int *)local_3d8 != -1) {
      if (*(int *)local_3d8 != 0) {
        LOCK();
        *(int *)local_3d8 = *(int *)local_3d8 + -1;
        local_31 = *(int *)local_3d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f77a;
      }
      QArrayData::deallocate(local_3d8,2,8);
    }
LAB_10062f77a:
    if (*(int *)local_3d0 != -1) {
      if (*(int *)local_3d0 != 0) {
        LOCK();
        *(int *)local_3d0 = *(int *)local_3d0 + -1;
        local_31 = *(int *)local_3d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f7b0;
      }
      QArrayData::deallocate(local_3d0,2,8);
    }
LAB_10062f7b0:
    uVar10 = 0;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x70);
    }
    cVar8 = FUN_10061b4d0(uVar10,0x80);
    if (cVar8 == '\0') {
      FUN_100626730(&local_3e0);
      iVar1 = *(int *)(local_3e0 + 4);
      if (*(int *)local_3e0 != -1) {
        if (*(int *)local_3e0 != 0) {
          LOCK();
          *(int *)local_3e0 = *(int *)local_3e0 + -1;
          local_31 = *(int *)local_3e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10062f81c;
        }
        QArrayData::deallocate(local_3e0,2,8);
      }
LAB_10062f81c:
      if (iVar1 != 0) goto LAB_10062f820;
    }
    else {
LAB_10062f820:
      FUN_1006216f0(&local_3e8,0);
      QString::append(&local_198);
      if (*(int *)local_3e8 != -1) {
        if (*(int *)local_3e8 != 0) {
          LOCK();
          *(int *)local_3e8 = *(int *)local_3e8 + -1;
          local_31 = *(int *)local_3e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10062f877;
        }
        QArrayData::deallocate(local_3e8,2,8);
      }
    }
LAB_10062f877:
    pQVar4 = *(QString **)(*(long *)(param_1 + 0x60) + 0xa8);
    QMetaObject::tr((char *)&local_3f0,(char *)&PTR_staticMetaObject_102222100,0x1dcdd79);
    QAbstractButton::setText(pQVar4);
    if (*(int *)local_3f0 != -1) {
      if (*(int *)local_3f0 != 0) {
        LOCK();
        *(int *)local_3f0 = *(int *)local_3f0 + -1;
        local_31 = *(int *)local_3f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062f8ea;
      }
      QArrayData::deallocate(local_3f0,2,8);
    }
LAB_10062f8ea:
    pQVar4 = *(QString **)(*(long *)(param_1 + 0x60) + 0x98);
    QMetaObject::tr((char *)&local_3f8,(char *)&PTR_staticMetaObject_102222100,0x1dfef2e);
    QAbstractButton::setText(pQVar4);
    if (*(int *)local_3f8 != -1) {
      if (*(int *)local_3f8 != 0) {
        LOCK();
        *(int *)local_3f8 = *(int *)local_3f8 + -1;
        local_31 = *(int *)local_3f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10063011e;
      }
      QArrayData::deallocate(local_3f8,2,8);
    }
  }
LAB_10063011e:
  QLabel::setText(*(QString **)(*(long *)(param_1 + 0x60) + 0x68));
  QLabel::setText(*(QString **)(*(long *)(param_1 + 0x60) + 0x70));
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x18) + 0x28) + 9) & 0x80) == 0) {
    pQVar4 = *(QString **)(*(long *)(param_1 + 0x60) + 0x70);
    local_400 = (QArrayData *)QString::fromAscii_helper("QCheckBox { margin-bottom: -6 }",0x1f);
    QWidget::setStyleSheet(pQVar4);
    if (*(int *)local_400 != -1) {
      if (*(int *)local_400 != 0) {
        LOCK();
        *(int *)local_400 = *(int *)local_400 + -1;
        local_31 = *(int *)local_400 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006301bc;
      }
      QArrayData::deallocate(local_400,2,8);
    }
  }
LAB_1006301bc:
  plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x70);
  (**(code **)(*plVar3 + 0x80))
            (plVar3,(*(int *)(plVar3[5] + 0x1c) + 1) - *(int *)(plVar3[5] + 0x14));
  QWidget::setFixedHeight((int)plVar3);
  if (param_1[0x78] == (QWidget)0x0) {
    if (bVar6 != 0) {
      pQVar4 = *(QString **)(*(long *)(param_1 + 0x60) + 0xb0);
      uVar10 = 0;
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
        uVar10 = *(undefined8 *)(param_1 + 0x70);
      }
      cVar8 = FUN_10061b4d0(uVar10,0x80);
      if (cVar8 == '\0') {
        QMetaObject::tr((char *)&local_420,(char *)&PTR_staticMetaObject_102222100,0x1de7bad);
      }
      else {
        QMetaObject::tr((char *)&local_420,(char *)&PTR_staticMetaObject_102222100,0x1dcdd64);
      }
      QAbstractButton::setText(pQVar4);
      if (*(int *)local_420 != -1) {
        if (*(int *)local_420 != 0) {
          LOCK();
          *(int *)local_420 = *(int *)local_420 + -1;
          local_31 = *(int *)local_420 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006305f6;
        }
        QArrayData::deallocate(local_420,2,8);
      }
    }
LAB_1006305f6:
    (**(code **)(**(long **)(*(long *)(param_1 + 0x60) + 0xb0) + 0x68))
              (*(long **)(*(long *)(param_1 + 0x60) + 0xb0),bVar6);
    if (bVar6 == 0) {
      QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x90));
      QBoxLayout::addWidget
                (*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x90),
                 *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),0,0);
      QPushButton::setDefault(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),0));
      QWidget::setFocus(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),7);
    }
    else {
      QPushButton::setDefault(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0));
      QWidget::setFocus(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),7);
    }
    pQVar4 = *(QString **)(*(long *)(param_1 + 0x60) + 0xa8);
    if (cVar5 == '\0') {
      FUN_1001c7700(&local_428,PTR_s_Close_10226ddf0);
    }
    else {
      FUN_1001c7700(&local_428,PTR_s_Quit_10226de10);
    }
    QAbstractButton::setText(pQVar4);
    if (*(int *)local_428 != -1) {
      if (*(int *)local_428 != 0) {
        LOCK();
        *(int *)local_428 = *(int *)local_428 + -1;
        local_31 = *(int *)local_428 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100630721;
      }
      QArrayData::deallocate(local_428,2,8);
    }
  }
  else {
    pQVar4 = *(QString **)(*(long *)(param_1 + 0x60) + 0xb0);
    QMetaObject::tr((char *)&local_408,(char *)&PTR_staticMetaObject_102222100,0x1e092c4);
    QAbstractButton::setText(pQVar4);
    if (*(int *)local_408 != -1) {
      if (*(int *)local_408 != 0) {
        LOCK();
        *(int *)local_408 = *(int *)local_408 + -1;
        local_31 = *(int *)local_408 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100630269;
      }
      QArrayData::deallocate(local_408,2,8);
    }
LAB_100630269:
    pQVar4 = *(QString **)(*(long *)(param_1 + 0x60) + 0x98);
    local_410 = (QArrayData *)QString::fromAscii_helper("Renew...",8);
    QAbstractButton::setText(pQVar4);
    if (*(int *)local_410 != -1) {
      if (*(int *)local_410 != 0) {
        LOCK();
        *(int *)local_410 = *(int *)local_410 + -1;
        local_31 = *(int *)local_410 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006302d2;
      }
      QArrayData::deallocate(local_410,2,8);
    }
LAB_1006302d2:
    pQVar4 = *(QString **)(*(long *)(param_1 + 0x60) + 0xa8);
    if (cVar5 == '\0') {
      FUN_1001c7700(&local_418,PTR_s_Later_1022700c0);
    }
    else {
      FUN_1001c7700(&local_418,PTR_s_Quit_10226de10);
    }
    QAbstractButton::setText(pQVar4);
    if (*(int *)local_418 != -1) {
      if (*(int *)local_418 != 0) {
        LOCK();
        *(int *)local_418 = *(int *)local_418 + -1;
        local_31 = *(int *)local_418 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006303bd;
      }
      QArrayData::deallocate(local_418,2,8);
    }
LAB_1006303bd:
    QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x90));
    QBoxLayout::insertWidget
              (*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x90),0,
               *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0,0);
    QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x90));
    QBoxLayout::addWidget
              (*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x90),
               *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),0,0);
    QPushButton::setDefault(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),0));
    QWidget::setFocus(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),7);
  }
LAB_100630721:
  QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x20));
  pQVar4 = *(QString **)(*(long *)(param_1 + 0x60) + 0x40);
  QMetaObject::tr((char *)&local_430,(char *)&PTR_staticMetaObject_102222100,0x1e092e4);
  CProgressIndicator::setText(pQVar4);
  if (*(int *)local_430 != -1) {
    if (*(int *)local_430 != 0) {
      LOCK();
      *(int *)local_430 = *(int *)local_430 + -1;
      local_31 = *(int *)local_430 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006307a3;
    }
    QArrayData::deallocate(local_430,2,8);
  }
LAB_1006307a3:
  CProgressIndicator::setIndicatorSize((int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40));
  QWidget::setFixedWidth((int)param_1);
  (**(code **)(*(long *)param_1 + 0x80))
            (param_1,(*(int *)(*(long *)(param_1 + 0x28) + 0x1c) + 1) -
                     *(int *)(*(long *)(param_1 + 0x28) + 0x14));
  QWidget::setFixedHeight((int)param_1);
  if (*(int *)local_198.field0_0x0 != -1) {
    if (*(int *)local_198.field0_0x0 != 0) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
      local_31 = *(int *)local_198.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100630820;
    }
    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
  }
LAB_100630820:
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_31 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100630856;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_100630856:
  if (*(int *)local_160.field0_0x0 != -1) {
    if (*(int *)local_160.field0_0x0 != 0) {
      LOCK();
      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
      local_31 = *(int *)local_160.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063088c;
    }
    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
  }
LAB_10063088c:
  QSettings::~QSettings((QSettings *)&local_158);
  QDateTime::~QDateTime(&local_e8);
  QDateTime::~QDateTime(&local_d0);
  QDateTime::~QDateTime(&local_c8);
  QDateTime::~QDateTime(&local_b0);
  return;
}

