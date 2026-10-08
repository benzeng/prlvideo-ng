
void FUN_100144ca0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QVBoxLayout *this;
  QLabel *pQVar3;
  QTextBrowser *this_00;
  QProgressBar *this_01;
  QHBoxLayout *this_02;
  undefined8 *puVar4;
  QPushButton *this_03;
  QArrayData *local_b0;
  uint local_a8 [2];
  QArrayData *local_a0;
  QArrayData *local_98;
  uint local_90 [2];
  QArrayData *local_88;
  QFont local_80 [16];
  QArrayData *local_70;
  QFont local_68 [16];
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
      if (*(int *)local_38 != 0) goto LAB_100144cf4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100144cf4:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1dc126c);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_100144d4b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100144d4b:
  local_30 = true;
  uStack_2f = 0xdc000001;
  QWidget::resize(param_2);
  local_48[0] = 0;
  QSizePolicy::setControlType(local_48,1);
  local_48[0] = local_48[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_48[0] = local_48[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_50,0x1dc1284);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_100144e11;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100144e11:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1dc128f);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_100144e82;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100144e82:
  QFont::QFont(local_68);
  QFont::setWeight((int)local_68);
  QFont::setWeight((int)local_68);
  QWidget::setFont((QFont *)param_1[1]);
  QLabel::setAlignment(param_1[1],0x81);
  QBoxLayout::addWidget(*param_1,param_1[1],0,0);
  this_00 = operator_new(0x30);
  QTextBrowser::QTextBrowser(this_00,(QWidget *)param_2);
  param_1[2] = this_00;
  QString::fromUtf8_helper((char *)&local_70,0x1dc129a);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_100144f41;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100144f41:
  QFont::QFont(local_80);
  QFont::setPointSize((int)local_80);
  QWidget::setFont((QFont *)param_1[2]);
  QWidget::setAutoFillBackground(SUB81(param_1[2],0));
  QFrame::setFrameShape(param_1[2],0);
  QFrame::setFrameShadow(param_1[2],0x10);
  QBoxLayout::addWidget(*param_1,param_1[2],0,0);
  this_01 = operator_new(0x30);
  QProgressBar::QProgressBar(this_01,(QWidget *)param_2);
  param_1[3] = this_01;
  QString::fromUtf8_helper((char *)&local_88,0x1dc12a5);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_100145009;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100145009:
  QWidget::setEnabled(SUB81(param_1[3],0));
  local_90[0] = 0x70000;
  QSizePolicy::setControlType(local_90,1);
  local_90[0] = local_90[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_90[0] = local_90[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QProgressBar::setValue((int)param_1[3]);
  QProgressBar::setAlignment(param_1[3],4);
  QProgressBar::setOrientation(param_1[3],1);
  QBoxLayout::addWidget(*param_1,param_1[3],0,0);
  this_02 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_02);
  param_1[4] = this_02;
  QString::fromUtf8_helper((char *)&local_98,0x1dc12b3);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_100145113;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100145113:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[5] = pQVar3;
  QString::fromUtf8_helper((char *)&local_a0,0x1dc12be);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_10014518e;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10014518e:
  local_a8[0] = 0x570000;
  QSizePolicy::setControlType(local_a8,1);
  local_a8[0] = local_a8[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_a8[0] = local_a8[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QWidget::setFont((QFont *)param_1[5]);
  QBoxLayout::addWidget(param_1[4],param_1[5],0,0);
  puVar4 = operator_new(0x28);
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar4 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar4 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar4 + 0x14,1);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar4 + 0x24) = 0xffffffff;
  param_1[6] = puVar4;
  (**(code **)(*(long *)param_1[4] + 0x70))((long *)param_1[4],puVar4);
  this_03 = operator_new(0x30);
  QPushButton::QPushButton(this_03,(QWidget *)param_2);
  param_1[7] = this_03;
  QString::fromUtf8_helper((char *)&local_b0,0x1dc12ca);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_30 = *(int *)local_b0 != 0;
      UNLOCK();
      if (local_30) goto LAB_1001452ec;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1001452ec:
  QBoxLayout::addWidget(param_1[4],param_1[7],0,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[4]);
  FUN_100146240(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_80);
  QFont::~QFont(local_68);
  return;
}

