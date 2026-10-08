
void FUN_100648530(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  QGridLayout *pQVar4;
  undefined8 *puVar5;
  QLabel *pQVar6;
  QWidget *pQVar7;
  QPushButton *this;
  QTextEdit *pQVar8;
  undefined *puVar9;
  QVariant local_108;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
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
      if (*(int *)local_40 != 0) goto LAB_100648586;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100648586:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e0a72d);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1006485dd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1006485dd:
  local_38 = true;
  uStack_37 = 0x1a0000003;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1e0a744);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100648667;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100648667:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QString::fromUtf8_helper((char *)&local_68,0x1dc1bb6);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006486dc;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006486dc:
  QLayout::setContentsMargins((int)*param_1,-1,-1,-1);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x800000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[1] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,1,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x800000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[2] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,4,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000072;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[3] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,5,0,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[4] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,7,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[5] = pQVar6;
  QString::fromUtf8_helper((char *)&local_70,0x1e0a761);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100648974;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100648974:
  QLabel::setAlignment(param_1[5],0x84);
  QLabel::setWordWrap(SUB81(param_1[5],0));
  QLabel::setOpenExternalLinks(SUB81(param_1[5],0));
  QGridLayout::addWidget(*param_1,param_1[5],5,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000072;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[6] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,5,2,1,1,0);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_2,0);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_78,0x1e0a779);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100648ab4;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100648ab4:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_1[7]);
  param_1[8] = pQVar4;
  QString::fromUtf8_helper((char *)&local_80,0x1e0a78b);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_100648b24;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100648b24:
  QGridLayout::setVerticalSpacing((int)param_1[8]);
  QLayout::setContentsMargins((int)param_1[8],-1,-1,-1);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[9] = puVar5;
  QGridLayout::addItem(param_1[8],puVar5,3,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[7],0);
  param_1[10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1e0a7a0);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_100648c42;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100648c42:
  QLabel::setAlignment(param_1[10],0x84);
  pcVar2 = (char *)param_1[10];
  QVariant::QVariant(&local_98,true);
  QObject::setProperty(pcVar2,(QVariant *)"highlightColor");
  QVariant::~QVariant(&local_98);
  QGridLayout::addWidget(param_1[8],param_1[10],0,1,1,3,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000026;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xb] = puVar5;
  QGridLayout::addItem(param_1[8],puVar5,1,0,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar5;
  QGridLayout::addItem(param_1[8],puVar5,3,3,1,1,0);
  this = operator_new(0x30);
  QPushButton::QPushButton(this,(QWidget *)param_1[7]);
  param_1[0xd] = this;
  QString::fromUtf8_helper((char *)&local_a0,0x1e0a7ac);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100648e29;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100648e29:
  QGridLayout::addWidget(param_1[8],param_1[0xd],3,2,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000026;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar5;
  QGridLayout::addItem(param_1[8],puVar5,1,4,1,1,0);
  pQVar8 = operator_new(0x30);
  QTextEdit::QTextEdit(pQVar8,(QWidget *)param_1[7]);
  param_1[0xf] = pQVar8;
  QString::fromUtf8_helper((char *)&local_a8,0x1e0a7b7);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_38 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100648f4c;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100648f4c:
  QWidget::setMinimumSize((int)param_1[0xf],0);
  QWidget::setMaximumSize((int)param_1[0xf],0xffffff);
  QAbstractScrollArea::setVerticalScrollBarPolicy(param_1[0xf],1);
  QAbstractScrollArea::setHorizontalScrollBarPolicy(param_1[0xf],1);
  QTextEdit::setReadOnly(SUB81(param_1[0xf],0));
  QGridLayout::addWidget(param_1[8],param_1[0xf],1,1,1,3,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x400000001;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar5;
  QGridLayout::addItem(param_1[8],puVar5,2,1,1,3,0);
  QGridLayout::addWidget(*param_1,param_1[7],6,0,1,3,0);
  pQVar7 = operator_new(0x30);
  QWidget::QWidget(pQVar7,param_2,0);
  param_1[0x11] = pQVar7;
  QString::fromUtf8_helper((char *)&local_b0,0x1e0a7c6);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1006490ec;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1006490ec:
  pQVar4 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar4,(QWidget *)param_1[0x11]);
  param_1[0x12] = pQVar4;
  QString::fromUtf8_helper((char *)&local_b8,0x1e0a7dc);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064916b;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10064916b:
  QGridLayout::setVerticalSpacing((int)param_1[0x12]);
  QLayout::setContentsMargins((int)param_1[0x12],-1,0,-1);
  pQVar8 = operator_new(0x30);
  QTextEdit::QTextEdit(pQVar8,(QWidget *)param_1[0x11]);
  param_1[0x13] = pQVar8;
  QString::fromUtf8_helper((char *)&local_c0,0x1e0a7f5);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100649220;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100649220:
  QWidget::setMinimumSize((int)param_1[0x13],0);
  QWidget::setMaximumSize((int)param_1[0x13],0xffffff);
  QAbstractScrollArea::setVerticalScrollBarPolicy(param_1[0x13],1);
  QAbstractScrollArea::setHorizontalScrollBarPolicy(param_1[0x13],1);
  QGridLayout::addWidget(param_1[0x12],param_1[0x13],1,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000026;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0x14] = puVar5;
  QGridLayout::addItem(param_1[0x12],puVar5,1,2,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x100000026;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0x15] = puVar5;
  QGridLayout::addItem(param_1[0x12],puVar5,1,0,1,1,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x11],0);
  param_1[0x16] = pQVar6;
  QString::fromUtf8_helper((char *)&local_c8,0x1e0a808);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100649417;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100649417:
  QLabel::setAlignment(param_1[0x16],0x84);
  QLabel::setWordWrap(SUB81(param_1[0x16],0));
  QGridLayout::addWidget(param_1[0x12],param_1[0x16],0,1,1,1,0);
  QGridLayout::addWidget(*param_1,param_1[0x11],8,0,1,3,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0x17] = pQVar6;
  QString::fromUtf8_helper((char *)&local_d0,0x1e0a228);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064950c;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10064950c:
  pQVar3 = (QString *)param_1[0x17];
  QString::fromUtf8_helper((char *)&local_d8,0x1e0a81e);
  QWidget::setStyleSheet(pQVar3);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064956f;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10064956f:
  QLabel::setAlignment(param_1[0x17],0x84);
  pcVar2 = (char *)param_1[0x17];
  QVariant::QVariant(&local_e8,true);
  QObject::setProperty(pcVar2,(QVariant *)"captionColor");
  QVariant::~QVariant(&local_e8);
  QGridLayout::addWidget(*param_1,param_1[0x17],2,0,1,3,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0x18] = pQVar6;
  QString::fromUtf8_helper((char *)&local_f0,0x1e0a83b);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_38 = *(int *)local_f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10064965f;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10064965f:
  QLabel::setAlignment(param_1[0x18],0x84);
  QLabel::setWordWrap(SUB81(param_1[0x18],0));
  QGridLayout::addWidget(*param_1,param_1[0x18],0,0,1,3,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[0x19] = pQVar6;
  QString::fromUtf8_helper((char *)&local_f8,0x1e0a843);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_38 = *(int *)local_f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100649724;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100649724:
  QLabel::setAlignment(param_1[0x19],0x84);
  pcVar2 = (char *)param_1[0x19];
  QVariant::QVariant(&local_108,true);
  QObject::setProperty(pcVar2,(QVariant *)"highlightColor");
  QVariant::~QVariant(&local_108);
  QGridLayout::addWidget(*param_1,param_1[0x19],3,0,1,3,0);
  FUN_100649e10(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

