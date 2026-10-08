
void FUN_1006f5300(CBaseDialog *param_1,undefined8 param_2)

{
  QPixmap *pQVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  QString *pQVar7;
  long local_178;
  QString local_170;
  QString local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  Data_conflict local_150;
  undefined4 local_148;
  QArrayData *local_140;
  QVariant local_138;
  QVariant local_128;
  QArrayData *local_118;
  QArrayData *local_110;
  QString local_108;
  QLocale local_100 [8];
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QPixmap local_58 [32];
  QString local_38 [2];
  undefined1 local_21;
  
  CBaseDialog::CBaseDialog(param_1,param_2,0,0x1c0);
  *(undefined ***)param_1 = &PTR_FUN_1022264e0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022266d0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102226720;
  pvVar5 = operator_new(0x68);
  *(void **)(param_1 + 0x60) = pvVar5;
  QWidget::setWindowModality(param_1,0);
  QWidget::setAttribute(param_1,0x37,1);
  FUN_1006f68c0(*(undefined8 *)(param_1 + 0x60),param_1);
  QFont::QFont((QFont *)local_38);
  pQVar1 = *(QPixmap **)(*(long *)(param_1 + 0x60) + 0x28);
  ResourceUtils::getAppIcon(local_58,7);
  QLabel::setPixmap(pQVar1);
  QPixmap::~QPixmap(local_58);
  QFont::operator=((QFont *)local_38,
                   (QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x50) + 0x28) + 0x38));
  local_60 = (QArrayData *)QString::fromAscii_helper("Helvetica Neue",0xe);
  QFont::setFamily(local_38);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f5417;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006f5417:
  local_68 = (QArrayData *)QString::fromAscii_helper("Light",5);
  QFont::setStyleName(local_38);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f5469;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006f5469:
  QWidget::setFont(*(QFont **)(*(long *)(param_1 + 0x60) + 0x50));
  QFont::operator=((QFont *)local_38,
                   (QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + 0x28) + 0x38));
  local_70 = (QArrayData *)QString::fromAscii_helper("Helvetica Neue",0xe);
  QFont::setFamily(local_38);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f54e5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006f54e5:
  local_78 = (QArrayData *)QString::fromAscii_helper("Light",5);
  QFont::setStyleName(local_38);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f5537;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006f5537:
  QWidget::setFont(*(QFont **)(*(long *)(param_1 + 0x60) + 0x58));
  QLabel::text();
  QSettings::QSettings((QSettings *)&local_b0,(QObject *)0x0);
  local_b8 = (QArrayData *)QString::fromAscii_helper("LastReleasedVersion",0x13);
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  QSettings::value((QString *)&local_a0,&local_b0);
  iVar3 = QVariant::toInt((bool *)&local_a0);
  QString::arg(&local_88,&local_90,(long)iVar3,0,10,0x20);
  local_d0 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_NAME",0xe);
  FUN_1001c72e0(&local_d8);
  puVar6 = (undefined8 *)QString::replace(&local_88,&local_d0,&local_d8,1);
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar6;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_21 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_21 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f5675;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1006f5675:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f56ab;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1006f56ab:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f56db;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1006f56db:
  QVariant::~QVariant(&local_a0);
  QVariant::~QVariant((QVariant *)&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f5729;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1006f5729:
  QSettings::~QSettings((QSettings *)&local_b0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f576b;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1006f576b:
  QLabel::text();
  local_f8 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-new-verison-@LOCALE@",0x45
                       );
  QLocale::QLocale(local_100);
  FUN_100d3f730(&local_f0,&local_f8,local_100);
  QString::arg(&local_e0,&local_e8,&local_f0,0,0x20);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_21 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f5815;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1006f5815:
  QLocale::~QLocale(local_100);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_21 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f5857;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1006f5857:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_21 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f588d;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1006f588d:
  QAbstractButton::text();
  cVar2 = FUN_1006272c0();
  if (cVar2 != '\0') {
    QMetaObject::tr((char *)&local_118,(char *)&PTR_staticMetaObject_1022264a0,0x1e12f15);
    QSettings::QSettings((QSettings *)&local_138,(QObject *)0x0);
    local_140 = (QArrayData *)QString::fromAscii_helper("LastReleasedVersion",0x13);
    local_148 = 0x80000000;
    local_150.field7 = 0;
    QSettings::value((QString *)&local_128,&local_138);
    iVar3 = QVariant::toInt((bool *)&local_128);
    QString::arg(&local_110,&local_118,(long)iVar3,0,10,0x20);
    local_158 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_NAME",0xe);
    FUN_1001c72e0(&local_160);
    pQVar7 = (QString *)QString::replace(&local_110,&local_158,&local_160,1);
    QString::operator=(&local_80,pQVar7);
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_21 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006f59e3;
      }
      QArrayData::deallocate(local_160,2,8);
    }
LAB_1006f59e3:
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_21 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006f5a19;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_1006f5a19:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_21 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006f5a4f;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_1006f5a4f:
    QVariant::~QVariant(&local_128);
    QVariant::~QVariant((QVariant *)&local_150);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_21 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006f5a9d;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_1006f5a9d:
    QSettings::~QSettings((QSettings *)&local_138);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_21 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006f5adf;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_1006f5adf:
    QMetaObject::tr((char *)&local_168,(char *)&PTR_staticMetaObject_1022264a0,0x1e12f3f);
    QString::operator=(&local_e0,&local_168);
    if (*(int *)local_168.field0_0x0 != -1) {
      if (*(int *)local_168.field0_0x0 != 0) {
        LOCK();
        *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
        local_21 = *(int *)local_168.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006f5b4a;
      }
      QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
    }
LAB_1006f5b4a:
    QMetaObject::tr((char *)&local_170,(char *)&PTR_staticMetaObject_1022264a0,0x1de0249);
    QString::operator=(&local_108,&local_170);
    if (*(int *)local_170.field0_0x0 != -1) {
      if (*(int *)local_170.field0_0x0 != 0) {
        LOCK();
        *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
        local_21 = *(int *)local_170.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006f5bb5;
      }
      QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
    }
  }
LAB_1006f5bb5:
  QLabel::setText(*(QString **)(*(long *)(param_1 + 0x60) + 0x50));
  QLabel::setText(*(QString **)(*(long *)(param_1 + 0x60) + 0x58));
  QAbstractButton::setText(*(QString **)(*(long *)(param_1 + 0x60) + 0x38));
  iVar4 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
  (**(code **)(*(long *)param_1 + 0x70))(param_1);
  iVar3 = 0x1fe;
  if (0x1fd < iVar4) {
    iVar3 = iVar4;
  }
  QWidget::setFixedSize((int)param_1,iVar3);
  QObject::connect(&local_178,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38),"2clicked()",param_1
                   ,"1onUpgradeClicked()",0);
  if (local_178 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_178);
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_21 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f5ca5;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_1006f5ca5:
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_21 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f5cdb;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1006f5cdb:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_21 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f5d0b;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1006f5d0b:
  QFont::~QFont((QFont *)local_38);
  return;
}

