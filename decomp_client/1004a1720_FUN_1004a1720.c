
void FUN_1004a1720(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  QGridLayout *this;
  QCheckBox *pQVar4;
  undefined8 *puVar5;
  QWidget *pQVar6;
  QLabel *pQVar7;
  QFrame *pQVar8;
  undefined *puVar9;
  undefined1 local_168 [16];
  QBrush local_158 [8];
  undefined1 local_150 [16];
  QBrush local_140 [8];
  QPalette local_138 [16];
  QArrayData *local_128;
  QVariant local_120;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QVariant local_f8;
  QVariant local_e8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QVariant local_90;
  QArrayData *local_80;
  uint local_78 [2];
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
      if (*(int *)local_40 != 0) goto LAB_1004a1776;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004a1776:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df833a);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1004a17cd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004a17cd:
  local_38 = true;
  uStack_37 = 0x183000002;
  QWidget::resize(param_2);
  QString::fromUtf8_helper((char *)&local_60,0x1df8351);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty((char *)param_2,(QVariant *)"helpTopic");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_38 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a1857;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004a1857:
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_68,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a18c5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004a18c5:
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_70,0x1df836a);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a1934;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004a1934:
  local_78[0] = 0x10000;
  QSizePolicy::setControlType(local_78,1);
  local_78[0] = local_78[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_78[0] = local_78[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[1]);
  QWidget::setMinimumSize((int)param_1[1],0);
  QGridLayout::addWidget(*param_1,param_1[1],8,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[2] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,0,2,9,1,0);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[3] = pQVar4;
  QString::fromUtf8_helper((char *)&local_80,0x1df8389);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a1aa3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004a1aa3:
  pcVar2 = (char *)param_1[3];
  QVariant::QVariant(&local_90,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_90);
  QGridLayout::addWidget(*param_1,param_1[3],4,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[4] = pQVar4;
  QString::fromUtf8_helper((char *)&local_98,0x1df839d);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a1b7a;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004a1b7a:
  pcVar2 = (char *)param_1[4];
  QVariant::QVariant(&local_a8,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_a8);
  QGridLayout::addWidget(*param_1,param_1[4],5,1,1,1,0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[5] = pQVar6;
  QString::fromUtf8_helper((char *)&local_b0,0x1df496a);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_38 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a1c53;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004a1c53:
  pcVar2 = (char *)param_1[5];
  QVariant::QVariant(&local_c0,true);
  QObject::setProperty(pcVar2,(QVariant *)"SpacerWidgetBig");
  QVariant::~QVariant(&local_c0);
  QGridLayout::addWidget(*param_1,param_1[5],0xb,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[6] = pQVar4;
  QString::fromUtf8_helper((char *)&local_c8,0x1df83ad);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a1d2a;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1004a1d2a:
  QGridLayout::addWidget(*param_1,param_1[6],0,1,2,1,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_2,0);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_d0,0x1df83bf);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a1dca;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004a1dca:
  QWidget::setMinimumSize((int)param_1[7],0x172);
  QLabel::setWordWrap(SUB81(param_1[7],0));
  QLabel::setOpenExternalLinks(SUB81(param_1[7],0));
  QGridLayout::addWidget(*param_1,param_1[7],0xc,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[8] = pQVar4;
  QString::fromUtf8_helper((char *)&local_d8,0x1df83d7);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a1e94;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004a1e94:
  pcVar2 = (char *)param_1[8];
  QVariant::QVariant(&local_e8,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_e8);
  pcVar2 = (char *)param_1[8];
  QVariant::QVariant(&local_f8,true);
  QObject::setProperty(pcVar2,(QVariant *)"preprocessValue");
  QVariant::~QVariant(&local_f8);
  QGridLayout::addWidget(*param_1,param_1[8],3,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[9] = pQVar4;
  QString::fromUtf8_helper((char *)&local_100,0x1df83ef);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a1fa1;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004a1fa1:
  QGridLayout::addWidget(*param_1,param_1[9],7,1,1,1,0);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[10] = pQVar4;
  QString::fromUtf8_helper((char *)&local_108,0x1df8403);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a2042;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004a2042:
  QGridLayout::addWidget(*param_1,param_1[10],10,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x2800000014;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xb] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,0xd,0,1,3,0);
  pQVar4 = operator_new(0x30);
  QCheckBox::QCheckBox(pQVar4,(QWidget *)param_2);
  param_1[0xc] = pQVar4;
  QString::fromUtf8_helper((char *)&local_110,0x1df8410);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a2162;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1004a2162:
  pcVar2 = (char *)param_1[0xc];
  QVariant::QVariant(&local_120,true);
  QObject::setProperty(pcVar2,(QVariant *)"CheckBoxPlaceholder");
  QVariant::~QVariant(&local_120);
  QGridLayout::addWidget(*param_1,param_1[0xc],2,1,1,1,0);
  pQVar8 = operator_new(0x30);
  QFrame::QFrame(pQVar8,param_2,0);
  param_1[0xd] = pQVar8;
  QString::fromUtf8_helper((char *)&local_128,0x1df6bac);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_1004a223b;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1004a223b:
  QPalette::QPalette(local_138);
  QColor::setRgb((int)local_150,0xd5,0xd5,0xd5);
  QBrush::QBrush(local_140,local_150,1);
  QBrush::setStyle(local_140,1);
  QPalette::setBrush(local_138,0,0,local_140);
  QPalette::setBrush(local_138,2,0,local_140);
  QColor::setRgb((int)local_168,0x7f,0x7f,0x7f);
  QBrush::QBrush(local_158,local_168,1);
  QBrush::setStyle(local_158,1);
  QPalette::setBrush(local_138,1,0,local_158);
  QWidget::setPalette((QPalette *)param_1[0xd]);
  QFrame::setFrameShadow(param_1[0xd],0x10);
  QFrame::setLineWidth((int)param_1[0xd]);
  QFrame::setFrameShape(param_1[0xd],4);
  QGridLayout::addWidget(*param_1,param_1[0xd],9,0,1,3,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0xc00000014;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x510000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,6,1,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar9;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x140000001e;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[0xf] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,0,0,9,1,0);
  FUN_1004a2a10(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QBrush::~QBrush(local_158);
  QBrush::~QBrush(local_140);
  QPalette::~QPalette(local_138);
  return;
}

