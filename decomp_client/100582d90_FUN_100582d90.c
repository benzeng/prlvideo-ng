
void FUN_100582d90(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  uint uVar2;
  QVBoxLayout *this;
  QGridLayout *this_00;
  QLabel *pQVar3;
  QLineEdit *this_01;
  QComboBox *this_02;
  QDialogButtonBox *this_03;
  Connection local_98 [8];
  Connection local_90 [8];
  QArrayData *local_88;
  uint local_80 [2];
  QArrayData *local_78;
  QArrayData *local_70;
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
      if (*(int *)local_38 != 0) goto LAB_100582de4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100582de4:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e0275a);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        _local_30 = CONCAT71(uStack_2f,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_100582e3b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100582e3b:
  local_30 = true;
  uStack_2f = 0x79000001;
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
      if (local_30) goto LAB_100582f01;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100582f01:
  this_00 = operator_new(0x20);
  QGridLayout::QGridLayout(this_00);
  param_1[1] = this_00;
  QString::fromUtf8_helper((char *)&local_58,0x1dd67e5);
  QObject::setObjectName((QString *)this_00);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_30 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_30) goto LAB_100582f6d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100582f6d:
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[2] = pQVar3;
  QString::fromUtf8_helper((char *)&local_60,0x1dd681a);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_30 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_30) goto LAB_100582fde;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100582fde:
  QGridLayout::addWidget(param_1[1],param_1[2],0,0,1,1,0);
  this_01 = operator_new(0x30);
  QLineEdit::QLineEdit(this_01,(QWidget *)param_2);
  param_1[3] = this_01;
  QString::fromUtf8_helper((char *)&local_68,0x1dc1c16);
  QObject::setObjectName((QString *)this_01);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_30 = *(int *)local_68 != 0;
      UNLOCK();
      if (local_30) goto LAB_100583071;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100583071:
  QGridLayout::addWidget(param_1[1],param_1[3],0,1,1,1,0);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,param_2,0);
  param_1[4] = pQVar3;
  QString::fromUtf8_helper((char *)&local_70,0x1dd6e3b);
  QObject::setObjectName((QString *)pQVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_30 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_30) goto LAB_100583109;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100583109:
  QLabel::setAlignment(param_1[4],0x82);
  QGridLayout::addWidget(param_1[1],param_1[4],1,0,1,1,0);
  this_02 = operator_new(0x30);
  QComboBox::QComboBox(this_02,(QWidget *)param_2);
  param_1[5] = this_02;
  QString::fromUtf8_helper((char *)&local_78,0x1e0276f);
  QObject::setObjectName((QString *)this_02);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_30 = *(int *)local_78 != 0;
      UNLOCK();
      if (local_30) goto LAB_1005831ad;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005831ad:
  local_80[0] = 0x30000;
  QSizePolicy::setControlType(local_80,1);
  local_80[0] = local_80[0] & 0xffff0000;
  uVar2 = QWidget::sizePolicy();
  local_80[0] = local_80[0] & 0xdfffffff | uVar2 & 0x20000000;
  QWidget::setSizePolicy(param_1[5]);
  QGridLayout::addWidget(param_1[1],param_1[5],1,1,1,1,0);
  QBoxLayout::addLayout((QLayout *)*param_1,(int)param_1[1]);
  this_03 = operator_new(0x30);
  QDialogButtonBox::QDialogButtonBox(this_03,(QWidget *)param_2);
  param_1[6] = this_03;
  QString::fromUtf8_helper((char *)&local_88,0x1dd6e41);
  QObject::setObjectName((QString *)this_03);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_30 = *(int *)local_88 != 0;
      UNLOCK();
      if (local_30) goto LAB_100583294;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100583294:
  QDialogButtonBox::setOrientation(param_1[6],1);
  QDialogButtonBox::setStandardButtons(param_1[6],0x400400);
  QBoxLayout::addWidget(*param_1,param_1[6],0,0);
  FUN_100583570(param_1,param_2);
  QObject::connect(local_90,param_1[6],"2accepted()",param_2,"1accept()",0);
  QMetaObject::Connection::~Connection(local_90);
  QObject::connect(local_98,param_1[6],"2rejected()",param_2,"1reject()",0);
  QMetaObject::Connection::~Connection(local_98);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

