
void FUN_100728ec0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QGridLayout *this;
  QLabel *pQVar3;
  QLineEdit *this_00;
  QString *pQVar4;
  QPushButton *this_01;
  QCheckBox *this_02;
  undefined8 *puVar5;
  QDialogButtonBox *this_03;
  undefined *puVar6;
  Connection local_a0 [8];
  QArrayData *local_98;
  QArrayData *local_90;
  uint local_88 [2];
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  uint local_68 [2];
  QArrayData *local_60;
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
      if (*(int *)local_38 != 0) goto LAB_100728f14;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100728f14:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e13c2b);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_100728f6b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100728f6b:
  local_30 = true;
  uStack_2f = 0x87000001;
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
      if (local_30) goto LAB_100728ff3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100728ff3:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[1] = pQVar3;
  QString::fromUtf8_helper((char *)&local_50,0x1e13c44);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_100729064;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100729064:
  QGridLayout::addWidget(*param_1,param_1[1],0,0,2,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[2] = pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_1007290f8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007290f8:
  QLabel::setAlignment(param_1[2],0x82);
  QGridLayout::addWidget(*param_1,param_1[2],0,1,1,1,0);
  this_00 = operator_new(0x30);
  QLineEdit::QLineEdit(this_00,(QWidget *)param_2);
  param_1[3] = this_00;
  QString::fromUtf8_helper((char *)&local_60,0x1dc1c16);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_10072919b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10072919b:
  local_68[0] = 0x70000;
  QSizePolicy::setControlType(local_68,1);
  local_68[0] = CONCAT22(local_68[0]._2_2_,1);
  uVar2 = QWidget::sizePolicy();
  local_68[0] = local_68[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[3]);
  QLineEdit::setMaxLength((int)param_1[3]);
  QGridLayout::addWidget(*param_1,param_1[3],0,2,1,3,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[4] = pQVar3;
  QString::fromUtf8_helper((char *)&local_70,0x1dc1bd0);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_10072927f;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10072927f:
  QLabel::setAlignment(param_1[4],0x82);
  QGridLayout::addWidget(*param_1,param_1[4],1,1,1,1,0);
  pQVar4 = operator_new(0x40);
  FUN_10013f180(pQVar4,param_2);
  param_1[5] = pQVar4;
  QString::fromUtf8_helper((char *)&local_78,0x1e13c4f);
  QObject::setObjectName(pQVar4);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_30 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_30) goto LAB_100729325;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100729325:
  uVar2 = QWidget::sizePolicy();
  local_68[0] = local_68[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QGridLayout::addWidget(*param_1,param_1[5],1,2,1,3,0);
  this_01 = operator_new(0x30);
  QPushButton::QPushButton(this_01,(QWidget *)param_2);
  param_1[6] = this_01;
  QString::fromUtf8_helper((char *)&local_80,0x1dd69e3);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_30 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_30) goto LAB_1007293e1;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1007293e1:
  local_88[0] = 0x40000;
  QSizePolicy::setControlType(local_88,1);
  local_88[0] = local_88[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QGridLayout::addWidget(*param_1,param_1[6],1,5,1,1,0);
  this_02 = operator_new(0x30);
  QCheckBox::QCheckBox(this_02,(QWidget *)param_2);
  param_1[7] = this_02;
  QString::fromUtf8_helper((char *)&local_90,0x1e13c59);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_30 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_30) goto LAB_1007294c2;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1007294c2:
  QGridLayout::addWidget(*param_1,param_1[7],2,2,1,3,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar6 = PTR_vtable_1021e17a0 + 0x10;
  *puVar5 = puVar6;
  *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000053;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[8] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,3,2,1,1,0);
  puVar5 = operator_new(0x28);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = puVar6;
  *(undefined8 *)((long)puVar5 + 0xc) = 0xf00000032;
  *(undefined4 *)((long)puVar5 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar5 + 0x14,1);
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar5 + 0x24) = 0xffffffff;
  param_1[9] = puVar5;
  QGridLayout::addItem(*param_1,puVar5,3,3,1,1,0);
  this_03 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_03,(QWidget *)param_2);
  param_1[10] = this_03;
  QString::fromUtf8_helper((char *)&local_98,0x1dc15a6);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_30 = *(int *)local_98 != 0;
      UNLOCK();
      if (local_30) goto LAB_100729672;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100729672:
  QDialogButtonBox::setStandardButtons(param_1[10],0x400400);
  QGridLayout::addWidget(*param_1,param_1[10],3,4,1,2,0);
  FUN_100729a00(param_1,param_2);
  QObject::connect(local_a0,param_1[10],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_a0);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

