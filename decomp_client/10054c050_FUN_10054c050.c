
void FUN_10054c050(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QHBoxLayout *pQVar3;
  QVBoxLayout *pQVar4;
  QListView *this;
  QToolButton *pQVar5;
  QWidget *pQVar6;
  QStackedWidget *this_00;
  QArrayData *local_108;
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
  QArrayData *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  QArrayData *local_a0;
  QString local_98 [2];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  undefined8 local_60;
  QArrayData *local_58;
  QIcon local_50 [8];
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  bool local_28;
  undefined7 uStack_27;
  
  QObject::objectName();
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      _local_28 = CONCAT71(uStack_27,*(int *)local_30 != 0);
      if (*(int *)local_30 != 0) goto LAB_10054c0a2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10054c0a2:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_38,0x1e005be);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        _local_28 = CONCAT71(uStack_27,*(int *)local_38 != 0);
        if (*(int *)local_38 != 0) goto LAB_10054c0f9;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10054c0f9:
  local_28 = true;
  uStack_27 = 0x208000002;
  QWidget::resize(param_2);
  QVariant::QVariant(&local_48,true);
  QObject::setProperty((char *)param_2,(QVariant *)"hasRestoreDefaults");
  QVariant::~QVariant(&local_48);
  QIcon::QIcon(local_50);
  QString::fromUtf8_helper((char *)&local_58,0x1e005d9);
  local_60 = 0xffffffffffffffff;
  QIcon::addFile(local_50,&local_58,&local_60,0,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_28 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c1ae;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10054c1ae:
  QIcon::operator_cast_to_QVariant((QIcon *)&local_70);
  QObject::setProperty((char *)param_2,(QVariant *)"icon");
  QVariant::~QVariant(&local_70);
  pQVar3 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar3,(QWidget *)param_2);
  *param_1 = pQVar3;
  QString::fromUtf8_helper((char *)&local_78,0x1df027f);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_28 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c243;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10054c243:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[1] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_80,0x1e005f4);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_28 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c2bb;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10054c2bb:
  this = operator_new(0x30);
  QListView::QListView(this,(QWidget *)param_2);
  param_1[2] = this;
  QString::fromUtf8_helper((char *)&local_88,0x1e0060a);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_28 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c328;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10054c328:
  QWidget::setMinimumSize((int)param_1[2],0x96);
  QWidget::setMaximumSize((int)param_1[2],0x96);
  QFont::QFont((QFont *)local_98);
  QString::fromUtf8_helper((char *)&local_a0,0x1db3ea0);
  QFont::setFamily(local_98);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_28 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c3bb;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10054c3bb:
  QFont::setPointSize((int)local_98);
  QWidget::setFont((QFont *)param_1[2]);
  QWidget::setFocusPolicy(param_1[2],0);
  local_a8 = 0x20;
  local_a4 = 0x20;
  QAbstractItemView::setIconSize((QSize *)param_1[2]);
  QBoxLayout::addWidget(param_1[1],param_1[2],0,0);
  pQVar3 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar3);
  param_1[3] = pQVar3;
  QBoxLayout::setSpacing((int)pQVar3);
  pQVar2 = (QString *)param_1[3];
  QString::fromUtf8_helper((char *)&local_b0,0x1dfb057);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_28 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c4a0;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10054c4a0:
  pQVar5 = operator_new(0x30);
  QToolButton::QToolButton(pQVar5,(QWidget *)param_2);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_b8,0x1e0061d);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_28 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c519;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10054c519:
  QWidget::setMinimumSize((int)param_1[4],0x1a);
  QWidget::setMaximumSize((int)param_1[4],0x1a);
  pQVar2 = (QString *)param_1[4];
  local_c0 = (QArrayData *)
             QString::fromLatin1_helper
                       ("QToolButton {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_plus_26x22.png);\n\tborder: none;\n}\nQToolButton:pressed {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_plus_pressed_26x22.png);\n}\nQToolButton:disabled {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_plus_disabled_26x22.png);\n}\n"
                        ,0x130);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_28 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c5a0;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10054c5a0:
  QBoxLayout::addWidget(param_1[3],param_1[4],0,0);
  pQVar5 = operator_new(0x30);
  QToolButton::QToolButton(pQVar5,(QWidget *)param_2);
  param_1[5] = pQVar5;
  QString::fromUtf8_helper((char *)&local_c8,0x1e0075f);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_28 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c62a;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10054c62a:
  QWidget::setMinimumSize((int)param_1[5],0x19);
  QWidget::setMaximumSize((int)param_1[5],0x19);
  pQVar2 = (QString *)param_1[5];
  local_d0 = (QArrayData *)
             QString::fromLatin1_helper
                       ("QToolButton {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_minus_25x22.png);\n\tborder: none;\n}\nQToolButton:pressed {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_minus_pressed_25x22.png);\n}\nQToolButton:disabled {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_btn_minus_disabled_25x22.png);\n}\n"
                        ,0x133);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_28 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c6b1;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10054c6b1:
  QBoxLayout::addWidget(param_1[3],param_1[5],0,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[6] = pQVar6;
  QString::fromUtf8_helper((char *)&local_d8,0x1df496a);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_28 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c73d;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10054c73d:
  QWidget::setMinimumSize((int)param_1[6],0);
  QWidget::setMaximumSize((int)param_1[6],0xffffff);
  pQVar2 = (QString *)param_1[6];
  local_e0 = (QArrayData *)
             QString::fromLatin1_helper
                       ("QWidget {\n\tbackground-image:url(:/pixmaps/MacButtons/mac_tool_btn_spacer_center_26x22.png);\n}\n"
                        ,0x5e);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_28 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c7c1;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10054c7c1:
  QBoxLayout::addWidget(param_1[3],param_1[6],0,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[7] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e8,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_28 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c84d;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10054c84d:
  QWidget::setMinimumSize((int)param_1[7],0x1a);
  QWidget::setMaximumSize((int)param_1[7],0x1a);
  pQVar2 = (QString *)param_1[7];
  local_f0 = (QArrayData *)
             QString::fromLatin1_helper
                       ("QWidget {\n\tbackground-image: url(:/pixmaps/MacButtons/mac_tool_btn_spacer_right_26x22.png);\n}\n"
                        ,0x5e);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_28 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c8d4;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10054c8d4:
  QBoxLayout::addWidget(param_1[3],param_1[7],0,0);
  QBoxLayout::setStretch((int)param_1[3],2);
  QBoxLayout::addLayout((QLayout *)param_1[1],(int)param_1[3]);
  QBoxLayout::setStretch((int)param_1[1],0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  this_00 = operator_new(0x30);
  QStackedWidget::QStackedWidget(this_00,(QWidget *)param_2);
  param_1[8] = this_00;
  QString::fromUtf8_helper((char *)&local_f8,0x1e00965);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_28 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054c99e;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10054c99e:
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[9] = pQVar6;
  QString::fromUtf8_helper((char *)&local_100,0x1e00981);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_28 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054ca18;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10054ca18:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1[9]);
  param_1[10] = pQVar4;
  QString::fromUtf8_helper((char *)&local_108,0x1e00987);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_28 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_28) goto LAB_10054ca92;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10054ca92:
  QStackedWidget::addWidget((QWidget *)param_1[8]);
  QBoxLayout::addWidget(*param_1,param_1[8],0,0);
  QBoxLayout::setStretch((int)*param_1,1);
  FUN_10054d040(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont((QFont *)local_98);
  QIcon::~QIcon(local_50);
  return;
}

