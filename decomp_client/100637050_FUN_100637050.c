
void FUN_100637050(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QVBoxLayout *pQVar4;
  QLabel *pQVar5;
  QListView *this;
  QCheckBox *this_00;
  QHBoxLayout *this_01;
  undefined8 *puVar6;
  QPushButton *pQVar7;
  Connection local_b8 [8];
  Connection local_b0 [8];
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78 [2];
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
      if (*(int *)local_38 != 0) goto LAB_1006370a4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006370a4:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e096c1);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_1006370fb;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1006370fb:
  local_30 = true;
  uStack_2f = 0x15e000002;
  QWidget::resize(param_2);
  local_48[0] = 0;
  QSizePolicy::setControlType(local_48,1);
  local_48[0] = local_48[0] & 0xffff0000;
  uVar3 = QWidget::sizePolicy();
  local_48[0] = local_48[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_2);
  QWidget::setMinimumSize((int)param_2,0x21c);
  QWidget::setMaximumSize((int)param_2,0x21c);
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_2);
  *param_1 = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)*param_1;
  QString::fromUtf8_helper((char *)&local_50,0x1dd6e19);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006371f5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006371f5:
  pQVar4 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(pQVar4);
  param_1[1] = pQVar4;
  QBoxLayout::setSpacing((int)pQVar4);
  pQVar2 = (QString *)param_1[1];
  QString::fromUtf8_helper((char *)&local_58,0x1dc1597);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_100637272;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100637272:
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[2] = pQVar5;
  QString::fromUtf8_helper((char *)&local_60,0x1dd681a);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006372e3;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006372e3:
  QBoxLayout::addWidget(param_1[1],param_1[2],0,0);
  this = operator_new(0x30);
  QListView::QListView(this,(QWidget *)param_2);
  param_1[3] = this;
  QString::fromUtf8_helper((char *)&local_68,0x1dff119);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_100637363;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100637363:
  QFont::QFont((QFont *)local_78);
  QString::fromUtf8_helper((char *)&local_80,0x1e096d7);
  QFont::setFamily(local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_30 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006373be;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006373be:
  QWidget::setFont((QFont *)param_1[3]);
  QBoxLayout::addWidget(param_1[1],param_1[3],0,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_88,0x1e096de);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_100637459;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100637459:
  QLabel::setAlignment(param_1[4],0x41);
  QLabel::setWordWrap(SUB81(param_1[4],0));
  QLabel::setOpenExternalLinks(SUB81(param_1[4],0));
  QLabel::setTextInteractionFlags(param_1[4],0xf);
  QBoxLayout::addWidget(*param_1,param_1[4],0,0);
  this_00 = operator_new(0x30);
  QCheckBox::QCheckBox(this_00,(QWidget *)param_2);
  param_1[5] = this_00;
  QString::fromUtf8_helper((char *)&local_90,0x1e096ea);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_30 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_30) goto LAB_10063751a;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10063751a:
  QBoxLayout::addWidget(*param_1,param_1[5],0,0);
  this_01 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_01);
  param_1[6] = this_01;
  QString::fromUtf8_helper((char *)&local_98,0x1df0473);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_1006375a0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1006375a0:
  puVar6 = operator_new(0x28);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = PTR_vtable_1021e17a0 + 0x10;
  *(undefined8 *)((long)puVar6 + 0xc) = 0x1400000028;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar6 + 0x14,1);
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((long)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar6 + 0x24) = 0xffffffff;
  param_1[7] = puVar6;
  (**(code **)(*(long *)param_1[6] + 0x70))((long *)param_1[6],puVar6);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_2);
  param_1[8] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a0,0x1e096f5);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_30 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_30) goto LAB_100637691;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100637691:
  QWidget::setEnabled(SUB81(param_1[8],0));
  QBoxLayout::addWidget(param_1[6],param_1[8],0,0);
  pQVar7 = operator_new(0x30);
  QPushButton::QPushButton(pQVar7,(QWidget *)param_2);
  param_1[9] = pQVar7;
  QString::fromUtf8_helper((char *)&local_a8,0x1e09706);
  QObject::setObjectName((QString *)pQVar7);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_30 = *(int *)local_a8 != 0;
      UNLOCK();
      if (local_30) goto LAB_100637726;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100637726:
  QBoxLayout::addWidget(param_1[6],param_1[9],0,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[6]);
  QBoxLayout::setStretch((int)*param_1,0);
  FUN_100637b40(param_1,param_2);
  QObject::connect(local_b0,param_1[9],"2clicked()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_b0);
  QObject::connect(local_b8,param_1[8],"2clicked()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_b8);
  QPushButton::setDefault(SUB81(param_1[8],0));
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont((QFont *)local_78);
  return;
}

