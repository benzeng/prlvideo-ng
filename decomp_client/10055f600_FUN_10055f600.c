
void FUN_10055f600(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QVBoxLayout *pQVar3;
  QLabel *pQVar4;
  QComboBox *this;
  undefined8 *puVar5;
  QHBoxLayout *this_00;
  QCheckBox *this_01;
  QString *pQVar6;
  QPushButton *this_02;
  QArrayData *pQVar7;
  undefined *puVar8;
  QArrayData *local_d0;
  QFont local_c8 [16];
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QVariant local_90;
  QVariant local_80;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  bool local_38;
  undefined7 uStack_37;
  
  QObject::objectName();
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      _local_38 = CONCAT71(uStack_37,*(int *)local_40 != 0);
      if (*(int *)local_40 != 0) goto LAB_10055f656;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10055f656:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e015e6);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10055f6ad;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10055f6ad:
  local_38 = true;
  uStack_37 = 0x1a2000001;
  QWidget::resize(param_2);
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3,(QWidget *)param_2);
  *param_1 = pQVar3;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1597);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055f735;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10055f735:
  QLayout::setContentsMargins((int)*param_1,-1,0,0);
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1dd6e19);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055f7b5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10055f7b5:
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[2] = pQVar4;
  QString::fromUtf8_helper((char *)&local_60,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055f826;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10055f826:
  QBoxLayout::addWidget(param_1[1],param_1[2],0,1);
  this = operator_new(0x30);
  QComboBox::QComboBox(this,(QWidget *)param_2);
  param_1[3] = this;
  QString::fromUtf8_helper((char *)&local_68,0x1e015fa);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055f8a9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10055f8a9:
  QBoxLayout::addWidget(param_1[1],param_1[3],0,1);
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[4] = pQVar4;
  QString::fromUtf8_helper((char *)&local_70,0x1dfa560);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055f92e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10055f92e:
  QLabel::setAlignment(param_1[4],0x21);
  QLabel::setWordWrap(SUB81(param_1[4],0));
  pcVar2 = (char *)param_1[4];
  QVariant::QVariant(&local_80,false);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_80);
  pcVar2 = (char *)param_1[4];
  QVariant::QVariant(&local_90,true);
  QObject::setProperty(pcVar2,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_90);
  QBoxLayout::addWidget(param_1[1],param_1[4],0,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar8 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x600000014;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[5] = puVar5;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar5);
  this_00 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_00);
  param_1[6] = this_00;
  QString::fromUtf8_helper((char *)&local_98,0x1dfb057);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055fab2;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10055fab2:
  this_01 = operator_new(0x30);
  QCheckBox::QCheckBox(this_01,(QWidget *)param_2);
  param_1[7] = this_01;
  QString::fromUtf8_helper((char *)&local_a0,0x1e01614);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055fb2a;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10055fb2a:
  QBoxLayout::addWidget(param_1[6],param_1[7],0,0);
  pQVar6 = operator_new(0x38);
  FUN_100139940(pQVar6,param_2);
  param_1[8] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a8,0x1e0162c);
  QObject::setObjectName(pQVar6);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055fbb3;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10055fbb3:
  QBoxLayout::addWidget(param_1[6],param_1[8],0,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x130000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[9] = puVar5;
  (**(code **)(*(long *)param_1[6] + 0x70))((long *)param_1[6],puVar5);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[6]);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[10] = puVar5;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar5);
  pQVar3 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar3);
  param_1[0xb] = pQVar3;
  QBoxLayout::setSpacing((int)pQVar3);
  pQVar6 = (QString *)param_1[0xb];
  QString::fromUtf8_helper((char *)&local_b0,0x1dd6e2a);
  QObject::setObjectName(pQVar6);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055fd1f;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10055fd1f:
  pQVar4 = operator_new(0x30);
  QLabel::QLabel(pQVar4,param_2,0);
  param_1[0xc] = pQVar4;
  QString::fromUtf8_helper((char *)&local_b8,0x1dd681a);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055fd99;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10055fd99:
  QFont::QFont(local_c8);
  QFont::setPointSize((int)local_c8);
  QWidget::setFont((QFont *)param_1[0xc]);
  QLabel::setAlignment(param_1[0xc],0x84);
  QLabel::setWordWrap(SUB81(param_1[0xc],0));
  QBoxLayout::addWidget(param_1[0xb],param_1[0xc],0,0);
  this_02 = operator_new(0x30);
  QPushButton::QPushButton(this_02,(QWidget *)param_2);
  param_1[0xd] = this_02;
  QString::fromUtf8_helper((char *)&local_d0,0x1e01645);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055fe6b;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10055fe6b:
  QWidget::setFont((QFont *)param_1[0xd]);
  pQVar6 = (QString *)param_1[0xd];
  pQVar7 = (QArrayData *)
           QString::fromLatin1_helper
                     ("QPushButton {\n\tpadding-left:11px;\n\tpadding-top:8px;\n\tpadding-right:11px;\n\tpadding-bottom:4px;\n}\n"
                      ,0x60);
  QWidget::setStyleSheet(pQVar6);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_38 = *(int *)pQVar7 != 0;
      UNLOCK();
      if (local_38) goto LAB_10055fedc;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10055fedc:
  QBoxLayout::addWidget(param_1[0xb],param_1[0xd],0,4);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[0xb]);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar8;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar5;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar5);
  FUN_100560410(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_c8);
  return;
}

