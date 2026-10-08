
void FUN_10042f0e0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QHBoxLayout *pQVar5;
  QVBoxLayout *pQVar6;
  QLabel *pQVar7;
  QGridLayout *this;
  QLineEdit *pQVar8;
  QCheckBox *this_00;
  QDialogButtonBox *this_01;
  Connection local_110 [8];
  Connection local_108 [8];
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  uint local_b0 [2];
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QPixmap local_90 [32];
  uint local_70 [2];
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
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
      if (*(int *)local_38 != 0) goto LAB_10042f134;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10042f134:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1df3ef9);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10042f18b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10042f18b:
  QWidget::setWindowModality(param_2,1);
  local_30 = true;
  uStack_2f = 0xcf000001;
  QWidget::resize(param_2);
  local_48[0] = 0;
  QSizePolicy::setControlType(local_48,1);
  local_48[0] = local_48[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_48[0] = local_48[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  QDialog::setSizeGripEnabled(SUB81(param_2,0));
  QDialog::setModal(SUB81(param_2,0));
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1df025a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f282;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10042f282:
  pQVar6 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar6);
  param_1[1] = pQVar6;
  QString::fromUtf8_helper((char *)&local_58,0x1dc1597);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f2ee;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10042f2ee:
  pQVar5 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar5);
  param_1[2] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_60,0x1df027f);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f36b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10042f36b:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[3] = pQVar7;
  QString::fromUtf8_helper((char *)&local_68,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f3dc;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10042f3dc:
  local_70[0] = 0x110000;
  QSizePolicy::setControlType(local_70,1);
  local_70[0] = local_70[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_70[0] = local_70[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  pQVar3 = (QPixmap *)param_1[3];
  QString::fromUtf8_helper((char *)&local_98,0x1dd6cb8);
  QPixmap::QPixmap(local_90,&local_98,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f49f;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10042f49f:
  QLabel::setAlignment(param_1[3],0x24);
  QBoxLayout::addWidget(param_1[2],param_1[3],0,0);
  pQVar6 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar6);
  param_1[4] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a0,0x1df3f10);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f533;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10042f533:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[5] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a8,0x1dd681a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_30 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f5ad;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10042f5ad:
  local_b0[0] = 0x510000;
  QSizePolicy::setControlType(local_b0,1);
  local_b0[0] = local_b0[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_b0[0] = local_b0[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  pQVar2 = (QString *)param_1[5];
  local_b8 = (QArrayData *)QString::fromLatin1_helper("font: bold;\n",0xc);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_30 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f65d;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10042f65d:
  QBoxLayout::addWidget(param_1[4],param_1[5],0,0);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this);
  param_1[6] = this;
  QString::fromUtf8_helper((char *)&local_c0,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_30 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f6e3;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10042f6e3:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_c8,0x1dd6d7d);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_30 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f75d;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10042f75d:
  QLabel::setAlignment(param_1[7],0x82);
  QGridLayout::addWidget(param_1[6],param_1[7],0,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar8,(QWidget *)param_2);
  param_1[8] = pQVar8;
  QString::fromUtf8_helper((char *)&local_d0,0x1df3f2e);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_30 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f807;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10042f807:
  QGridLayout::addWidget(param_1[6],param_1[8],0,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_d8,0x1dd686e);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_30 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f8a8;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10042f8a8:
  QLabel::setAlignment(param_1[9],0x82);
  QGridLayout::addWidget(param_1[6],param_1[9],1,0,1,1,0);
  pQVar8 = operator_new(0x30);
  QLineEdit::QLineEdit(pQVar8,(QWidget *)param_2);
  param_1[10] = pQVar8;
  QString::fromUtf8_helper((char *)&local_e0,0x1df3f38);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_30 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f955;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10042f955:
  QGridLayout::addWidget(param_1[6],param_1[10],1,1,1,1,0);
  this_00 = operator_new(0x30);
  QCheckBox::QCheckBox(this_00,(QWidget *)param_2);
  param_1[0xb] = this_00;
  QString::fromUtf8_helper((char *)&local_e8,0x1df3f45);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_30 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042f9f7;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10042f9f7:
  QGridLayout::addWidget(param_1[6],param_1[0xb],2,1,1,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[0xc] = pQVar7;
  QString::fromUtf8_helper((char *)&local_f0,0x1df3f56);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_30 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042fa9b;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10042fa9b:
  QWidget::setEnabled(SUB81(param_1[0xc],0));
  uVar4 = QWidget::sizePolicy();
  local_48[0] = local_48[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xc]);
  pQVar2 = (QString *)param_1[0xc];
  local_f8 = (QArrayData *)QString::fromLatin1_helper("color: rgb(255, 0, 0);\nfont: 10pt;\n",0x23);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_30 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042fb2e;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10042fb2e:
  QLabel::setTextFormat(param_1[0xc],0);
  QGridLayout::addWidget(param_1[6],param_1[0xc],3,1,1,1,0);
  QBoxLayout::addLayout((QLayout *)param_1[4],(int)param_1[6]);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[4]);
  QBoxLayout::addLayout((QLayout *)param_1[1],(int)param_1[2]);
  this_01 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_01,(QWidget *)param_2);
  param_1[0xd] = this_01;
  QString::fromUtf8_helper((char *)&local_100,0x1dd6e41);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_30 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_30) goto LAB_10042fc08;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10042fc08:
  QDialogButtonBox::setOrientation(param_1[0xd],1);
  QDialogButtonBox::setStandardButtons(param_1[0xd],0x400800);
  QBoxLayout::addWidget(param_1[1],param_1[0xd],0,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  QWidget::setTabOrder((QWidget *)param_1[10],(QWidget *)param_1[8]);
  QWidget::setTabOrder((QWidget *)param_1[8],(QWidget *)param_1[0xb]);
  QWidget::setTabOrder((QWidget *)param_1[0xb],(QWidget *)param_1[0xd]);
  FUN_100430220(param_1,param_2);
  QObject::connect(local_108,param_1[0xd],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_108);
  QObject::connect(local_110,param_1[0xd],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_110);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

