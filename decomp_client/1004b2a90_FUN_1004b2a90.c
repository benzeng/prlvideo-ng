
void FUN_1004b2a90(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QString *pQVar2;
  uint uVar3;
  QGridLayout *this;
  QWidget *pQVar4;
  QVBoxLayout *this_00;
  QHBoxLayout *this_01;
  QLabel *pQVar5;
  uint local_98 [2];
  QArrayData *local_90;
  uint local_88 [2];
  QArrayData *local_80;
  QFont local_78 [16];
  QArrayData *local_68;
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
      if (*(int *)local_38 != 0) goto LAB_1004b2ae4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004b2ae4:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1df8f63);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_1004b2b3b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1004b2b3b:
  local_30 = true;
  uStack_2f = 0x140000001;
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
      if (local_30) goto LAB_1004b2bc3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004b2bc3:
  QLayout::setContentsMargins((int)*param_1,-1,0,-1);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[1] = pQVar4;
  QString::fromUtf8_helper((char *)&local_50,0x1df8f7a);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_30 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004b2c4b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004b2c4b:
  this_00 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_00,(QWidget *)param_1[1]);
  param_1[2] = this_00;
  QBoxLayout::setSpacing((int)this_00);
  QLayout::setContentsMargins((int)param_1[2],0,0,0);
  pQVar2 = (QString *)param_1[2];
  QString::fromUtf8_helper((char *)&local_58,0x1dc1284);
  QObject::setObjectName(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004b2cdb;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004b2cdb:
  QGridLayout::addWidget(*param_1,param_1[1],0,0,1,1,0);
  this_01 = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this_01);
  param_1[3] = this_01;
  QString::fromUtf8_helper((char *)&local_60,0x1dc12b3);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004b2d6a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004b2d6a:
  pQVar5 = operator_new(0x30);
  QLabel::QLabel(pQVar5,param_2,0);
  param_1[4] = pQVar5;
  QString::fromUtf8_helper((char *)&local_68,0x1df8f89);
  QObject::setObjectName((QString *)pQVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004b2ddb;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004b2ddb:
  QFont::QFont(local_78);
  QFont::setPointSize((int)local_78);
  QFont::setWeight((int)local_78);
  QFont::setWeight((int)local_78);
  QWidget::setFont((QFont *)param_1[4]);
  QLabel::setAlignment(param_1[4],0x84);
  QLabel::setWordWrap(SUB81(param_1[4],0));
  QBoxLayout::addWidget(param_1[3],param_1[4],0,0);
  QGridLayout::addLayout(*param_1,param_1[3],2,0,1,2,0);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[5] = pQVar4;
  QString::fromUtf8_helper((char *)&local_80,0x1df0a6e);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_30 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004b2edf;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004b2edf:
  local_88[0] = 0x750000;
  QSizePolicy::setControlType(local_88,1);
  local_88[0] = CONCAT22(local_88[0]._2_2_,0x300);
  uVar3 = QWidget::sizePolicy();
  local_88[0] = local_88[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QGridLayout::addWidget(*param_1,param_1[5],3,0,1,2,0);
  pQVar4 = operator_new(0x30);
  QWidget::QWidget(pQVar4,param_2,0);
  param_1[6] = pQVar4;
  QString::fromUtf8_helper((char *)&local_90,0x1df07cc);
  QObject::setObjectName((QString *)pQVar4);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_30 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_30) goto LAB_1004b2fbf;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004b2fbf:
  local_98[0] = 0x750000;
  QSizePolicy::setControlType(local_98,1);
  local_98[0] = CONCAT22(local_98[0]._2_2_,0x200);
  uVar3 = QWidget::sizePolicy();
  local_98[0] = local_98[0] & 0xdfffffff | uVar3 & 0x20000000;
  QWidget::setSizePolicy(param_1[6]);
  QGridLayout::addWidget(*param_1,param_1[6],1,0,1,2,0);
  FUN_1004b32b0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  QFont::~QFont(local_78);
  return;
}

