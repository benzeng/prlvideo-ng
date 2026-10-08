
void FUN_1004e30b0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QPixmap *pQVar2;
  char *pcVar3;
  uint uVar4;
  QGridLayout *this;
  QVBoxLayout *this_00;
  QStackedWidget *pQVar5;
  QWidget *pQVar6;
  QString *pQVar7;
  QPushButton *this_01;
  QHBoxLayout *this_02;
  QLabel *pQVar8;
  undefined8 *puVar9;
  QArrayData *local_100;
  QVariant local_f8;
  uint local_e8 [2];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QPixmap local_d0 [32];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  uint local_78 [2];
  QArrayData *local_70;
  QArrayData *local_68;
  uint local_60 [2];
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
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
      if (*(int *)local_38 != 0) goto LAB_1004e3104;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004e3104:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1dfb0cd);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_1004e315b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1004e315b:
  local_30 = true;
  uStack_2f = 0x181000002;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_48,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_30 = *(int *)local_48 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e31e3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004e31e3:
  QGridLayout::setVerticalSpacing((int)*param_1);
  this_00 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_00);
  param_1[1] = this_00;
  QBoxLayout::setSpacing((int)this_00);
  pQVar7 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_50,0x1dc1597);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e3267;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004e3267:
  QLayout::setContentsMargins((int)param_1[1],-1,-1,6);
  pQVar5 = operator_new(0x30);
  QStackedWidget::QStackedWidget(pQVar5,(QWidget *)param_2);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_58,0x1dfb0b4);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e32f4;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004e32f4:
  local_60[0] = 0x750000;
  QSizePolicy::setControlType(local_60,1);
  local_60[0] = CONCAT22(local_60[0]._2_2_,0x100);
  uVar4 = QWidget::sizePolicy();
  local_60[0] = local_60[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[2]);
  QFrame::setFrameShape(param_1[2],0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[3] = pQVar6;
  QString::fromUtf8_helper((char *)&local_68,0x1dfb0e1);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e33ae;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004e33ae:
  QStackedWidget::addWidget((QWidget *)param_1[2]);
  QBoxLayout::addWidget(param_1[1],param_1[2],0,0);
  QGridLayout::addLayout(*param_1,param_1[1],0,1,1,3,0);
  pQVar7 = operator_new(0x38);
  FUN_100138970(pQVar7,param_2);
  param_1[4] = pQVar7;
  QString::fromUtf8_helper((char *)&local_70,0x1dfb039);
  QObject::setObjectName(pQVar7);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e3461;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004e3461:
  local_78[0] = 0x750000;
  QSizePolicy::setControlType(local_78,1);
  local_78[0] = local_78[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_78[0] = local_78[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[4]);
  pQVar7 = (QString *)param_1[4];
  QString::fromUtf8_helper((char *)&local_80,0x1e41978);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_30 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e34f5;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004e34f5:
  QAbstractItemView::setAlternatingRowColors(SUB81(param_1[4],0));
  QGridLayout::addWidget(*param_1,param_1[4],0,0,2,1,0);
  this_01 = operator_new(0x30);
  QPushButton::QPushButton(this_01,(QWidget *)param_2);
  param_1[5] = this_01;
  QString::fromUtf8_helper((char *)&local_88,0x1df7292);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e3595;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004e3595:
  pQVar7 = (QString *)param_1[5];
  QString::fromUtf8_helper((char *)&local_90,0x1e41978);
  QWidget::setStyleSheet(pQVar7);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_30 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e35f2;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004e35f2:
  QGridLayout::addWidget(*param_1,param_1[5],2,3,1,1,0);
  pQVar5 = operator_new(0x30);
  QStackedWidget::QStackedWidget(pQVar5,(QWidget *)param_2);
  param_1[6] = pQVar5;
  QString::fromUtf8_helper((char *)&local_98,0x1dfb0e8);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e3693;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004e3693:
  QWidget::setMinimumSize((int)param_1[6],0);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[7] = pQVar6;
  QString::fromUtf8_helper((char *)&local_a0,0x1dfb100);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e3719;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004e3719:
  this_02 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_02,(QWidget *)param_1[7]);
  param_1[8] = this_02;
  QString::fromUtf8_helper((char *)&local_a8,0x1df0473);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_30 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e3792;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004e3792:
  QLayout::setContentsMargins((int)param_1[8],0,0,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[7],0);
  param_1[9] = pQVar8;
  QString::fromUtf8_helper((char *)&local_b0,0x1dfb11c);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_30 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e381f;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004e381f:
  pQVar2 = (QPixmap *)param_1[9];
  QString::fromUtf8_helper((char *)&local_d8,0x1df432b);
  QPixmap::QPixmap(local_d0,&local_d8,0,0);
  QLabel::setPixmap(pQVar2);
  QPixmap::~QPixmap(local_d0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_30 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e38a2;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1004e38a2:
  QLabel::setAlignment(param_1[9],0x21);
  QBoxLayout::addWidget(param_1[8],param_1[9],0,0);
  pQVar8 = operator_new(0x30);
  QLabel::QLabel(pQVar8,param_1[7],0);
  param_1[10] = pQVar8;
  QString::fromUtf8_helper((char *)&local_e0,0x1dfb138);
  QObject::setObjectName((QString *)pQVar8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_30 = *(int *)local_e0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e393c;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1004e393c:
  local_e8[0] = 0x550000;
  QSizePolicy::setControlType(local_e8,1);
  local_e8[0] = local_e8[0] & 0xffff0000;
  uVar4 = QWidget::sizePolicy();
  local_e8[0] = local_e8[0] & 0xdfffffff | uVar4 & 0x20000000;
  QWidget::setSizePolicy(param_1[10]);
  QLabel::setAlignment(param_1[10],0x21);
  QLabel::setWordWrap(SUB81(param_1[10],0));
  pcVar3 = (char *)param_1[10];
  QVariant::QVariant(&local_f8,true);
  QObject::setProperty(pcVar3,(QVariant *)"SmallFont");
  QVariant::~QVariant(&local_f8);
  QBoxLayout::addWidget(param_1[8],param_1[10],0,0);
  QBoxLayout::setStretch((int)param_1[8],1);
  QStackedWidget::addWidget((QWidget *)param_1[6]);
  pQVar6 = operator_new(0x30);
  QWidget::QWidget(pQVar6,0,0);
  param_1[0xb] = pQVar6;
  QString::fromUtf8_helper((char *)&local_100,0x1dfb0c8);
  QObject::setObjectName((QString *)pQVar6);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_30 = *(int *)local_100 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004e3a87;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1004e3a87:
  QStackedWidget::addWidget((QWidget *)param_1[6]);
  QGridLayout::addWidget(*param_1,param_1[6],1,1,1,3,0);
  puVar9 = operator_new(0x28);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar9 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar9 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar9 + 0x14,1);
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
  param_1[0xc] = puVar9;
  QGridLayout::addItem(*param_1,puVar9,2,2,1,1,0);
  QGridLayout::setRowStretch((int)*param_1,0);
  FUN_1004e4050(param_1,param_2);
  QStackedWidget::setCurrentIndex((int)param_1[2]);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

