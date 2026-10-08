
void FUN_10038d210(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QVBoxLayout *pQVar5;
  QWidget *pQVar6;
  QLabel *pQVar7;
  undefined8 *puVar8;
  QHBoxLayout *pQVar9;
  QCheckBox *this;
  undefined *puVar10;
  QPalette local_1f8 [16];
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QPixmap local_1d8 [32];
  QArrayData *local_1b8;
  QPalette local_1b0 [16];
  QArrayData *local_1a0;
  QArrayData *local_198;
  QPalette local_190 [16];
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QPalette local_160 [16];
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QPalette local_120 [16];
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QPixmap local_f8 [32];
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined1 local_c8 [16];
  QBrush local_b8 [8];
  undefined1 local_b0 [16];
  QBrush local_a0 [8];
  QPalette local_98 [16];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QFont local_60 [16];
  uint local_50 [2];
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
      if (*(int *)local_40 != 0) goto LAB_10038d266;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10038d266:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df01dd);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_10038d2bd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10038d2bd:
  local_38 = true;
  uStack_37 = 0x262000001;
  QWidget::resize(param_2);
  local_50[0] = 0;
  QSizePolicy::setControlType(local_50,1);
  local_50[0] = local_50[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_50[0] = local_50[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  QWidget::setMinimumSize((int)param_2,0x1e0);
  QWidget::setMaximumSize((int)param_2,0x1e0);
  QFont::QFont(local_60);
  QFont::setKerning(SUB81(local_60,0));
  QWidget::setFont((QFont *)param_2);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QLayout::setContentsMargins((int)pQVar5,0,0,0);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_68,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038d3de;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10038d3de:
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_2,0);
  param_1[1] = pQVar6;
  QString::fromUtf8_helper((char *)&local_70,0x1df01f5);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038d44d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10038d44d:
  pQVar2 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_78,0x1df0202);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038d4a2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10038d4a2:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[1]);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_80,0x1dc1597);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038d510;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10038d510:
  QLayout::setContentsMargins((int)param_1[2],0,0x20,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[1],0);
  param_1[3] = pQVar7;
  QString::fromUtf8_helper((char *)&local_88,0x1dc128f);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038d598;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10038d598:
  QPalette::QPalette(local_98);
  QColor::setRgb((int)local_b0,0xff,0xff,0xff);
  QBrush::QBrush(local_a0,local_b0,1);
  QBrush::setStyle(local_a0,1);
  QPalette::setBrush(local_98,0,0,local_a0);
  QPalette::setBrush(local_98,2,0,local_a0);
  QColor::setRgb((int)local_c8,0x45,0x45,0x45);
  QBrush::QBrush(local_b8,local_c8,1);
  QBrush::setStyle(local_b8,1);
  QPalette::setBrush(local_98,1,0,local_b8);
  QWidget::setPalette((QPalette *)param_1[3]);
  QLabel::setAlignment(param_1[3],0x84);
  QBoxLayout::addWidget(param_1[2],param_1[3],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar10 = PTR_vtable_1021e17a0 + 0x10;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[4] = puVar8;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar8);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[5] = pQVar9;
  QString::fromUtf8_helper((char *)&local_d0,0x1df025a);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038d7a0;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10038d7a0:
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[6] = puVar8;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar8);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[1],0);
  param_1[7] = pQVar7;
  QString::fromUtf8_helper((char *)&local_d8,0x1df026d);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038d889;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10038d889:
  pQVar3 = (QPixmap *)param_1[7];
  QString::fromUtf8_helper((char *)&local_100,0x1df01bb);
  QPixmap::QPixmap(local_f8,&local_100,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038d90d;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10038d90d:
  QBoxLayout::addWidget(param_1[5],param_1[7],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[8] = puVar8;
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],puVar8);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[5]);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x500000014;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[9] = puVar8;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar8);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[10] = pQVar9;
  QString::fromUtf8_helper((char *)&local_108,0x1df027f);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038da73;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10038da73:
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0xb] = puVar8;
  (**(code **)(*(long *)param_1[10] + 0x70))((long *)param_1[10],puVar8);
  this = operator_new(0x30);
  QCheckBox::QCheckBox(this,(QWidget *)param_1[1]);
  param_1[0xc] = this;
  QString::fromUtf8_helper((char *)&local_110,0x1df0290);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_38 = *(int *)local_110 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038db50;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10038db50:
  QPalette::QPalette(local_120);
  QPalette::setBrush(local_120,0,0,local_a0);
  QPalette::setBrush(local_120,2,0,local_a0);
  QPalette::setBrush(local_120,1,0);
  QWidget::setPalette((QPalette *)param_1[0xc]);
  pQVar2 = (QString *)param_1[0xc];
  local_128 = (QArrayData *)
              QString::fromLatin1_helper
                        ("QCheckBox::indicator:unchecked { border-image: url(:images/checkbox_unchecked.png); }\nQCheckBox::indicator:unchecked:pressed { border-image: url(:images/checkbox_unchecked_hover.png); }\nQCheckBox::indicator:checked { border-image: url(:images/checkbox_checked.png); }\nQCheckBox::indicator:checked:pressed { border-image: url(:images/checkbox_checked_hover.png); }"
                         ,0x16b);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_38 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038dc18;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10038dc18:
  QAbstractButton::setChecked(SUB81(param_1[0xc],0));
  QBoxLayout::addWidget(param_1[10],param_1[0xc],0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0xd] = puVar8;
  (**(code **)(*(long *)param_1[10] + 0x70))((long *)param_1[10],puVar8);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[10]);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0xe] = puVar8;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar8);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[0xf] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar2 = (QString *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_130,0x1df040e);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038dd94;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10038dd94:
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x10] = puVar8;
  (**(code **)(*(long *)param_1[0xf] + 0x70))((long *)param_1[0xf],puVar8);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[1],0);
  param_1[0x11] = pQVar6;
  QString::fromUtf8_helper((char *)&local_138,0x1df01d5);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038de79;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10038de79:
  QWidget::setMinimumSize((int)param_1[0x11],0x96);
  QWidget::setMaximumSize((int)param_1[0x11],0x96);
  pQVar2 = (QString *)param_1[0x11];
  QString::fromUtf8_helper((char *)&local_140,0x1df0421);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_38 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038df09;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10038df09:
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9,(QWidget *)param_1[0x11]);
  param_1[0x12] = pQVar9;
  QLayout::setContentsMargins((int)pQVar9,0,0,0);
  pQVar2 = (QString *)param_1[0x12];
  QString::fromUtf8_helper((char *)&local_148,0x1df0473);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_38 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038dfa1;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10038dfa1:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x11],0);
  param_1[0x13] = pQVar7;
  QString::fromUtf8_helper((char *)&local_150,0x1df0486);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038e023;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10038e023:
  QPalette::QPalette(local_160);
  QPalette::setBrush(local_160,0,0,local_a0);
  QPalette::setBrush(local_160,2,0,local_a0);
  QPalette::setBrush(local_160,1,0);
  QWidget::setPalette((QPalette *)param_1[0x13]);
  QLabel::setAlignment(param_1[0x13],0x84);
  QBoxLayout::addWidget(param_1[0x12],param_1[0x13],0);
  QBoxLayout::addWidget(param_1[0xf],param_1[0x11],0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,param_1[1],0);
  param_1[0x14] = pQVar6;
  QString::fromUtf8_helper((char *)&local_168,0x1df0180);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038e148;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10038e148:
  QWidget::setMinimumSize((int)param_1[0x14],0x96);
  QWidget::setMaximumSize((int)param_1[0x14],0x96);
  pQVar2 = (QString *)param_1[0x14];
  QString::fromUtf8_helper((char *)&local_170,0x1df048e);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038e1d8;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10038e1d8:
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9,(QWidget *)param_1[0x14]);
  param_1[0x15] = pQVar9;
  QLayout::setContentsMargins((int)pQVar9,0,0,0);
  pQVar2 = (QString *)param_1[0x15];
  QString::fromUtf8_helper((char *)&local_178,0x1df04e1);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_38 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038e270;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10038e270:
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[0x14],0);
  param_1[0x16] = pQVar7;
  QString::fromUtf8_helper((char *)&local_180,0x1df04f4);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_38 = *(int *)local_180 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038e2f2;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_10038e2f2:
  QPalette::QPalette(local_190);
  QPalette::setBrush(local_190,0,0,local_a0);
  QPalette::setBrush(local_190,2,0,local_a0);
  QPalette::setBrush(local_190,1,0,local_b8);
  QWidget::setPalette((QPalette *)param_1[0x16]);
  QWidget::setAutoFillBackground(SUB81(param_1[0x16],0));
  QLabel::setAlignment(param_1[0x16],0x84);
  QBoxLayout::addWidget(param_1[0x15],param_1[0x16],0,0);
  QBoxLayout::addWidget(param_1[0xf],param_1[0x14],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x17] = puVar8;
  (**(code **)(*(long *)param_1[0xf] + 0x70))((long *)param_1[0xf],puVar8);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[0xf]);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x14;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x18] = puVar8;
  (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],puVar8);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[0x19] = pQVar9;
  QString::fromUtf8_helper((char *)&local_198,0x1df04fd);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_38 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038e4fe;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10038e4fe:
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x1a] = puVar8;
  (**(code **)(*(long *)param_1[0x19] + 0x70))((long *)param_1[0x19],puVar8);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[1],0);
  param_1[0x1b] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1a0,0x1df0510);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_38 = *(int *)local_1a0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038e5e6;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10038e5e6:
  QPalette::QPalette(local_1b0);
  QPalette::setBrush(local_1b0,0,0,local_a0);
  QPalette::setBrush(local_1b0,2,0,local_a0);
  QPalette::setBrush(local_1b0,1,0,local_b8);
  QWidget::setPalette((QPalette *)param_1[0x1b]);
  QBoxLayout::addWidget(param_1[0x19],param_1[0x1b],0,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[1],0);
  param_1[0x1c] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1b8,0x1df052a);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_38 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038e6e6;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_10038e6e6:
  pQVar3 = (QPixmap *)param_1[0x1c];
  QString::fromUtf8_helper((char *)&local_1e0,0x1df00ed);
  QPixmap::QPixmap(local_1d8,&local_1e0,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_1d8);
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_38 = *(int *)local_1e0 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038e76d;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_10038e76d:
  QBoxLayout::addWidget(param_1[0x19],param_1[0x1c],0,0);
  pQVar7 = operator_new(0x30);
  QLabel::QLabel(pQVar7,param_1[1],0);
  param_1[0x1d] = pQVar7;
  QString::fromUtf8_helper((char *)&local_1e8,0x1df0533);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_38 = *(int *)local_1e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10038e803;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_10038e803:
  QPalette::QPalette(local_1f8);
  QPalette::setBrush(local_1f8,0,0,local_a0);
  QPalette::setBrush(local_1f8,2,0,local_a0);
  QPalette::setBrush(local_1f8,1,0,local_b8);
  QWidget::setPalette((QPalette *)param_1[0x1d]);
  QBoxLayout::addWidget(param_1[0x19],param_1[0x1d],0,0);
  puVar8 = operator_new(0x28);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = puVar10;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar8 + 0x14,1);
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar8 + 0x24) = 0xffffffff;
  param_1[0x1e] = puVar8;
  (**(code **)(*(long *)param_1[0x19] + 0x70))((long *)param_1[0x19],puVar8);
  QBoxLayout::addLayout((QLayout *)param_1[2],(int)param_1[0x19]);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  FUN_10038f320(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QPalette::~QPalette(local_1f8);
  QPalette::~QPalette(local_1b0);
  QPalette::~QPalette(local_190);
  QPalette::~QPalette(local_160);
  QPalette::~QPalette(local_120);
  QBrush::~QBrush(local_b8);
  QBrush::~QBrush(local_a0);
  QPalette::~QPalette(local_98);
  QFont::~QFont(local_60);
  return;
}

