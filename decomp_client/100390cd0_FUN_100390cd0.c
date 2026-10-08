
void FUN_100390cd0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QVBoxLayout *pQVar5;
  QFrame *pQVar6;
  QHBoxLayout *pQVar7;
  QWidget *pQVar8;
  QGridLayout *pQVar9;
  QLabel *pQVar10;
  undefined8 *puVar11;
  QToolButton *pQVar12;
  QPushButton *pQVar13;
  CProgressIndicator *pCVar14;
  undefined *puVar15;
  QArrayData *local_320;
  QArrayData *local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  undefined1 local_2f0 [16];
  QBrush local_2e0 [8];
  undefined1 local_2d8 [16];
  QBrush local_2c8 [8];
  undefined1 local_2c0 [16];
  QBrush local_2b0 [8];
  undefined1 local_2a8 [16];
  QBrush local_298 [8];
  undefined1 local_290 [16];
  QBrush local_280 [8];
  undefined1 local_278 [16];
  QBrush local_268 [8];
  QPalette local_260 [16];
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QFont local_228 [16];
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QFont local_200 [16];
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  undefined1 local_1e0 [16];
  QBrush local_1d0 [8];
  QPalette local_1c8 [16];
  QArrayData *local_1b8;
  undefined1 local_1b0 [16];
  QBrush local_1a0 [8];
  undefined1 local_198 [16];
  QBrush local_188 [8];
  QPalette local_180 [16];
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  uint local_148 [2];
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  uint local_128 [2];
  QArrayData *local_120;
  QArrayData *local_118;
  uint local_110 [2];
  QArrayData *local_108;
  QArrayData *local_100;
  QPixmap local_f8 [32];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QPixmap local_b0 [32];
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
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
      if (*(int *)local_40 != 0) goto LAB_100390d26;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100390d26:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1df05e9);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_100390d7d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100390d7d:
  local_38 = true;
  uStack_37 = 0x185000002;
  QWidget::resize(param_2);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1597);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_100390e05;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100390e05:
  QLayout::setContentsMargins((int)*param_1,0,0,0);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_2,0);
  param_1[1] = pQVar6;
  QString::fromUtf8_helper((char *)&local_58,0x1df05f6);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_100390e87;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100390e87:
  pQVar2 = (QString *)param_1[1];
  local_60 = (QArrayData *)
             QString::fromLatin1_helper
                       ("QPushButton\n{ \n\tborder-image: url(:/button.png) 1 14 1 14;\n\tborder-top: 1px transparent;\n\tborder-bottom: 1px transparent;\n\tborder-right: 14px transparent;\n\tborder-left: 14px transparent;\n\tmin-height: 24;\n\tmin-width: 80; \n}\n\nQPushButton:pressed\n{\n\tborder-image: url(:/button_pressed.png) 1 14 1 14;\n\tborder-top: 1px transparent;\n\tborder-bottom: 1px transparent;\n\tborder-right: 14px transparent;\n\tborder-left: 14px transparent;\n}"
                        ,0x1ab);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_38 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_38) goto LAB_100390edc;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100390edc:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[1]);
  param_1[2] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_68,0x1df07b1);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_38 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_38) goto LAB_100390f5a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100390f5a:
  QLayout::setContentsMargins((int)param_1[2],0,0,0);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_1[1],0);
  param_1[3] = pQVar6;
  QString::fromUtf8_helper((char *)&local_70,0x1df07c2);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_38 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_38) goto LAB_100390fde;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100390fde:
  QFrame::setFrameShape(param_1[3],0);
  QFrame::setFrameShadow(param_1[3],0x10);
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7,(QWidget *)param_1[3]);
  param_1[4] = pQVar7;
  QString::fromUtf8_helper((char *)&local_78,0x1df027f);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_38 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391067;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100391067:
  QLayout::setContentsMargins((int)param_1[4],0x23,0,0x14);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_1[3],0);
  param_1[5] = pQVar8;
  QString::fromUtf8_helper((char *)&local_80,0x1df07cc);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_38 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003910f4;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003910f4:
  pQVar9 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar9,(QWidget *)param_1[5]);
  param_1[6] = pQVar9;
  QGridLayout::setSpacing((int)pQVar9);
  pQVar2 = (QString *)param_1[6];
  QString::fromUtf8_helper((char *)&local_88,0x1dd6d51);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391172;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100391172:
  QLayout::setContentsMargins((int)param_1[6],0,-1,0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[5],0);
  param_1[7] = pQVar10;
  QString::fromUtf8_helper((char *)&local_90,0x1df07d5);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391202;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100391202:
  QWidget::setMinimumSize((int)param_1[7],0x100);
  QWidget::setMaximumSize((int)param_1[7],0x100);
  pQVar3 = (QPixmap *)param_1[7];
  QString::fromUtf8_helper((char *)&local_b8,0x1df07df);
  QPixmap::QPixmap(local_b0,&local_b8,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_38 = *(int *)local_b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003912ab;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1003912ab:
  QLabel::setAlignment(param_1[7],0x84);
  QGridLayout::addWidget(param_1[6],param_1[7],0,0,1,1,0);
  QBoxLayout::addWidget(param_1[4],param_1[5],0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  puVar15 = PTR_vtable_1021e17a0 + 0x10;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 0x1400000014;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x100000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[8] = puVar11;
  (**(code **)(*(long *)param_1[4] + 0x70))((long *)param_1[4],puVar11);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5);
  param_1[9] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[9];
  QString::fromUtf8_helper((char *)&local_c0,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_38 = *(int *)local_c0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003913e3;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1003913e3:
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_1[3],0);
  param_1[10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_c8,0x1df0804);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_38 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10039145e;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10039145e:
  QFrame::setFrameShape(param_1[10],0);
  QFrame::setFrameShadow(param_1[10],0x10);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[10]);
  param_1[0xb] = pQVar5;
  QString::fromUtf8_helper((char *)&local_d0,0x1df0811);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_38 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003914f0;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1003914f0:
  QLayout::setContentsMargins((int)param_1[0xb],0,-1,0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[10],0);
  param_1[0xc] = pQVar10;
  QString::fromUtf8_helper((char *)&local_d8,0x1df0822);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_38 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391583;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100391583:
  QWidget::setMinimumSize((int)param_1[0xc],0x140);
  pQVar3 = (QPixmap *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_100,0x1df0829);
  QPixmap::QPixmap(local_f8,&local_100,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_38 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391616;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100391616:
  QBoxLayout::addWidget(param_1[0xb],param_1[0xc],0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[10],0);
  param_1[0xd] = pQVar10;
  QString::fromUtf8_helper((char *)&local_108,0x1df083a);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_38 = *(int *)local_108 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003916a2;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1003916a2:
  local_110[0] = 0x50000;
  QSizePolicy::setControlType(local_110,1);
  local_110[0] = local_110[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_110[0] = local_110[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xd]);
  QLabel::setWordWrap(SUB81(param_1[0xd],0));
  QBoxLayout::addWidget(param_1[0xb],param_1[0xd],0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[10],0);
  param_1[0xe] = pQVar10;
  QString::fromUtf8_helper((char *)&local_118,0x1df084b);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_38 = *(int *)local_118 != 0;
      UNLOCK();
      if (local_38) goto LAB_10039178b;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10039178b:
  QBoxLayout::addWidget(param_1[0xb],param_1[0xe],0);
  QBoxLayout::addWidget(param_1[9],param_1[10],0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_1[3],0);
  param_1[0xf] = pQVar8;
  QString::fromUtf8_helper((char *)&local_120,0x1df0861);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_38 = *(int *)local_120 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391828;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100391828:
  local_128[0] = 0x770000;
  QSizePolicy::setControlType(local_128,1);
  local_128[0] = local_128[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_128[0] = local_128[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xf]);
  QBoxLayout::addWidget(param_1[9],param_1[0xf],0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_1[3],0);
  param_1[0x10] = pQVar8;
  QString::fromUtf8_helper((char *)&local_130,0x1df086e);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_38 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391906;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100391906:
  pQVar9 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar9,(QWidget *)param_1[0x10]);
  param_1[0x11] = pQVar9;
  QString::fromUtf8_helper((char *)&local_138,0x1dd6d5e);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_38 = *(int *)local_138 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391985;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100391985:
  QLayout::setContentsMargins((int)param_1[0x11],0,6,0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0x12] = puVar11;
  QGridLayout::addItem(param_1[0x11],puVar11,0,4,1,1,0);
  pQVar12 = operator_new(0x30);
  QToolButton::QToolButton(pQVar12,(QWidget *)param_1[0x10]);
  param_1[0x13] = pQVar12;
  QString::fromUtf8_helper((char *)&local_140,0x1df087b);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_38 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391aa2;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100391aa2:
  local_148[0] = 0;
  QSizePolicy::setControlType(local_148,1);
  local_148[0] = local_148[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_148[0] = local_148[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x13]);
  QWidget::setMinimumSize((int)param_1[0x13],0x29);
  QWidget::setMaximumSize((int)param_1[0x13],0x29);
  pQVar2 = (QString *)param_1[0x13];
  local_150 = (QArrayData *)
              QString::fromLatin1_helper
                        ("QToolButton { min-width: 41; max-width: 41; min-height: 25; max-height: 25; }\nQToolButton { border-image: url(:/FB_norm.png); }\nQToolButton:pressed { border-image: url(:/FB_press.png); }"
                         ,0xba);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_38 = *(int *)local_150 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391b87;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100391b87:
  QGridLayout::addWidget(param_1[0x11],param_1[0x13],0,3,1,1,0);
  pQVar12 = operator_new(0x30);
  QToolButton::QToolButton(pQVar12,(QWidget *)param_1[0x10]);
  param_1[0x14] = pQVar12;
  QString::fromUtf8_helper((char *)&local_158,0x1df0947);
  QObject::setObjectName((QString *)pQVar12);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_38 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391c33;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100391c33:
  pQVar2 = (QString *)param_1[0x14];
  local_160 = (QArrayData *)
              QString::fromLatin1_helper
                        ("QToolButton { min-width: 41; max-width: 41; min-height: 25; max-height: 25; }\nQToolButton { border-image: url(:/Twitter_norm.png); }\nQToolButton:pressed { border-image: url(:/Twitter_press.png); }\n"
                         ,0xc5);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_38 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391c97;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100391c97:
  QGridLayout::addWidget(param_1[0x11],param_1[0x14],0,2,1,1,0);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[0x10],0);
  param_1[0x15] = pQVar10;
  QString::fromUtf8_helper((char *)&local_168,0x1df0a1d);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_38 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391d45;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100391d45:
  QGridLayout::addWidget(param_1[0x11],param_1[0x15],0,0,1,2,0);
  QBoxLayout::addWidget(param_1[9],param_1[0x10],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[4],(int)param_1[9]);
  QBoxLayout::addWidget(param_1[2],param_1[3],0,0);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_1[1],0);
  param_1[0x16] = pQVar6;
  QString::fromUtf8_helper((char *)&local_170,0x1df0a2a);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_38 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_38) goto LAB_100391e21;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100391e21:
  QWidget::setMinimumSize((int)param_1[0x16],0);
  QWidget::setMaximumSize((int)param_1[0x16],0xffffff);
  QPalette::QPalette(local_180);
  QColor::setRgb((int)local_198,0xff,0xff,0xff);
  QBrush::QBrush(local_188,local_198,1);
  QBrush::setStyle(local_188,1);
  QPalette::setBrush(local_180,0,9,local_188);
  QColor::setRgb((int)local_1b0,0xd8,0xd8,0xd8);
  QBrush::QBrush(local_1a0,local_1b0,1);
  QBrush::setStyle(local_1a0,1);
  QPalette::setBrush(local_180,0,10,local_1a0);
  QPalette::setBrush(local_180,2,9,local_188);
  QPalette::setBrush(local_180,2,10,local_1a0);
  QPalette::setBrush(local_180,1,9,local_1a0);
  QPalette::setBrush(local_180,1,10,local_1a0);
  QWidget::setPalette((QPalette *)param_1[0x16]);
  QWidget::setAutoFillBackground(SUB81(param_1[0x16],0));
  QFrame::setFrameShape(param_1[0x16],0);
  QFrame::setFrameShadow(param_1[0x16],0x20);
  QFrame::setLineWidth((int)param_1[0x16]);
  QBoxLayout::addWidget(param_1[2],param_1[0x16],0,0);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_1[1],0);
  param_1[0x17] = pQVar6;
  QString::fromUtf8_helper((char *)&local_1b8,0x1df0a47);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_38 = *(int *)local_1b8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100392079;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_100392079:
  QWidget::setMinimumSize((int)param_1[0x17],0);
  QWidget::setMaximumSize((int)param_1[0x17],0xffffff);
  QPalette::QPalette(local_1c8);
  QPalette::setBrush(local_1c8,0,9,local_188);
  QColor::setRgb((int)local_1e0,0xf4,0xf4,0xf4);
  QBrush::QBrush(local_1d0,local_1e0,1);
  QBrush::setStyle(local_1d0,1);
  QPalette::setBrush(local_1c8,0,10,local_1d0);
  QPalette::setBrush(local_1c8,2,9,local_188);
  QPalette::setBrush(local_1c8,2,10,local_1d0);
  QPalette::setBrush(local_1c8,1,9,local_1d0);
  QPalette::setBrush(local_1c8,1,10,local_1d0);
  QWidget::setPalette((QPalette *)param_1[0x17]);
  QWidget::setAutoFillBackground(SUB81(param_1[0x17],0));
  QFrame::setFrameShape(param_1[0x17],0);
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7,(QWidget *)param_1[0x17]);
  param_1[0x18] = pQVar7;
  QBoxLayout::setSpacing((int)pQVar7);
  pQVar2 = (QString *)param_1[0x18];
  QString::fromUtf8_helper((char *)&local_1e8,0x1df0473);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_38 = *(int *)local_1e8 != 0;
      UNLOCK();
      if (local_38) goto LAB_100392266;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_100392266:
  QLayout::setContentsMargins((int)param_1[0x18],0x18,0,0x18);
  pQVar10 = operator_new(0x30);
  QLabel::QLabel(pQVar10,param_1[0x17],0);
  param_1[0x19] = pQVar10;
  QString::fromUtf8_helper((char *)&local_1f0,0x1df0a5e);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_38 = *(int *)local_1f0 != 0;
      UNLOCK();
      if (local_38) goto LAB_100392303;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_100392303:
  QFont::QFont(local_200);
  QFont::setPointSize((int)local_200);
  QWidget::setFont((QFont *)param_1[0x19]);
  QLabel::setWordWrap(SUB81(param_1[0x19],0));
  QBoxLayout::addWidget(param_1[0x18],param_1[0x19],0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 0x1400000001;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0x1a] = puVar11;
  (**(code **)(*(long *)param_1[0x18] + 0x70))((long *)param_1[0x18],puVar11);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_1[0x17],0);
  param_1[0x1b] = pQVar8;
  QString::fromUtf8_helper((char *)&local_208,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_38 = *(int *)local_208 != 0;
      UNLOCK();
      if (local_38) goto LAB_100392450;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_100392450:
  pQVar9 = operator_new(0x20);
  QGridLayout::QGridLayout(pQVar9,(QWidget *)param_1[0x1b]);
  param_1[0x1c] = pQVar9;
  QString::fromUtf8_helper((char *)&local_210,0x1dd67e5);
  QObject::setObjectName((QString *)pQVar9);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_38 = *(int *)local_210 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003924d0;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_1003924d0:
  QLayout::setContentsMargins((int)param_1[0x1c],0,0,0);
  pQVar13 = operator_new(0x30);
  QPushButton::QPushButton(pQVar13,(QWidget *)param_1[0x1b]);
  param_1[0x1d] = pQVar13;
  QString::fromUtf8_helper((char *)&local_218,0x1df0a75);
  QObject::setObjectName((QString *)pQVar13);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_38 = *(int *)local_218 != 0;
      UNLOCK();
      if (local_38) goto LAB_100392565;
    }
    QArrayData::deallocate(local_218,2,8);
  }
LAB_100392565:
  QFont::QFont(local_228);
  QFont::setWeight((int)local_228);
  QFont::setWeight((int)local_228);
  QWidget::setFont((QFont *)param_1[0x1d]);
  pQVar2 = (QString *)param_1[0x1d];
  local_230 = (QArrayData *)
              QString::fromLatin1_helper
                        ("QPushButton\n{ \n\tborder-image: url(:/red_button.png) 1 36 1 14;\n\tborder-top: 1px transparent;\n\tborder-bottom: 1px transparent;\n\tborder-right: 36px transparent;\n\tborder-left: 14px transparent;\n\tmin-height: 24;\n\tmin-width: 80; \n\tcolor: white;\n}\n\nQPushButton:pressed\n{\n\tborder-image: url(:/red_button_pressed.png) 1 36 1 14;\n\tborder-top: 1px transparent;\n\tborder-bottom: 1px transparent;\n\tborder-right: 36px transparent;\n\tborder-left: 14px transparent;\n\tcolor: #E68E8E;\n}"
                         ,0x1d3);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_38 = *(int *)local_230 != 0;
      UNLOCK();
      if (local_38) goto LAB_10039260a;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_10039260a:
  QGridLayout::addWidget(param_1[0x1c],param_1[0x1d],0,0,1,1,0);
  QBoxLayout::addWidget(param_1[0x18],param_1[0x1b],0);
  QBoxLayout::setStretch((int)param_1[0x18],0);
  QBoxLayout::addWidget(param_1[2],param_1[0x17],0);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_1[1],0);
  param_1[0x1e] = pQVar6;
  QString::fromUtf8_helper((char *)&local_238,0x1df0c57);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_38 = *(int *)local_238 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003926f1;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_1003926f1:
  QWidget::setMinimumSize((int)param_1[0x1e],0);
  QWidget::setMaximumSize((int)param_1[0x1e],0xffffff);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[0x1e]);
  param_1[0x1f] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0x1f];
  QString::fromUtf8_helper((char *)&local_240,0x1df0c61);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 != 0) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_38 = *(int *)local_240 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003927ab;
    }
    QArrayData::deallocate(local_240,2,8);
  }
LAB_1003927ab:
  QLayout::setContentsMargins((int)param_1[0x1f],0,0,0);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_1[0x1e],0);
  param_1[0x20] = pQVar6;
  QString::fromUtf8_helper((char *)&local_248,0x1df0c72);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_38 = *(int *)local_248 != 0;
      UNLOCK();
      if (local_38) goto LAB_100392842;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_100392842:
  QWidget::setMinimumSize((int)param_1[0x20],0);
  QWidget::setMaximumSize((int)param_1[0x20],0xffffff);
  QFrame::setFrameShape(param_1[0x20],6);
  QFrame::setFrameShadow(param_1[0x20],0x20);
  QBoxLayout::addWidget(param_1[0x1f],param_1[0x20],0);
  pQVar6 = operator_new(0x30);
  QFrame::QFrame(pQVar6,param_1[0x1e],0);
  param_1[0x21] = pQVar6;
  QString::fromUtf8_helper((char *)&local_250,0x1df0c7c);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_38 = *(int *)local_250 != 0;
      UNLOCK();
      if (local_38) goto LAB_100392926;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_100392926:
  QPalette::QPalette(local_260);
  QColor::setRgb((int)local_278,0,0,0);
  QBrush::QBrush(local_268,local_278,1);
  QBrush::setStyle(local_268,1);
  QPalette::setBrush(local_260,0,0,local_268);
  QColor::setRgb((int)local_290,0xe5,0xe5,0xe5);
  QBrush::QBrush(local_280,local_290,1);
  QBrush::setStyle(local_280,1);
  QPalette::setBrush(local_260,0,1,local_280);
  QPalette::setBrush(local_260,0,2,local_188);
  QColor::setRgb((int)local_2a8,0xf2,0xf2,0xf2);
  QBrush::QBrush(local_298,local_2a8,1);
  QBrush::setStyle(local_298,1);
  QPalette::setBrush(local_260,0,3,local_298);
  QColor::setRgb((int)local_2c0,0x72,0x72,0x72);
  QBrush::QBrush(local_2b0,local_2c0,1);
  QBrush::setStyle(local_2b0,1);
  QPalette::setBrush(local_260,0,4,local_2b0);
  QColor::setRgb((int)local_2d8,0x99,0x99,0x99);
  QBrush::QBrush(local_2c8,local_2d8,1);
  QBrush::setStyle(local_2c8,1);
  QPalette::setBrush(local_260,0,5,local_2c8);
  QPalette::setBrush(local_260,0,6,local_268);
  QPalette::setBrush(local_260,0,7,local_188);
  QPalette::setBrush(local_260,0,8,local_268);
  QPalette::setBrush(local_260,0,9,local_188);
  QPalette::setBrush(local_260,0,10,local_280);
  QPalette::setBrush(local_260,0,0xb,local_268);
  QPalette::setBrush(local_260,0,0x10,local_298);
  QColor::setRgb((int)local_2f0,0xff,0xff,0xdc);
  QBrush::QBrush(local_2e0,local_2f0,1);
  QBrush::setStyle(local_2e0,1);
  QPalette::setBrush(local_260,0,0x12,local_2e0);
  QPalette::setBrush(local_260,0,0x13,local_268);
  QPalette::setBrush(local_260,2,0,local_268);
  QPalette::setBrush(local_260,2,1,local_280);
  QPalette::setBrush(local_260,2,2,local_188);
  QPalette::setBrush(local_260,2,3,local_298);
  QPalette::setBrush(local_260,2,4,local_2b0);
  QPalette::setBrush(local_260,2,5,local_2c8);
  QPalette::setBrush(local_260,2,6,local_268);
  QPalette::setBrush(local_260,2,7,local_188);
  QPalette::setBrush(local_260,2,8,local_268);
  QPalette::setBrush(local_260,2,9,local_188);
  QPalette::setBrush(local_260,2,10,local_280);
  QPalette::setBrush(local_260,2,0xb,local_268);
  QPalette::setBrush(local_260,2,0x10,local_298);
  QPalette::setBrush(local_260,2,0x12,local_2e0);
  QPalette::setBrush(local_260,2,0x13,local_268);
  QPalette::setBrush(local_260,1,0,local_2b0);
  QPalette::setBrush(local_260,1,1,local_280);
  QPalette::setBrush(local_260,1,2,local_188);
  QPalette::setBrush(local_260,1,3,local_298);
  QPalette::setBrush(local_260,1,4,local_2b0);
  QPalette::setBrush(local_260,1,5,local_2c8);
  QPalette::setBrush(local_260,1,6,local_2b0);
  QPalette::setBrush(local_260,1,7,local_188);
  QPalette::setBrush(local_260,1,8,local_2b0);
  QPalette::setBrush(local_260,1,9,local_280);
  QPalette::setBrush(local_260,1,10,local_280);
  QPalette::setBrush(local_260,1,0xb,local_268);
  QPalette::setBrush(local_260,1,0x10,local_280);
  QPalette::setBrush(local_260,1,0x12,local_2e0);
  QPalette::setBrush(local_260,1,0x13,local_268);
  QWidget::setPalette((QPalette *)param_1[0x21]);
  QWidget::setAutoFillBackground(SUB81(param_1[0x21],0));
  QFrame::setFrameShape(param_1[0x21],0);
  QFrame::setFrameShadow(param_1[0x21],0x10);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[0x21]);
  param_1[0x22] = pQVar5;
  QString::fromUtf8_helper((char *)&local_2f8,0x1dd6e2a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_38 = *(int *)local_2f8 != 0;
      UNLOCK();
      if (local_38) goto LAB_10039308b;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_10039308b:
  QLayout::setContentsMargins((int)param_1[0x22],-1,0,-1);
  pQVar7 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar7);
  param_1[0x23] = pQVar7;
  QBoxLayout::setSpacing((int)pQVar7);
  pQVar2 = (QString *)param_1[0x23];
  QString::fromUtf8_helper((char *)&local_300,0x1df025a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_38 = *(int *)local_300 != 0;
      UNLOCK();
      if (local_38) goto LAB_100393133;
    }
    QArrayData::deallocate(local_300,2,8);
  }
LAB_100393133:
  pQVar13 = operator_new(0x30);
  QPushButton::QPushButton(pQVar13,(QWidget *)param_1[0x21]);
  param_1[0x24] = pQVar13;
  QString::fromUtf8_helper((char *)&local_308,0x1df0c82);
  QObject::setObjectName((QString *)pQVar13);
  if (*(int *)local_308 != -1) {
    if (*(int *)local_308 != 0) {
      LOCK();
      *(int *)local_308 = *(int *)local_308 + -1;
      local_38 = *(int *)local_308 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003931b3;
    }
    QArrayData::deallocate(local_308,2,8);
  }
LAB_1003931b3:
  QBoxLayout::addWidget(param_1[0x23],param_1[0x24],0,0);
  pQVar13 = operator_new(0x30);
  QPushButton::QPushButton(pQVar13,(QWidget *)param_1[0x21]);
  param_1[0x25] = pQVar13;
  QString::fromUtf8_helper((char *)&local_310,0x1df0c93);
  QObject::setObjectName((QString *)pQVar13);
  if (*(int *)local_310 != -1) {
    if (*(int *)local_310 != 0) {
      LOCK();
      *(int *)local_310 = *(int *)local_310 + -1;
      local_38 = *(int *)local_310 != 0;
      UNLOCK();
      if (local_38) goto LAB_10039324a;
    }
    QArrayData::deallocate(local_310,2,8);
  }
LAB_10039324a:
  QBoxLayout::addWidget(param_1[0x23],param_1[0x25],0,0);
  pCVar14 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar14,param_1[0x21],1);
  param_1[0x26] = pCVar14;
  QString::fromUtf8_helper((char *)&local_318,0x1df0c9b);
  QObject::setObjectName((QString *)pCVar14);
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_38 = *(int *)local_318 != 0;
      UNLOCK();
      if (local_38) goto LAB_1003932e6;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_1003932e6:
  QWidget::setMinimumSize((int)param_1[0x26],0x1a);
  QWidget::setMaximumSize((int)param_1[0x26],0x1a);
  QBoxLayout::addWidget(param_1[0x23],param_1[0x26],0,0);
  puVar11 = operator_new(0x28);
  *(undefined4 *)(puVar11 + 1) = 0;
  *puVar11 = puVar15;
  *(undefined8 *)((long)puVar11 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar11 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar11 + 0x14,1);
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar11 + 0x24) = 0xffffffff;
  param_1[0x27] = puVar11;
  (**(code **)(*(long *)param_1[0x23] + 0x70))((long *)param_1[0x23],puVar11);
  pQVar13 = operator_new(0x30);
  QPushButton::QPushButton(pQVar13,(QWidget *)param_1[0x21]);
  param_1[0x28] = pQVar13;
  QString::fromUtf8_helper((char *)&local_320,0x1df0cb0);
  QObject::setObjectName((QString *)pQVar13);
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_38 = *(int *)local_320 != 0;
      UNLOCK();
      if (local_38) goto LAB_10039341c;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_10039341c:
  QBoxLayout::addWidget(param_1[0x23],param_1[0x28],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[0x22],(int)param_1[0x23]);
  QBoxLayout::addWidget(param_1[0x1f],param_1[0x21],0,0);
  QBoxLayout::addWidget(param_1[2],param_1[0x1e],0,0);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  FUN_1003943d0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QBrush::~QBrush(local_2e0);
  QBrush::~QBrush(local_2c8);
  QBrush::~QBrush(local_2b0);
  QBrush::~QBrush(local_298);
  QBrush::~QBrush(local_280);
  QBrush::~QBrush(local_268);
  QPalette::~QPalette(local_260);
  QFont::~QFont(local_228);
  QFont::~QFont(local_200);
  QBrush::~QBrush(local_1d0);
  QPalette::~QPalette(local_1c8);
  QBrush::~QBrush(local_1a0);
  QBrush::~QBrush(local_188);
  QPalette::~QPalette(local_180);
  return;
}

