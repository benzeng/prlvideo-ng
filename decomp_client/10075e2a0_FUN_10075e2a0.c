
void FUN_10075e2a0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  uint uVar4;
  QVBoxLayout *pQVar5;
  QLabel *pQVar6;
  undefined8 *puVar7;
  QWidget *pQVar8;
  QHBoxLayout *pQVar9;
  QPushButton *pQVar10;
  QArrayData *local_3a0;
  QPalette local_398 [16];
  QArrayData *local_388;
  QPalette local_380 [16];
  QArrayData *local_370;
  QArrayData *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QPixmap local_350 [32];
  QArrayData *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  QPalette local_310 [16];
  QArrayData *local_300;
  QPalette local_2f8 [16];
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QPixmap local_2c8 [32];
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QPalette local_288 [16];
  QArrayData *local_278;
  QPalette local_270 [16];
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QPixmap local_240 [32];
  QArrayData *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QPalette local_200 [16];
  QArrayData *local_1f0;
  QPalette local_1e8 [16];
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QPixmap local_1b8 [32];
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  uint local_180 [2];
  QArrayData *local_178;
  QArrayData *local_170;
  QString local_168 [2];
  undefined1 local_158 [16];
  QBrush local_148 [8];
  QPalette local_140 [16];
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120 [2];
  undefined1 local_110 [16];
  QBrush local_100 [8];
  QPalette local_f8 [16];
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QPixmap local_c8 [32];
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  uint local_90 [2];
  QArrayData *local_88;
  QArrayData *local_80;
  undefined1 local_78 [16];
  QBrush local_68 [8];
  undefined1 local_60 [16];
  QBrush local_50 [8];
  QPalette local_48 [16];
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
      if (*(int *)local_30 != 0) goto LAB_10075e2f2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10075e2f2:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_38,0x1e15106);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        _local_28 = CONCAT71(uStack_27,*(int *)local_38 != 0);
        if (*(int *)local_38 != 0) goto LAB_10075e349;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10075e349:
  local_28 = true;
  uStack_27 = 0x224000003;
  QWidget::resize(param_2);
  QWidget::setMinimumSize((int)param_2,0x366);
  QWidget::setBaseSize((int)param_2,0x366);
  QPalette::QPalette(local_48);
  QColor::setRgb((int)local_60,0xff,0xff,0xff);
  QBrush::QBrush(local_50,local_60,1);
  QBrush::setStyle(local_50,1);
  QPalette::setBrush(local_48,0,9,local_50);
  QColor::setRgb((int)local_78,0x3e,0x42,0x49);
  QBrush::QBrush(local_68,local_78,1);
  QBrush::setStyle(local_68,1);
  QPalette::setBrush(local_48,0,10,local_68);
  QPalette::setBrush(local_48,2,9,local_50);
  QPalette::setBrush(local_48,2,10,local_68);
  QPalette::setBrush(local_48,1,9,local_68);
  QPalette::setBrush(local_48,1,10,local_68);
  QWidget::setPalette((QPalette *)param_2);
  QWidget::setAutoFillBackground(SUB81(param_2,0));
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_2);
  *param_1 = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_80,0x1e15122);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_28 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075e522;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10075e522:
  QLayout::setContentsMargins((int)*param_1,0x2a,2,0x2a);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_2,0);
  param_1[1] = pQVar6;
  QString::fromUtf8_helper((char *)&local_88,0x1e15134);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_28 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075e5ae;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10075e5ae:
  local_90[0] = 0x50000;
  QSizePolicy::setControlType(local_90,1);
  local_90[0] = local_90[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[1]);
  QWidget::setMinimumSize((int)param_1[1],0xdc);
  QLabel::setAlignment(param_1[1],0x84);
  QBoxLayout::addWidget(*param_1,param_1[1],0);
  puVar7 = operator_new(0x28);
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar7 + 0xc) = 0xc00000014;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x10000;
  QSizePolicy::setControlType((long)puVar7 + 0x14,1);
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x24) = 0xffffffff;
  param_1[2] = puVar7;
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,puVar7);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[3] = pQVar8;
  QString::fromUtf8_helper((char *)&local_98,0x1e15141);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_28 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075e720;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10075e720:
  uVar4 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QWidget::setMinimumSize((int)param_1[3],0);
  QWidget::setMaximumSize((int)param_1[3],0xffffff);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[3]);
  param_1[4] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_a0,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_28 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075e7f8;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10075e7f8:
  QLayout::setContentsMargins((int)param_1[4],0,0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[3],0);
  param_1[5] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a8,0x1e15153);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_28 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075e886;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10075e886:
  QWidget::setMinimumSize((int)param_1[5],0);
  QWidget::setMaximumSize((int)param_1[5],0xffffff);
  pQVar3 = (QPixmap *)param_1[5];
  QString::fromUtf8_helper((char *)&local_d0,0x1e1516c);
  QPixmap::QPixmap(local_c8,&local_d0,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_28 = *(int *)local_d0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075e92d;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10075e92d:
  QLabel::setScaledContents(SUB81(param_1[5],0));
  QBoxLayout::addWidget(param_1[4],param_1[5],0,0);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[6] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar2 = (QString *)param_1[6];
  QString::fromUtf8_helper((char *)&local_d8,0x1df027f);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_28 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075e9d0;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10075e9d0:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5);
  param_1[7] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[7];
  QString::fromUtf8_helper((char *)&local_e0,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_28 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075ea54;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10075ea54:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[3],0);
  param_1[8] = pQVar6;
  QString::fromUtf8_helper((char *)&local_e8,0x1e15186);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_28 = *(int *)local_e8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075ead0;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10075ead0:
  QWidget::setMinimumSize((int)param_1[8],0);
  QPalette::QPalette(local_f8);
  QPalette::setBrush(local_f8,0,0,local_50);
  QPalette::setBrush(local_f8,2,0,local_50);
  QColor::setRgb((int)local_110,0x7f,0x7f,0x7f);
  QBrush::QBrush(local_100,local_110,1);
  QBrush::setStyle(local_100,1);
  QPalette::setBrush(local_f8,1,0,local_100);
  QWidget::setPalette((QPalette *)param_1[8]);
  QFont::QFont((QFont *)local_120);
  QString::fromUtf8_helper((char *)&local_128,0x1db3ea0);
  QFont::setFamily(local_120);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_28 = *(int *)local_128 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075ebf8;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10075ebf8:
  QFont::setPointSize((int)local_120);
  QWidget::setFont((QFont *)param_1[8]);
  QLabel::setAlignment(param_1[8],0x21);
  QBoxLayout::addWidget(param_1[7],param_1[8],0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[3],0);
  param_1[9] = pQVar6;
  QString::fromUtf8_helper((char *)&local_130,0x1e1519d);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_28 = *(int *)local_130 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075ecb4;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10075ecb4:
  QPalette::QPalette(local_140);
  QColor::setRgb((int)local_158,0xff,0xff,0xff);
  QBrush::QBrush(local_148,local_158,1);
  QBrush::setStyle(local_148,1);
  QPalette::setBrush(local_140,0,0,local_148);
  QPalette::setBrush(local_140,2,0,local_148);
  QPalette::setBrush(local_140,1,0);
  QWidget::setPalette((QPalette *)param_1[9]);
  QFont::QFont((QFont *)local_168);
  QString::fromUtf8_helper((char *)&local_170,0x1db3ea0);
  QFont::setFamily(local_168);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_28 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075edd2;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10075edd2:
  QFont::setPointSize((int)local_168);
  QWidget::setFont((QFont *)param_1[9]);
  QLabel::setAlignment(param_1[9],0x41);
  QBoxLayout::addWidget(param_1[7],param_1[9],0);
  QBoxLayout::addLayout((QLayout *)param_1[6],(int)param_1[7]);
  pQVar10 = operator_new(0x30);
  QPushButton::QPushButton(pQVar10,(QWidget *)param_1[3]);
  param_1[10] = pQVar10;
  QString::fromUtf8_helper((char *)&local_178,0x1e151ba);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_28 = *(int *)local_178 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075ee9b;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10075ee9b:
  local_180[0] = 0;
  QSizePolicy::setControlType(local_180,1);
  local_180[0] = local_180[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_180[0] = local_180[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[10]);
  QWidget::setFont((QFont *)param_1[10]);
  QBoxLayout::addWidget(param_1[6],param_1[10],0);
  QBoxLayout::addLayout((QLayout *)param_1[4],(int)param_1[6]);
  QBoxLayout::addWidget(*param_1,param_1[3],0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[0xb] = pQVar8;
  QString::fromUtf8_helper((char *)&local_188,0x1e151d2);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_28 = *(int *)local_188 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075efa5;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_10075efa5:
  uVar4 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0xb]);
  QWidget::setMinimumSize((int)param_1[0xb],0);
  QWidget::setMaximumSize((int)param_1[0xb],0xffffff);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[0xb]);
  param_1[0xc] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0xc];
  QString::fromUtf8_helper((char *)&local_190,0x1dd6e2a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_28 = *(int *)local_190 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f07d;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_10075f07d:
  QLayout::setContentsMargins((int)param_1[0xc],0,0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0xb],0);
  param_1[0xd] = pQVar6;
  QString::fromUtf8_helper((char *)&local_198,0x1e151e3);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_28 = *(int *)local_198 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f10b;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10075f10b:
  QWidget::setMinimumSize((int)param_1[0xd],0);
  QWidget::setMaximumSize((int)param_1[0xd],0xffffff);
  pQVar3 = (QPixmap *)param_1[0xd];
  QString::fromUtf8_helper((char *)&local_1c0,0x1e1516c);
  QPixmap::QPixmap(local_1b8,&local_1c0,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_1b8);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_28 = *(int *)local_1c0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f1b2;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_10075f1b2:
  QLabel::setScaledContents(SUB81(param_1[0xd],0));
  QBoxLayout::addWidget(param_1[0xc],param_1[0xd],0,0);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[0xe] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar2 = (QString *)param_1[0xe];
  QString::fromUtf8_helper((char *)&local_1c8,0x1df025a);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_28 = *(int *)local_1c8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f255;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_10075f255:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5);
  param_1[0xf] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0xf];
  QString::fromUtf8_helper((char *)&local_1d0,0x1df0c61);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_28 = *(int *)local_1d0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f2d9;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_10075f2d9:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0xb],0);
  param_1[0x10] = pQVar6;
  QString::fromUtf8_helper((char *)&local_1d8,0x1e151fb);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_28 = *(int *)local_1d8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f358;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_10075f358:
  QWidget::setMinimumSize((int)param_1[0x10],0);
  QPalette::QPalette(local_1e8);
  QPalette::setBrush(local_1e8,0,0,local_50);
  QPalette::setBrush(local_1e8,2,0,local_50);
  QPalette::setBrush(local_1e8,1,0,local_100);
  QWidget::setPalette((QPalette *)param_1[0x10]);
  QWidget::setFont((QFont *)param_1[0x10]);
  QLabel::setAlignment(param_1[0x10],0x21);
  QBoxLayout::addWidget(param_1[0xf],param_1[0x10],0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0xb],0);
  param_1[0x11] = pQVar6;
  QString::fromUtf8_helper((char *)&local_1f0,0x1e15211);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_28 = *(int *)local_1f0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f486;
    }
    QArrayData::deallocate(local_1f0,2,8);
  }
LAB_10075f486:
  QPalette::QPalette(local_200);
  QPalette::setBrush(local_200,0,0,local_148);
  QPalette::setBrush(local_200,2,0,local_148);
  QPalette::setBrush(local_200,1,0);
  QWidget::setPalette((QPalette *)param_1[0x11]);
  QWidget::setFont((QFont *)param_1[0x11]);
  QLabel::setAlignment(param_1[0x11],0x41);
  QBoxLayout::addWidget(param_1[0xf],param_1[0x11],0);
  QBoxLayout::addLayout((QLayout *)param_1[0xe],(int)param_1[0xf]);
  pQVar10 = operator_new(0x30);
  QPushButton::QPushButton(pQVar10,(QWidget *)param_1[0xb]);
  param_1[0x12] = pQVar10;
  QString::fromUtf8_helper((char *)&local_208,0x1e1522d);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_208 != -1) {
    if (*(int *)local_208 != 0) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + -1;
      local_28 = *(int *)local_208 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f5b4;
    }
    QArrayData::deallocate(local_208,2,8);
  }
LAB_10075f5b4:
  uVar4 = QWidget::sizePolicy();
  local_180[0] = local_180[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x12]);
  QWidget::setFont((QFont *)param_1[0x12]);
  QBoxLayout::addWidget(param_1[0xe],param_1[0x12],0);
  QBoxLayout::addLayout((QLayout *)param_1[0xc],(int)param_1[0xe]);
  QBoxLayout::addWidget(*param_1,param_1[0xb],0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[0x13] = pQVar8;
  QString::fromUtf8_helper((char *)&local_210,0x1e15244);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_28 = *(int *)local_210 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f6a8;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_10075f6a8:
  uVar4 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x13]);
  QWidget::setMinimumSize((int)param_1[0x13],0);
  QWidget::setMaximumSize((int)param_1[0x13],0xffffff);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[0x13]);
  param_1[0x14] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0x14];
  QString::fromUtf8_helper((char *)&local_218,0x1df07b1);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_28 = *(int *)local_218 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f795;
    }
    QArrayData::deallocate(local_218,2,8);
  }
LAB_10075f795:
  QLayout::setContentsMargins((int)param_1[0x14],0,0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x13],0);
  param_1[0x15] = pQVar6;
  QString::fromUtf8_helper((char *)&local_220,0x1e15256);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_28 = *(int *)local_220 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f82c;
    }
    QArrayData::deallocate(local_220,2,8);
  }
LAB_10075f82c:
  QWidget::setMinimumSize((int)param_1[0x15],0);
  QWidget::setMaximumSize((int)param_1[0x15],0xffffff);
  pQVar3 = (QPixmap *)param_1[0x15];
  QString::fromUtf8_helper((char *)&local_248,0x1e1516c);
  QPixmap::QPixmap(local_240,&local_248,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_240);
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_28 = *(int *)local_248 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f8dc;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_10075f8dc:
  QLabel::setScaledContents(SUB81(param_1[0x15],0));
  QBoxLayout::addWidget(param_1[0x14],param_1[0x15],0,0);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[0x16] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar2 = (QString *)param_1[0x16];
  QString::fromUtf8_helper((char *)&local_250,0x1df0473);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_28 = *(int *)local_250 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075f98e;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_10075f98e:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5);
  param_1[0x17] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0x17];
  QString::fromUtf8_helper((char *)&local_258,0x1e1526f);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_28 = *(int *)local_258 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075fa18;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_10075fa18:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x13],0);
  param_1[0x18] = pQVar6;
  QString::fromUtf8_helper((char *)&local_260,0x1e15280);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_28 = *(int *)local_260 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075fa9a;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_10075fa9a:
  QWidget::setMinimumSize((int)param_1[0x18],0);
  QPalette::QPalette(local_270);
  QPalette::setBrush(local_270,0,0,local_50);
  QPalette::setBrush(local_270,2,0,local_50);
  QPalette::setBrush(local_270,1,0,local_100);
  QWidget::setPalette((QPalette *)param_1[0x18]);
  QWidget::setFont((QFont *)param_1[0x18]);
  QLabel::setAlignment(param_1[0x18],0x21);
  QBoxLayout::addWidget(param_1[0x17],param_1[0x18],0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x13],0);
  param_1[0x19] = pQVar6;
  QString::fromUtf8_helper((char *)&local_278,0x1e15297);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_28 = *(int *)local_278 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075fbce;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_10075fbce:
  QPalette::QPalette(local_288);
  QPalette::setBrush(local_288,0,0,local_148);
  QPalette::setBrush(local_288,2,0,local_148);
  QPalette::setBrush(local_288,1,0);
  QWidget::setPalette((QPalette *)param_1[0x19]);
  QWidget::setFont((QFont *)param_1[0x19]);
  QLabel::setAlignment(param_1[0x19],0x41);
  QBoxLayout::addWidget(param_1[0x17],param_1[0x19],0);
  QBoxLayout::addLayout((QLayout *)param_1[0x16],(int)param_1[0x17]);
  pQVar10 = operator_new(0x30);
  QPushButton::QPushButton(pQVar10,(QWidget *)param_1[0x13]);
  param_1[0x1a] = pQVar10;
  QString::fromUtf8_helper((char *)&local_290,0x1e152b4);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_28 = *(int *)local_290 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075fd08;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_10075fd08:
  uVar4 = QWidget::sizePolicy();
  local_180[0] = local_180[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x1a]);
  QWidget::setFont((QFont *)param_1[0x1a]);
  QBoxLayout::addWidget(param_1[0x16],param_1[0x1a],0);
  QBoxLayout::addLayout((QLayout *)param_1[0x14],(int)param_1[0x16]);
  QBoxLayout::addWidget(*param_1,param_1[0x13],0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[0x1b] = pQVar8;
  QString::fromUtf8_helper((char *)&local_298,0x1e152cc);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_28 = *(int *)local_298 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075fe08;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_10075fe08:
  uVar4 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x1b]);
  QWidget::setMinimumSize((int)param_1[0x1b],0);
  QWidget::setMaximumSize((int)param_1[0x1b],0xffffff);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[0x1b]);
  param_1[0x1c] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0x1c];
  QString::fromUtf8_helper((char *)&local_2a0,0x1e152db);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_28 = *(int *)local_2a0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075fef5;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_10075fef5:
  QLayout::setContentsMargins((int)param_1[0x1c],0,0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x1b],0);
  param_1[0x1d] = pQVar6;
  QString::fromUtf8_helper((char *)&local_2a8,0x1e152ec);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_2a8 != -1) {
    if (*(int *)local_2a8 != 0) {
      LOCK();
      *(int *)local_2a8 = *(int *)local_2a8 + -1;
      local_28 = *(int *)local_2a8 != 0;
      UNLOCK();
      if (local_28) goto LAB_10075ff8c;
    }
    QArrayData::deallocate(local_2a8,2,8);
  }
LAB_10075ff8c:
  QWidget::setMinimumSize((int)param_1[0x1d],0);
  QWidget::setMaximumSize((int)param_1[0x1d],0xffffff);
  pQVar3 = (QPixmap *)param_1[0x1d];
  QString::fromUtf8_helper((char *)&local_2d0,0x1e1516c);
  QPixmap::QPixmap(local_2c8,&local_2d0,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_2c8);
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      local_28 = *(int *)local_2d0 != 0;
      UNLOCK();
      if (local_28) goto LAB_10076003c;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_10076003c:
  QLabel::setScaledContents(SUB81(param_1[0x1d],0));
  QBoxLayout::addWidget(param_1[0x1c],param_1[0x1d],0,0);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[0x1e] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar2 = (QString *)param_1[0x1e];
  QString::fromUtf8_helper((char *)&local_2d8,0x1df040e);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_28 = *(int *)local_2d8 != 0;
      UNLOCK();
      if (local_28) goto LAB_1007600ee;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_1007600ee:
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5);
  param_1[0x1f] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0x1f];
  QString::fromUtf8_helper((char *)&local_2e0,0x1e15302);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_28 = *(int *)local_2e0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100760178;
    }
    QArrayData::deallocate(local_2e0,2,8);
  }
LAB_100760178:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x1b],0);
  param_1[0x20] = pQVar6;
  QString::fromUtf8_helper((char *)&local_2e8,0x1e15314);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_28 = *(int *)local_2e8 != 0;
      UNLOCK();
      if (local_28) goto LAB_1007601fa;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_1007601fa:
  QWidget::setMinimumSize((int)param_1[0x20],0);
  QPalette::QPalette(local_2f8);
  QPalette::setBrush(local_2f8,0,0,local_50);
  QPalette::setBrush(local_2f8,2,0,local_50);
  QPalette::setBrush(local_2f8,1,0,local_100);
  QWidget::setPalette((QPalette *)param_1[0x20]);
  QWidget::setFont((QFont *)param_1[0x20]);
  QLabel::setAlignment(param_1[0x20],0x21);
  QBoxLayout::addWidget(param_1[0x1f],param_1[0x20],0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x1b],0);
  param_1[0x21] = pQVar6;
  QString::fromUtf8_helper((char *)&local_300,0x1e15328);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_28 = *(int *)local_300 != 0;
      UNLOCK();
      if (local_28) goto LAB_10076032e;
    }
    QArrayData::deallocate(local_300,2,8);
  }
LAB_10076032e:
  QWidget::setMaximumSize((int)param_1[0x21],0xffffff);
  QPalette::QPalette(local_310);
  QPalette::setBrush(local_310,0,0,local_148);
  QPalette::setBrush(local_310,2,0,local_148);
  QPalette::setBrush(local_310,1,0);
  QWidget::setPalette((QPalette *)param_1[0x21]);
  QWidget::setFont((QFont *)param_1[0x21]);
  QLabel::setAlignment(param_1[0x21],0x41);
  QBoxLayout::addWidget(param_1[0x1f],param_1[0x21],0);
  QBoxLayout::addLayout((QLayout *)param_1[0x1e],(int)param_1[0x1f]);
  pQVar10 = operator_new(0x30);
  QPushButton::QPushButton(pQVar10,(QWidget *)param_1[0x1b]);
  param_1[0x22] = pQVar10;
  QString::fromUtf8_helper((char *)&local_318,0x1e15342);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_28 = *(int *)local_318 != 0;
      UNLOCK();
      if (local_28) goto LAB_10076047e;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_10076047e:
  uVar4 = QWidget::sizePolicy();
  local_180[0] = local_180[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x22]);
  QWidget::setFont((QFont *)param_1[0x22]);
  QBoxLayout::addWidget(param_1[0x1e],param_1[0x22],0);
  QBoxLayout::addLayout((QLayout *)param_1[0x1c],(int)param_1[0x1e]);
  QBoxLayout::addWidget(*param_1,param_1[0x1b],0);
  pQVar8 = operator_new(0x30);
  QWidget::QWidget(pQVar8,param_2,0);
  param_1[0x23] = pQVar8;
  QString::fromUtf8_helper((char *)&local_320,0x1e15357);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_28 = *(int *)local_320 != 0;
      UNLOCK();
      if (local_28) goto LAB_10076057e;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_10076057e:
  uVar4 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x23]);
  QWidget::setMinimumSize((int)param_1[0x23],0);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5,(QWidget *)param_1[0x23]);
  param_1[0x24] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0x24];
  QString::fromUtf8_helper((char *)&local_328,0x1df0811);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_328 != -1) {
    if (*(int *)local_328 != 0) {
      LOCK();
      *(int *)local_328 = *(int *)local_328 + -1;
      local_28 = *(int *)local_328 != 0;
      UNLOCK();
      if (local_28) goto LAB_100760655;
    }
    QArrayData::deallocate(local_328,2,8);
  }
LAB_100760655:
  QLayout::setContentsMargins((int)param_1[0x24],0,0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x23],0);
  param_1[0x25] = pQVar6;
  QString::fromUtf8_helper((char *)&local_330,0x1e15368);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_330 != -1) {
    if (*(int *)local_330 != 0) {
      LOCK();
      *(int *)local_330 = *(int *)local_330 + -1;
      local_28 = *(int *)local_330 != 0;
      UNLOCK();
      if (local_28) goto LAB_1007606ec;
    }
    QArrayData::deallocate(local_330,2,8);
  }
LAB_1007606ec:
  QWidget::setMinimumSize((int)param_1[0x25],0);
  QWidget::setMaximumSize((int)param_1[0x25],0xffffff);
  pQVar3 = (QPixmap *)param_1[0x25];
  QString::fromUtf8_helper((char *)&local_358,0x1e1516c);
  QPixmap::QPixmap(local_350,&local_358,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_350);
  if (*(int *)local_358 != -1) {
    if (*(int *)local_358 != 0) {
      LOCK();
      *(int *)local_358 = *(int *)local_358 + -1;
      local_28 = *(int *)local_358 != 0;
      UNLOCK();
      if (local_28) goto LAB_10076079c;
    }
    QArrayData::deallocate(local_358,2,8);
  }
LAB_10076079c:
  QLabel::setScaledContents(SUB81(param_1[0x25],0));
  QBoxLayout::addWidget(param_1[0x24],param_1[0x25],0);
  pQVar9 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(pQVar9);
  param_1[0x26] = pQVar9;
  QBoxLayout::setSpacing((int)pQVar9);
  pQVar2 = (QString *)param_1[0x26];
  QString::fromUtf8_helper((char *)&local_360,0x1df04e1);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_360 != -1) {
    if (*(int *)local_360 != 0) {
      LOCK();
      *(int *)local_360 = *(int *)local_360 + -1;
      local_28 = *(int *)local_360 != 0;
      UNLOCK();
      if (local_28) goto LAB_10076084e;
    }
    QArrayData::deallocate(local_360,2,8);
  }
LAB_10076084e:
  QLayout::setContentsMargins((int)param_1[0x26],0,0,0);
  pQVar5 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar5);
  param_1[0x27] = pQVar5;
  QBoxLayout::setSpacing((int)pQVar5);
  pQVar2 = (QString *)param_1[0x27];
  QString::fromUtf8_helper((char *)&local_368,0x1e15380);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_368 != -1) {
    if (*(int *)local_368 != 0) {
      LOCK();
      *(int *)local_368 = *(int *)local_368 + -1;
      local_28 = *(int *)local_368 != 0;
      UNLOCK();
      if (local_28) goto LAB_1007608ed;
    }
    QArrayData::deallocate(local_368,2,8);
  }
LAB_1007608ed:
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x23],0);
  param_1[0x28] = pQVar6;
  QString::fromUtf8_helper((char *)&local_370,0x1e15391);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_370 != -1) {
    if (*(int *)local_370 != 0) {
      LOCK();
      *(int *)local_370 = *(int *)local_370 + -1;
      local_28 = *(int *)local_370 != 0;
      UNLOCK();
      if (local_28) goto LAB_10076096f;
    }
    QArrayData::deallocate(local_370,2,8);
  }
LAB_10076096f:
  QWidget::setMinimumSize((int)param_1[0x28],0);
  QPalette::QPalette(local_380);
  QPalette::setBrush(local_380,0,0,local_50);
  QPalette::setBrush(local_380,2,0,local_50);
  QPalette::setBrush(local_380,1,0,local_100);
  QWidget::setPalette((QPalette *)param_1[0x28]);
  QWidget::setFont((QFont *)param_1[0x28]);
  QLabel::setAlignment(param_1[0x28],0x21);
  QBoxLayout::addWidget(param_1[0x27],param_1[0x28],0,0);
  pQVar6 = operator_new(0x30);
  QLabel::QLabel(pQVar6,param_1[0x23],0);
  param_1[0x29] = pQVar6;
  QString::fromUtf8_helper((char *)&local_388,0x1e153a7);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_388 != -1) {
    if (*(int *)local_388 != 0) {
      LOCK();
      *(int *)local_388 = *(int *)local_388 + -1;
      local_28 = *(int *)local_388 != 0;
      UNLOCK();
      if (local_28) goto LAB_100760aa3;
    }
    QArrayData::deallocate(local_388,2,8);
  }
LAB_100760aa3:
  QPalette::QPalette(local_398);
  QPalette::setBrush(local_398,0,0,local_148);
  QPalette::setBrush(local_398,2,0,local_148);
  QPalette::setBrush(local_398,1,0,local_100);
  QWidget::setPalette((QPalette *)param_1[0x29]);
  QWidget::setFont((QFont *)param_1[0x29]);
  QLabel::setAlignment(param_1[0x29],0x41);
  QBoxLayout::addWidget(param_1[0x27],param_1[0x29],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[0x26],(int)param_1[0x27]);
  pQVar10 = operator_new(0x30);
  QPushButton::QPushButton(pQVar10,(QWidget *)param_1[0x23]);
  param_1[0x2a] = pQVar10;
  QString::fromUtf8_helper((char *)&local_3a0,0x1e153c3);
  QObject::setObjectName((QString *)pQVar10);
  if (*(int *)local_3a0 != -1) {
    if (*(int *)local_3a0 != 0) {
      LOCK();
      *(int *)local_3a0 = *(int *)local_3a0 + -1;
      local_28 = *(int *)local_3a0 != 0;
      UNLOCK();
      if (local_28) goto LAB_100760bdd;
    }
    QArrayData::deallocate(local_3a0,2,8);
  }
LAB_100760bdd:
  uVar4 = QWidget::sizePolicy();
  local_180[0] = local_180[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[0x2a]);
  QWidget::setFont((QFont *)param_1[0x2a]);
  QBoxLayout::addWidget(param_1[0x26],param_1[0x2a],0,0);
  QBoxLayout::addLayout((QLayout *)param_1[0x24],(int)param_1[0x26]);
  QBoxLayout::addWidget(*param_1,param_1[0x23],0,0);
  FUN_100761f20(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QPalette::~QPalette(local_398);
  QPalette::~QPalette(local_380);
  QPalette::~QPalette(local_310);
  QPalette::~QPalette(local_2f8);
  QPalette::~QPalette(local_288);
  QPalette::~QPalette(local_270);
  QPalette::~QPalette(local_200);
  QPalette::~QPalette(local_1e8);
  QFont::~QFont((QFont *)local_168);
  QBrush::~QBrush(local_148);
  QPalette::~QPalette(local_140);
  QFont::~QFont((QFont *)local_120);
  QBrush::~QBrush(local_100);
  QPalette::~QPalette(local_f8);
  QBrush::~QBrush(local_68);
  QBrush::~QBrush(local_50);
  QPalette::~QPalette(local_48);
  return;
}

