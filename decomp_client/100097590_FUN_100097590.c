
void FUN_100097590(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QStackedWidget *this;
  QWidget *pQVar3;
  QPushButton *pQVar4;
  QLabel *pQVar5;
  QProgressBar *this_00;
  QArrayData *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  QArrayData *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  QArrayData *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  QArrayData *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  QArrayData *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  QArrayData *local_170;
  QArrayData *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  QArrayData *local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  QArrayData *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  QArrayData *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  QArrayData *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  QArrayData *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  QArrayData *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  QArrayData *local_50;
  uint local_48 [2];
  QArrayData *local_40;
  QArrayData *local_38;
  bool local_30;
  undefined7 uStack_2f;
  
  QObject::objectName();
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      _local_30 = CONCAT71(uStack_2f,*(int *)local_38 != 0);
      if (*(int *)local_38 != 0) goto LAB_1000975e4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000975e4:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1dbaf1a);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10009763b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10009763b:
  local_30 = true;
  uStack_2f = 0x88000001;
  QWidget::resize(param_2);
  local_48[0] = 0;
  QSizePolicy::setControlType(local_48,1);
  local_48[0] = local_48[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_48[0] = local_48[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  QWidget::setMinimumSize((int)param_2,400);
  QWidget::setMaximumSize((int)param_2,400);
  QWidget::setContextMenuPolicy(param_2,0);
  QDialog::setModal(SUB81(param_2,0));
  this = operator_new(0x30);
  QStackedWidget::QStackedWidget(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_50,0x1dbaf2a);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_10009773c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10009773c:
  QWidget::setEnabled(SUB81(*param_1,0));
  local_60 = 0;
  local_5c = 0;
  local_58 = 399;
  local_54 = 0x87;
  QWidget::setGeometry((QRect *)*param_1);
  QFrame::setFrameShadow(*param_1,0x10);
  pQVar3 = operator_new(0x30);
  QWidget::QWidget(pQVar3,0,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_68,0x1dbaf3a);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_1000977ee;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000977ee:
  pQVar4 = operator_new(0x30);
  QPushButton::QPushButton(pQVar4,(QWidget *)param_1[1]);
  param_1[2] = pQVar4;
  QString::fromUtf8_helper((char *)&local_70,0x1dbaf49);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_10009785e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10009785e:
  local_80 = 0x118;
  local_7c = 100;
  local_78 = 0x184;
  local_74 = 0x83;
  QWidget::setGeometry((QRect *)param_1[2]);
  QFont::QFont((QFont *)local_90);
  QString::fromUtf8_helper((char *)&local_98,0x1dbaf60);
  QFont::setFamily(local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_1000978f4;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1000978f4:
  QFont::setPointSize((int)local_90);
  QFont::setWeight((int)local_90);
  QFont::setStyle(local_90,0);
  QFont::setUnderline(SUB81(local_90,0));
  QFont::setWeight((int)local_90);
  QFont::setStrikeOut(SUB81(local_90,0));
  QWidget::setFont((QFont *)param_1[2]);
  QAbstractButton::setChecked(SUB81(param_1[2],0));
  QAbstractButton::setAutoExclusive(SUB81(param_1[2],0));
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[1],0);
  param_1[3] = pQVar5;
  QString::fromUtf8_helper((char *)&local_a0,0x1dbaf6e);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1000979f3;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1000979f3:
  local_b0 = 10;
  local_ac = 10;
  local_a8 = 0x186;
  local_a4 = 0x1a;
  QWidget::setGeometry((QRect *)param_1[3]);
  QWidget::setFont((QFont *)param_1[3]);
  this_00 = operator_new(0x30);
  QProgressBar::QProgressBar(this_00,(QWidget *)param_1[1]);
  param_1[4] = this_00;
  QString::fromUtf8_helper((char *)&local_b8,0x1dbaf85);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_30 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100097ab5;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100097ab5:
  QWidget::setEnabled(SUB81(param_1[4],0));
  local_c8 = 10;
  local_c4 = 0x46;
  local_c0 = 0x186;
  local_bc = 0x58;
  QWidget::setGeometry((QRect *)param_1[4]);
  QProgressBar::setMinimum((int)param_1[4]);
  QProgressBar::setMaximum((int)param_1[4]);
  QProgressBar::setValue((int)param_1[4]);
  QProgressBar::setOrientation(param_1[4],1);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[1],0);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_d0,0x1dbaf9b);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_30 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100097ba6;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100097ba6:
  local_e0 = 10;
  local_dc = 0x28;
  local_d8 = 0x186;
  local_d4 = 0x38;
  QWidget::setGeometry((QRect *)param_1[5]);
  QWidget::setFont((QFont *)param_1[5]);
  QStackedWidget::addWidget((QWidget *)*param_1);
  pQVar3 = operator_new(0x30);
  QWidget::QWidget(pQVar3,0,0);
  param_1[6] = pQVar3;
  QString::fromUtf8_helper((char *)&local_e8,0x1dbafab);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_30 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100097c74;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100097c74:
  pQVar4 = operator_new(0x30);
  QPushButton::QPushButton(pQVar4,(QWidget *)param_1[6]);
  param_1[7] = pQVar4;
  QString::fromUtf8_helper((char *)&local_f0,0x1dbafb9);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_30 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100097cee;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100097cee:
  local_100 = 0x118;
  local_fc = 100;
  local_f8 = 0x184;
  local_f4 = 0x83;
  QWidget::setGeometry((QRect *)param_1[7]);
  pQVar4 = operator_new(0x30);
  QPushButton::QPushButton(pQVar4,(QWidget *)param_1[6]);
  param_1[8] = pQVar4;
  QString::fromUtf8_helper((char *)&local_108,0x1dbafcf);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_30 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_30) goto LAB_100097da0;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100097da0:
  local_118 = 0xaa;
  local_114 = 100;
  local_110 = 0x116;
  local_10c = 0x83;
  QWidget::setGeometry((QRect *)param_1[8]);
  pQVar4 = operator_new(0x30);
  QPushButton::QPushButton(pQVar4,(QWidget *)param_1[6]);
  param_1[9] = pQVar4;
  QString::fromUtf8_helper((char *)&local_120,0x1dbafe6);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_30 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_30) goto LAB_100097e52;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100097e52:
  local_130 = 0x3c;
  local_12c = 100;
  local_128 = 0xa8;
  local_124 = 0x83;
  QWidget::setGeometry((QRect *)param_1[9]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[6],0);
  param_1[10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_138,0x1dbaffa);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_30 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_30) goto LAB_100097f06;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100097f06:
  local_148 = 0x14;
  local_144 = 10;
  local_140 = 0x43;
  local_13c = 0x39;
  QWidget::setGeometry((QRect *)param_1[10]);
  uVar2 = QWidget::sizePolicy();
  local_48[0] = local_48[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[10]);
  QWidget::setMinimumSize((int)param_1[10],0x30);
  QWidget::setMaximumSize((int)param_1[10],0x30);
  QWidget::setBaseSize((int)param_1[10],0x30);
  QLabel::setScaledContents(SUB81(param_1[10],0));
  QLabel::setAlignment(param_1[10],0x84);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[6],0);
  param_1[0xb] = pQVar5;
  QString::fromUtf8_helper((char *)&local_150,0x1dbb008);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_30 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_30) goto LAB_100098033;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100098033:
  local_160 = 0x5a;
  local_15c = 10;
  local_158 = 0x186;
  local_154 = 0x5a;
  QWidget::setGeometry((QRect *)param_1[0xb]);
  QFrame::setFrameShape(param_1[0xb],0);
  QFrame::setFrameShadow(param_1[0xb],0x10);
  QLabel::setAlignment(param_1[0xb],0x21);
  QLabel::setWordWrap(SUB81(param_1[0xb],0));
  QStackedWidget::addWidget((QWidget *)*param_1);
  pQVar3 = operator_new(0x30);
  QWidget::QWidget(pQVar3,0,0);
  param_1[0xc] = pQVar3;
  QString::fromUtf8_helper((char *)&local_168,0x1dbb016);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_30 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_30) goto LAB_100098126;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100098126:
  pQVar4 = operator_new(0x30);
  QPushButton::QPushButton(pQVar4,(QWidget *)param_1[0xc]);
  param_1[0xd] = pQVar4;
  QString::fromUtf8_helper((char *)&local_170,0x1dbb024);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_30 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_30) goto LAB_1000981a0;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1000981a0:
  local_180 = 0x118;
  local_17c = 100;
  local_178 = 0x184;
  local_174 = 0x83;
  QWidget::setGeometry((QRect *)param_1[0xd]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[0xc],0);
  param_1[0xe] = pQVar5;
  QString::fromUtf8_helper((char *)&local_188,0x1dbb03a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_30 = *(int *)local_188 != 0;
      UNLOCK();
      if (local_30) goto LAB_100098254;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100098254:
  local_198 = 0x14;
  local_194 = 10;
  local_190 = 0x43;
  local_18c = 0x39;
  QWidget::setGeometry((QRect *)param_1[0xe]);
  QLabel::setScaledContents(SUB81(param_1[0xe],0));
  pQVar4 = operator_new(0x30);
  QPushButton::QPushButton(pQVar4,(QWidget *)param_1[0xc]);
  param_1[0xf] = pQVar4;
  QString::fromUtf8_helper((char *)&local_1a0,0x1dbb048);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_30 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100098314;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100098314:
  local_1b0 = 0xaa;
  local_1ac = 100;
  local_1a8 = 0x116;
  local_1a4 = 0x83;
  QWidget::setGeometry((QRect *)param_1[0xf]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[0xc],0);
  param_1[0x10] = pQVar5;
  QString::fromUtf8_helper((char *)&local_1b8,0x1dbb05c);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_30 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1000983cb;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_1000983cb:
  local_1c8 = 0x5a;
  local_1c4 = 10;
  local_1c0 = 0x186;
  local_1bc = 0x5a;
  QWidget::setGeometry((QRect *)param_1[0x10]);
  QLabel::setAlignment(param_1[0x10],0x21);
  QLabel::setWordWrap(SUB81(param_1[0x10],0));
  QStackedWidget::addWidget((QWidget *)*param_1);
  pQVar3 = operator_new(0x30);
  QWidget::QWidget(pQVar3,0,0);
  param_1[0x11] = pQVar3;
  QString::fromUtf8_helper((char *)&local_1d0,0x1dbb06a);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_30 = *(int *)local_1d0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1000984b1;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_1000984b1:
  pQVar4 = operator_new(0x30);
  QPushButton::QPushButton(pQVar4,(QWidget *)param_1[0x11]);
  param_1[0x12] = pQVar4;
  QString::fromUtf8_helper((char *)&local_1d8,0x1dbb076);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_30 = *(int *)local_1d8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100098531;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_100098531:
  local_1e8 = 0x118;
  local_1e4 = 100;
  local_1e0 = 0x184;
  local_1dc = 0x83;
  QWidget::setGeometry((QRect *)param_1[0x12]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[0x11],0);
  param_1[0x13] = pQVar5;
  QString::fromUtf8_helper((char *)&local_1f0,0x1dbb089);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_30 = *(int *)local_1f0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1000985ee;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_1000985ee:
  local_200 = 0x5a;
  local_1fc = 10;
  local_1f8 = 0x186;
  local_1f4 = 0x5a;
  QWidget::setGeometry((QRect *)param_1[0x13]);
  QLabel::setAlignment(param_1[0x13],0x21);
  QLabel::setWordWrap(SUB81(param_1[0x13],0));
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_1[0x11],0);
  param_1[0x14] = pQVar5;
  QString::fromUtf8_helper((char *)&local_208,0x1dbb095);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_30 = *(int *)local_208 != 0;
      UNLOCK();
      if (local_30) goto LAB_1000986cd;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_1000986cd:
  QWidget::setGeometry((QRect *)param_1[0x14]);
  QLabel::setScaledContents(SUB81(param_1[0x14],0));
  QStackedWidget::addWidget((QWidget *)*param_1);
  FUN_100098e40(param_1,param_2);
  QStackedWidget::setCurrentIndex((int)*param_1);
  QPushButton::setDefault(SUB81(param_1[2],0));
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont((QFont *)local_90);
  return;
}

